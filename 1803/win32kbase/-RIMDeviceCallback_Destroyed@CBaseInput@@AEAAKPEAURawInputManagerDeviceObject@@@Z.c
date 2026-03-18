/*
 * XREFs of ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0124070
 * Callers:
 *     <none>
 * Callees:
 *     HMMarkObjectDestroy @ 0x1C005F400 (HMMarkObjectDestroy.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     HMRemoveHandleForObject @ 0x1C00B1190 (HMRemoveHandleForObject.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct DEVICEINFO *v2; // rax
  struct DEVICEINFO **v5; // rdx

  v2 = CBaseInput::_spDevList;
  v5 = &CBaseInput::_spDevList;
  while ( 1 )
  {
    if ( !v2 )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
        2u,
        2u,
        0x13u,
        (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids,
        a2);
      return 0LL;
    }
    if ( v2 == (struct RawInputManagerDeviceObject *)((char *)a2 + 80) )
      break;
    v5 = (struct DEVICEINFO **)((char *)v2 + 56);
    v2 = (struct DEVICEINFO *)*((_QWORD *)v2 + 7);
  }
  *v5 = (struct DEVICEINFO *)*((_QWORD *)a2 + 17);
  *((_QWORD *)a2 + 17) = 0LL;
  ObfDereferenceObject(a2);
  if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, char *))(*(_QWORD *)this + 96LL))(
         this,
         a2,
         (char *)a2 + 80)
    && (unsigned int)HMMarkObjectDestroy((_DWORD *)a2 + 20) )
  {
    HMRemoveHandleForObject((int *)a2 + 20);
  }
  return 0LL;
}
