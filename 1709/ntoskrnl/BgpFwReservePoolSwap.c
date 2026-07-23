/*
 * XREFs of BgpFwReservePoolSwap @ 0x1407D39C4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 *     ResFwFreeContext @ 0x1407D3A5C (ResFwFreeContext.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x1407D0848 (BgpFwInitializeReservePool.c)
 */

void __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_14038D020 = qword_1403A7EA8;
      dword_14038D040 = dword_1403A7EA4;
      dword_14038D028 = dword_1403A7EA0;
      stru_14038D030 = (_RTL_BITMAP)xmmword_1403A7EB0;
    }
  }
  else
  {
    dword_1403A7EA0 = dword_14038D028;
    qword_1403A7EA8 = qword_14038D020;
    dword_1403A7EA4 = dword_14038D040;
    xmmword_1403A7EB0 = (__int128)stru_14038D030;
    BgpFwInitializeReservePool(a2, a3, a4);
  }
}
