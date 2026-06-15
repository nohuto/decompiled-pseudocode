/*
 * XREFs of ?PropertyStoreGetCount@CAudioSession@@UEAAJPEAK@Z @ 0x18008EAD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreGetCount(CAudioSession *this, unsigned int *a2)
{
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xA3u, (__int64)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 78) + 24LL))(
           *((_QWORD *)this + 78),
           a2);
}
