/*
 * XREFs of PopPepComponentSetWakeHint @ 0x14022E3C4
 * Callers:
 *     PoFxSetComponentWake @ 0x14022A760 (PoFxSetComponentWake.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x14006A6D8 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x14006A78C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x14006A91C (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x14006AA68 (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x14006AEE4 (PopPepUpdateIdleState.c)
 */

__int64 __fastcall PopPepComponentSetWakeHint(unsigned int *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdx
  __int64 v6; // rdi
  int v7; // ebx
  char v8; // al
  char v9; // r14
  unsigned int ready; // ebx
  unsigned int v11; // eax
  KIRQL v13; // [rsp+60h] [rbp+18h] BYREF

  v3 = 50LL * a2;
  v6 = (__int64)&a1[v3 + 44];
  if ( a3 )
    v7 = *(_DWORD *)(v6 + 148);
  else
    v7 = *(_DWORD *)(v6 + 188) - 1;
  v8 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)&a1[v3 + 44], 6u, 1u, &v13);
  *(_BYTE *)(v6 + 144) = a3;
  v9 = v8;
  if ( *(_DWORD *)(v6 + 164) != v7 )
  {
    *(_DWORD *)(v6 + 164) = v7;
    ready = PopPepCountReadyActivities(a1, v6, 2);
    PopPepUpdateIdleState((__int64)a1, v6, 1);
    PopPepPromoteActivities((__int64)a1, v6, 2);
    v11 = PopPepCountReadyActivities(a1, v6, 2);
    PopPepRequestWork(ready, v11);
  }
  return PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v6, v9, v13);
}
