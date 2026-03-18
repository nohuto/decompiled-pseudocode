/*
 * XREFs of ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C0014000
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00149D8 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C026ADBC (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StretchDIBDirect(
        void *a1,
        __int64 a2,
        int a3,
        int a4,
        struct _RECTL *a5,
        void *a6,
        int a7,
        signed int a8,
        signed int a9,
        struct _RECTL *a10,
        struct _RECTL *a11,
        struct _RECTL *a12)
{
  LONG right; // edi
  LONG bottom; // ebx
  LONG v14; // r10d
  LONG v15; // r8d
  int v16; // r13d
  int v17; // r12d
  LONG v18; // r15d
  LONG v19; // r14d
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  unsigned int v23; // r8d
  int v24; // r13d
  unsigned __int64 v25; // r9
  int v26; // [rsp+30h] [rbp-118h]
  LONG v27; // [rsp+40h] [rbp-108h]
  LONG left; // [rsp+50h] [rbp-F8h]
  int v30; // [rsp+54h] [rbp-F4h]
  LONG top; // [rsp+58h] [rbp-F0h]
  LONG v32; // [rsp+88h] [rbp-C0h]
  struct _RECTL *v33; // [rsp+98h] [rbp-B0h]
  __int64 v34; // [rsp+100h] [rbp-48h] BYREF
  int v35; // [rsp+108h] [rbp-40h]
  int v36; // [rsp+10Ch] [rbp-3Ch]

  v33 = a12;
  right = a5->right;
  left = a5->left;
  v26 = right - a5->left;
  bottom = a5->bottom;
  top = a5->top;
  v30 = bottom - top;
  v14 = a10->right;
  v15 = a10->left;
  v16 = v14 - a10->left;
  v27 = a10->bottom;
  v32 = a10->top;
  v17 = v27 - v32;
  v18 = a5->left;
  v19 = top;
  if ( v26 <= 0 || v30 <= 0 || v16 <= 0 || v17 <= 0 )
    return 1LL;
  if ( right - a5->left <= 0x7FFF && v30 <= 0x7FFF && v16 <= 0x7FFF && v17 <= 0x7FFF )
  {
    if ( !a12 )
    {
      v33 = (struct _RECTL *)&v34;
      v34 = 0LL;
      v35 = a3;
      v36 = a4;
    }
    if ( v15 < 0 || v14 > a8 )
    {
      v21 = __PAIR64__(v26, 0) / (unsigned int)v16;
      v22 = HIDWORD(v21);
      if ( v15 < 0 )
      {
        v23 = -v15;
        if ( (int)(v16 - v23) <= 0 )
          return 1LL;
        v18 += (v21 * v23 + 0x7FFFFFFF) >> 32;
        LODWORD(v22) = (__PAIR64__(v26, 0) / (unsigned int)v16) >> 32;
      }
      if ( v14 > a8 )
      {
        v24 = v16 - (v14 - a8);
        if ( v24 <= 0 )
          return 1LL;
        right = left + ((__PAIR64__(v22, v21) * (unsigned int)v24 + 0x7FFFFFFF) >> 32);
      }
    }
    if ( v18 < v33->left )
      v18 = v33->left;
    if ( right > v33->right )
      right = v33->right;
    if ( right <= v18 )
      return 1LL;
    if ( v32 >= 0 && v27 <= a9 )
      goto LABEL_20;
    v25 = __PAIR64__(v30, 0) / (unsigned int)v17;
    if ( v32 < 0 )
    {
      if ( v27 <= 0 )
        return 1LL;
      v19 = ((v25 * (unsigned int)-v32 + 0x7FFFFFFF) >> 32) + top;
    }
    if ( v27 <= a9 )
      goto LABEL_20;
    if ( a9 - v32 > 0 )
    {
      bottom = top + ((v25 * (unsigned int)(a9 - v32) + 0x7FFFFFFF) >> 32);
LABEL_20:
      if ( v19 < v33->top )
        v19 = v33->top;
      if ( bottom > v33->bottom )
        bottom = v33->bottom;
      if ( bottom > v19 )
      {
        _guard_dispatch_icall_fptr();
        a11->left = v18;
        a11->right = right;
        a11->top = v19;
        a11->bottom = bottom;
      }
    }
    return 1LL;
  }
  return 0LL;
}
