/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x14083F5AC
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x14083F164 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     KsepStringAnsiToUnicode @ 0x1405C55E0 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v2; // edi
  __int64 Table; // rax
  __int64 v4; // rbx

  v2 = -1073741275;
  memset(&qword_1403A1E58, 0, 0x38uLL);
  dword_1403A1E84 = -1;
  dword_1403A1E88 = -1;
  memset(&qword_1403A20A0, 0, 0x38uLL);
  dword_1403A20CC = -1;
  Table = HalAcpiGetTableEx(a1, 1346584902LL, 0LL, 0LL);
  v4 = Table;
  if ( Table )
  {
    v2 = KsepStringAnsiToUnicode(word_1403A2110, 0xEu, (char *)(Table + 10), 6u);
    if ( v2 >= 0 )
    {
      v2 = KsepStringAnsiToUnicode(word_1403A1E40, 0x12u, (char *)(v4 + 16), 8u);
      if ( v2 >= 0 )
      {
        v2 = KsepStringAnsiToUnicode(word_1403A1E30, 0xAu, (char *)(v4 + 28), 4u);
        if ( v2 >= 0 )
        {
          qword_1403A1E58 = (__int64)word_1403A2110;
          qword_1403A1E60 = (__int64)word_1403A1E30;
          dword_1403A1E84 = *(unsigned __int8 *)(v4 + 8);
          dword_1403A1E88 = *(_DWORD *)(v4 + 32);
          qword_1403A20A0 = (__int64)word_1403A2110;
          qword_1403A20A8 = (__int64)word_1403A1E40;
          dword_1403A20CC = *(_DWORD *)(v4 + 24);
        }
      }
    }
  }
  return (unsigned int)v2;
}
