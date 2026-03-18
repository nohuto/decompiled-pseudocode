/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0
 * Callers:
 *     GrePlgBlt @ 0x1C0001CD0 (GrePlgBlt.c)
 *     GreStretchBltInternal @ 0x1C001AF30 (GreStretchBltInternal.c)
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     NtGdiGetPixel @ 0x1C002B850 (NtGdiGetPixel.c)
 *     GreMaskBlt @ 0x1C01023EC (GreMaskBlt.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C012CCF4 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C012CEF0 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C0017340 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C001B914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C0027FF8 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C004C00C (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008F1D0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C009205C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
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
  __int64 v17; // rdx
  LONG v18; // ecx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // r12d
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // r15d
  int v28; // ebx
  __int64 v29; // rdx
  int v30; // r8d
  int v31; // ecx
  __int64 v32; // r9
  LONG left; // r12d
  HSURF v34; // r15
  int v35; // ebx
  int v36; // edi
  __int64 v37; // rax
  LONG v38; // eax
  __int64 v39; // rax
  LONG v40; // edx
  LONG v41; // r8d
  int v42; // eax
  int v43; // ecx
  int v44; // [rsp+50h] [rbp-B0h]
  LONG top; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+54h] [rbp-ACh]
  LONG v47; // [rsp+58h] [rbp-A8h]
  struct _POINTL v48; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v49; // [rsp+70h] [rbp-90h] BYREF
  __int64 v50; // [rsp+80h] [rbp-80h] BYREF
  REGION *v51; // [rsp+88h] [rbp-78h] BYREF
  int v52; // [rsp+90h] [rbp-70h]
  unsigned __int64 v53; // [rsp+98h] [rbp-68h] BYREF
  struct tagRECT v54; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-50h] BYREF
  int v56; // [rsp+B8h] [rbp-48h]
  int v57; // [rsp+BCh] [rbp-44h]
  _DWORD v58[4]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v59[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v61[3]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v62[32]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  _BYTE v65[32]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v66; // [rsp+170h] [rbp+70h]
  __int64 v67; // [rsp+178h] [rbp+78h]
  struct _RECTL v68; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v69; // [rsp+1B0h] [rbp+B0h] BYREF

  v5 = 0;
  v6 = a4;
  v8 = a3;
  v9 = *(_QWORD *)a1;
  v10 = 0LL;
  v11 = a2;
  v53 = 0LL;
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
  v63 = 0LL;
  v64 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v62, a1, 0);
  if ( (v62[24] & 1) == 0 )
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
    v54 = *(struct tagRECT *)((char *)v15 + 88);
    if ( IsRectEmptyInl(&v54) )
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
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v61, a1, 516);
  if ( (*(_DWORD *)(v61[0] + 32LL) & 2) == 0 )
    goto LABEL_42;
  v48.x = v11;
  v48.y = v8;
  EXFORMOBJ::bXform((EXFORMOBJ *)v61, &v48, 1LL);
  v16 = *(_QWORD *)a1;
  v17 = (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) != 0 ? 1440LL : 1432LL;
  v18 = *(_DWORD *)(v16 + v17 + 4) + v48.y;
  v49.left = *(_DWORD *)(v16 + v17) + v48.x;
  v48.x = v49.left;
  v49.right = v6 + v49.left;
  v49.top = v18;
  v49.bottom = v18 + a5;
  v48.y = v18;
  v68 = v49;
  ERECTL::vOrder((ERECTL *)&v68);
  v20 = *(_QWORD *)(v19 + 512);
  v55 = 0LL;
  v56 = *(_DWORD *)(v20 + 56);
  v57 = *(_DWORD *)(v20 + 60);
  ERECTL::operator*=(&v68, &v55);
  if ( IsRectEmptyInl((const struct tagRECT *)&v68) )
    goto LABEL_42;
  if ( *(_DWORD *)(v21 + 508) )
  {
    v28 = v44;
    v27 = v44;
    goto LABEL_45;
  }
  if ( (*(_DWORD *)(v21 + 36) & 0x4000) != 0 )
    SURFACE::bUnMap(*(SURFACE **)(v21 + 512), 0LL, (struct DC *)v21);
  v22 = 0;
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( !g_pDwmState
    || (DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v60, *(HWND *)(*(_QWORD *)a1 + 488LL)), (v23 = v60) == 0) )
  {
    v27 = v44;
    goto LABEL_39;
  }
  v24 = *(_QWORD *)(v60 + 192);
  if ( (*(_DWORD *)(v24 + 256) & 0x80u) != 0 )
    goto LABEL_37;
  v25 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
  v26 = v25 ? v25 + 24 : 0LL;
  if ( *(_QWORD *)(v24 + 192) != v26 )
    goto LABEL_37;
  if ( !*(_QWORD *)(v24 + 88) )
  {
    v22 = 1;
LABEL_63:
    v39 = *(_QWORD *)(v24 + 192);
    if ( v39 )
    {
      v40 = *(_DWORD *)(v39 + 32);
      v41 = *(_DWORD *)(v39 + 36);
    }
    else
    {
      v40 = v47;
      v41 = v47;
    }
    v42 = *(_DWORD *)(v23 + 56);
    v43 = *(_DWORD *)(v23 + 60);
    *(_QWORD *)&v68.left = 0LL;
    v68.right = v40;
    v68.bottom = v41;
    *(_DWORD *)(v24 + 256) |= 0x80u;
    v46 = v42;
    v44 = v43;
    if ( v10 )
    {
      v58[0] = *((_DWORD *)v10 + 22);
      v58[1] = *((_DWORD *)v10 + 23);
      v58[2] = *((_DWORD *)v10 + 24);
      v58[3] = *((_DWORD *)v10 + 25);
      ERECTL::operator*=(&v68, v58);
      if ( ERECTL::bEmpty((ERECTL *)&v68) )
      {
        REGION::vDeleteREGION(v10);
        *(_DWORD *)(v24 + 256) |= 0x80u;
        v22 = 0;
      }
      v27 = v46;
    }
    else
    {
      v27 = v42;
    }
    goto LABEL_38;
  }
  v50 = *(_QWORD *)(v24 + 88);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v49);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v49);
  if ( v50 && *(_QWORD *)&v49.left && !RGNOBJ::bContain((RGNOBJ *)&v50, &v68) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v51);
    if ( v51 )
    {
      v38 = *(_DWORD *)(v23 + 64) - *(_DWORD *)(v23 + 56);
      v69.bottom = *(_DWORD *)(v23 + 68) - *(_DWORD *)(v23 + 60);
      *(_QWORD *)&v69.left = 0LL;
      v69.right = v38;
      RGNOBJ::vSet((RGNOBJ *)&v49, &v69);
      if ( RGNOBJ::iCombine((RGNOBJ *)&v51, (struct RGNOBJ *)&v49, (struct RGNOBJ *)&v50, BYTE4(gafjRgnOp)) )
      {
        v10 = v51;
        v22 = 1;
      }
      else if ( v51 )
      {
        REGION::vDeleteREGION(v51);
      }
    }
    if ( v52 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v51);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v49);
  if ( v22 )
    goto LABEL_63;
