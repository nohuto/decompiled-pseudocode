/*
 * XREFs of ?OnDeviceRemoval@MobileTouchProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18006AAC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileTouchProcessor::OnDeviceRemoval(MobileTouchProcessor *this, struct DeviceInfo *a2)
{
  __int64 v2; // rdx

  if ( a2 == *((struct DeviceInfo **)this + 22) )
  {
    *((_QWORD *)this + 22) = 0LL;
  }
  else if ( a2 == *((struct DeviceInfo **)this + 23) )
  {
    *((_QWORD *)this + 23) = 0LL;
    v2 = *((_QWORD *)this + 21);
    if ( v2 )
    {
      *((_QWORD *)this + 21) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  return 0LL;
}
