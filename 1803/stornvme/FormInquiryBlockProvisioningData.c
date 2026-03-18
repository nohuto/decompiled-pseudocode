/*
 * XREFs of FormInquiryBlockProvisioningData @ 0x1C00083D4
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00084D0 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockProvisioningData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  _DWORD *v7; // r11
  __int64 v8; // rdx
  unsigned __int8 v9; // cl
  unsigned int v10; // r9d
  char v11; // al
  char v12; // al
  char v13; // cl
  char v14; // al

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(unsigned int *)(a2 + 52);
    v7 = (_DWORD *)(a2 + 60);
    v8 = *(_QWORD *)(a2 + 64);
    v9 = *(_BYTE *)(v6 + a2 + 10);
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 24);
    v7 = (_DWORD *)(a2 + 16);
    v9 = *(_BYTE *)(a2 + 7);
  }
  if ( *v7 >= 8u )
  {
    *(_WORD *)v8 = -19968;
    v10 = 0;
    *(_BYTE *)(v8 + 3) = 4;
    *(_BYTE *)(v8 + 5) &= 0x98u;
    if ( (*(_DWORD *)(a1 + 52) & 1) != 0 || (v11 = 0x80, (*(_BYTE *)(*(_QWORD *)(a1 + 1112) + 520LL) & 4) == 0) )
      v11 = 0;
    *(_BYTE *)(v8 + 5) = v11 | *(_BYTE *)(v8 + 5) & 0x7F;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 8LL * v9 + 1224) + 65LL) )
    {
      v12 = *(_BYTE *)(v8 + 6) & 0xF8 | 2;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 52) & 1) != 0 || (v13 = 1, (*(_BYTE *)(*(_QWORD *)(a1 + 1112) + 520LL) & 4) == 0) )
        v13 = 0;
      v14 = *(_BYTE *)(v8 + 6);
      if ( v13 )
        v12 = v14 & 0xF8 | 1;
      else
        v12 = v14 & 0xF8;
    }
    *(_BYTE *)(v8 + 6) = v12;
    *v7 = 8;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(v8) = 6;
    NVMeSetSenseData(a2, v8, a2, a4);
    return (unsigned int)-1056964602;
  }
  return v10;
}
