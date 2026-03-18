/*
 * XREFs of ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0120E28
 * Callers:
 *     NtGdiInvertRgn @ 0x1C0120D80 (NtGdiInvertRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0026EC0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C007AE9C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007F920 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     EngPaint @ 0x1C0122BC0 (EngPaint.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiInvertRgnInternal(HDC a1, HRGN a2)
{
  unsigned int v3; // ebx
  REGION *v4; // r14
  int v5; // edi
  int v6; // esi
  DC *v7; // rcx
  REGION *v8; // rcx
  DC *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  struct REGION *v12; // rax
  struct ECLIPOBJ *v13; // rdx
  DC *v14; // rdx
  DC *v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  REGION *v17[3]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-A8h] BYREF
  __m128i rclBounds; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v20[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+88h] [rbp-78h]
  char v22; // [rsp+98h] [rbp-68h]
  __int64 v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  __int128 v25; // [rsp+100h] [rbp+0h] BYREF
  CLIPOBJ pco; // [rsp+110h] [rbp+10h] BYREF
  __int64 v27; // [rsp+160h] [rbp+60h]
  int v28; // [rsp+168h] [rbp+68h]
  int v29; // [rsp+190h] [rbp+90h]
  __int64 v30; // [rsp+1A0h] [rbp+A0h]

  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( !v16[0] || (*((_DWORD *)v16[0] + 9) & 0x10000) != 0 )
    goto LABEL_22;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, (struct XDCOBJ *)v16, 516);
  v6 = *(_DWORD *)(*((_QWORD *)v16[0] + 10) + 352LL) & 0x802;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, a2, 1);
  if ( v17[0] )
  {
    if ( v6 == 2050 )
    {
LABEL_5:
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v17) == 1 )
        goto LABEL_36;
      v7 = v16[0];
      v25 = *(_OWORD *)((char *)v17[0] + 88);
      if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate((XDCOBJ *)v16, (struct ERECTL *)&v25);
        v7 = v16[0];
      }
      if ( !*((_QWORD *)v7 + 64) )
      {
LABEL_36:
        v5 = 1;
      }
      else
      {
        v23 = 0LL;
        v24 = 0LL;
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v20, (struct XDCOBJ *)v16, 0);
        v8 = v17[0];
        v9 = v16[0];
        if ( !v17[0] )
          *((_DWORD *)v16[0] + 9) |= 0x10u;
        *((_QWORD *)v9 + 191) = v8;
        v10 = *((_QWORD *)v16[0] + 64);
        if ( (v22 & 1) != 0 && (unsigned int)DC::bTightenRao(v16[0]) )
        {
          v11 = (*((_BYTE *)v16[0] + 40) & 1) != 0 ? 8 : 0;
          LODWORD(v25) = *(_DWORD *)((char *)v16[0] + v11 + 1432) + v25;
          DWORD2(v25) += *(_DWORD *)((char *)v16[0] + v11 + 1432);
          DWORD1(v25) += *(_DWORD *)((char *)v16[0] + v11 + 1436);
          HIDWORD(v25) += *(_DWORD *)((char *)v16[0] + v11 + 1436);
          v12 = XDCOBJ::prgnEffRao(v16);
          v27 = 0LL;
          v28 = 0;
          v29 = 1;
          v30 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v12, (struct ERECTL *)&v25, 0);
          if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
          {
            if ( (*((_DWORD *)v16[0] + 9) & 0xE0) != 0 )
            {
              rclBounds = (__m128i)pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v16, v13, &rclBounds);
            }
            ++*(_DWORD *)(v10 + 92);
            EngPaint((SURFOBJ *)(v10 + 24), &pco, 0LL, 0LL, 0x606u);
          }
          v14 = v16[0];
          v5 = 1;
        }
        else
        {
          v5 = XDCOBJ::bFullScreen((XDCOBJ *)v16);
        }
        *((_DWORD *)v14 + 9) |= 0x10u;
        *((_QWORD *)v14 + 191) = 0LL;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
      }
      if ( v6 != 2050 )
      {
        REGION::vDeleteREGION(v17[0]);
        v17[0] = v4;
      }
      goto LABEL_21;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v20);
    if ( v21 )
    {
      if ( v18[0] && RGNOBJ::bCreate((RGNOBJ *)v17, (struct EPATHOBJ *)v20, (struct EXFORMOBJ *)v18) )
      {
        DWORD2(v25) = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v25, (struct EPATHOBJ *)v20, 1u, 0LL);
        if ( (_QWORD)v25 )
        {
          v4 = v17[0];
          v17[0] = (REGION *)v25;
          if ( DWORD2(v25) == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v25);
          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v20);
          goto LABEL_5;
        }
        EngSetLastError(8u);
        if ( DWORD2(v25) == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v25);
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v20);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
    goto LABEL_23;
  }
LABEL_21:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
LABEL_22:
  v3 = v5;
LABEL_23:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v16);
  return v3;
}
