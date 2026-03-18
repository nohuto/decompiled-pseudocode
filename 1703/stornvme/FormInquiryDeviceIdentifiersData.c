/*
 * XREFs of FormInquiryDeviceIdentifiersData @ 0x1C0007810
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0007C5C (ScsiInquiryRequest.c)
 * Callees:
 *     GUIDToSCSINameString @ 0x1C0007784 (GUIDToSCSINameString.c)
 *     NVMeSetSenseData @ 0x1C0010A04 (NVMeSetSenseData.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall FormInquiryDeviceIdentifiersData(__int64 a1, __int64 a2)
{
  char v2; // al
  unsigned __int16 *v3; // r9
  _WORD *v6; // rdi
  unsigned int *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _BYTE *v11; // r12
  __int64 v12; // rax
  unsigned int v13; // ebx
  BOOL v14; // r14d
  _BYTE *v15; // rcx
  unsigned int v16; // ebp
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // r8d
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  char v23; // al
  int v25; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+34h] [rbp-54h]
  _BYTE *v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h]
  unsigned __int16 *v29; // [rsp+48h] [rbp-40h]

  v2 = *(_BYTE *)(a2 + 2);
  v3 = *(unsigned __int16 **)(a1 + 1080);
  v29 = v3;
  if ( v2 == 40 )
  {
    v6 = *(_WORD **)(a2 + 64);
    v7 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v6 = *(_WORD **)(a2 + 24);
    v7 = (unsigned int *)(a2 + 16);
  }
  if ( v2 == 40 )
    v8 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v8 = *(unsigned __int8 *)(a2 + 7);
  v9 = *(_QWORD *)(a1 + 8 * v8 + 1184);
  v10 = (unsigned int)v8;
  v25 = v8;
  v28 = (unsigned int)v8;
  v11 = (_BYTE *)(v9 + 68);
  v12 = *(_QWORD *)(v9 + 68);
  if ( !v12 )
    v12 = *(_QWORD *)(v9 + 76);
  v13 = 0;
  v14 = v12 != 0;
  v15 = (_BYTE *)(v9 + 84);
  v27 = v15;
  if ( !*(_QWORD *)v15 || v12 )
  {
    v26 = 0;
    v16 = 44;
    if ( !v12 )
      v16 = 76;
  }
  else
  {
    v26 = 1;
    v16 = 28;
  }
  v17 = *v7;
  if ( *v7 >= v16 )
  {
    if ( (v17 & 3) != 0 )
    {
      if ( !v17 )
        goto LABEL_22;
      memset(v6, 0, *v7);
    }
    else
    {
      v18 = v17 >> 2;
      if ( !v18 )
        goto LABEL_22;
      memset(v6, 0, 4LL * v18);
    }
    v3 = v29;
    v10 = v28;
    v15 = v27;
    LODWORD(v8) = v25;
LABEL_22:
    *v6 = -32000;
    *((_BYTE *)v6 + 3) = v16 - 4;
    *((_BYTE *)v6 + 4) = v6[2] & 0xF0 | 3;
    *((_BYTE *)v6 + 5) = *((_BYTE *)v6 + 5) & 0xC0 | 8;
    *((_BYTE *)v6 + 7) = v16 - 8;
    if ( v14 )
    {
      v19 = 16;
      v15 = v11;
    }
    else
    {
      if ( !v26 )
      {
        v20 = *v3;
        *((_BYTE *)v6 + 11) = `HexFromUchar'::`2'::hexDigits[*v3 & 0xF];
        *((_BYTE *)v6 + 10) = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v20 >> 4];
        *((_BYTE *)v6 + 9) = `HexFromUchar'::`2'::hexDigits[((unsigned int)v20 >> 8) & 0xF];
        *((_BYTE *)v6 + 8) = `HexFromUchar'::`2'::hexDigits[v20 >> 12];
        *(_OWORD *)(v6 + 6) = *(_OWORD *)(v3 + 12);
        *(_OWORD *)(v6 + 14) = *(_OWORD *)(v3 + 20);
        *(_QWORD *)(v6 + 22) = *((_QWORD *)v3 + 7);
        if ( (unsigned int)v8 < *(_DWORD *)(a1 + 148) && (v21 = *(_QWORD *)(a1 + 8 * v10 + 1184)) != 0 )
          v22 = *(_DWORD *)(v21 + 16);
        else
          LOWORD(v22) = 0;
        *((_BYTE *)v6 + 55) = `HexFromUchar'::`2'::hexDigits[v22 & 0xF];
        *((_BYTE *)v6 + 54) = `HexFromUchar'::`2'::hexDigits[((unsigned __int64)(unsigned __int16)v22 >> 4) & 0xF];
        v23 = `HexFromUchar'::`2'::hexDigits[((unsigned __int64)(unsigned __int16)v22 >> 8) & 0xF];
        *((_BYTE *)v6 + 52) = `HexFromUchar'::`2'::hexDigits[(unsigned __int64)(unsigned __int16)v22 >> 12];
        *((_BYTE *)v6 + 53) = v23;
        *(_OWORD *)(v6 + 28) = *(_OWORD *)(v3 + 2);
        *((_DWORD *)v6 + 18) = *((_DWORD *)v3 + 5);
        goto LABEL_32;
      }
      v19 = 8;
    }
    GUIDToSCSINameString(v15, (_DWORD *)v6 + 2, v19, (unsigned __int8)(v16 - 8));
LABEL_32:
    *v7 = v16;
    *(_BYTE *)(a2 + 3) = 1;
    return v13;
  }
  LOBYTE(v3) = 36;
  LOBYTE(v8) = 6;
  NVMeSetSenseData(a2, v8, v10, v3);
  return (unsigned int)-1056964602;
}
