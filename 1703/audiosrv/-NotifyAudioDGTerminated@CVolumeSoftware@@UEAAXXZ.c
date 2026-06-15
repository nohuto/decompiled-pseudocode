/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ @ 0x180085E20
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18007B17C (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CVolumeSoftware::NotifyAudioDGTerminated(CVolumeSoftware *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Au,
      (__int64)&WPP_14242717b50d32756585d53851505e56_Traceguids,
      this);
  }
  v3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 248);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)this + 240));
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
