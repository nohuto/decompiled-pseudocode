/*
 * XREFs of xxxMouseKeyButton @ 0x1C01A1D50
 * Callers:
 *     xxxRemoteStopScreenUpdates @ 0x1C00FE41C (xxxRemoteStopScreenUpdates.c)
 *     EditionMouseButtonAction @ 0x1C01A0180 (EditionMouseButtonAction.c)
 * Callees:
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 */

void __fastcall xxxMouseKeyButton(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  unsigned int v4; // esi
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  struct tagUIPI_INFO_INT *v7; // [rsp+78h] [rbp-20h]
  __int64 v8; // [rsp+B0h] [rbp+18h] BYREF

  v8 = a3;
  v3 = a2;
  v4 = a1;
  if ( (gdwMitConfig & 1) != 0 )
  {
    MouseButtonAction(a1, a2, &v8);
  }
  else
  {
    v5 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v6 = MilliSecsToQpcCount(v5);
    xxxButtonEvent(
      v4,
      *(struct tagPOINT *)(gpsi + 5368LL),
      0LL,
      v3 == 1,
      v5,
      v6,
      0LL,
      0LL,
      0LL,
      0,
      0,
      0,
      0,
      0,
      0LL,
      v7,
      (struct tagINPUT_MESSAGE_SOURCE *)&v8);
  }
}
