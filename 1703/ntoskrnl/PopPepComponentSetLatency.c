/*
 * XREFs of PopPepComponentSetLatency @ 0x1401650B4
 * Callers:
 *     PoFxSetComponentLatency @ 0x140165020 (PoFxSetComponentLatency.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x14006A6D8 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x14006A78C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x14006A91C (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x14006AA68 (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x14006AEE4 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetLatencyIdleState @ 0x14016514C (PopPepComponentGetLatencyIdleState.c)
 */

__int64 __fastcall PopPepComponentSetLatency(unsigned int *a1, int a2, __int64 a3)
{
  __int64 v5; // rdi
  int LatencyIdleState; // r14d
  char v7; // al
  char v8; // bp
  unsigned int ready; // ebx
  unsigned int v11; // eax
  KIRQL v12; // [rsp+58h] [rbp+10h] BYREF

  v5 = (__int64)&a1[50 * a2 + 44];
  LatencyIdleState = PopPepComponentGetLatencyIdleState(v5, a3);
  v7 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)v5, 6u, 1u, &v12);
  *(_QWORD *)(v5 + 112) = a3;
  v8 = v7;
  if ( *(_DWORD *)(v5 + 156) != LatencyIdleState )
  {
    *(_DWORD *)(v5 + 156) = LatencyIdleState;
    ready = PopPepCountReadyActivities(a1, v5, 2);
    PopPepUpdateIdleState((__int64)a1, v5, 1);
    PopPepPromoteActivities((__int64)a1, v5, 2);
    v11 = PopPepCountReadyActivities(a1, v5, 2);
    PopPepRequestWork(ready, v11);
  }
  return PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v5, v8, v12);
}
