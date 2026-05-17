/*
 * XREFs of sub_180074184 @ 0x180074184
 * Callers:
 *     sub_180074154 @ 0x180074154 (sub_180074154.c)
 * Callees:
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

void __fastcall sub_180074184(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int *v3; // rax
  bool v4; // zf
  int v5; // eax

  v2 = (unsigned int)(KiUserInvertedFunctionTable[0] - 1);
  if ( KiUserInvertedFunctionTable[0] != 1 )
  {
    v3 = &KiUserInvertedFunctionTable[6 * v2 + 6];
    do
    {
      if ( a2 == *(_QWORD *)v3 )
        break;
      v3 -= 6;
      v4 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( !v4 );
  }
  if ( (_DWORD)v2 )
  {
    sub_1800259B4(0);
    _InterlockedIncrement(&dword_18016F4D8);
    v5 = KiUserInvertedFunctionTable[0];
    if ( KiUserInvertedFunctionTable[0] != 2 )
    {
      memmove(
        &KiUserInvertedFunctionTable[4 * v2 + 4 + 2 * v2],
        &KiUserInvertedFunctionTable[4 * (unsigned int)(v2 + 1) + 4 + 2 * (unsigned int)(v2 + 1)],
        24LL * (unsigned int)(KiUserInvertedFunctionTable[0] - v2 - 1));
      v5 = KiUserInvertedFunctionTable[0];
    }
    KiUserInvertedFunctionTable[0] = v5 - 1;
    _InterlockedIncrement(&dword_18016F4D8);
    sub_1800259B4(1);
  }
}
