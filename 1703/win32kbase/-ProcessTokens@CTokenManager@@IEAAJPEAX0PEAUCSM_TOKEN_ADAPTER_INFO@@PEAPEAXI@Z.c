/*
 * XREFs of ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0029A68
 * Callers:
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C007D7A8 (-TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C0029724 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C0029990 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     ?SetAdapterInfo@CTokenManager@@IEAAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0029C60 (-SetAdapterInfo@CTokenManager@@IEAAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
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
  HANDLE *v10; // rsi
  ULONG v11; // ebp
  __int64 i; // rdx
  void *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  NTSTATUS v16; // ebx
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-68h] BYREF
  HANDLE Object[7]; // [rsp+38h] [rbp-60h] BYREF

  v6 = g_pTokenManager;
  memset(Object, 0, sizeof(Object));
  v10 = Object;
  if ( a6 > 5 )
  {
    v10 = (HANDLE *)Win32AllocPoolZInit(8LL * (a6 + 2), 1650675028LL);
    if ( !v10 )
      return 3221225495LL;
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v6, (signed __int64)KeGetCurrentThread(), 0LL) )
  {
    CTokenManager::SetAdapterInfo(v6, a4, a6);
    *v10 = a2;
    v11 = 2;
    v10[1] = a3;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v6 + 20); v10[v14] = v13 )
    {
      v13 = a5[i];
      i = (unsigned int)(i + 1);
      v14 = v11++;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v16 = ZwWaitForMultipleObjects(v11, v10, WaitAny, 1u, 0LL);
          if ( v16 < 0 )
            goto LABEL_18;
          if ( v16 && v16 != 257 && v16 != 192 )
            break;
          v16 = 0;
LABEL_18:
          if ( v16 == -1073741801 || v16 == -1073741789 )
          {
            Timeout.QuadPart = -160000LL;
            v16 = ZwWaitForSingleObject(a2, 0, &Timeout);
            if ( v16 == 258 )
              continue;
          }
          CTokenManager::SetAdapterInfo(v6, 0LL, 0);
          *(_QWORD *)v6 = 0LL;
          goto LABEL_21;
        }
        if ( v16 != 1 )
          break;
        KeEnterCriticalRegion();
        CTokenManager::ProcessGdiSysmemTokens((CLegacyTokenBuffer **)v6);
LABEL_13:
        KeLeaveCriticalRegion();
      }
      v15 = *((_DWORD *)v6 + 20);
      if ( v15 && v16 <= (unsigned int)(v15 + 1) )
      {
        KeEnterCriticalRegion();
        CTokenManager::ProcessDxgkAdapterTokens(
          v6,
          *(_DWORD *)(32LL * (unsigned int)(v16 - 2) + *((_QWORD *)v6 + 9) + 8));
        goto LABEL_13;
      }
    }
  }
  v16 = -2147483631;
LABEL_21:
  if ( v10 != Object )
    Win32FreePool(v10);
  return (unsigned int)v16;
}
