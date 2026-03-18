/*
 * XREFs of FormInquiryDeviceIdentifiersData @ 0x1C0007D74
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00081A8 (ScsiInquiryRequest.c)
 * Callees:
 *     GUIDToSCSINameString @ 0x1C0007CE8 (GUIDToSCSINameString.c)
 *     NVMeSetSenseData @ 0x1C0012294 (NVMeSetSenseData.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall FormInquiryDeviceIdentifiersData(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // r9
  unsigned int *v5; // r13
  _WORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _BYTE *v10; // r12
  __int64 v11; // rax
  unsigned int v12; // ebx
  BOOL v13; // r14d
  _BYTE *v14; // rcx
  unsigned int v15; // ebp
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // r8d
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // ecx
  char v22; // al
  int v24; // [rsp+30h] [rbp-58h]
  int v25; // [rsp+34h] [rbp-54h]
  _BYTE *v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h]
  unsigned __int16 *v28; // [rsp+48h] [rbp-40h]

  v2 = *(unsigned __int16 **)(a1 + 1080);
  v28 = v2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = (unsigned int *)(a2 + 60);
    v6 = *(_WORD **)(a2 + 64);
    v7 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v6 = *(_WORD **)(a2 + 24);
    v5 = (unsigned int *)(a2 + 16);
    v7 = *(unsigned __int8 *)(a2 + 7);
  }
  v8 = *(_QWORD *)(a1 + 8 * v7 + 1184);
  v9 = (unsigned int)v7;
  v24 = v7;
  v27 = (unsigned int)v7;
  v10 = (_BYTE *)(v8 + 68);
  v11 = *(_QWORD *)(v8 + 68);
  if ( !v11 )
    v11 = *(_QWORD *)(v8 + 76);
  v12 = 0;
  v13 = v11 != 0;
  v14 = (_BYTE *)(v8 + 84);
  v26 = v14;
  if ( !*(_QWORD *)v14 || v11 )
  {
    v25 = 0;
    v15 = 44;
    if ( !v11 )
      v15 = 76;
  }
  else
  {
    v25 = 1;
    v15 = 28;
  }
  v16 = *v5;
  if ( *v5 >= v15 )
  {
    if ( (v16 & 3) != 0 )
    {
      if ( !v16 )
        goto LABEL_19;
      memset(v6, 0, *v5);
    }
    else
    {
      v17 = v16 >> 2;
      if ( !v17 )
        goto LABEL_19;
      memset(v6, 0, 4LL * v17);
    }
    v2 = v28;
    v9 = v27;
    v14 = v26;
    LODWORD(v7) = v24;
LABEL_19:
    *v6 = -32000;
    *((_BYTE *)v6 + 3) = v15 - 4;
    *((_BYTE *)v6 + 4) = v6[2] & 0xF0 | 3;
    *((_BYTE *)v6 + 5) = *((_BYTE *)v6 + 5) & 0xC0 | 8;
    *((_BYTE *)v6 + 7) = v15 - 8;
    if ( v13 )
    {
      v18 = 16;
      v14 = v10;
    }
    else
    {
      if ( !v25 )
      {
        v19 = *v2;
        *((_BYTE *)v6 + 11) = `HexFromUchar'::`2'::hexDigits[*v2 & 0xF];
        *((_BYTE *)v6 + 10) = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v19 >> 4];
        *((_BYTE *)v6 + 9) = `HexFromUchar'::`2'::hexDigits[((unsigned int)v19 >> 8) & 0xF];
        *((_BYTE *)v6 + 8) = `HexFromUchar'::`2'::hexDigits[v19 >> 12];
        *(_OWORD *)(v6 + 6) = *(_OWORD *)(v2 + 12);
        *(_OWORD *)(v6 + 14) = *(_OWORD *)(v2 + 20);
        *(_QWORD *)(v6 + 22) = *((_QWORD *)v2 + 7);
        if ( (unsigned int)v7 < *(_DWORD *)(a1 + 148) && (v20 = *(_QWORD *)(a1 + 8 * v9 + 1184)) != 0 )
          v21 = *(_DWORD *)(v20 + 16);
        else
          LOWORD(v21) = 0;
        *((_BYTE *)v6 + 55) = `HexFromUchar'::`2'::hexDigits[v21 & 0xF];
        *((_BYTE *)v6 + 54) = `HexFromUchar'::`2'::hexDigits[((unsigned __int64)(unsigned __int16)v21 >> 4) & 0xF];
        v22 = `HexFromUchar'::`2'::hexDigits[((unsigned __int64)(unsigned __int16)v21 >> 8) & 0xF];
        *((_BYTE *)v6 + 52) = `HexFromUchar'::`2'::hexDigits[(unsigned __int64)(unsigned __int16)v21 >> 12];
        *((_BYTE *)v6 + 53) = v22;
        *(_OWORD *)(v6 + 28) = *(_OWORD *)(v2 + 2);
        *((_DWORD *)v6 + 18) = *((_DWORD *)v2 + 5);
        goto LABEL_29;
      }
      v18 = 8;
    }
    GUIDToSCSINameString(v14, (_DWORD *)v6 + 2, v18, (unsigned __int8)(v15 - 8));
LABEL_29:
    *v5 = v15;
    *(_BYTE *)(a2 + 3) = 1;
    return v12;
  }
  LOBYTE(v2) = 36;
  LOBYTE(v7) = 6;
  NVMeSetSenseData(a2, v7, v9, v2);
  return (unsigned int)-1056964602;
}
