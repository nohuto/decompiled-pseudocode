/*
 * XREFs of ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01AAEC8
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0067FFC (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall PreventInterMonitorBlts(struct tagCVR *a1)
{
  int v2; // r8d
  int v3; // edx
  int v4; // r8d
  __int64 i; // rsi
  __int128 v6; // xmm0
  __int64 v7; // rax
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // r14
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rbx
  __int128 v21; // [rsp+38h] [rbp-39h] BYREF
  __int128 v22; // [rsp+48h] [rbp-29h] BYREF
  __int64 v23; // [rsp+58h] [rbp-19h] BYREF
  __int64 v24; // [rsp+60h] [rbp-11h]
  __int64 v25; // [rsp+68h] [rbp-9h] BYREF
  __int64 v26; // [rsp+70h] [rbp-1h]
  __int64 v27; // [rsp+78h] [rbp+7h] BYREF
  __int64 v28; // [rsp+80h] [rbp+Fh]
  __int64 v29; // [rsp+88h] [rbp+17h] BYREF
  __int64 v30; // [rsp+90h] [rbp+1Fh]

  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)a1 + 56)) )
  {
    v2 = *((_DWORD *)a1 + 19);
    v3 = -*((_DWORD *)a1 + 18);
    LODWORD(v25) = *((_DWORD *)a1 + 14) - *((_DWORD *)a1 + 18);
    v4 = -v2;
    LODWORD(v26) = v3 + *((_DWORD *)a1 + 16);
    HIDWORD(v25) = v4 + *((_DWORD *)a1 + 15);
    HIDWORD(v26) = v4 + *((_DWORD *)a1 + 17);
    for ( i = *(_QWORD *)(gpDispInfo + 96LL); i; i = *(_QWORD *)(i + 56) )
    {
      v6 = *GetMonitorRect(&v22, i);
      v7 = *(_QWORD *)(i + 40);
      v21 = v6;
      if ( (*(_DWORD *)(v7 + 24) & 1) != 0 && (unsigned int)IntersectRect(&v29, (int *)&v25, (int *)&v21) )
      {
        v8 = *((_DWORD *)a1 + 18);
        v9 = *((_DWORD *)a1 + 19);
        v10 = v29;
        v11 = v30;
        v12 = v9 + HIDWORD(v29);
        v13 = v29 + v8;
        HIDWORD(v23) = v9 + HIDWORD(v29);
        v14 = v30 + v8;
        LODWORD(v23) = v29 + v8;
        LODWORD(v24) = v30 + v8;
        HIDWORD(v24) = v9 + HIDWORD(v30);
        IntersectRect(&v27, (int *)&v23, (int *)&v21);
        v19 = v27 - v23;
        if ( v27 == v23 )
          v19 = v28 - v24;
        if ( v19 )
        {
          if ( !*((_QWORD *)a1 + 15) )
            *((_QWORD *)a1 + 15) = CreateEmptyRgn(v16, v15, v17, v18);
          GreSetRectRgn(ghrgnInv2, v13, v12, v14, HIDWORD(v24));
          GreSetRectRgn(ghrgnGDC, (unsigned int)v27, HIDWORD(v27), (unsigned int)v28, HIDWORD(v28));
          GreCombineRgn(ghrgnInv2, ghrgnInv2, ghrgnGDC, 4LL);
          GreCombineRgn(*((_QWORD *)a1 + 15), *((_QWORD *)a1 + 15), ghrgnInv2, 2LL);
        }
        else
        {
          v20 = v10 - v25;
          if ( !v20 )
            v20 = v11 - v26;
          if ( !v20 )
            return;
        }
      }
    }
  }
}
