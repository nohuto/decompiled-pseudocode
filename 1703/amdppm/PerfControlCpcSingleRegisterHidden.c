/*
 * XREFs of PerfControlCpcSingleRegisterHidden @ 0x1C0006B60
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0006F7C (PerformanceFromPercentage.c)
 *     WriteIoMemRawHidden @ 0x1C0008B9C (WriteIoMemRawHidden.c)
 */

void __fastcall PerfControlCpcSingleRegisterHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // r11
  unsigned int v7; // ebp
  __int64 v8; // rdx
  _BYTE *v9; // rbx
  unsigned __int8 v10; // cl
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // r11
  unsigned __int8 v20; // cl
  unsigned int v21; // r8d

  if ( a3 || a4 )
  {
    v6 = 0LL;
    v7 = *(_DWORD *)(a2 + 20);
    v8 = *(unsigned int *)(a2 + 16);
    v9 = *(_BYTE **)(a1 + 112);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
    if ( *(_BYTE *)(a1 + 93) && !*(_BYTE *)(a2 + 36) )
    {
      v10 = v9[69];
      if ( v10 < 0x40u || v9[70] )
        v6 = (*(_QWORD *)a2 << v9[70]) & (((1LL << v10) - 1) << v9[70]);
      else
        v6 = *(_QWORD *)a2;
    }
    if ( *(_BYTE *)(a1 + 94) )
    {
      if ( v9[81] < 0x40u || v9[82] )
      {
        v11 = PerformanceFromPercentage(a1, v8);
        v6 = v13 & ~v12 | v12 & (v11 << v9[82]);
      }
      else
      {
        v6 = PerformanceFromPercentage(a1, v8);
      }
    }
    if ( *(_BYTE *)(a1 + 95) )
    {
      if ( v9[93] < 0x40u || v9[94] )
      {
        v14 = PerformanceFromPercentage(a1, v7);
        v6 = v16 & ~v15 | v15 & (v14 << v9[94]);
      }
      else
      {
        v6 = PerformanceFromPercentage(a1, v7);
      }
    }
    if ( *(_BYTE *)(a1 + 98) )
    {
      if ( v9[105] < 0x40u || v9[106] )
      {
        v17 = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
        v6 = v19 & ~v18 | v18 & (v17 << v9[106]);
      }
      else
      {
        v6 = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
      }
    }
    if ( *(_BYTE *)(a1 + 96) )
    {
      v20 = v9[213];
      v21 = 255 * *(_DWORD *)(a2 + 28) / 0x64u;
      if ( v20 < 0x40u || v9[214] )
        v6 = v6 & ~(((1LL << v20) - 1) << v9[214]) | (((1LL << v20) - 1) << v9[214]) & ((unsigned __int64)v21 << v9[214]);
      else
        v6 = v21;
    }
    WriteIoMemRawHidden(*(unsigned int *)(*(_QWORD *)a1 + 80LL), a1 + 120, ~*(_QWORD *)(a1 + 144), v6);
  }
}
