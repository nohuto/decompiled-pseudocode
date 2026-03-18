/*
 * XREFs of Crashdump_UsbDevice_Initialize @ 0x1C003B728
 * Callers:
 *     Crashdump_InitializeDeviceContext @ 0x1C0037AF0 (Crashdump_InitializeDeviceContext.c)
 * Callees:
 *     Crashdump_CommonBufferAcquire @ 0x1C0037584 (Crashdump_CommonBufferAcquire.c)
 */

__int64 __fastcall Crashdump_UsbDevice_Initialize(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        char a4,
        _OWORD *a5,
        __int64 a6,
        int a7)
{
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // edx

  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a2 + 328;
  *(_QWORD *)(a1 + 24) = a6;
  *(_DWORD *)(a1 + 372) = a7;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a5;
  *(_OWORD *)(a1 + 80) = *a5;
  v8 = 0;
  *(_OWORD *)(a1 + 96) = a5[1];
  if ( a3 )
  {
    *(_BYTE *)(a1 + 369) = a3[16];
    *(_BYTE *)(a1 + 370) = a3[17];
    v8 = a3[18];
  }
  else
  {
    *(_WORD *)(a1 + 368) = 257;
    *(_BYTE *)(a1 + 370) = 0;
  }
  *(_BYTE *)(a1 + 371) = v8;
  v9 = a1 + 32;
  v10 = *(_QWORD *)a1;
  v11 = 2048;
  if ( (*(_DWORD *)(**(_QWORD **)(a1 + 8) + 104LL) & 4) == 0 )
    v11 = 1024;
  return Crashdump_CommonBufferAcquire(v10, v11, v9);
}
