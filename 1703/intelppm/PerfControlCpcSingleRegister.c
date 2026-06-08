/*
 * XREFs of PerfControlCpcSingleRegister @ 0x1C0007CF0
 * Callers:
 *     <none>
 * Callees:
 *     WriteIoMemRaw @ 0x1C000144C (WriteIoMemRaw.c)
 *     ReadIoMemRaw @ 0x1C00014D8 (ReadIoMemRaw.c)
 *     PerformanceFromPercentage @ 0x1C0001560 (PerformanceFromPercentage.c)
 */

void __fastcall PerfControlCpcSingleRegister(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  _BYTE *v8; // rbx
  unsigned __int64 IoMemRaw; // r11
  unsigned __int8 v10; // cl
  unsigned __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // r11
  unsigned __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // r11

  if ( a3 || a4 )
  {
    v6 = *(_DWORD *)(a2 + 20);
    v7 = *(_DWORD *)(a2 + 16);
    v8 = *(_BYTE **)(a1 + 112);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
    IoMemRaw = ReadIoMemRaw(a1 + 120);
    if ( *(_BYTE *)(a1 + 93) )
    {
      v10 = v8[69];
      if ( *(_BYTE *)(a2 + 36) )
      {
        if ( v10 < 0x40u || v8[70] )
          IoMemRaw &= ~(((1LL << v10) - 1) << v8[70]);
        else
          IoMemRaw = 0LL;
      }
      else if ( v10 < 0x40u || v8[70] )
      {
        IoMemRaw = IoMemRaw & ~(((1LL << v10) - 1) << v8[70]) | (((1LL << v10) - 1) << v8[70]) & (*(_QWORD *)a2 << v8[70]);
      }
      else
      {
        IoMemRaw = *(_QWORD *)a2;
      }
    }
    if ( *(_BYTE *)(a1 + 94) )
    {
      if ( v8[81] < 0x40u || v8[82] )
      {
        v11 = PerformanceFromPercentage(a1, v7);
        IoMemRaw = v13 & ~v12 | v12 & (v11 << v8[82]);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, v7);
      }
    }
    if ( *(_BYTE *)(a1 + 95) )
    {
      if ( v8[93] < 0x40u || v8[94] )
      {
        v14 = PerformanceFromPercentage(a1, v6);
        IoMemRaw = v16 & ~v15 | v15 & (v14 << v8[94]);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, v6);
      }
    }
    if ( *(_BYTE *)(a1 + 98) )
    {
      if ( v8[105] < 0x40u || v8[106] )
      {
        v17 = PerformanceFromPercentage(a1, *(_DWORD *)(a2 + 24));
        IoMemRaw = v19 & ~v18 | v18 & (v17 << v8[106]);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, *(_DWORD *)(a2 + 24));
      }
    }
    WriteIoMemRaw(a1 + 120, IoMemRaw);
  }
}
