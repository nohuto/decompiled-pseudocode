/*
 * XREFs of KiOpRetrieveRegMemAddress @ 0x140185AD4
 * Callers:
 *     KiOp_Div @ 0x1401859E0 (KiOp_Div.c)
 *     KiOp_SGDTSIDT @ 0x14024BA80 (KiOp_SGDTSIDT.c)
 *     KiOp_SLDTSTRSMSW @ 0x14024BC10 (KiOp_SLDTSTRSMSW.c)
 * Callees:
 *     KiOpComputeLinearAddress @ 0x14024B5DC (KiOpComputeLinearAddress.c)
 */

__int64 __fastcall KiOpRetrieveRegMemAddress(__int64 a1, __int64 *a2, _BYTE *a3, int *a4)
{
  char v4; // bp
  unsigned __int8 v6; // cl
  __int64 v7; // rdi
  __int64 v8; // rsi
  char v9; // r11
  int v13; // ebx
  unsigned int v14; // ecx
  __int64 v15; // rdi
  unsigned int v16; // edx
  __int64 v17; // rcx
  unsigned __int8 v19; // r9
  char v20; // r8
  unsigned int v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rax
  int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a1 + 81);
  v6 = *(_BYTE *)(a1 + 65);
  v7 = 0LL;
  v8 = 0LL;
  v9 = v6 >> 6;
  if ( v6 >> 6 == 3 )
  {
    v13 = 1;
    v14 = v6 & 7;
    v15 = v14 + 8;
    if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
      v15 = v14;
    v4 = 0;
    v7 = *(_QWORD *)(a1 + 24) + 120LL + 8 * v15;
  }
  else
  {
    if ( (v6 & 7) == 4 )
    {
      v19 = *(_BYTE *)(a1 + 66);
      if ( (v19 & 7) != 5 || v9 )
      {
        v20 = *(_BYTE *)(a1 + 64);
        v21 = v19;
        v22 = (v19 & 7) + 8;
        if ( (v20 & 1) == 0 )
          v22 = v19 & 7;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v22 + 120);
      }
      else
      {
        v20 = *(_BYTE *)(a1 + 64);
        v21 = v19;
      }
      v23 = (v21 >> 3) & 7;
      v24 = v23 + 8;
      if ( (v20 & 2) == 0 )
        v24 = v23;
      if ( (_DWORD)v24 != 4 )
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v24 + 120) << (v19 >> 6);
    }
    else
    {
      v25 = v6 & 7;
      if ( v9 || v25 != 5 )
      {
        v26 = v25 + 8;
        if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
          v26 = v25;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v26 + 120);
      }
      else if ( !*(_BYTE *)(a1 + 58) )
      {
        v7 = *(_QWORD *)(a1 + 16);
      }
    }
    v13 = 0;
  }
  v16 = 0;
  v17 = v7 + v8 + *(int *)(a1 + 68);
  v28 = v17;
  if ( !v13 && (*(_DWORD *)(a1 + 52) & 1) != 0 )
  {
    v27 = KiOpComputeLinearAddress(a1, &v28);
    v17 = v28;
    v16 = v27;
  }
  *a2 = v17;
  *a3 = v4;
  if ( a4 )
    *a4 = v13;
  return v16;
}
