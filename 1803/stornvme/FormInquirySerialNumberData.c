/*
 * XREFs of FormInquirySerialNumberData @ 0x1C0007DE4
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00084D0 (ScsiInquiryRequest.c)
 * Callees:
 *     SerialNumberFromNvmeId @ 0x1C0007D00 (SerialNumberFromNvmeId.c)
 *     NVMeSetSenseData @ 0x1C00127F4 (NVMeSetSenseData.c)
 *     memmove @ 0x1C0014040 (memmove.c)
 */

__int64 __fastcall FormInquirySerialNumberData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // rdx
  unsigned __int8 v6; // cl
  __int64 v7; // rax
  __int64 v8; // r10
  _QWORD *v9; // rbx
  __int64 v10; // rax
  bool v11; // r11
  bool v12; // dl
  unsigned __int8 v13; // al
  __int64 v14; // r9
  unsigned int v15; // r12d
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 result; // rax
  unsigned int v19; // ebp
  __int64 v20; // r15
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned int v25; // esi
  _BYTE *v26; // rdx
  unsigned __int64 v27; // rcx
  _BYTE *v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v31; // [rsp+38h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 1112);
  v5 = a1;
  LOBYTE(a3) = *(_BYTE *)(a2 + 2);
  if ( (_BYTE)a3 == 40 )
    v6 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v6 = *(_BYTE *)(a2 + 7);
  v31 = v6;
  v7 = *(_QWORD *)(v5 + 8LL * v6 + 1224);
  v8 = v7 + 68;
  v9 = (_QWORD *)(v7 + 84);
  v10 = *(_QWORD *)(v7 + 68);
  if ( !v10 )
    v10 = *(_QWORD *)(v8 + 8);
  v11 = v10 != 0;
  v12 = *v9 != 0LL;
  if ( v10 )
    v13 = 40;
  else
    v13 = *v9 != 0LL ? 20 : 30;
  v14 = v13;
  v15 = v13 + 4;
  if ( (_BYTE)a3 == 40 )
  {
    v16 = *(_QWORD *)(a2 + 64);
    v17 = 60LL;
  }
  else
  {
    v16 = *(_QWORD *)(a2 + 24);
    v17 = 16LL;
  }
  if ( *(_DWORD *)(a2 + v17) < v15 )
  {
    LOBYTE(v14) = 36;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(a2, v5, a3, v14);
    return 3238002694LL;
  }
  v19 = 0;
  *(_WORD *)v16 = 0x8000;
  *(_BYTE *)(v16 + 3) = v13;
  v20 = v16 + 4;
  if ( v11 )
  {
    v21 = 16;
    v22 = v8;
  }
  else
  {
    if ( !v12 )
    {
      v23 = 0LL;
      if ( *(_BYTE *)(v3 + 4) )
      {
        do
          v23 = (unsigned int)(v23 + 1);
        while ( (unsigned int)v23 < 0x14 && *(_BYTE *)(v23 + v3 + 4) );
      }
      memmove((void *)(v16 + 4), (const void *)(v3 + 4), (unsigned int)v23);
      *(_BYTE *)(v23 + v20) = 95;
      v24 = (unsigned int)(v23 + 1);
      v25 = v23 + 5;
      v26 = (_BYTE *)(v20 + v24);
      v27 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v31 + 1224) + 18LL);
      v26[3] = `HexFromUchar'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(a1 + 8 * v31 + 1224) + 18LL) & 0xF];
      v26[2] = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v27 >> 4];
      v26[1] = `HexFromUchar'::`2'::hexDigits[((unsigned int)v27 >> 8) & 0xF];
      *v26 = `HexFromUchar'::`2'::hexDigits[v27 >> 12];
      v28 = (_BYTE *)(v20 + v25);
      v29 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v31 + 1224) + 16LL);
      v28[3] = `HexFromUchar'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(a1 + 8 * v31 + 1224) + 16LL) & 0xF];
      v28[2] = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v29 >> 4];
      v28[1] = `HexFromUchar'::`2'::hexDigits[((unsigned int)v29 >> 8) & 0xF];
      *v28 = `HexFromUchar'::`2'::hexDigits[v29 >> 12];
      *(_BYTE *)(v25 + 4 + v20) = 46;
      goto LABEL_23;
    }
    v21 = 8;
    v22 = (__int64)v9;
  }
  v19 = SerialNumberFromNvmeId(v22, v21, v20, v13);
LABEL_23:
  if ( v19 )
    return v19;
  *(_DWORD *)(a2 + v17) = v15;
  result = 0LL;
  *(_BYTE *)(a2 + 3) = 1;
  return result;
}
