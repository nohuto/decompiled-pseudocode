/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     NtGdiGetPixel @ 0x1C0073B60 (NtGdiGetPixel.c)
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0124ABC (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0126860 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C026DEAC (GrePlgBlt.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C002571C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vsoShapeSize@SFMLOGICALSURFACE@@QEAAXPEAUtagSIZE@@@Z @ 0x1C002676C (-vsoShapeSize@SFMLOGICALSURFACE@@QEAAXPEAUtagSIZE@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0026EC0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C007B538 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C007E994 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009556C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00E8F78 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  __int64 v6; // rbx
  __int64 v8; // r15
  __int64 v9; // rcx
  REGION *v10; // r13
  __int64 v11; // r12
  __int64 v13; // rcx
  __int64 v14; // rdi
  struct REGION *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  LONG v18; // edx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r12d
  __int64 v24; // rbx
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rcx
  LONG y; // r15d
  LONG x; // r12d
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // ecx
  __int64 v34; // r9
  HSURF v35; // r15
  int v36; // ebx
  int v37; // edi
  __int64 v38; // rax
  LONG v39; // eax
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // [rsp+50h] [rbp-B0h]
  LONG left; // [rsp+50h] [rbp-B0h]
  struct _POINTL v44; // [rsp+58h] [rbp-A8h] BYREF
  int top; // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  REGION *v47; // [rsp+70h] [rbp-90h] BYREF
  int v48; // [rsp+78h] [rbp-88h]
  struct tagSIZE v49; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v51[2]; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v52; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-50h] BYREF
  int v54; // [rsp+B8h] [rbp-48h]
  int v55; // [rsp+BCh] [rbp-44h]
  _DWORD v56[4]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v57[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v58; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v59[3]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v60[32]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  _BYTE v63[32]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  struct tagRECT v66; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v67; // [rsp+1B0h] [rbp+B0h] BYREF

  v5 = 0;
  v6 = a4;
  v8 = a3;
  v9 = *(_QWORD *)a1;
  v10 = 0LL;
  v11 = a2;
  v50 = 0LL;
  if ( !v9
    || (*(_DWORD *)(v9 + 36) & 0x200) == 0
    || !g_pDwmState
    || (*(_DWORD *)(v9 + 36) & 0x4001) != 0x4001
    || !*(_QWORD *)(v9 + 488)
    || !*(_QWORD *)(v9 + 512)
    || !*(_DWORD *)(v9 + 504) && !*(_DWORD *)(v9 + 508)
    || KeAreApcsDisabled() )
  {
    return 0;
  }
  v61 = 0LL;
  v62 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v60, a1, 0);
  if ( (v60[24] & 1) == 0 )
    goto LABEL_42;
  v13 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 520LL) )
  {
    v5 = 1;
    goto LABEL_42;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 48) + 16LL);
  if ( !*(_DWORD *)(v13 + 508) )
  {
    v15 = DC::prgnVisSnap((DC *)v13);
    if ( !v15 )
      goto LABEL_42;
    v52 = *(struct tagRECT *)((char *)v15 + 88);
    if ( IsRectEmptyInl(&v52) )
      goto LABEL_42;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_42;
  if ( !a5 )
    goto LABEL_42;
  if ( (unsigned __int64)(v6 + v11 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_42;
  if ( (unsigned __int64)(a5 + v8 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_42;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v59, a1, 0x204u);
  if ( (*(_DWORD *)(v59[0] + 32LL) & 2) == 0 )
    goto LABEL_42;
  v44.x = v11;
  v44.y = v8;
  EXFORMOBJ::bXform((EXFORMOBJ *)v59, &v44, 1uLL);
  v16 = *(_QWORD *)a1;
  v17 = (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) != 0 ? 1440LL : 1432LL;
  v18 = *(_DWORD *)(v16 + v17 + 4) + v44.y;
  v44.x += *(_DWORD *)(v16 + v17);
  v66.bottom = v18 + a5;
  v44.y = v18;
  v66.right = v44.x + v6;
  v66.left = v44.x;
  v66.top = v18;
  ERECTL::vOrder((ERECTL *)&v66);
  v20 = *(_QWORD *)(v19 + 512);
  v53 = 0LL;
  v54 = *(_DWORD *)(v20 + 56);
  v55 = *(_DWORD *)(v20 + 60);
  ERECTL::operator*=(&v66, &v53, v21, v19);
  if ( IsRectEmptyInl(&v66) )
    goto LABEL_42;
  if ( *(_DWORD *)(v22 + 508) )
  {
    y = v44.y;
    x = v44.x;
    goto LABEL_45;
  }
  if ( (*(_DWORD *)(v22 + 36) & 0x4000) != 0 )
    SURFACE::bUnMap(*(SURFACE **)(v22 + 512), 0LL, (struct DC *)v22);
  v23 = 0;
  v42 = 0;
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( !g_pDwmState
    || (DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v58, *(HWND *)(*(_QWORD *)a1 + 488LL)), (v24 = v58) == 0) )
  {
    y = v44.y;
    x = v44.x;
    goto LABEL_39;
  }
  v25 = *(_QWORD *)(v58 + 192);
  if ( (*(_DWORD *)(v25 + 256) & 0x80u) != 0 )
    goto LABEL_37;
  v26 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
  v27 = v26 ? v26 + 24 : 0LL;
  if ( *(_QWORD *)(v25 + 192) != v27 )
    goto LABEL_37;
  if ( !*(_QWORD *)(v25 + 88) )
  {
    v42 = 1;
LABEL_63:
    SFMLOGICALSURFACE::vsoShapeSize((SFMLOGICALSURFACE *)v25, &v49);
    x = *(_DWORD *)(v24 + 56);
    top = *(_DWORD *)(v24 + 60);
    *(struct tagSIZE *)&v66.right = v49;
    *(_QWORD *)&v66.left = 0LL;
    *(_DWORD *)(v25 + 256) |= 0x80u;
    if ( v10 )
    {
      v56[0] = *((_DWORD *)v10 + 22);
      v56[1] = *((_DWORD *)v10 + 23);
      v56[2] = *((_DWORD *)v10 + 24);
      v56[3] = *((_DWORD *)v10 + 25);
      ERECTL::operator*=(&v66, v56, v40, v41);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v66) )
      {
        REGION::vDeleteREGION(v10);
        *(_DWORD *)(v25 + 256) |= 0x80u;
        v42 = 0;
      }
    }
    y = top;
    goto LABEL_38;
  }
  v46 = *(_QWORD *)(v25 + 88);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v51);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v51);
  if ( v46 && v51[0] && !(unsigned int)RGNOBJ::bContain((RGNOBJ *)&v46, (struct _RECTL *)&v66) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v47);
    if ( v47 )
    {
      v39 = *(_DWORD *)(v24 + 64) - *(_DWORD *)(v24 + 56);
      v67.bottom = *(_DWORD *)(v24 + 68) - *(_DWORD *)(v24 + 60);
      *(_QWORD *)&v67.left = 0LL;
      v67.right = v39;
      RGNOBJ::vSet((RGNOBJ *)v51, &v67);
      if ( RGNOBJ::iCombine((RGNOBJ *)&v47, (struct RGNOBJ *)v51, (struct RGNOBJ *)&v46, BYTE4(gafjRgnOp)) )
      {
        v10 = v47;
        v23 = 1;
        v42 = 1;
      }
      else if ( v47 )
      {
        REGION::vDeleteREGION(v47);
      }
    }
    if ( v48 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v51);
  if ( v23 )
    goto LABEL_63;
