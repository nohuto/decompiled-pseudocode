/*
 * XREFs of ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C00A4BE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0077400 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00776C0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     OffTransparentBlt @ 0x1C00A5320 (OffTransparentBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00A5CDC (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00A7354 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     EngTransparentBlt @ 0x1C00A8840 (EngTransparentBlt.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
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
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v20; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v21; // [rsp+78h] [rbp-88h] BYREF
  __int64 v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 *v24[114]; // [rsp+90h] [rbp-70h] BYREF

  v9 = 1;
  v23 = (__int64)a4;
  v18 = a1;
  hdev = a2->hdev;
  v20 = a3;
  v22 = (__int64)prclSrc;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v24, a1, a3, prclDst);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v24, &v18, &v21, &v20) )
        return v9;
      v11 = v18;
      v12 = 0LL;
      v19 = 0LL;
      if ( v18
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v18) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x200) == 0 )
      {
        v12 = SURFOBJ_TO_SURFACE_NOT_NULL(v11);
        v19 = v12;
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
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v19, &v20) )
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
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v12 = v19;
          LODWORD(v11) = (_DWORD)v18;
          v15 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 112LL);
          goto LABEL_14;
        }
        v12 = v19;
        v11 = v18;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          v12 = v19;
          LODWORD(v11) = (_DWORD)v18;
          goto LABEL_24;
        }
        v12 = v19;
        v11 = v18;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v11) + 112) & 0x8000) != 0 )
    {
      v15 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)v11->hdev + 170);
LABEL_14:
      v9 &= OffTransparentBlt(
              (int)v15,
              (int)&v21,
              (int)v11,
              (int)&gptlZero,
              (__int64)a2,
              v20,
              v23,
              (__int64)prclDst,
              v22,
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
