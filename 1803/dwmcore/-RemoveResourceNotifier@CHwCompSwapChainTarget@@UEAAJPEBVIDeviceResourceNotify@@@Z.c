/*
 * XREFs of ?RemoveResourceNotifier@CHwCompSwapChainTarget@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1801E4AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::RemoveResourceNotifier(
        CHwCompSwapChainTarget *this,
        const struct IDeviceResourceNotify *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax

  v2 = *((_QWORD *)this - 2);
  v3 = 0;
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, const struct IDeviceResourceNotify *))(*(_QWORD *)(v2 + 24) + 32LL))(
           v2 + 24,
           a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xBBu);
  }
  return v3;
}
