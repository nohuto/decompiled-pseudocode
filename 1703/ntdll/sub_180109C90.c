/*
 * XREFs of sub_180109C90 @ 0x180109C90
 * Callers:
 *     sub_180108F48 @ 0x180108F48 (sub_180108F48.c)
 *     sub_180109410 @ 0x180109410 (sub_180109410.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_18010C390 @ 0x18010C390 (sub_18010C390.c)
 *     sub_18010D634 @ 0x18010D634 (sub_18010D634.c)
 */

__int64 __fastcall sub_180109C90(_QWORD *a1)
{
  unsigned int v2; // ecx
  unsigned __int64 v4; // r8
  bool v5; // zf
  void *ProcessHeap; // rcx

  if ( !a1 )
  {
    v2 = 87;
LABEL_3:
    RtlSetLastWin32Error(v2);
    return 0LL;
  }
  v4 = a1[4];
  if ( !v4 )
  {
    v2 = 13;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    v5 = (*(_BYTE *)a1 & 4) == 0;
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !v5 )
    {
      RtlFreeHeap((__int64)ProcessHeap, 0, v4);
      v4 = a1[5];
      if ( !v4 )
        goto LABEL_17;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, v4);
    goto LABEL_17;
  }
  if ( (*(_BYTE *)a1 & 4) != 0 )
  {
    v2 = 50;
    goto LABEL_3;
  }
  sub_18010D634(a1[4]);
  if ( a1[1] )
    sub_18010C390();
  if ( a1[2] )
    sub_18010C390();
LABEL_17:
  memset(a1, 0, 0x30uLL);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
  return 1LL;
}
