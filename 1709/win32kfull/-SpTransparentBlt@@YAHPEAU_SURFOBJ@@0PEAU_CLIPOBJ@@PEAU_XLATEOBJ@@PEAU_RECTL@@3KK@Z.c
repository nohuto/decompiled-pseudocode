/*
 * XREFs of ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C00EB790
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C002A1E0 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C002A4A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00E9158 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     OffTransparentBlt @ 0x1C00EBA30 (OffTransparentBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     EngTransparentBlt @ 0x1C00ED7C0 (EngTransparentBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall SpTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v9; // r12d
  HDEV hdev; // rax
  struct _SURFOBJ *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdi
  USHORT *p_iType; // r14
  BOOL (__stdcall *v15)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  struct _SURFOBJ *v46; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v48; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v49; // [rsp+78h] [rbp-88h] BYREF
  __int64 v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h]
  __int64 *v52[114]; // [rsp+90h] [rbp-70h] BYREF

  v9 = 1;
  v51 = (__int64)a4;
  v46 = a1;
  hdev = a2->hdev;
  v48 = a3;
  v50 = (__int64)prclSrc;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v52, a1, a3, prclDst);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v52, &v46, &v49, &v48) )
        return v9;
      v11 = v46;
      v12 = 0LL;
      v47 = 0LL;
      if ( v46
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v46) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x200) == 0 )
      {
        v12 = SURFOBJ_TO_SURFACE_NOT_NULL(v11);
        v47 = v12;
        GreLockDisplayDevice(*(_QWORD *)(v12 + 48));
      }
      v13 = 0LL;
      if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
      {
        v13 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
        GreLockDisplayDevice(*(_QWORD *)(v13 + 48));
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v47, &v48) )
        break;
LABEL_15:
      if ( v13 )
        GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
      if ( v12 )
        GreUnlockDisplayDevice(*(_QWORD *)(v12 + 48));
    }
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 280) + 20LL) & 0x8000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34);
          v12 = v47;
          LODWORD(v11) = (_DWORD)v46;
          v15 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 112LL);
          goto LABEL_14;
        }
        v12 = v47;
        v11 = v46;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v11) )
      {
        v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22);
        if ( v36
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 108)) )
        {
          v12 = v47;
          LODWORD(v11) = (_DWORD)v46;
          goto LABEL_24;
        }
        v12 = v47;
        v11 = v46;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x8000) != 0 )
    {
      v15 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)v11->hdev + 170);
LABEL_14:
      v9 &= OffTransparentBlt(
              (int)v15,
              (int)&v49,
              (int)v11,
              (int)&gptlZero,
              (__int64)a2,
              v48,
              v51,
              (__int64)prclDst,
              v50,
              iTransColor,
              ulReserved);
      goto LABEL_15;
    }
LABEL_24:
    v15 = EngTransparentBlt;
    goto LABEL_14;
  }
  return EngTransparentBlt(a1, a2, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
}
