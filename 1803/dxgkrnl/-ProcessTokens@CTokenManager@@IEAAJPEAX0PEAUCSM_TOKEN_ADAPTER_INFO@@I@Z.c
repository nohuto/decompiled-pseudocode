/*
 * XREFs of ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0010230
 * Callers:
 *     ?TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0010C70 (-TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x1C000FF30 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C00104E8 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C00178D8 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkGetWin32kImportTable @ 0x1C0030C04 (DxgkGetWin32kImportTable.c)
 */

__int64 __fastcall CTokenManager::ProcessTokens(
        CTokenManager *this,
        HANDLE Handle,
        void *a3,
        struct CSM_TOKEN_ADAPTER_INFO *a4,
        unsigned int a5)
{
  HANDLE v5; // r14
  HANDLE *v9; // rsi
  ULONG v10; // r12d
  __int64 CurrentProcess; // rbx
  __int64 Win32kImportTable; // rax
  NTSTATUS inited; // ebx
  SIZE_T v14; // rax
  int v16; // eax
  unsigned int v17; // r14d
  __int64 v18; // rbx
  int v19; // r15d
  CTokenManager *v20; // rdx
  char *v21; // rcx
  _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-80h] BYREF
  HANDLE Object[7]; // [rsp+40h] [rbp-78h] BYREF

  v5 = Handle;
  memset(Object, 0, sizeof(Object));
  if ( a5 > 5 )
  {
    v14 = 8LL * (a5 + 2);
    if ( !is_mul_ok(a5 + 2, 8uLL) )
      v14 = -1LL;
    v9 = (HANDLE *)operator new(v14, 0x62634D54u, 1, PagedPool);
    if ( !v9 )
      return 3221225495LL;
  }
  else
  {
    v9 = Object;
  }
  *v9 = v5;
  v10 = 2;
  v9[1] = a3;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 3, (signed __int64)KeGetCurrentThread(), 0LL) )
  {
    inited = -2147483631;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( !*((_QWORD *)this + 2) )
    {
      (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 72LL))(this);
      Win32kImportTable = DxgkGetWin32kImportTable();
      (*(void (**)(void))(Win32kImportTable + 104))();
      *((_QWORD *)this + 2) = CurrentProcess;
    }
    inited = CTokenManager::InitAdapterCollection(this, a4, v9 + 2, a5);
    if ( inited >= 0 )
    {
      do
      {
        v10 += a5;
        inited = ZwWaitForMultipleObjects(v10, v9, WaitAny, 1u, 0LL);
        if ( inited >= 0 )
        {
          while ( inited && inited != 192 && inited != 257 )
          {
            if ( inited == 1 )
            {
              CTokenManager::ProcessGdiSysmemTokens(this);
            }
            else
            {
              v16 = *((_DWORD *)this + 20);
              if ( v16 && inited <= (unsigned int)(v16 + 1) )
              {
                v17 = inited - 2;
                v18 = 0LL;
                v19 = -1073741275;
                ExAcquirePushLockSharedEx((char *)this + 144, 0LL);
                *((_BYTE *)this + 152) = 0;
                if ( v17 < *((_DWORD *)this + 27) )
                {
                  v20 = (CTokenManager *)*((_QWORD *)this + 16);
                  while ( v20 != (CTokenManager *)((char *)this + 128) )
                  {
                    v18 = ((unsigned __int64)v20 - 8) & -(__int64)(v20 != 0LL);
                    if ( !v17 )
                    {
                      v19 = 0;
                      break;
                    }
                    v20 = *(CTokenManager **)v20;
                    --v17;
                  }
                }
                v21 = (char *)this + 144;
                if ( *((_BYTE *)this + 152) )
                  ExReleasePushLockExclusiveEx(v21, 0LL);
                else
                  ExReleasePushLockSharedEx(v21, 0LL);
                if ( v19 >= 0 )
                  CTokenManager::ProcessDxgkAdapterTokens(this, *(_DWORD *)(v18 + 32));
              }
            }
            inited = ZwWaitForMultipleObjects(v10, v9, WaitAny, 1u, 0LL);
            if ( inited < 0 )
              goto LABEL_34;
          }
          inited = 0;
LABEL_34:
          v5 = Handle;
        }
        if ( inited != -1073741801 && inited != -1073741789 )
          break;
        Timeout.QuadPart = -160000LL;
        inited = ZwWaitForSingleObject(v5, 0, &Timeout);
      }
      while ( inited == 258 );
    }
    *((_QWORD *)this + 3) = 0LL;
  }
  if ( v9 != Object )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)inited;
}
