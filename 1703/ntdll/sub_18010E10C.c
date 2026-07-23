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

__int64 __fastcall sub_18010E10C(_QWORD *BaseAddress)
{
  void *v2; // r8
  void *v3; // r8
  void *v4; // r8
  void *v5; // r8
  void *v6; // rcx

  if ( BaseAddress )
  {
    v2 = (void *)BaseAddress[1];
    if ( v2 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
      BaseAddress[1] = 0LL;
    }
    v3 = (void *)BaseAddress[5];
    if ( v3 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
      BaseAddress[5] = 0LL;
    }
    if ( (*(_BYTE *)BaseAddress & 4) != 0 )
    {
      v4 = (void *)BaseAddress[2];
      if ( v4 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
        BaseAddress[2] = 0LL;
      }
      v5 = (void *)BaseAddress[3];
      if ( v5 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
        BaseAddress[3] = 0LL;
      }
    }
    if ( (*(_BYTE *)BaseAddress & 1) != 0 )
    {
      v6 = (void *)BaseAddress[1];
      if ( v6 )
        sub_18010D634(v6);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return 1LL;
}
