/*
 * XREFs of PerfControlCpcSingleRegister @ 0x1C0006850
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0006F7C (PerformanceFromPercentage.c)
 *     ReadIoMemRaw @ 0x1C0008894 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C00089A8 (WriteIoMemRaw.c)
 */

void __fastcall PerfControlCpcSingleRegister(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  _BYTE *v8; // rbx
  __int64 IoMemRaw; // r11
  __int64 v10; // r8
  unsigned __int8 v11; // cl
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // r11

  if ( a3 || a4 )
  {
    v6 = *(_DWORD *)(a2 + 20);
    v7 = *(_DWORD *)(a2 + 16);
    v8 = *(_BYTE **)(a1 + 112);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
    IoMemRaw = ReadIoMemRaw(a1 + 120);
    v10 = 1LL;
    if ( *(_BYTE *)(a1 + 93) )
    {
      v11 = v8[69];
      if ( *(_BYTE *)(a2 + 36) )
      {
        if ( v11 < 0x40u || v8[70] )
          IoMemRaw &= ~(((1LL << v11) - 1) << v8[70]);
        else
          IoMemRaw = 0LL;
      }
      else if ( v11 < 0x40u || v8[70] )
      {
        IoMemRaw = IoMemRaw & ~(((1LL << v11) - 1) << v8[70]) | (((1LL << v11) - 1) << v8[70]) & (*(_QWORD *)a2 << v8[70]);
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
        v12 = PerformanceFromPercentage(a1, v7);
        IoMemRaw = v14 & ~v13 | v13 & (v12 << v8[82]);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, v7);
      }
      v10 = 1LL;
    }
    if ( *(_BYTE *)(a1 + 95) )
    {
      if ( v8[93] < 0x40u || v8[94] )
      {
        v15 = PerformanceFromPercentage(a1, v6);
        IoMemRaw = v17 & ~v16 | v16 & (v15 << v8[94]);
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
        v18 = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
        IoMemRaw = v20 & ~v19 | v19 & (v18 << v8[106]);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
      }
    }
    WriteIoMemRaw(a1 + 120, IoMemRaw, v10);
  }
}
