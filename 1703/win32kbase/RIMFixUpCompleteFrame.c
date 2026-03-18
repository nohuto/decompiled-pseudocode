/*
 * XREFs of RIMFixUpCompleteFrame @ 0x1C010E5D0
 * Callers:
 *     rimProcessInput @ 0x1C0099D80 (rimProcessInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     traceFrame @ 0x1C010DDF0 (traceFrame.c)
 */

__int64 __fastcall RIMFixUpCompleteFrame(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char v4; // r15
  __int64 v7; // r14
  int v8; // ebp
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  unsigned int i; // ebp
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rbp
  __int64 j; // rsi
  _QWORD *v20; // rcx

  v4 = *(_BYTE *)(a1 + 784);
  v7 = a2;
  v8 = 0;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    58,
    (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
  if ( v4 == 1 )
    ProbeForWrite((volatile void *)a3, *(unsigned int *)a4, 8u);
  v10 = *(_QWORD *)(v7 + 352);
  if ( v10 )
  {
    *(_QWORD *)(a3 + 32) = v10;
    v8 = 1;
  }
  v11 = a4[9];
  if ( v11 )
    *(_QWORD *)(a3 + 72) = a3 + v11 - (_QWORD)a4;
  v12 = a4[11];
  if ( v12 )
  {
    v13 = v12 - (_QWORD)a4;
    v14 = (_QWORD *)(v13 + a3);
    *(_QWORD *)(a3 + 88) = v13 + a3;
    if ( v8 )
    {
      for ( i = 0; i < *(_DWORD *)(a3 + 24); v14 += 21 )
      {
        if ( v4 == 1 )
          ProbeForWrite(v14, 0xA8uLL, 8u);
        ++i;
        v14[4] = *(_QWORD *)(v7 + 352);
      }
    }
    traceFrame(a3);
  }
  v16 = a4[10];
  if ( v16 )
  {
    v17 = v16 - (_QWORD)a4;
    v18 = (_QWORD *)(v17 + a3);
    *(_QWORD *)(a3 + 80) = v17 + a3;
    for ( j = a4[10]; j; j = *(_QWORD *)(j + 16) )
    {
      if ( *(_QWORD *)(j + 8) )
      {
        if ( v4 == 1 )
          ProbeForWrite(v18, 0x18uLL, 8u);
        v18[1] = a3 + *(_QWORD *)(j + 8) - (_QWORD)a4;
      }
      if ( *(_QWORD *)(j + 16) )
      {
        if ( v4 == 1 )
          ProbeForWrite(v18, 0x18uLL, 8u);
        v20 = (_QWORD *)(a3 + *(_QWORD *)(j + 16) - (_QWORD)a4);
        v18[2] = v20;
        v18 = v20;
      }
    }
  }
  LOBYTE(v9) = 3;
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           v9,
           19,
           59,
           (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
}
