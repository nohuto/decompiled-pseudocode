/*
 * XREFs of USBCntrlGetSetDbLevel @ 0x1C001F7B0
 * Callers:
 *     <none>
 * Callees:
 *     log10 @ 0x1C0006938 (log10.c)
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 *     pow @ 0x1C00074F0 (pow.c)
 */

__int64 __fastcall USBCntrlGetSetDbLevel(__int64 a1, __int64 a2, int *a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v7; // r15d
  __int64 v9; // r11
  __int64 v10; // r13
  unsigned int *v11; // rsi
  bool v12; // zf
  int v13; // ebp
  void *v14; // r10
  int v15; // ebx
  int v16; // edi
  double v17; // xmm0_8
  float v18; // xmm2_4
  int v19; // eax
  unsigned int v20; // eax
  int v21; // edi
  __int64 v22; // rdx
  unsigned int v23; // ecx
  int v24; // edx
  int v25; // edx
  int v26; // eax
  float v27; // xmm1_4
  unsigned int v30; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v7 = a5;
  v9 = a1;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v11 = (unsigned int *)(*(_QWORD *)(a2 + 128) + 32LL * a4);
  v12 = *(_DWORD *)(a2 + 76) == 8;
  v30 = 0;
  if ( v12 )
  {
    v14 = USBHwGetSetShort;
    v13 = 256;
    if ( *(_BYTE *)(v10 + 6) && (a5 & 0x80u) == 0 )
    {
      v15 = v11[7];
      v16 = v11[6];
      v17 = pow(10.0, (float)((float)((float)*a3 * 0.000015258789) - (float)((float)v15 * 0.000015258789)) / 20.0);
      v9 = a1;
      v14 = USBHwGetSetShort;
      v18 = v17;
      *a3 = (int)(float)((float)(v18 * (float)(v15 - v16)) + (float)v16);
    }
  }
  else
  {
    v13 = 0x4000;
    v14 = USBHwGetSetByte;
  }
  if ( (v7 & 0x80) == 0 )
  {
    v19 = *a3;
    if ( *a3 <= (int)v11[7] )
    {
      if ( v19 < (int)v11[6] )
      {
        v20 = 0xFF800000 / v13;
        goto LABEL_10;
      }
    }
    else
    {
      v19 = v11[7];
    }
    v20 = v19 / v13;
LABEL_10:
    v30 = v20;
  }
  v21 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int *, _BYTE))v14)(
          v9,
          *(unsigned int *)(a2 + 80),
          v11[2],
          (unsigned int)(*(_DWORD *)(a2 + 76) - 6),
          &v30,
          v7);
  if ( v21 >= 0 )
  {
    if ( (v7 & 0x80) != 0 )
    {
      if ( v7 == 131 && (v22 = *(_QWORD *)(v10 + 32), *(_WORD *)(v22 + 8) == 3468) )
      {
        v23 = v30;
        if ( *(_WORD *)(v22 + 10) == 1 )
          v23 = 0;
        v30 = v23;
      }
      else
      {
        LOWORD(v23) = v30;
      }
      v24 = (char)v23;
      if ( v13 == 256 )
        v24 = (__int16)v23;
      v25 = v13 * v24;
      *a3 = v25;
      if ( *(_DWORD *)(a2 + 76) == 8 )
      {
        if ( *(_BYTE *)(v10 + 6) )
        {
          v26 = *(_DWORD *)(a2 + 96);
          if ( _bittest(&v26, v31) )
          {
            v27 = log10((float)((float)(int)(v25 - v11[6]) / (float)(int)(v11[7] - v11[6])));
            *a3 = (int)(float)((float)(v27 * 20.0) * 65536.0);
          }
        }
      }
    }
    *a6 = 4;
  }
  return (unsigned int)v21;
}
