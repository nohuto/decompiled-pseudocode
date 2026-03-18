/*
 * XREFs of OffGradientFill @ 0x1C0131878
 * Callers:
 *     ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0131660 (-SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0282260 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00A732C (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffGradientFill(
        __int64 (__fastcall *a1)(__int64, struct _CLIPOBJ *, __int64, _DWORD *, unsigned int, __int64, int, _DWORD *, _DWORD *, int),
        LONG *a2,
        __int64 a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        _DWORD *a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        _DWORD *a10,
        _DWORD *a11,
        int a12)
{
  LONG v12; // esi
  LONG v14; // edi
  _DWORD *v16; // rbx
  LONG v17; // edx
  _DWORD *v18; // r15
  _DWORD *v19; // r14
  _DWORD *v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // r14d
  __int64 v23; // rcx
  _DWORD v25[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v26; // [rsp+68h] [rbp-80h]
  __int64 v27; // [rsp+70h] [rbp-78h]
  __int64 v28; // [rsp+78h] [rbp-70h]
  _DWORD v29[4]; // [rsp+80h] [rbp-68h] BYREF

  v12 = a2[1];
  v14 = *a2;
  v16 = a6;
  v17 = *a2;
  v18 = a10;
  v19 = a11;
  v27 = a5;
  v28 = a3;
  v26 = a8;
  CLIPOBJ_vOffset(a4, v17, v12);
  if ( a10 )
  {
    v29[0] = v14 + *a10;
    v29[2] = v14 + a10[2];
    v29[1] = v12 + a10[1];
    v18 = v29;
    v29[3] = v12 + a10[3];
  }
  if ( a11 )
  {
    v25[0] = *a11 - v14;
    v19 = v25;
    v25[1] = a11[1] - v12;
  }
  v20 = a6;
  if ( a7 )
  {
    v21 = a7;
    do
    {
      *v20 += v14;
      v20[1] += v12;
      v20 += 4;
      --v21;
    }
    while ( v21 );
  }
  v22 = a1(v28, a4, v27, a6, a7, v26, a9, v18, v19, a12);
  CLIPOBJ_vOffset(a4, -v14, -v12);
  if ( a7 )
  {
    v23 = a7;
    do
    {
      *v16 -= v14;
      v16[1] -= v12;
      v16 += 4;
      --v23;
    }
    while ( v23 );
  }
  return v22;
}
