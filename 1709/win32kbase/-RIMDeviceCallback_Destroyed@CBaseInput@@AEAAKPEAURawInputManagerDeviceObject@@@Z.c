/*
 * XREFs of ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C001A130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     HMMarkObjectDestroy @ 0x1C00727D0 (HMMarkObjectDestroy.c)
 *     HMRemoveHandleForObject @ 0x1C0091F70 (HMRemoveHandleForObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct DEVICEINFO **v2; // r8
  struct DEVICEINFO *v4; // rbx
  struct DEVICEINFO *v6; // rax

  v2 = &CBaseInput::_spDevList;
  v4 = (struct RawInputManagerDeviceObject *)((char *)a2 + 64);
  if ( CBaseInput::_spDevList )
  {
    while ( 1 )
    {
      v6 = *v2;
      if ( *v2 == v4 )
        break;
      v2 = (struct DEVICEINFO **)((char *)v6 + 56);
      if ( !*((_QWORD *)v6 + 7) )
        goto LABEL_8;
    }
    *v2 = (struct DEVICEINFO *)*((_QWORD *)a2 + 15);
    *((_QWORD *)a2 + 15) = 0LL;
    ObfDereferenceObject(a2);
    if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, struct DEVICEINFO *))(*(_QWORD *)this + 80LL))(
           this,
           a2,
           v4)
      && (unsigned int)HMMarkObjectDestroy(v4) )
    {
      HMRemoveHandleForObject(v4);
    }
  }
  else
  {
LABEL_8:
    WPP_RECORDER_SF_q(gBaseLog, 2u, 2u, 0x13u, (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids, a2);
  }
  return 0LL;
}
