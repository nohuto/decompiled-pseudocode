/*
 * XREFs of HvpFindNextDirtyRun @ 0x1400D4BEC
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x140592104 (HvpFindNextDirtyBlock.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x1400D7870 (RtlFindNextForwardRunClearCapped.c)
 */

char __fastcall HvpFindNextDirtyRun(unsigned int *a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  int NextForwardRunClearCapped; // eax
  unsigned int v11; // edi
  int v12; // ecx
  unsigned int v13; // eax
  char result; // al
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a1;
  v6 = *a2;
  if ( (unsigned int)v6 < *a1 )
  {
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(a1, v6, 0xFFFFFFFFLL, &v15);
    v11 = *a2;
    v12 = NextForwardRunClearCapped;
    if ( !NextForwardRunClearCapped )
      goto LABEL_7;
    v13 = v15;
    if ( v15 != v11 )
    {
LABEL_4:
      v4 = v13 + v12;
LABEL_5:
      *a4 = v13;
      result = 1;
      *a2 = v4;
      *a3 = v11;
      return result;
    }
    v11 += v12;
    if ( v11 < v4 )
    {
      v12 = RtlFindNextForwardRunClearCapped(a1, v11, 0xFFFFFFFFLL, &v15);
      if ( v12 )
      {
        v13 = v15;
        goto LABEL_4;
      }
LABEL_7:
      v13 = v4;
      goto LABEL_5;
    }
  }
  return 0;
}
