/*
 * XREFs of OffStretchBltROP @ 0x1C0133B94
 * Callers:
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C01338B0 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00A732C (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffStretchBltROP(
        __int64 (__fastcall *a1)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, __int64, int, __int64, int),
        LONG *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        struct _CLIPOBJ *a7,
        __int64 a8,
        __int64 a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        __int64 a13,
        int a14,
        __int64 a15,
        int a16)
{
  LONG v16; // r14d
  LONG v17; // esi
  LONG v18; // edx
  _DWORD *v19; // rbx
  _DWORD *v20; // r15
  _DWORD *v21; // rdi
  LONG x; // r12d
  LONG y; // r13d
  unsigned int v24; // ebx
  _DWORD v26[2]; // [rsp+70h] [rbp-79h] BYREF
  __int64 v27; // [rsp+78h] [rbp-71h]
  __int64 v28; // [rsp+80h] [rbp-69h]
  __int64 v29; // [rsp+88h] [rbp-61h]
  __int64 v30; // [rsp+90h] [rbp-59h]
  struct _CLIPOBJ *v31; // [rsp+98h] [rbp-51h]
  __int64 v32; // [rsp+A0h] [rbp-49h]
  __int64 v33; // [rsp+A8h] [rbp-41h]
  __int64 v34; // [rsp+B0h] [rbp-39h]
  __int64 (__fastcall *v35)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, _DWORD *, _DWORD *, _DWORD *, __int64, int, __int64, int); // [rsp+B8h] [rbp-31h]
  _DWORD v36[4]; // [rsp+C0h] [rbp-29h] BYREF
  _DWORD v37[4]; // [rsp+D0h] [rbp-19h] BYREF

  v16 = a2[1];
  v17 = *a2;
  v18 = *a2;
  v19 = a10;
  v20 = a11;
  v21 = a12;
  x = gptlZero.x;
  y = gptlZero.y;
  v35 = a1;
  v30 = a8;
  v29 = a9;
  v33 = a5;
  v28 = a13;
  v32 = a6;
  v27 = a15;
  v34 = a3;
  v31 = a7;
  CLIPOBJ_vOffset(a7, v18, v16);
  if ( a11 )
  {
    v36[0] = v17 + *a11;
    v36[2] = v17 + a11[2];
    v36[1] = v16 + a11[1];
    v20 = v36;
    v36[3] = v16 + a11[3];
  }
  if ( a12 )
  {
    v37[0] = x + *a12;
    v37[2] = x + a12[2];
    v37[1] = y + a12[1];
    v21 = v37;
    v37[3] = y + a12[3];
  }
  if ( a10 )
  {
    v26[0] = v17 + *a10;
    v19 = v26;
    v26[1] = v16 + a10[1];
  }
  v24 = v35(v34, v33, v32, v31, v30, v29, v19, v20, v21, v28, a14, v27, a16);
  CLIPOBJ_vOffset(v31, -v17, -v16);
  return v24;
}
