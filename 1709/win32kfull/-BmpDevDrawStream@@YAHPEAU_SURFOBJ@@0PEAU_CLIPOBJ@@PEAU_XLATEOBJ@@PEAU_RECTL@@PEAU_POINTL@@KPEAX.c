/*
 * XREFs of ?BmpDevDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C0275510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0274F80 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0274FD8 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0276C5C (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0276D08 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        _DWORD *a8,
        struct _DSSTATE *a9)
{
  unsigned int v13; // r14d
  HDEV hdev; // rbx
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, struct _DSSTATE *); // r10
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _DISPSURF *i; // rsi
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rbx
  struct _SURFOBJ *DevBitmap; // rdi
  struct _SURFOBJ *v26; // rax
  __int64 v28; // [rsp+50h] [rbp-48h] BYREF
  __int64 v29; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v30; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v31; // [rsp+68h] [rbp-30h] BYREF

  v13 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v31, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v30, a2);
  if ( a1 )
  {
    hdev = a1->hdev;
    v15 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    v16 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, struct _DSSTATE *))EngDrawStream;
    v17 = *(_QWORD *)(v15 + 48);
    if ( *(_QWORD *)(v17 + 3424) )
      v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, struct _DSSTATE *))(v17 + 3424);
    if ( *(int *)(v15 + 112) >= 0 && (((_DWORD)hdev[8] & 0x20000) == 0 || *(_WORD *)(v15 + 100) != 3) )
      v16 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int *, unsigned int, _DWORD *, struct _DSSTATE *))EngDrawStream;
    v13 = v16((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4, (int)a5, (int *)a6, a7, a8, a9);
    v19 = UserGetHDEV(v18);
    if ( v19 )
    {
      if ( (*(_DWORD *)(v19 + 32) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(v19 + 1816); i; i = *(struct _DISPSURF **)i )
        {
          v21 = *((_QWORD *)i + 6);
          v28 = v21;
          if ( v21 )
          {
            if ( (*(_DWORD *)(v21 + 1840) & 0x8000000) != 0 )
            {
              v22 = *(_DWORD *)(v21 + 2144);
              if ( (v22 & 0x1000) != 0 && (v22 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v21 + 1808) + 784LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v29,
                    (struct PDEVOBJ *)&v28,
                    a1);
                  v24 = *(_QWORD *)(v23 + 1808);
                  DevBitmap = GetDevBitmap(i, a2);
                  v26 = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, unsigned int, _DWORD *, struct _DSSTATE *))(v24 + 784))(
                    v26,
                    DevBitmap,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9);
                  if ( v29 )
                    *(_WORD *)(v29 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v30 )
    bBmpMakeOpaque(v30);
  if ( v31 )
    bBmpMakeOpaque(v31);
  return v13;
}
