/*
 * XREFs of PerfControlCpcSingleRegister @ 0x1C0006B10
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0007288 (PerformanceFromPercentage.c)
 *     ReadIoMemRaw @ 0x1C0008BDC (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0008CF0 (WriteIoMemRaw.c)
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
  char v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rax
  char v17; // r9
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // rax
  char v21; // r9
  __int64 v22; // r10
  __int64 v23; // r11

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
        IoMemRaw = v15 & ~v14 | v14 & (v12 << v13);
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
        v16 = PerformanceFromPercentage(a1, v6);
        IoMemRaw = v19 & ~v18 | v18 & (v16 << v17);
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
        v20 = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
        IoMemRaw = v23 & ~v22 | v22 & (v20 << v21);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
      }
    }
    WriteIoMemRaw(a1 + 120, IoMemRaw, v10);
  }
}
