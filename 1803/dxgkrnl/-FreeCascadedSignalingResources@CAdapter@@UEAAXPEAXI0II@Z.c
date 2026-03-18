/*
 * XREFs of ?FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z @ 0x1C004B620
 * Callers:
 *     <none>
 * Callees:
 *     DxgkReferenceCurrentSessionDwmProcess @ 0x1C0001B70 (DxgkReferenceCurrentSessionDwmProcess.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     DxgkDestroyContextInternal @ 0x1C009E7F8 (DxgkDestroyContextInternal.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C00D6F60 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 */

void __fastcall CAdapter::FreeCascadedSignalingResources(
        CAdapter *this,
        void *a2,
        D3DKMT_HANDLE a3,
        void *a4,
        D3DKMT_HANDLE a5,
        D3DKMT_HANDLE a6)
{
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v8; // [rsp+20h] [rbp-68h] BYREF
  PRKPROCESS PROCESS; // [rsp+28h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-58h] BYREF

  if ( a2 )
    ObfDereferenceObject(a2);
  if ( a4 )
    ObfDereferenceObject(a4);
  if ( (a6 || a3 || a5) && (int)DxgkReferenceCurrentSessionDwmProcess(&PROCESS) >= 0 )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    if ( a3 )
    {
      v8.hSyncObject = a3;
      DxgkCddDestroySynchronizationObject(&v8);
    }
    if ( a5 )
    {
      v8.hSyncObject = a5;
      DxgkCddDestroySynchronizationObject(&v8);
    }
    if ( a6 )
    {
      v8.hSyncObject = a6;
      DxgkDestroyContextInternal(&v8);
    }
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(PROCESS);
  }
}
