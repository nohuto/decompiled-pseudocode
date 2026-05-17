/*
 * XREFs of sub_18010E10C @ 0x18010E10C
 * Callers:
 *     sub_180108F48 @ 0x180108F48 (sub_180108F48.c)
 *     sub_18010DE7C @ 0x18010DE7C (sub_18010DE7C.c)
 *     sub_18010E294 @ 0x18010E294 (sub_18010E294.c)
 *     sub_18010E330 @ 0x18010E330 (sub_18010E330.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_18010D634 @ 0x18010D634 (sub_18010D634.c)
 */

__int64 __fastcall sub_18010E10C(unsigned __int64 a1)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8
  __int64 v6; // rcx

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    if ( (*(_BYTE *)a1 & 4) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      v5 = *(_QWORD *)(a1 + 24);
      if ( v5 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
        *(_QWORD *)(a1 + 24) = 0LL;
      }
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( v6 )
        sub_18010D634(v6);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return 1LL;
}