LABEL_37:
  y = v44.y;
  x = v44.x;
LABEL_38:
  _InterlockedDecrement((volatile signed __int32 *)(v24 + 12));
LABEL_39:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
    && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 512LL), 0LL, *(_QWORD *)a1) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
LABEL_79:
    if ( v10 )
      REGION::vDeleteREGION(v10);
    goto LABEL_42;
  }
  if ( v42 )
  {
LABEL_45:
    v30 = *(_QWORD *)a1;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 508LL) )
    {
      v66.left += *(_DWORD *)(v14 + 2600);
      v66.right += *(_DWORD *)(v14 + 2600);
      v66.top += *(_DWORD *)(v14 + 2604);
      v66.bottom += *(_DWORD *)(v14 + 2604);
    }
    else
    {
      v66.left += x;
      v66.right += x;
      v66.top += y;
      v66.bottom += y;
    }
    v31 = *(_QWORD *)(v14 + 2568);
    v32 = *(unsigned int *)(v14 + 2604);
    v57[0] = *(_DWORD *)(v14 + 2600);
    v57[2] = *(_DWORD *)(v31 + 56) + v57[0];
    v33 = *(_DWORD *)(v31 + 60);
    v57[1] = v32;
    v57[3] = v32 + v33;
    ERECTL::operator*=(&v66, v57, v32, v30);
    if ( !IsRectEmptyInl(&v66) )
    {
      left = v66.left;
      top = v66.top;
      if ( *(_DWORD *)(v34 + 508) )
      {
        v66.left -= *(_DWORD *)(v14 + 2600);
        v66.right -= *(_DWORD *)(v14 + 2600);
        v66.top -= *(_DWORD *)(v14 + 2604);
        v66.bottom -= *(_DWORD *)(v14 + 2604);
      }
      else
      {
        v66.right -= x;
        v66.left -= x;
        v66.bottom -= y;
        v66.top -= y;
      }
      v35 = *(HSURF *)(*(_QWORD *)(v34 + 512) + 32LL);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v60);
      v36 = 0;
      v37 = 8;
      while ( 1 )
      {
        v64 = 0LL;
        v65 = 0LL;
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v63, a1, 0);
        v38 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
        if ( v38 )
        {
          if ( *(_QWORD *)(v38 + 3480) )
          {
            v36 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v38 + 3480))(*(_QWORD *)(v38 + 1816), &v50);
            if ( v36 == 258 )
            {
              KeDelayExecutionThread(0, 0, gpLockShortDelay);
              --v37;
            }
          }
        }
        else
        {
          v36 = -1073741823;
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v63);
        if ( v36 != 258 )
          break;
        if ( !v37 )
          goto LABEL_83;
      }
      if ( v36 >= 0 )
        return bSpDwmUpdateSurface(0LL, 0, v50, a1, v35, 1.0, left, top, (struct ERECTL *)&v66, v10);
LABEL_83:
      if ( v10 )
        REGION::vDeleteREGION(v10);
      return v5;
    }
    goto LABEL_79;
  }
LABEL_42:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v60);
  return v5;
}
