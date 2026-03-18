/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x1408A5AC8
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x1408A5680 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     KsepStringAnsiToUnicode @ 0x140623958 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v2; // edi
  __int64 Table; // rax
  __int64 v4; // rbx

  v2 = -1073741275;
  memset(&qword_1403E64F0, 0, 0x38uLL);
  dword_1403E651C = -1;
  dword_1403E6520 = -1;
  memset(&qword_1403E6740, 0, 0x38uLL);
  dword_1403E676C = -1;
  Table = HalAcpiGetTableEx(a1, 1346584902LL, 0LL, 0LL);
  v4 = Table;
  if ( Table )
  {
    v2 = KsepStringAnsiToUnicode(word_1403E67B0, 0xEu, (char *)(Table + 10), 6u);
    if ( v2 >= 0 )
    {
      v2 = KsepStringAnsiToUnicode(word_1403E64D8, 0x12u, (char *)(v4 + 16), 8u);
      if ( v2 >= 0 )
      {
        v2 = KsepStringAnsiToUnicode(word_1403E64C8, 0xAu, (char *)(v4 + 28), 4u);
        if ( v2 >= 0 )
        {
          qword_1403E64F0 = (__int64)word_1403E67B0;
          qword_1403E64F8 = (__int64)word_1403E64C8;
          dword_1403E651C = *(unsigned __int8 *)(v4 + 8);
          dword_1403E6520 = *(_DWORD *)(v4 + 32);
          qword_1403E6740 = (__int64)word_1403E67B0;
          qword_1403E6748 = (__int64)word_1403E64D8;
          dword_1403E676C = *(_DWORD *)(v4 + 24);
        }
      }
    }
  }
  return (unsigned int)v2;
}
