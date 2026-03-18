/*
 * XREFs of ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004F710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     HMMarkObjectDestroy @ 0x1C007A370 (HMMarkObjectDestroy.c)
 *     HMRemoveHandleForObject @ 0x1C008B570 (HMRemoveHandleForObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct DEVICEINFO **v2; // r8
  struct RawInputManagerDeviceObject *v3; // rdi
  struct DEVICEINFO *v4; // rbx
  struct DEVICEINFO *v6; // rax

  v2 = &CBaseInput::_spDevList;
  v3 = a2;
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
           v3,
           v4)
      && (unsigned int)HMMarkObjectDestroy(v4) )
    {
      HMRemoveHandleForObject(v4);
    }
  }
  else
  {
LABEL_8:
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_q(gBaseLog, (_DWORD)a2, 2, 14, (__int64)&WPP_78a9c3fec3703cfbc35f8dcb850995ce_Traceguids, (char)v3);
  }
  return 0LL;
}
