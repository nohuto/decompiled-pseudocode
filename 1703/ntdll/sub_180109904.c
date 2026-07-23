/*
 * XREFs of sub_180109904 @ 0x180109904
 * Callers:
 *     sub_18005D9D8 @ 0x18005D9D8 (sub_18005D9D8.c)
 *     sub_180108F48 @ 0x180108F48 (sub_180108F48.c)
 *     sub_180109064 @ 0x180109064 (sub_180109064.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_18010C390 @ 0x18010C390 (sub_18010C390.c)
 *     sub_18010D634 @ 0x18010D634 (sub_18010D634.c)
 */

__int64 __fastcall sub_180109904(PVOID BaseAddress)
{
  LONG v2; // ecx
  void *v4; // r8
  bool v5; // zf
  PVOID ProcessHeap; // rcx
  void *v7; // r8
  void *v8; // r8
  void *v9; // r8

  if ( !BaseAddress )
  {
    v2 = 87;
LABEL_3:
    RtlSetLastWin32Error(v2);
    return 0LL;
  }
  v4 = (void *)*((_QWORD *)BaseAddress + 3);
  if ( !v4 )
  {
    v2 = 13;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)BaseAddress & 1) != 0 )
  {
    sub_18010D634(*((PVOID *)BaseAddress + 3));
    if ( *((_QWORD *)BaseAddress + 1) )
      sub_18010C390();
    if ( *((_QWORD *)BaseAddress + 2) != -1LL )
      sub_18010C390();
  }
  else
  {
    v5 = (*(_BYTE *)BaseAddress & 4) == 0;
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !v5 )
    {
      RtlFreeHeap(ProcessHeap, 0, v4);
      v7 = (void *)*((_QWORD *)BaseAddress + 4);
      if ( v7 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      v8 = (void *)*((_QWORD *)BaseAddress + 5);
      if ( v8 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      v9 = (void *)*((_QWORD *)BaseAddress + 6);
      if ( v9 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      v4 = (void *)*((_QWORD *)BaseAddress + 7);
      if ( !v4 )
        goto LABEL_21;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    RtlFreeHeap(ProcessHeap, 0, v4);
  }
LABEL_21:
  memset(BaseAddress, 0, 0x48uLL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return 1LL;
}
