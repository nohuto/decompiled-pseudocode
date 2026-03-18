/*
 * XREFs of ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0137E70
 * Callers:
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0137CF8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E84A0 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     GreGetDIBitsInternal @ 0x1C00800D0 (GreGetDIBitsInternal.c)
 *     _SelectPalette @ 0x1C00E6528 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1C01083C0 (xxxRealizePalette.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     UIntMult @ 0x1C019B168 (UIntMult.c)
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
  HDC CompatibleDC; // rsi
  __int64 v17; // r14
  BOOL v18; // edi
  __int64 ThreadWin32Thread; // rax
  UINT v21; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v22[3]; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int16 v23[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 uMultiplicand; // [rsp+74h] [rbp-25h]
  __int16 v25; // [rsp+80h] [rbp-19h]
  __int16 v26; // [rsp+82h] [rbp-17h]
  _OWORD v27[6]; // [rsp+90h] [rbp-9h] BYREF
  UINT puResult; // [rsp+118h] [rbp+7Fh] BYREF

  if ( (unsigned int)GreExtGetObjectW(a1, 32LL, v23) )
  {
    v5 = v25 * v26;
    if ( (unsigned __int16)(v25 * v26) > 1u )
    {
      v6 = 4;
      if ( v5 > 4u )
      {
        if ( v5 > 8u )
        {
          if ( *(_WORD *)(gptiCurrent + 552LL) < 0x400u )
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
    memset(v27, 0, 0x28uLL);
    v7 = HIDWORD(uMultiplicand);
    LODWORD(v27[1]) = 0;
    LODWORD(v27[0]) = 40;
    *(_QWORD *)((char *)v27 + 4) = uMultiplicand;
    WORD6(v27[0]) = 1;
    HIWORD(v27[0]) = v6;
    if ( UIntMult(uMultiplicand, v6, &puResult) >= 0 && UIntMult(((puResult + 31) >> 3) & 0x1FFFFFFC, v7, &v21) >= 0 )
    {
      v9 = 0;
      if ( v6 > 8u )
      {
        if ( ((v6 - 16) & 0xFFEF) == 0 )
        {
          v9 = 12;
          LODWORD(v27[1]) = 3;
        }
      }
      else
      {
        v9 = 4 * (1 << v8);
      }
      v10 = v21;
      v11 = v9 + 40 + v21;
      if ( v11 >= v9 + 40 )
      {
        v12 = Win32AllocPool(v11, 1650684757LL);
        v13 = (struct tagBITMAPINFO *)v12;
        if ( v12 )
        {
          if ( a3 )
            *a3 = v11;
          v14 = v27[1];
          *(_OWORD *)v12 = v27[0];
          v15 = *(_QWORD *)&v27[2];
          *(_OWORD *)(v12 + 16) = v14;
          *(_QWORD *)(v12 + 32) = v15;
          CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 48LL));
          if ( CompatibleDC )
          {
            v17 = 0LL;
            PushW32ThreadLock((__int64)v13, v22, (__int64)Win32FreePool);
            if ( a2 )
            {
              v17 = SelectPalette((__int64)CompatibleDC, a2, 0);
              xxxRealizePalette(CompatibleDC);
            }
            v18 = GreGetDIBitsInternal(
                    CompatibleDC,
                    (__int64)a1,
                    0,
                    v7,
                    (__int64)v13 + v13->bmiHeader.biSize + v9,
                    v13,
                    0,
                    v10,
                    v13->bmiHeader.biSize + v9) != 0;
            if ( v17 )
            {
              SelectPalette((__int64)CompatibleDC, v17, 0);
              xxxRealizePalette(CompatibleDC);
            }
            GreDeleteDC(CompatibleDC);
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)(ThreadWin32Thread + 16) = v22[0];
            if ( v18 )
              return v13;
          }
          Win32FreePool(v13);
        }
      }
    }
  }
  return 0LL;
}
