/*
 * XREFs of KiOpRetrieveRegMemAddress @ 0x14015B1C8
 * Callers:
 *     KiOp_Div @ 0x14015B0D0 (KiOp_Div.c)
 *     KiOp_SGDTSIDT @ 0x14020D7A0 (KiOp_SGDTSIDT.c)
 *     KiOp_SLDTSTRSMSW @ 0x14020D930 (KiOp_SLDTSTRSMSW.c)
 * Callees:
 *     KiOpComputeLinearAddress @ 0x14020D24C (KiOpComputeLinearAddress.c)
 */

__int64 __fastcall KiOpRetrieveRegMemAddress(__int64 a1, __int64 *a2, _BYTE *a3, int *a4)
{
  char v4; // bp
  unsigned __int8 v6; // cl
  __int64 v7; // rdi
  __int64 v8; // rsi
  char v9; // r11
  int v13; // ebx
  __int64 v14; // rdi
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned __int8 v18; // r9
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rax
  int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a1 + 81);
  v6 = *(_BYTE *)(a1 + 65);
  v7 = 0LL;
  v8 = 0LL;
  v9 = v6 >> 6;
  if ( v6 >> 6 == 3 )
  {
    v13 = 1;
    v14 = (v6 & 7u) + 8;
    if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
      v14 = v6 & 7;
    v4 = 0;
    v7 = *(_QWORD *)(a1 + 24) + 120LL + 8 * v14;
  }
  else
  {
    if ( (v6 & 7) == 4 )
    {
      v18 = *(_BYTE *)(a1 + 66);
      if ( (v18 & 7) != 5 || v9 )
      {
        v19 = (v18 & 7) + 8;
        if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
          v19 = v18 & 7;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v19 + 120);
      }
      v20 = (v18 >> 3) & 7;
      v21 = v20 + 8;
      if ( (*(_BYTE *)(a1 + 64) & 2) == 0 )
        v21 = v20;
      if ( (_DWORD)v21 != 4 )
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v21 + 120) << (v18 >> 6);
    }
    else
    {
      v22 = v6 & 7;
      if ( v9 || v22 != 5 )
      {
        v23 = v22 + 8;
        if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
          v23 = v22;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v23 + 120);
      }
      else if ( !*(_BYTE *)(a1 + 58) )
      {
        v7 = *(_QWORD *)(a1 + 16);
      }
    }
    v13 = 0;
  }
  v15 = 0;
  v16 = v7 + v8 + *(int *)(a1 + 68);
  v25 = v16;
  if ( !v13 && (*(_DWORD *)(a1 + 52) & 1) != 0 )
  {
    v24 = KiOpComputeLinearAddress(a1, &v25);
    v16 = v25;
    v15 = v24;
  }
  *a2 = v16;
  *a3 = v4;
  if ( a4 )
    *a4 = v13;
  return v15;
}
