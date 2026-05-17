/*
 * XREFs of sub_18010057C @ 0x18010057C
 * Callers:
 *     sub_1800FDDA8 @ 0x1800FDDA8 (sub_1800FDDA8.c)
 * Callees:
 *     sub_18006161C @ 0x18006161C (sub_18006161C.c)
 *     sub_1800F7520 @ 0x1800F7520 (sub_1800F7520.c)
 *     sub_180100060 @ 0x180100060 (sub_180100060.c)
 */

void __fastcall sub_18010057C(int a1)
{
  unsigned int v2; // r8d

  if ( dword_18015BFA4 == (unsigned int)sub_18006161C() )
  {
    if ( a1 <= dword_18015BFD8 )
    {
      sub_180100060();
      if ( sub_1800F7520() )
      {
        if ( (byte_18015BFBC & 4) == 0 )
          __debugbreak();
      }
    }
  }
  else
  {
    LOBYTE(v2) = ~byte_18015BFBC;
    sub_1800F7568(0xC0000374, (ULONG_PTR)&unk_1801586B0, (v2 >> 2) & 1);
  }
}
