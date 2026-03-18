/*
 * XREFs of PopPepComponentSetResidency @ 0x140167A04
 * Callers:
 *     PoFxSetComponentResidency @ 0x140167970 (PoFxSetComponentResidency.c)
 * Callees:
 *     PopPepCountReadyActivities @ 0x14006A6D8 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x14006A78C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x14006A91C (PopPepPromoteActivities.c)
 *     PopPepLockActivityLink @ 0x14006AA68 (PopPepLockActivityLink.c)
 *     PopPepUpdateIdleState @ 0x14006AEE4 (PopPepUpdateIdleState.c)
 *     PopPepComponentGetResidencyIdleState @ 0x14006AFE8 (PopPepComponentGetResidencyIdleState.c)
 */

__int64 __fastcall PopPepComponentSetResidency(unsigned int *a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rdi
  int ResidencyIdleState; // r14d
  char v7; // al
  char v8; // bp
  unsigned int ready; // ebx
  unsigned int v11; // eax
  KIRQL v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v5 = (__int64)&a1[50 * a2 + 44];
  if ( a3 != -1LL )
    v3 = a3;
  ResidencyIdleState = PopPepComponentGetResidencyIdleState(v5, v3);
  v7 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)v5, 6u, 1u, &v12);
  *(_QWORD *)(v5 + 128) = v3;
  v8 = v7;
  *(_QWORD *)(v5 + 120) = v3;
  if ( *(_DWORD *)(v5 + 160) != ResidencyIdleState )
  {
    *(_DWORD *)(v5 + 160) = ResidencyIdleState;
    ready = PopPepCountReadyActivities(a1, v5, 2);
    PopPepUpdateIdleState((__int64)a1, v5, 1);
    PopPepPromoteActivities((__int64)a1, v5, 2);
    v11 = PopPepCountReadyActivities(a1, v5, 2);
    PopPepRequestWork(ready, v11);
  }
  return PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v5, v8, v12);
}
