/*
 * XREFs of ?GetRoutingPolicy@PhoneCallAudio@@UEAAJPEAW4_TelephonyRoutingPolicy@@@Z @ 0x1800C8390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::GetRoutingPolicy(PhoneCallAudio *this, enum _TelephonyRoutingPolicy *a2)
{
  if ( a2 )
    *(_DWORD *)a2 = 0;
  return a2 == 0LL ? 0x80004003 : 0;
}
