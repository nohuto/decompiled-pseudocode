/*
 * XREFs of FormInquiryBlockLimitsData @ 0x1C0007A74
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0007C5C (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C0010A04 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockLimitsData(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v5; // r9
  _DWORD *v6; // rdx
  __int64 v7; // rbx
  unsigned int v8; // r10d
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
  {
    v5 = *(_QWORD *)(a2 + 64);
    v6 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    v6 = (_DWORD *)(a2 + 16);
  }
  if ( v2 == 40 )
    v7 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v7 = *(unsigned __int8 *)(a2 + 7);
  if ( *v6 >= 0x14u )
  {
    v8 = 0;
    *(_WORD *)v5 = -20480;
    if ( *v6 >= 0x24u
      && (*(_DWORD *)(a1 + 52) & 1) == 0
      && (*(_BYTE *)(*(_QWORD *)(a1 + 1080) + 520LL) & 4) != 0
      && (v9 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v7 + 1184) + 52LL)) != 0 )
    {
      v10 = *(_DWORD *)(a1 + 44);
      *(_BYTE *)(v5 + 3) = 60;
      v11 = (0x40000000 / v9) << 6;
      if ( v10 )
        v11 = v10;
      *(_BYTE *)(v5 + 22) = BYTE1(v11);
      *(_BYTE *)(v5 + 21) = BYTE2(v11);
      *(_BYTE *)(v5 + 20) = HIBYTE(v11);
      *(_BYTE *)(v5 + 23) = v11;
      *(_DWORD *)(v5 + 24) = 0x10000;
    }
    else
    {
      *(_BYTE *)(v5 + 3) = 16;
      *v6 = 20;
    }
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(v5) = 36;
    LOBYTE(v6) = 6;
    NVMeSetSenseData(a2, v6, a2, v5);
    return (unsigned int)-1056964602;
  }
  return v8;
}
