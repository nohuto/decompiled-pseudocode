/*
 * XREFs of RIMFixUpCompleteFrame @ 0x1C010D518
 * Callers:
 *     rimProcessInput @ 0x1C00A4A80 (rimProcessInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     traceFrame @ 0x1C010CDDC (traceFrame.c)
 */

__int64 __fastcall RIMFixUpCompleteFrame(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char v4; // r15
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rsi
  unsigned int i; // ebp
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rbp
  __int64 j; // rsi
  _QWORD *v19; // rcx

  v4 = *(_BYTE *)(a1 + 784);
  v8 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x3Au,
    (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
  if ( v4 == 1 )
    ProbeForWrite((volatile void *)a3, *(unsigned int *)a4, 8u);
  v9 = *(_QWORD *)(a2 + 352);
  if ( v9 )
  {
    *(_QWORD *)(a3 + 32) = v9;
    v8 = 1;
  }
  v10 = a4[9];
  if ( v10 )
    *(_QWORD *)(a3 + 72) = a3 + v10 - (_QWORD)a4;
  v11 = a4[11];
  if ( v11 )
  {
    v12 = v11 - (_QWORD)a4;
    v13 = (_QWORD *)(v12 + a3);
    *(_QWORD *)(a3 + 88) = v12 + a3;
    if ( v8 )
    {
      for ( i = 0; i < *(_DWORD *)(a3 + 24); v13 += 21 )
      {
        if ( v4 == 1 )
          ProbeForWrite(v13, 0xA8uLL, 8u);
        ++i;
        v13[4] = *(_QWORD *)(a2 + 352);
      }
    }
    traceFrame(a3);
  }
  v15 = a4[10];
  if ( v15 )
  {
    v16 = v15 - (_QWORD)a4;
    v17 = (_QWORD *)(v16 + a3);
    *(_QWORD *)(a3 + 80) = v16 + a3;
    for ( j = a4[10]; j; j = *(_QWORD *)(j + 16) )
    {
      if ( *(_QWORD *)(j + 8) )
      {
        if ( v4 == 1 )
          ProbeForWrite(v17, 0x18uLL, 8u);
        v17[1] = a3 + *(_QWORD *)(j + 8) - (_QWORD)a4;
      }
      if ( *(_QWORD *)(j + 16) )
      {
        if ( v4 == 1 )
          ProbeForWrite(v17, 0x18uLL, 8u);
        v19 = (_QWORD *)(a3 + *(_QWORD *)(j + 16) - (_QWORD)a4);
        v17[2] = v19;
        v17 = v19;
      }
    }
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x13u,
           0x3Bu,
           (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
}
