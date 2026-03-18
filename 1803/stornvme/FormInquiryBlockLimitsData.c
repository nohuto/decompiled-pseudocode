/*
 * XREFs of FormInquiryBlockLimitsData @ 0x1C00082D0
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00084D0 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryBlockLimitsData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // rdx
  unsigned __int8 v9; // cl
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // r11d
  unsigned int v16; // eax
  unsigned int v17; // ebx

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(unsigned int *)(a2 + 52);
    v7 = *(_QWORD *)(a2 + 64);
    v8 = (_DWORD *)(a2 + 60);
    v9 = *(_BYTE *)(v6 + a2 + 10);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = (_DWORD *)(a2 + 16);
    v9 = *(_BYTE *)(a2 + 7);
  }
  if ( *v8 >= 0x14u )
  {
    v10 = 0;
    *(_WORD *)v7 = -20480;
    if ( *v8 >= 0x24u
      && (*(_DWORD *)(a1 + 52) & 1) == 0
      && (*(_BYTE *)(*(_QWORD *)(a1 + 1112) + 520LL) & 4) != 0
      && (v11 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v9 + 1224) + 52LL)) != 0 )
    {
      v12 = 0x40000000 / v11;
      v13 = *(_DWORD *)(a1 + 44);
      v14 = v12 << 6;
      v15 = v12 << 6 >> 8;
      v16 = v12 << 6 >> 16;
      v17 = HIBYTE(v14);
      if ( v13 )
      {
        v15 = v13 >> 8;
        LOBYTE(v14) = v13;
        v16 = HIWORD(v13);
        LOBYTE(v17) = HIBYTE(v13);
      }
      *(_BYTE *)(v7 + 3) = 60;
      *(_BYTE *)(v7 + 23) = v14;
      *(_BYTE *)(v7 + 22) = v15;
      *(_BYTE *)(v7 + 21) = v16;
      *(_BYTE *)(v7 + 20) = v17;
      *(_DWORD *)(v7 + 24) = 0x10000;
    }
    else
    {
      *(_BYTE *)(v7 + 3) = 16;
      *v8 = 20;
    }
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(v8) = 6;
    NVMeSetSenseData(a2, v8, v7, a4);
    return (unsigned int)-1056964602;
  }
  return v10;
}
