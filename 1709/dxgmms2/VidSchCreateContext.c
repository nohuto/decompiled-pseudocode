/*
 * XREFs of VidSchCreateContext @ 0x1C0072270
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCreateContextInternal @ 0x1C00106B4 (VidSchiCreateContextInternal.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C00110F0 (VidSchiDriverNodeEngineToSchedulerNode.c)
 */

char *__fastcall VidSchCreateContext(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  int v4; // eax
  int *v5; // r10
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v9; // rax

  if ( a1 && a2 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 600LL);
    v3 = a2[2];
    *a2 = ((*(_WORD *)a2 & 0x440) != 0 ? 4 : 0) | *a2 & 0xFFFFFFE2 | 8 | ((*(_WORD *)a2 & 0x440) == 0 ? 0x10 : 0);
    v4 = VidSchiDriverNodeEngineToSchedulerNode(*(_QWORD *)(v2 + 32), a2[1], v3);
    v5[1] = v4;
    return VidSchiCreateContextInternal(v6, v5, v7);
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v9);
    return 0LL;
  }
}
