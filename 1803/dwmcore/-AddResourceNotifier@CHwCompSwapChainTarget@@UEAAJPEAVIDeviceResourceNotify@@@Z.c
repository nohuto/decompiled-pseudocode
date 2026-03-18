/*
 * XREFs of ?AddResourceNotifier@CHwCompSwapChainTarget@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x1801E4500
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::AddResourceNotifier(
        CHwCompSwapChainTarget *this,
        struct IDeviceResourceNotify *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx

  v2 = *((_QWORD *)this - 2);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, struct IDeviceResourceNotify *))(*(_QWORD *)(v2 + 24) + 24LL))(v2 + 24, a2);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xA8u);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0xACu);
  }
  return v4;
}
