/*
 * XREFs of PerfControlCpcSingleRegisterHidden @ 0x1C0003F60
 * Callers:
 *     <none>
 * Callees:
 *     WriteIoMemRawHidden @ 0x1C00035E8 (WriteIoMemRawHidden.c)
 *     PerformanceFromPercentage @ 0x1C00043B8 (PerformanceFromPercentage.c)
 */

void __fastcall PerfControlCpcSingleRegisterHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // r11
  unsigned int v7; // ebp
  __int64 v8; // rdx
  _BYTE *v9; // rdi
  unsigned __int8 v10; // cl
  __int64 v11; // rax
  char v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rax
  char v16; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // rax
  char v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  unsigned __int8 v23; // cl

  if ( a3 || a4 )
  {
    LODWORD(v6) = 0;
    v7 = *(_DWORD *)(a2 + 20);
    v8 = *(unsigned int *)(a2 + 16);
    v9 = *(_BYTE **)(a1 + 112);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
    if ( *(_BYTE *)(a1 + 93) )
    {
      v10 = v9[69];
      if ( !*(_BYTE *)(a2 + 36) )
      {
        if ( v10 < 0x40u || v9[70] )
          v6 = (*(_QWORD *)a2 << v9[70]) & (((1LL << v10) - 1) << v9[70]);
        else
          v6 = *(_QWORD *)a2;
      }
    }
    if ( *(_BYTE *)(a1 + 94) )
    {
      if ( v9[81] < 0x40u || v9[82] )
      {
        v11 = PerformanceFromPercentage(a1, v8);
        v6 = v14 & ~v13 | v13 & (v11 << v12);
      }
      else
      {
        LODWORD(v6) = PerformanceFromPercentage(a1, v8);
      }
    }
    if ( *(_BYTE *)(a1 + 95) )
    {
      if ( v9[93] < 0x40u || v9[94] )
      {
        v15 = PerformanceFromPercentage(a1, v7);
        v6 = v18 & ~v17 | v17 & (v15 << v16);
      }
      else
      {
        LODWORD(v6) = PerformanceFromPercentage(a1, v7);
      }
    }
    if ( *(_BYTE *)(a1 + 98) )
    {
      if ( v9[105] < 0x40u || v9[106] )
      {
        v19 = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
        v6 = v22 & ~v21 | v21 & (v19 << v20);
      }
      else
      {
        LODWORD(v6) = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
      }
    }
    if ( *(_BYTE *)(a1 + 96) )
    {
      v23 = v9[213];
      if ( v23 < 0x40u || v9[214] )
        LODWORD(v6) = v6 & ~(unsigned int)(((1LL << v23) - 1) << v9[214]) | (((1LL << v23) - 1) << v9[214]) & ((255 * *(_DWORD *)(a2 + 28) / 0x64u) << v9[214]);
      else
        LODWORD(v6) = 255 * *(_DWORD *)(a2 + 28) / 0x64u;
    }
    WriteIoMemRawHidden(*(unsigned int *)(*(_QWORD *)a1 + 80LL), a1 + 120, ~*(_QWORD *)(a1 + 144), v6);
  }
}
