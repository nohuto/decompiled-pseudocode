/*
 * XREFs of ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x18001E020
 * Callers:
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x1800452B0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetConnectedSaDevice(CBaseStreamGroupProxy *this, struct ISaDeviceProxy **a2)
{
  __int64 v3; // rcx

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *a2 = (struct ISaDeviceProxy *)*((_QWORD *)this + 11);
  }
  return 0LL;
}
