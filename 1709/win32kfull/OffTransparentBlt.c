/*
 * XREFs of OffTransparentBlt @ 0x1C00EBA30
 * Callers:
 *     ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C00EB790 (-SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F3C8 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02808E0 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C001D83C (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffTransparentBlt(
        __int64 (__fastcall *a1)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, int, int),
        LONG *a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        struct _CLIPOBJ *a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        int a10,
        int a11)
{
  LONG v11; // r14d
  LONG v12; // esi
  _DWORD *v13; // rdi
  _DWORD *v14; // rbx
  int v15; // r15d
  int v16; // r12d
  unsigned int v17; // ebx
  _DWORD v21[4]; // [rsp+70h] [rbp-31h] BYREF
  _DWORD v22[4]; // [rsp+80h] [rbp-21h] BYREF

  v11 = a2[1];
  v12 = *a2;
  v13 = a8;
  v14 = a9;
  v15 = *a4;
  v16 = a4[1];
  CLIPOBJ_vOffset(a6, *a2, v11);
  if ( a8 )
  {
    v21[0] = v12 + *a8;
    v21[2] = v12 + a8[2];
    v21[1] = v11 + a8[1];
    v13 = v21;
    v21[3] = v11 + a8[3];
  }
  if ( a9 )
  {
    v22[0] = v15 + *a9;
    v22[2] = v15 + a9[2];
    v22[1] = v16 + a9[1];
    v14 = v22;
    v22[3] = v16 + a9[3];
  }
  v17 = a1(a3, a5, a6, a7, v13, v14, a10, a11);
  CLIPOBJ_vOffset(a6, -v12, -v11);
  return v17;
}
