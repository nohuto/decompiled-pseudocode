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

__int64 __fastcall sub_180109C90(PVOID BaseAddress)
{
  LONG v2; // ecx
  void *v4; // r8
  bool v5; // zf
  PVOID ProcessHeap; // rcx

  if ( !BaseAddress )
  {
    v2 = 87;
LABEL_3:
    RtlSetLastWin32Error(v2);
    return 0LL;
  }
  v4 = (void *)*((_QWORD *)BaseAddress + 4);
  if ( !v4 )
  {
    v2 = 13;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)BaseAddress & 1) == 0 )
  {
    v5 = (*(_BYTE *)BaseAddress & 4) == 0;
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !v5 )
    {
      RtlFreeHeap(ProcessHeap, 0, v4);
      v4 = (void *)*((_QWORD *)BaseAddress + 5);
      if ( !v4 )
        goto LABEL_17;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    RtlFreeHeap(ProcessHeap, 0, v4);
    goto LABEL_17;
  }
  if ( (*(_BYTE *)BaseAddress & 4) != 0 )
  {
    v2 = 50;
    goto LABEL_3;
  }
  sub_18010D634(*((PVOID *)BaseAddress + 4));
  if ( *((_QWORD *)BaseAddress + 1) )
    sub_18010C390();
  if ( *((_QWORD *)BaseAddress + 2) )
    sub_18010C390();
LABEL_17:
  memset(BaseAddress, 0, 0x30uLL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return 1LL;
}
