/*
 * XREFs of ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01A3974
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00682F4 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall PreventInterMonitorBlts(struct tagCVR *a1)
{
  int v2; // r8d
  int v3; // edx
  int v4; // r8d
  __int64 i; // rbx
  int *v6; // r8
  int *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h]
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]

  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 56)) )
  {
    v2 = *((_DWORD *)a1 + 19);
    v3 = -*((_DWORD *)a1 + 18);
    LODWORD(v18) = *((_DWORD *)a1 + 14) - *((_DWORD *)a1 + 18);
    v4 = -v2;
    LODWORD(v19) = v3 + *((_DWORD *)a1 + 16);
    HIDWORD(v18) = v4 + *((_DWORD *)a1 + 15);
    HIDWORD(v19) = v4 + *((_DWORD *)a1 + 17);
    for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 52LL) & 1) != 0 )
        {
          v6 = (int *)(*(_QWORD *)(i + 40) + 44LL);
        }
        else
        {
          v6 = (int *)((W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                  + 52LL) & 1) != 0
                     ? *(_QWORD *)(i + 40) + 60LL
                     : *(_QWORD *)(i + 40) + 28LL);
        }
        if ( (unsigned int)IntersectRect((int *)&v16, (int *)&v18, v6) )
        {
          LODWORD(v14) = *((_DWORD *)a1 + 18) + v16;
          LODWORD(v15) = *((_DWORD *)a1 + 18) + v17;
          HIDWORD(v14) = *((_DWORD *)a1 + 19) + HIDWORD(v16);
          HIDWORD(v15) = *((_DWORD *)a1 + 19) + HIDWORD(v17);
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 52LL) & 1) != 0 )
          {
            v7 = (int *)(*(_QWORD *)(i + 40) + 44LL);
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                               + 52LL) & 1) != 0 )
          {
            v7 = (int *)(*(_QWORD *)(i + 40) + 60LL);
          }
          else
          {
            v7 = (int *)(*(_QWORD *)(i + 40) + 28LL);
          }
          IntersectRect((int *)&v20, (int *)&v14, v7);
          v12 = v20 - v14;
          if ( v20 == v14 )
            v12 = v21 - v15;
          if ( v12 )
          {
            if ( !*((_QWORD *)a1 + 15) )
              *((_QWORD *)a1 + 15) = CreateEmptyRgn(v9, v8, v10, v11);
            GreSetRectRgn(ghrgnInv2, (unsigned int)v14, HIDWORD(v14), (unsigned int)v15, HIDWORD(v15));
            GreSetRectRgn(ghrgnGDC, (unsigned int)v20, HIDWORD(v20), (unsigned int)v21, HIDWORD(v21));
            GreCombineRgn(ghrgnInv2, ghrgnInv2, ghrgnGDC, 4LL);
            GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), ghrgnInv2, 2LL);
          }
          else
          {
            v13 = v16 - v18;
            if ( v16 == v18 )
              v13 = v17 - v19;
            if ( !v13 )
              return;
          }
        }
      }
    }
  }
}
