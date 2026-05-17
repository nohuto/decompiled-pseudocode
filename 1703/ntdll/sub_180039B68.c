/*
 * XREFs of sub_180039B68 @ 0x180039B68
 * Callers:
 *     sub_180039AE0 @ 0x180039AE0 (sub_180039AE0.c)
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180039B68(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned __int64 *v10; // rcx
  __int64 v11; // rcx

  result = (unsigned int)KiUserInvertedFunctionTable[0];
  if ( KiUserInvertedFunctionTable[0] == dword_18016B4B4 )
  {
    byte_18016B4BC = 1;
  }
  else
  {
    _InterlockedIncrement(&dword_18016B4B8);
    v9 = 1;
    if ( KiUserInvertedFunctionTable[0] != 1 )
    {
      if ( KiUserInvertedFunctionTable[0] > 1u )
      {
        v10 = (unsigned __int64 *)&unk_18016B4E0;
        do
        {
          if ( a2 < *v10 )
            break;
          ++v9;
          v10 += 3;
        }
        while ( v9 < KiUserInvertedFunctionTable[0] );
      }
      if ( v9 != KiUserInvertedFunctionTable[0] )
        memmove(
          &KiUserInvertedFunctionTable[4 * v9 + 10 + 2 * v9],
          &KiUserInvertedFunctionTable[4 * v9 + 4 + 2 * v9],
          24LL * (KiUserInvertedFunctionTable[0] - v9));
    }
    v11 = 3LL * v9;
    result = a5;
    *(_QWORD *)&KiUserInvertedFunctionTable[2 * v11 + 4] = a3;
    *(_QWORD *)&KiUserInvertedFunctionTable[2 * v11 + 6] = a2;
    KiUserInvertedFunctionTable[2 * v11 + 8] = a4;
    KiUserInvertedFunctionTable[2 * v11 + 9] = a5;
    ++KiUserInvertedFunctionTable[0];
    _InterlockedIncrement(&dword_18016B4B8);
  }
  return result;
}
