/*
 * XREFs of FormInquirySerialNumberData @ 0x1C0007AE4
 * Callers:
 *     ScsiInquiryRequest @ 0x1C00081A8 (ScsiInquiryRequest.c)
 * Callees:
 *     SerialNumberFromNvmeId @ 0x1C0007A00 (SerialNumberFromNvmeId.c)
 *     NVMeSetSenseData @ 0x1C0012294 (NVMeSetSenseData.c)
 *     memmove @ 0x1C00139C0 (memmove.c)
 */

__int64 __fastcall FormInquirySerialNumberData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r10
  __int64 v11; // rcx
  _QWORD *v12; // r11
  bool v13; // si
  bool v14; // dl
  unsigned __int8 v15; // al
  __int64 v16; // r9
  unsigned int v17; // r15d
  __int64 v18; // rcx
  unsigned int *v19; // r14
  __int64 result; // rax
  unsigned int v21; // ebp
  __int64 v22; // r8
  unsigned int v23; // edx
  __int64 v24; // rcx
  _BYTE *v25; // rcx
  const void *v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rdx
  int v30; // esi
  _BYTE *v31; // rdx
  unsigned __int64 v32; // rcx
  _BYTE *v33; // rdx
  unsigned __int64 v34; // rcx
  _BYTE *v35; // [rsp+30h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 1080);
  v5 = 0LL;
  LOBYTE(a3) = *(_BYTE *)(a2 + 2);
  if ( (_BYTE)a3 == 40 )
    v7 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v7 = *(unsigned __int8 *)(a2 + 7);
  v8 = *(_QWORD *)(a1 + 8 * v7 + 1184);
  v9 = (unsigned int)v7;
  v10 = v8 + 68;
  v11 = *(_QWORD *)(v8 + 68);
  v12 = (_QWORD *)(v8 + 84);
  if ( !v11 )
    v11 = *(_QWORD *)(v8 + 76);
  v13 = v11 != 0;
  v14 = *v12 != 0LL;
  if ( v11 )
    v15 = 40;
  else
    v15 = *v12 != 0LL ? 20 : 30;
  v16 = v15;
  v17 = v15 + 4;
  if ( (_BYTE)a3 == 40 )
  {
    v18 = *(_QWORD *)(a2 + 64);
    v19 = (unsigned int *)(a2 + 60);
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 24);
    v19 = (unsigned int *)(a2 + 16);
  }
  if ( *v19 < v17 )
  {
    LOBYTE(v16) = 36;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(a2, v5, a3, v16);
    return 3238002694LL;
  }
  *(_WORD *)v18 = 0x8000;
  *(_BYTE *)(v18 + 3) = v15;
  v21 = 0;
  if ( v13 )
  {
    v22 = v18 + 4;
    v23 = 16;
    v24 = v10;
  }
  else
  {
    if ( !v14 )
    {
      v25 = (_BYTE *)(v18 + 4);
      v26 = (const void *)(v3 + 4);
      LODWORD(v27) = 0;
      v35 = v25;
      if ( *(_BYTE *)(v3 + 4) )
      {
        do
          v27 = (unsigned int)(v27 + 1);
        while ( (unsigned int)v27 < 0x14 && *(_BYTE *)(v27 + v3 + 4) );
      }
      v28 = (unsigned int)v27;
      memmove(v25, v26, (unsigned int)v27);
      v29 = (unsigned int)(v27 + 1);
      v30 = v27 + 5;
      v31 = &v35[v29];
      v35[v28] = 95;
      v32 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v9 + 1184) + 18LL);
      v31[3] = `HexFromUchar'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(a1 + 8 * v9 + 1184) + 18LL) & 0xF];
      v31[2] = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v32 >> 4];
      v31[1] = `HexFromUchar'::`2'::hexDigits[((unsigned int)v32 >> 8) & 0xF];
      *v31 = `HexFromUchar'::`2'::hexDigits[v32 >> 12];
      v33 = &v35[v30];
      v34 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8 * v9 + 1184) + 16LL);
      v33[3] = `HexFromUchar'::`2'::hexDigits[*(_WORD *)(*(_QWORD *)(a1 + 8 * v9 + 1184) + 16LL) & 0xF];
      v33[2] = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v34 >> 4];
      v33[1] = `HexFromUchar'::`2'::hexDigits[((unsigned int)v34 >> 8) & 0xF];
      *v33 = `HexFromUchar'::`2'::hexDigits[v34 >> 12];
      v35[v30 + 4] = 46;
      goto LABEL_23;
    }
    v22 = v18 + 4;
    v23 = 8;
    v24 = (__int64)v12;
  }
  v21 = SerialNumberFromNvmeId(v24, v23, v22, v15);
LABEL_23:
  if ( v21 )
    return v21;
  *v19 = v17;
  result = 0LL;
  *(_BYTE *)(a2 + 3) = 1;
  return result;
}
