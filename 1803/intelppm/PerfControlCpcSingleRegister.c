/*
 * XREFs of PerfControlCpcSingleRegister @ 0x1C00083A0
 * Callers:
 *     <none>
 * Callees:
 *     ReadIoMemRaw @ 0x1C0007C14 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0007DAC (WriteIoMemRaw.c)
 *     PerformanceFromPercentage @ 0x1C0008600 (PerformanceFromPercentage.c)
 */

void __fastcall PerfControlCpcSingleRegister(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  _BYTE *v8; // rbx
  __int64 IoMemRaw; // r11
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
        IoMemRaw = v14 & ~v13 | v13 & (v11 << v12);
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
        v15 = PerformanceFromPercentage(a1, v6);
        IoMemRaw = v18 & ~v17 | v17 & (v15 << v16);
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
        v19 = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
        IoMemRaw = v22 & ~v21 | v21 & (v19 << v20);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
      }
    }
    WriteIoMemRaw(a1 + 120, IoMemRaw);
  }
}
