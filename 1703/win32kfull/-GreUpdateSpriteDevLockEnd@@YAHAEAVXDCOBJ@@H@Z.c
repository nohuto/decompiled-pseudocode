/*
 * XREFs of ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C006D990
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C00734DC (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00748F0 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 * Callees:
 *     GreUpdateSprite @ 0x1C0025B2C (GreUpdateSprite.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C006DDF0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0075F90 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0076190 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C007E130 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C02587AC (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall GreUpdateSpriteDevLockEnd(struct XDCOBJ *a1, int a2)
{
  unsigned int v3; // r13d
  unsigned int updated; // edi
  HDEV v6; // rsi
  __int64 v7; // r10
  struct tagSIZE v8; // rcx
  HDC v9; // rdi
  HWND v10; // r12
  struct REGION *v11; // r8
  __int64 v13; // r10
  __int64 v14; // rax
  struct tagRECT v15; // xmm0
  int v16; // r12d
  LONG *v17; // r12
  NTSTATUS v18; // eax
  int v19; // [rsp+88h] [rbp-80h]
  struct tagSIZE v20; // [rsp+90h] [rbp-78h] BYREF
  struct REGION *v21; // [rsp+98h] [rbp-70h] BYREF
  __int64 HDEV; // [rsp+A0h] [rbp-68h] BYREF
  struct tagRECT v23; // [rsp+A8h] [rbp-60h] BYREF
  __m256i Parameter; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-30h]
  struct tagSIZE *v26; // [rsp+E0h] [rbp-28h]
  HDC v27; // [rsp+E8h] [rbp-20h]
  POINTL *v28; // [rsp+F0h] [rbp-18h]
  int v29; // [rsp+F8h] [rbp-10h]
  __int64 v30; // [rsp+100h] [rbp-8h]
  __int64 v31; // [rsp+108h] [rbp+0h]
  struct tagRECT *v32; // [rsp+110h] [rbp+8h]
  __int64 v33; // [rsp+118h] [rbp+10h]
  int v34; // [rsp+120h] [rbp+18h]
  int v35; // [rsp+124h] [rbp+1Ch]
  unsigned int v36; // [rsp+128h] [rbp+20h]
  int v37; // [rsp+138h] [rbp+30h]
  __int64 v38; // [rsp+148h] [rbp+40h]
  unsigned int v39; // [rsp+158h] [rbp+50h] BYREF
  _OWORD v40[20]; // [rsp+15Ch] [rbp+54h] BYREF

  v3 = 0;
  updated = 0;
  HDEV = UserGetHDEV(a1);
  v6 = (HDEV)HDEV;
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&HDEV) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemSprite", ghsemSprite);
  }
  if ( !g_pDwmState )
  {
    GdiUpdateSpriteDevLockEnd(a1);
    goto LABEL_10;
  }
  if ( (unsigned int)GreGetBounds(**(_QWORD **)a1, &v23, 4LL) )
  {
    v7 = *(_QWORD *)a1;
    v8 = *(struct tagSIZE *)(*(_QWORD *)a1 + 528LL);
    v20 = v8;
    v21 = *(struct REGION **)(v7 + 1584);
    if ( !v21 )
    {
      EtwDevLockEndUpdate(
        *(_QWORD *)(v7 + 488),
        (unsigned int)v8.cx,
        (unsigned int)v20.cy,
        (unsigned int)v23.left,
        v23.top,
        v23.right,
        v23.bottom);
      v9 = **(HDC **)a1;
      v10 = *(HWND *)(*(_QWORD *)a1 + 488LL);
      if ( (unsigned int)GreStackExpansionRequired(0x2000LL) )
      {
        Parameter.m256i_i64[0] = (__int64)v6;
        v26 = &v20;
        Parameter.m256i_i64[1] = (__int64)v10;
        v32 = &v23;
        *(_OWORD *)&Parameter.m256i_u64[2] = 0LL;
        v25 = 0LL;
        v27 = v9;
        v28 = &gptlZero;
        v29 = 0;
        v30 = 0LL;
        LODWORD(v31) = 1075838976;
        v33 = 0LL;
        v34 = 1;
        v35 = a2;
        v36 = 0;
        v18 = KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, &Parameter, 0x2000uLL, 1u, 0LL);
        updated = v36;
        if ( v18 < 0 )
          updated = 0;
      }
      else
      {
        updated = GreUpdateSpriteInternal(
                    v6,
                    v10,
                    0LL,
                    0LL,
                    0LL,
                    &v20,
                    v9,
                    (struct tagPOINT *)&gptlZero,
                    0,
                    0LL,
                    0x40200000u,
                    &v23,
                    0LL,
                    1,
                    a2);
      }
      goto LABEL_8;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v21) != 1 )
    {
      if ( (*(_DWORD *)(v13 + 40) & 1) != 0 )
        v14 = 1440LL;
      else
        v14 = 1432LL;
      RGNOBJ::bOffset((RGNOBJ *)&v21, (struct _POINTL *)(v14 + v13));
      v31 = 0LL;
      LODWORD(v32) = 0;
      v37 = 1;
      v38 = 0LL;
      v28 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&Parameter, v21, (struct ERECTL *)&v23, 1);
      switch ( Parameter.m256i_i8[20] )
      {
        case 1:
          v15 = *(struct tagRECT *)((char *)Parameter.m256i_i64 + 4);
LABEL_20:
          v16 = 0;
          v39 = 1;
          v40[0] = v15;
          v19 = 0;
LABEL_21:
          updated = 1;
          if ( v16 )
            goto LABEL_36;
          while ( 1 )
          {
            if ( v39 )
            {
              do
              {
                v17 = (LONG *)&v40[v3];
                if ( *v17 < v23.left )
                  *v17 = v23.left;
                if ( v17[1] < v23.top )
                  v17[1] = v23.top;
                if ( v17[2] > v23.right )
                  v17[2] = v23.right;
                if ( v17[3] > v23.bottom )
                  v17[3] = v23.bottom;
                EtwDevLockEndTightUpdate(
                  *(_QWORD *)(*(_QWORD *)a1 + 488LL),
                  (unsigned int)v20.cx,
                  (unsigned int)v20.cy,
                  (unsigned int)*v17,
                  v17[1],
                  v17[2],
                  v17[3]);
                if ( !(unsigned int)GreUpdateSprite(
                                      v6,
                                      *(HWND *)(*(_QWORD *)a1 + 488LL),
                                      0LL,
                                      0LL,
                                      0LL,
                                      &v20,
                                      **(HDC **)a1,
                                      (struct tagPOINT *)&gptlZero,
                                      0,
                                      0LL,
                                      0x40200000u,
                                      (struct tagRECT *)&v40[v3],
                                      0LL,
                                      1,
                                      a2) )
                  updated = 0;
                ++v3;
              }
              while ( v3 < v39 );
              v16 = v19;
            }
            v3 = 0;
            if ( !v16 )
              break;
LABEL_36:
            v16 = XCLIPOBJ::bEnum((XCLIPOBJ *)&Parameter, 0x144u, &v39, 0LL);
            v19 = v16;
          }
          break;
        case 0:
          v15 = v23;
          goto LABEL_20;
        case 3:
          v16 = 1;
          v19 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)&Parameter, 0, 0, 4u, 0x14u);
          goto LABEL_21;
      }
    }
  }
LABEL_8:
  v11 = *(struct REGION **)(*(_QWORD *)a1 + 1584LL);
  if ( v11 && v11 != prgnDefault )
    FreeObject(*(_QWORD *)(*(_QWORD *)a1 + 1584LL), 4LL);
  *(_QWORD *)(*(_QWORD *)a1 + 1584LL) = 0LL;
LABEL_10:
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&HDEV) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  return updated;
}
