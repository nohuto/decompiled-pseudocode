/*
 * XREFs of FormInquiryBlockProvisioningData @ 0x1C00080B8
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00081A8 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C0012294 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockProvisioningData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _DWORD *v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned int v9; // r9d
  char v10; // al
  char v11; // al

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(unsigned int *)(a2 + 52);
    v6 = (_DWORD *)(a2 + 60);
    v7 = *(_QWORD *)(a2 + 64);
    v8 = *(unsigned __int8 *)(v5 + a2 + 10);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v6 = (_DWORD *)(a2 + 16);
    v8 = *(unsigned __int8 *)(a2 + 7);
  }
  if ( *v6 >= 8u )
  {
    *(_WORD *)v7 = -19968;
    v9 = 0;
    *(_BYTE *)(v7 + 3) = 4;
    *(_BYTE *)(v7 + 5) &= 0x98u;
    if ( (*(_DWORD *)(a1 + 52) & 1) != 0 || (v10 = 0x80, (*(_BYTE *)(*(_QWORD *)(a1 + 1080) + 520LL) & 4) == 0) )
      v10 = 0;
    *(_BYTE *)(v7 + 5) = v10 | *(_BYTE *)(v7 + 5) & 0x7F;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 8 * v8 + 1184) + 65LL) )
    {
      v11 = *(_BYTE *)(v7 + 6) & 0xF8 | 2;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 52) & 1) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 1080) + 520LL) & 4) == 0 )
      {
        *(_BYTE *)(v7 + 6) &= 0xF8u;
        goto LABEL_16;
      }
      v11 = *(_BYTE *)(v7 + 6) & 0xF8 | 1;
    }
    *(_BYTE *)(v7 + 6) = v11;
LABEL_16:
    *v6 = 8;
    *(_BYTE *)(a2 + 3) = 1;
    return v9;
  }
  LOBYTE(a4) = 36;
  LOBYTE(v7) = 6;
  NVMeSetSenseData(a2, v7, a2, a4);
  return (unsigned int)-1056964602;
}
