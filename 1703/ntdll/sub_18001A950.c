/*
 * XREFs of sub_18001A950 @ 0x18001A950
 * Callers:
 *     sub_18001A8B4 @ 0x18001A8B4 (sub_18001A8B4.c)
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 * Callees:
 *     sub_18001A984 @ 0x18001A984 (sub_18001A984.c)
 *     sub_180086EA8 @ 0x180086EA8 (sub_180086EA8.c)
 */

void __fastcall sub_18001A950(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) )
  {
    if ( sub_18001A984() != *(_QWORD *)(a1 + 72) )
      sub_180086EA8();
    *(_QWORD *)(a1 + 72) = 0LL;
  }
}
