/*
 * XREFs of ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0035C30
 * Callers:
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0089BF0 (-TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C00358DC (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C0035B50 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     ?SetAdapterInfo@CTokenManager@@IEAAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0035E50 (-SetAdapterInfo@CTokenManager@@IEAAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C0035F20 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     GreSfmCleanupPresentHistory @ 0x1C007B0EC (GreSfmCleanupPresentHistory.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall CTokenManager::ProcessTokens(
        CTokenManager *this,
        void *a2,
        void *a3,
        struct CSM_TOKEN_ADAPTER_INFO *a4,
        void **a5,
        unsigned int a6)
{
  CTokenManager *v6; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  HANDLE *v12; // rsi
  __int64 CurrentProcess; // rbx
  ULONG v14; // ebp
  __int64 v15; // rdx
  void *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  NTSTATUS v19; // ebx
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-78h] BYREF
  HANDLE Object[7]; // [rsp+38h] [rbp-70h] BYREF

  v6 = g_pTokenManager;
  memset(Object, 0, sizeof(Object));
  v12 = Object;
  if ( a6 > 5 )
  {
    v12 = (HANDLE *)Win32AllocPoolZInit(8LL * (a6 + 2), 1650675028LL);
    if ( !v12 )
      return 3221225495LL;
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v6 + 1, (signed __int64)KeGetCurrentThread(), 0LL) )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( !*(_QWORD *)v6 )
    {
      CTokenManager::DeleteAllTokensInternal(v6);
      GreSfmCleanupPresentHistory();
      *(_QWORD *)v6 = CurrentProcess;
    }
    CTokenManager::SetAdapterInfo(v6, a4, a6);
    *v12 = a2;
    v14 = 2;
    v15 = 0LL;
    for ( v12[1] = a3; (unsigned int)v15 < *((_DWORD *)v6 + 22); v12[v17] = v16 )
    {
      v16 = a5[v15];
      v15 = (unsigned int)(v15 + 1);
      v17 = v14++;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v19 = ZwWaitForMultipleObjects(v14, v12, WaitAny, 1u, 0LL);
          if ( v19 < 0 )
            goto LABEL_20;
          if ( v19 && v19 != 257 && v19 != 192 )
            break;
          v19 = 0;
LABEL_20:
          if ( v19 == -1073741801 || v19 == -1073741789 )
          {
            Timeout.QuadPart = -160000LL;
            v19 = ZwWaitForSingleObject(a2, 0, &Timeout);
            if ( v19 == 258 )
              continue;
          }
          CTokenManager::SetAdapterInfo(v6, 0LL, 0);
          *((_QWORD *)v6 + 1) = 0LL;
          goto LABEL_23;
        }
        if ( v19 != 1 )
          break;
        KeEnterCriticalRegion();
        CTokenManager::ProcessGdiSysmemTokens((CLegacyTokenBuffer **)v6);
LABEL_15:
        KeLeaveCriticalRegion();
      }
      v18 = *((_DWORD *)v6 + 22);
      if ( v18 && v19 <= (unsigned int)(v18 + 1) )
      {
        KeEnterCriticalRegion();
        CTokenManager::ProcessDxgkAdapterTokens(
          v6,
          *(_DWORD *)(32LL * (unsigned int)(v19 - 2) + *((_QWORD *)v6 + 10) + 8));
        goto LABEL_15;
      }
    }
  }
  v19 = -2147483631;
LABEL_23:
  if ( v12 != Object )
    Win32FreePool(v12, v10, v11);
  return (unsigned int)v19;
}
