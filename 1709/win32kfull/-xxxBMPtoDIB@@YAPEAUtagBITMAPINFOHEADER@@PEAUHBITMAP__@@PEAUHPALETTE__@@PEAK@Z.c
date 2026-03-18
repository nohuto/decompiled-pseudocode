/*
 * XREFs of ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C013ECE8
 * Callers:
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C013EB70 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F44C0 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreGetDIBitsInternal @ 0x1C0018D1C (GreGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _SelectPalette @ 0x1C00F8348 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1C010EC10 (xxxRealizePalette.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     UIntMult @ 0x1C01B8B58 (UIntMult.c)
 */

struct tagBITMAPINFO *__fastcall xxxBMPtoDIB(HBRUSH a1, __int64 a2, unsigned int *a3)
{
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // bx
  unsigned int v7; // r12d
  char v8; // r10
  unsigned int v9; // edi
  UINT v10; // r15d
  UINT v11; // esi
  __int64 v12; // rax
  struct tagBITMAPINFO *v13; // rbx
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // rdx
  HDC CompatibleDC; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  BOOL v21; // edi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 ThreadWin32Thread; // rax
  UINT v27; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-41h] BYREF
  char v29[4]; // [rsp+70h] [rbp-29h] BYREF
  __int64 uMultiplicand; // [rsp+74h] [rbp-25h]
  __int16 v31; // [rsp+80h] [rbp-19h]
  __int16 v32; // [rsp+82h] [rbp-17h]
  _OWORD v33[6]; // [rsp+90h] [rbp-9h] BYREF
  UINT puResult; // [rsp+118h] [rbp+7Fh] BYREF

  if ( (unsigned int)GreExtGetObjectW(a1, 32LL, v29) )
  {
    v5 = v31 * v32;
    if ( (unsigned __int16)(v31 * v32) > 1u )
    {
      v6 = 4;
      if ( v5 > 4u )
      {
        if ( v5 > 8u )
        {
          if ( *(_WORD *)(gptiCurrent + 608LL) < 0x400u )
          {
            v6 = 24;
          }
          else if ( v5 > 0x10u )
          {
            v6 = 24;
            if ( v5 > 0x18u )
              v6 = 32;
          }
          else
          {
            v6 = 16;
          }
        }
        else
        {
          v6 = 8;
        }
      }
    }
    else
    {
      v6 = 1;
    }
    memset(v33, 0, 0x28uLL);
    v7 = HIDWORD(uMultiplicand);
    LODWORD(v33[1]) = 0;
    LODWORD(v33[0]) = 40;
    *(_QWORD *)((char *)v33 + 4) = uMultiplicand;
    WORD6(v33[0]) = 1;
    HIWORD(v33[0]) = v6;
    if ( UIntMult(uMultiplicand, v6, &puResult) >= 0 && UIntMult(((puResult + 31) >> 3) & 0x1FFFFFFC, v7, &v27) >= 0 )
    {
      v9 = 0;
      if ( v6 > 8u )
      {
        if ( ((v6 - 16) & 0xFFEF) == 0 )
        {
          v9 = 12;
          LODWORD(v33[1]) = 3;
        }
      }
      else
      {
        v9 = 4 * (1 << v8);
      }
      v10 = v27;
      v11 = v9 + 40 + v27;
      if ( v11 >= v9 + 40 )
      {
        v12 = Win32AllocPool(v11, 1650684757LL);
        v13 = (struct tagBITMAPINFO *)v12;
        if ( v12 )
        {
          if ( a3 )
            *a3 = v11;
          v14 = v33[1];
          *(_OWORD *)v12 = v33[0];
          v15 = *(_QWORD *)&v33[2];
          *(_OWORD *)(v12 + 16) = v14;
          *(_QWORD *)(v12 + 32) = v15;
          CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 48LL));
          if ( CompatibleDC )
          {
            v20 = 0LL;
            PushW32ThreadLock((__int64)v13, v28, (__int64)Win32FreePool, v19);
            if ( a2 )
            {
              v20 = SelectPalette((__int64)CompatibleDC, a2, 0);
              xxxRealizePalette(CompatibleDC);
            }
            v21 = GreGetDIBitsInternal(
                    CompatibleDC,
                    (__int64)a1,
                    0,
                    v7,
                    (__int64)v13 + v13->bmiHeader.biSize + v9,
                    v13,
                    0,
                    v10,
                    v13->bmiHeader.biSize + v9) != 0;
            if ( v20 )
            {
              SelectPalette((__int64)CompatibleDC, v20, 0);
              xxxRealizePalette(CompatibleDC);
            }
            GreDeleteDC(CompatibleDC);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
            *(_QWORD *)(ThreadWin32Thread + 16) = v28[0];
            if ( v21 )
              return v13;
          }
          Win32FreePool(v13, v16, v18);
        }
      }
    }
  }
  return 0LL;
}
