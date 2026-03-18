/*
 * XREFs of KsepMatchInitAcpiOemInfo @ 0x1407F70D4
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x1407F7210 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     KsepStringAnsiToUnicode @ 0x14059BF68 (KsepStringAnsiToUnicode.c)
 */

__int64 __fastcall KsepMatchInitAcpiOemInfo(__int64 a1)
{
  NTSTATUS v2; // edi
  __int64 Table; // rax
  __int64 v4; // rbx

  v2 = -1073741275;
  memset(&qword_1403869E0, 0, 0x38uLL);
  dword_140386A0C = -1;
  dword_140386A10 = -1;
  memset(&qword_140386C30, 0, 0x38uLL);
  dword_140386C5C = -1;
  Table = HalAcpiGetTableEx(a1, 1346584902LL, 0LL, 0LL);
  v4 = Table;
  if ( Table )
  {
    v2 = KsepStringAnsiToUnicode(word_140386CA0, 0xEu, (char *)(Table + 10), 6u);
    if ( v2 >= 0 )
    {
      v2 = KsepStringAnsiToUnicode(word_1403869C8, 0x12u, (char *)(v4 + 16), 8u);
      if ( v2 >= 0 )
      {
        v2 = KsepStringAnsiToUnicode(word_1403869B8, 0xAu, (char *)(v4 + 28), 4u);
        if ( v2 >= 0 )
        {
          qword_1403869E0 = (__int64)word_140386CA0;
          qword_1403869E8 = (__int64)word_1403869B8;
          dword_140386A0C = *(unsigned __int8 *)(v4 + 8);
          dword_140386A10 = *(_DWORD *)(v4 + 32);
          qword_140386C30 = (__int64)word_140386CA0;
          qword_140386C38 = (__int64)word_1403869C8;
          dword_140386C5C = *(_DWORD *)(v4 + 24);
        }
      }
    }
  }
  return (unsigned int)v2;
}
