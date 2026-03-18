/*
 * XREFs of ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004F7D0
 * Callers:
 *     <none>
 * Callees:
 *     HMMarkObjectDestroy @ 0x1C007A370 (HMMarkObjectDestroy.c)
 *     HMCreateHandleForObject @ 0x1C008B430 (HMCreateHandleForObject.c)
 *     HMRemoveHandleForObject @ 0x1C008B570 (HMRemoveHandleForObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Created(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct RawInputManagerDeviceObject *v3; // rdi
  char *v4; // rcx
  struct DEVICEINFO *v5; // rax
  struct DEVICEINFO *v6; // rbx

  v3 = a2;
  v4 = (char *)a2 + 64;
  LOBYTE(a2) = 19;
  v5 = (struct DEVICEINFO *)HMCreateHandleForObject(v4, a2);
  v6 = v5;
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, _QWORD))(*(_QWORD *)this + 56LL))(
           this,
           v3,
           *(_QWORD *)v5) )
    {
      *((_QWORD *)v6 + 7) = CBaseInput::_spDevList;
      CBaseInput::_spDevList = v6;
      ObReferenceObjectByPointer(v3, 3u, ExRawInputManagerObjectType, 0);
    }
    else
    {
      HMMarkObjectDestroy(v6);
      HMRemoveHandleForObject(v6);
    }
  }
  return 0LL;
}
