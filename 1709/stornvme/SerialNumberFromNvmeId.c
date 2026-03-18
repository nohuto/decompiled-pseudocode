/*
 * XREFs of SerialNumberFromNvmeId @ 0x1C0007A00
 * Callers:
 *     FormInquirySerialNumberData @ 0x1C0007AE4 (FormInquirySerialNumberData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SerialNumberFromNvmeId(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int8 v9; // cl
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int8 v12; // cl
  __int64 v13; // rdx
  __int64 v14; // rax

  if ( (a2 >> 1) + 2 * a2 > a4 || (a2 & 1) != 0 )
    return 3238002694LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( a2 != 1 )
  {
    do
    {
      v9 = *(_BYTE *)(v7 + a1);
      if ( a4 - (unsigned int)v8 >= 2 )
      {
        *(_BYTE *)(v8 + a3) = `HexFromUchar'::`2'::hexDigits[(unsigned __int64)v9 >> 4];
        *(_BYTE *)(v8 + a3 + 1) = `HexFromUchar'::`2'::hexDigits[v9 & 0xF];
      }
      v10 = (unsigned int)(v7 + 1);
      v11 = (unsigned int)(v8 + 2);
      v12 = *(_BYTE *)(v10 + a1);
      if ( a4 - (unsigned int)v11 >= 2 )
      {
        *(_BYTE *)(v11 + a3) = `HexFromUchar'::`2'::hexDigits[(unsigned __int64)v12 >> 4];
        *(_BYTE *)(v11 + a3 + 1) = `HexFromUchar'::`2'::hexDigits[v12 & 0xF];
      }
      v13 = (unsigned int)(v11 + 2);
      v7 = (unsigned int)(v10 + 1);
      v14 = (unsigned int)v13;
      *(_BYTE *)(v13 + a3) = 95;
      v8 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v7 < a2 - 1 );
    if ( (_DWORD)v8 )
    {
      if ( (unsigned int)v8 <= a4 )
        *(_BYTE *)(v14 + a3) = 46;
    }
  }
  return 0LL;
}
