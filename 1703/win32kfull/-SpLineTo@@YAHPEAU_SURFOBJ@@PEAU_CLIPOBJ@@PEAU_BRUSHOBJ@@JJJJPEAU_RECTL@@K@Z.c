/*
 * XREFs of ?SpLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00A6EC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0077400 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00776C0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00A5CDC (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffLineTo @ 0x1C00A71F8 (OffLineTo.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00A7354 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall SpLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct _RECTL *a8,
        unsigned int a9)
{
  unsigned int v9; // r14d
  struct _SURFOBJ *v10; // rdi
  __int64 v11; // rbx
  USHORT *p_iType; // rsi
  BOOL (__stdcall *v13)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v18; // [rsp+70h] [rbp-90h] BYREF
  int v19; // [rsp+78h] [rbp-88h]
  struct _POINTL v20; // [rsp+80h] [rbp-80h] BYREF
  struct _RECTL *v21; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v22; // [rsp+90h] [rbp-70h]
  __int64 *v23[114]; // [rsp+A0h] [rbp-60h] BYREF

  v9 = 1;
  v22 = a3;
  v18 = a2;
  v19 = a4;
  v16 = a1;
  v21 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v23, a1, a2, a8);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v23, &v16, &v20, &v18) )
  {
    v10 = v16;
    v11 = 0LL;
    v17 = 0LL;
    if ( v16
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v16) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x200) == 0 )
    {
      v11 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
      v17 = v11;
      GreLockDisplayDevice(*(_QWORD *)(v11 + 48));
    }
    if ( !(unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v17, &v18) )
      goto LABEL_10;
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x100) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v11 = v17;
          v10 = v16;
          v13 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 104LL);
          goto LABEL_9;
        }
        v11 = v17;
        v10 = v16;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          v11 = v17;
          v10 = v16;
LABEL_31:
          v13 = EngLineTo;
          goto LABEL_9;
        }
        v11 = v17;
        v10 = v16;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x100) == 0 )
      goto LABEL_31;
    v13 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))*((_QWORD *)v10->hdev + 169);
LABEL_9:
    v9 &= OffLineTo(v13, &v20, v10, v18, v22, v19, a5, a6, a7, v21, a9);
LABEL_10:
    if ( v11 )
      GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
  }
  return v9;
}
