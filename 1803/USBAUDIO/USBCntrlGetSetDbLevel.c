/*
 * XREFs of USBCntrlGetSetDbLevel @ 0x1C0024300
 * Callers:
 *     <none>
 * Callees:
 *     log10 @ 0x1C0008A88 (log10.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 *     pow @ 0x1C0009640 (pow.c)
 */

__int64 __fastcall USBCntrlGetSetDbLevel(__int64 a1, __int64 a2, int *a3, unsigned int a4, int a5, _DWORD *a6)
{
  __int64 v6; // r11
  int v7; // r15d
  __int64 v9; // rsi
  int v11; // r9d
  __int64 v12; // r13
  unsigned int *v13; // rsi
  int v14; // ebp
  void *v15; // r10
  int v16; // ebx
  int v17; // edi
  double v18; // xmm0_8
  float v19; // xmm2_4
  int v20; // eax
  unsigned int v21; // eax
  int v22; // edi
  __int64 v23; // rdx
  unsigned int v24; // ecx
  int v25; // edx
  int v26; // edx
  int v27; // eax
  float v28; // xmm1_4
  unsigned int v31; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v6 = a1;
  v7 = a5;
  v9 = a4;
  v11 = *(_DWORD *)(a2 + 76);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v13 = (unsigned int *)(*(_QWORD *)(a2 + 128) + 32 * v9);
  v31 = 0;
  if ( v11 == 8 )
  {
    v15 = USBHwGetSetShort;
    v14 = 256;
    v11 = 8;
    if ( *(_BYTE *)(v12 + 6) && (a5 & 0x80u) == 0 )
    {
      v16 = v13[7];
      v17 = v13[6];
      v18 = pow(10.0, (float)((float)((float)*a3 * 0.000015258789) - (float)((float)v16 * 0.000015258789)) / 20.0);
      v6 = a1;
      v15 = USBHwGetSetShort;
      v19 = v18;
      *a3 = (int)(float)((float)(v19 * (float)(v16 - v17)) + (float)v17);
      v11 = *(_DWORD *)(a2 + 76);
    }
  }
  else
  {
    v14 = 0x4000;
    v15 = USBHwGetSetByte;
  }
  if ( (v7 & 0x80) == 0 )
  {
    v20 = *a3;
    if ( *a3 <= (int)v13[7] )
    {
      if ( v20 < (int)v13[6] )
      {
        v21 = 0xFF800000 / v14;
        goto LABEL_10;
      }
    }
    else
    {
      v20 = v13[7];
    }
    v21 = v20 / v14;
LABEL_10:
    v31 = v21;
  }
  v22 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned int *, _BYTE))v15)(
          v6,
          *(unsigned int *)(a2 + 80),
          v13[2],
          (unsigned int)(v11 - 6),
          &v31,
          v7);
  if ( v22 >= 0 )
  {
    if ( (v7 & 0x80) != 0 )
    {
      if ( v7 == 131 && (v23 = *(_QWORD *)(v12 + 32), *(_WORD *)(v23 + 8) == 3468) )
      {
        v24 = v31;
        if ( *(_WORD *)(v23 + 10) == 1 )
          v24 = 0;
        v31 = v24;
      }
      else
      {
        LOWORD(v24) = v31;
      }
      v25 = (char)v24;
      if ( v14 == 256 )
        v25 = (__int16)v24;
      v26 = v14 * v25;
      *a3 = v26;
      if ( *(_DWORD *)(a2 + 76) == 8 )
      {
        if ( *(_BYTE *)(v12 + 6) )
        {
          v27 = *(_DWORD *)(a2 + 96);
          if ( _bittest(&v27, v32) )
          {
            v28 = log10((float)((float)(int)(v26 - v13[6]) / (float)(int)(v13[7] - v13[6])));
            *a3 = (int)(float)((float)(v28 * 20.0) * 65536.0);
          }
        }
      }
    }
    *a6 = 4;
  }
  return (unsigned int)v22;
}
