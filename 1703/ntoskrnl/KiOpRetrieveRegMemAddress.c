/*
 * XREFs of KiOpRetrieveRegMemAddress @ 0x14016718C
 * Callers:
 *     KiOp_Div @ 0x140167090 (KiOp_Div.c)
 *     KiOp_SGDTSIDT @ 0x140206E00 (KiOp_SGDTSIDT.c)
 *     KiOp_SLDTSTRSMSW @ 0x140206F90 (KiOp_SLDTSTRSMSW.c)
 * Callees:
 *     KiOpComputeLinearAddress @ 0x1402068B8 (KiOpComputeLinearAddress.c)
 */

__int64 __fastcall KiOpRetrieveRegMemAddress(__int64 a1, __int64 *a2, _BYTE *a3, int *a4)
{
  char v4; // bp
  unsigned __int8 v6; // cl
  __int64 v7; // r11
  __int64 v8; // rdi
  int v12; // ebx
  __int64 v13; // r11
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned __int8 v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a1 + 81);
  v6 = *(_BYTE *)(a1 + 65);
  v7 = 0LL;
  v8 = 0LL;
  if ( (v6 & 0xC0) == 0xC0 )
  {
    v12 = 1;
    v13 = (v6 & 7u) + 8;
    if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
      v13 = v6 & 7;
    v4 = 0;
    v7 = *(_QWORD *)(a1 + 24) + 120LL + 8 * v13;
  }
  else
  {
    if ( (v6 & 7) == 4 )
    {
      v17 = *(_BYTE *)(a1 + 66);
      if ( (v17 & 7) != 5 || v6 >= 0x40u )
      {
        v18 = (v17 & 7) + 8;
        if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
          v18 = v17 & 7;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * v18 + 120);
      }
      v19 = (v17 >> 3) & 7;
      v20 = v19 + 8;
      if ( (*(_BYTE *)(a1 + 64) & 2) == 0 )
        v20 = v19;
      if ( (_DWORD)v20 != 4 )
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v20 + 120) << (v17 >> 6);
    }
    else
    {
      v21 = v6 & 7;
      if ( v6 < 0x40u && v21 == 5 )
      {
        if ( !*(_BYTE *)(a1 + 58) )
          v7 = *(_QWORD *)(a1 + 16);
      }
      else
      {
        v22 = v21 + 8;
        if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
          v22 = v21;
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v22 + 120);
      }
    }
    v12 = 0;
  }
  v14 = 0;
  v15 = v7 + v8 + *(int *)(a1 + 68);
  v24 = v15;
  if ( !v12 && (*(_DWORD *)(a1 + 52) & 1) != 0 )
  {
    v23 = KiOpComputeLinearAddress(a1, &v24);
    v15 = v24;
    v14 = v23;
  }
  *a2 = v15;
  *a3 = v4;
  if ( a4 )
    *a4 = v12;
  return v14;
}
