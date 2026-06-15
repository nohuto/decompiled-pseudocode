/*
 * XREFs of ?GetPhoneTopology@AudioDeviceMgr@@UEAAJPEAPEAUIPhoneTopology@@@Z @ 0x180055F40
 * Callers:
 *     ?InitPhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x180055A50 (-InitPhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioDeviceMgr::GetPhoneTopology(AudioDeviceMgr *this, struct IPhoneTopology **a2)
{
  unsigned int v4; // ebx
  void (__fastcall ***v5)(_QWORD, GUID *, struct IPhoneTopology **); // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v4 = 0;
  if ( a2
    && (*a2 = 0LL, (v5 = (void (__fastcall ***)(_QWORD, GUID *, struct IPhoneTopology **))*((_QWORD *)this + 10)) != 0LL) )
  {
    (**v5)(v5, &GUID_242cf56d_42d8_4b1f_ae71_9dc02d4a7d37, a2);
  }
  else
  {
    v4 = -2147467261;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  return v4;
}