LABEL_37:
  v27 = v44;
LABEL_38:
  _InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
LABEL_39:
  v28 = v44;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
    && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 512LL), 0LL, *(_QWORD *)a1) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
LABEL_83:
    if ( v10 )
      REGION::vDeleteREGION(v10);
    goto LABEL_42;
  }
  if ( v22 )
  {
LABEL_45:
    if ( *(_DWORD *)(*(_QWORD *)a1 + 508LL) )
    {
      v68.left += *(_DWORD *)(v14 + 2600);
      v68.right += *(_DWORD *)(v14 + 2600);
      v68.top += *(_DWORD *)(v14 + 2604);
      v68.bottom += *(_DWORD *)(v14 + 2604);
    }
    else
    {
      v68.left += v27;
      v68.right += v27;
      v68.top += v28;
      v68.bottom += v28;
    }
    v29 = *(_QWORD *)(v14 + 2568);
    v30 = *(_DWORD *)(v14 + 2604);
    v59[0] = *(_DWORD *)(v14 + 2600);
    v59[2] = *(_DWORD *)(v29 + 56) + v59[0];
    v31 = *(_DWORD *)(v29 + 60);
    v59[1] = v30;
    v59[3] = v30 + v31;
    ERECTL::operator*=(&v68, v59);
    if ( !IsRectEmptyInl((const struct tagRECT *)&v68) )
    {
      left = v68.left;
      top = v68.top;
      if ( *(_DWORD *)(v32 + 508) )
      {
        v68.left -= *(_DWORD *)(v14 + 2600);
        v68.right -= *(_DWORD *)(v14 + 2600);
        v68.top -= *(_DWORD *)(v14 + 2604);
        v68.bottom -= *(_DWORD *)(v14 + 2604);
      }
      else
      {
        v68.right -= v27;
        v68.left -= v27;
        v68.bottom -= v28;
        v68.top -= v28;
      }
      v34 = *(HSURF *)(*(_QWORD *)(v32 + 512) + 32LL);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v62);
      v35 = 0;
      v36 = 8;
      while ( 1 )
      {
        v66 = 0LL;
        v67 = 0LL;
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v65, a1, 0);
        v37 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
        if ( v37 )
        {
          if ( *(_QWORD *)(v37 + 3480) )
          {
            v35 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v37 + 3480))(*(_QWORD *)(v37 + 1816), &v53);
            if ( v35 == 258 )
            {
              KeDelayExecutionThread(0, 0, gpLockShortDelay);
              --v36;
            }
          }
        }
        else
        {
          v35 = -1073741823;
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v65);
        if ( v35 != 258 )
          break;
        if ( !v36 )
          goto LABEL_87;
      }
      if ( v35 >= 0 )
        return bSpDwmUpdateSurface(0LL, 0, v53, a1, v34, 1.0, left, top, (struct ERECTL *)&v68, v10);
LABEL_87:
      if ( v10 )
        REGION::vDeleteREGION(v10);
      return v5;
    }
    goto LABEL_83;
  }
LABEL_42:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v62);
  return v5;
}
