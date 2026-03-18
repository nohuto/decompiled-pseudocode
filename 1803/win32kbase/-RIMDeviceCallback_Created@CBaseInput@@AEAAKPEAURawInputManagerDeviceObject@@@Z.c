/*
 * XREFs of ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0123FD0
 * Callers:
 *     <none>
 * Callees:
 *     HMMarkObjectDestroy @ 0x1C005F400 (HMMarkObjectDestroy.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     HMCreateHandleForObject @ 0x1C00B0FE0 (HMCreateHandleForObject.c)
 *     HMRemoveHandleForObject @ 0x1C00B1190 (HMRemoveHandleForObject.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Created(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct DEVICEINFO *v4; // rax
  struct DEVICEINFO *v5; // rbx

  v4 = (struct DEVICEINFO *)HMCreateHandleForObject((__int64)a2 + 80, 19);
  v5 = v4;
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, _QWORD))(*(_QWORD *)this + 72LL))(
           this,
           a2,
           *(_QWORD *)v4) )
    {
      *((_QWORD *)v5 + 7) = CBaseInput::_spDevList;
      CBaseInput::_spDevList = v5;
      ObReferenceObjectByPointer(a2, 3u, ExRawInputManagerObjectType, 0);
    }
    else
    {
      HMMarkObjectDestroy(v5);
      HMRemoveHandleForObject((int *)v5);
    }
  }
  return 0LL;
}
