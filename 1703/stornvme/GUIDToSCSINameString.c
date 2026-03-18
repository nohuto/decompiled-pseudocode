/*
 * XREFs of GUIDToSCSINameString @ 0x1C0007784
 * Callers:
 *     FormInquiryDeviceIdentifiersData @ 0x1C0007810 (FormInquiryDeviceIdentifiersData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GUIDToSCSINameString(_BYTE *a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // edx
  __int64 v9; // r9
  __int64 v10; // rcx

  if ( a4 < 2 * a3 + 4 )
    return 3238002694LL;
  *a2 = dword_1C0015000;
  v8 = 4;
  if ( a3 )
  {
    v9 = a3;
    do
    {
      if ( a4 - v8 >= 2 )
      {
        v10 = *a1 & 0xF;
        *((_BYTE *)a2 + v8) = `HexFromUchar'::`2'::hexDigits[(unsigned __int64)(unsigned __int8)*a1 >> 4];
        *((_BYTE *)a2 + v8 + 1) = `HexFromUchar'::`2'::hexDigits[v10];
      }
      v8 += 2;
      ++a1;
      --v9;
    }
    while ( v9 );
  }
  return 0LL;
}
