/*
 * XREFs of ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0001AB8
 * Callers:
 *     ?DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z @ 0x1C0001710 (-DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0001724 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004BCB8 (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     DxgkReferenceCurrentSessionDwmProcess @ 0x1C0001B70 (DxgkReferenceCurrentSessionDwmProcess.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkCompositionObject::OpenDwmHandle(PVOID Object, PHANDLE Handle)
{
  NTSTATUS v4; // ebx
  PRKPROCESS PROCESS; // [rsp+40h] [rbp-48h] BYREF
  _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  v4 = DxgkReferenceCurrentSessionDwmProcess(&PROCESS);
  if ( v4 >= 0 )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v4 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(PROCESS);
  }
  return (unsigned int)v4;
}
