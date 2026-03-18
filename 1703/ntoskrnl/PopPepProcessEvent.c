/*
 * XREFs of PopPepProcessEvent @ 0x14006A588
 * Callers:
 *     PopFxProcessWork @ 0x140069444 (PopFxProcessWork.c)
 *     PopPluginDevicePower @ 0x14006A308 (PopPluginDevicePower.c)
 *     PopPluginComponentActive @ 0x14006A38C (PopPluginComponentActive.c)
 *     PopPluginComponentIdleState @ 0x14014A39C (PopPluginComponentIdleState.c)
 *     PopPepCompleteComponentIdleState @ 0x14022E2E8 (PopPepCompleteComponentIdleState.c)
 *     PopPepUnregisterDevice @ 0x1406CAFC8 (PopPepUnregisterDevice.c)
 * Callees:
 *     PopPepTryPowerDownDevice @ 0x140069F14 (PopPepTryPowerDownDevice.c)
 *     PopPepCountReadyActivities @ 0x14006A6D8 (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x14006A720 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x14006A78C (PopPepRequestWork.c)
 *     PopPepComponentGetWork @ 0x14006A7B8 (PopPepComponentGetWork.c)
 *     PopPepPromoteActivities @ 0x14006A91C (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x14006AA68 (PopPepLockActivityLink.c)
 *     PopPepCompleteActivity @ 0x14006AC74 (PopPepCompleteActivity.c)
 *     PopPepTriggerActivity @ 0x14006ACE0 (PopPepTriggerActivity.c)
 */

char __fastcall PopPepProcessEvent(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  char v10; // r12
  unsigned int v11; // ebp
  unsigned int ready; // r15d
  char Work; // r14
  unsigned int v14; // eax
  bool v15; // si
  __int64 v16; // r9
  __int64 v17; // r8
  char v19; // [rsp+70h] [rbp+18h]

  v6 = (int)a3;
  v10 = PopPepLockActivityLink(a1, a2, a3);
  if ( (_DWORD)v6 == 6 || (v11 = *((_DWORD *)&unk_140288E3C + 34 * v6), (int)v11 < 2) )
    v11 = 2;
  ready = PopPepCountReadyActivities(a1, a2, v11);
  if ( (_DWORD)v6 != 6 )
    PopPepCompleteActivity(a1, a2, (unsigned int)v6);
  if ( a4 != 6 )
    PopPepTriggerActivity(a1, a2, a4, 0LL);
  PopPepPromoteActivities(a1, a2, v11);
  Work = PopPepComponentGetWork(a1, a2, a6);
  v14 = PopPepCountReadyActivities(a1, a2, v11);
  v15 = 0;
  if ( (*(_BYTE *)(a1 + 24) & 1) == 0 && !v14 && !Work && !*(_DWORD *)(a1 + 140) )
    v15 = *(_BYTE *)(a1 + 136) != 0;
  PopPepRequestWork(ready, v14);
  LOBYTE(v16) = v19;
  LOBYTE(v17) = v10;
  PopPepReleaseActivityLink(a1, a2, v17, v16);
  if ( v15 )
    return PopPepTryPowerDownDevice(a1, a6);
  return Work;
}
