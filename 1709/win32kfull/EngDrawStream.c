/*
 * XREFs of EngDrawStream @ 0x1C000F5B0
 * Callers:
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C0277C80 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C027E420 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 * Callees:
 *     ?bRedirHooked@SURFACE@@QEAAHXZ @ 0x1C0012640 (-bRedirHooked@SURFACE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EngDrawStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int *a6,
        unsigned int a7,
        _DWORD *a8,
        _QWORD *a9)
{
  unsigned int v12; // edi
  __int64 v13; // r15
  unsigned int v14; // r14d
  __int64 i; // rbx
  __int64 v16; // r11
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r10
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 (__fastcall *v25)(int, int, int, int, __int64, __int64, __int64, __int64); // r10
  __int64 (__fastcall *v26)(int, int, int, int, __int64, __int64, __int64, __int64); // r8
  int v31; // [rsp+78h] [rbp-39h] BYREF
  __int64 v32; // [rsp+80h] [rbp-31h]
  __int64 v33; // [rsp+88h] [rbp-29h]
  __int64 v34; // [rsp+90h] [rbp-21h]
  int v35; // [rsp+98h] [rbp-19h] BYREF
  int v36; // [rsp+9Ch] [rbp-15h]
  int v37; // [rsp+A0h] [rbp-11h]
  int v38; // [rsp+A4h] [rbp-Dh]

  v12 = 1;
  v13 = SURFOBJ_TO_SURFACE(a1);
  SURFOBJ_TO_SURFACE(a2);
  v14 = a7;
  for ( i = *(_QWORD *)(v13 + 48); v14 >= 4; a8 += 15 )
  {
    if ( *a8 != 9 || v14 < 0x3C )
      return v12;
    v16 = *a6;
    v35 = a8[1];
    v17 = (int)a8[2];
    v36 = a8[2];
    v18 = (int)a8[3];
    v37 = a8[3];
    v19 = (int)a8[4];
    v38 = a8[4];
    if ( (unsigned __int64)(v16 + v35 + 0x80000000LL) > 0xFFFFFFFF )
      goto LABEL_22;
    if ( (unsigned __int64)(v16 + v18 + 0x80000000LL) > 0xFFFFFFFF )
      goto LABEL_22;
    v20 = a6[1];
    if ( (unsigned __int64)(v20 + v17 + 0x80000000LL) > 0xFFFFFFFF
      || (unsigned __int64)(v20 + v19 + 0x80000000LL) > 0xFFFFFFFF )
    {
      goto LABEL_22;
    }
    v21 = v16 + v35;
    v22 = v16 + v18;
    v35 = v21;
    v37 = v22;
    v36 = v20 + v17;
    v38 = v20 + v19;
    if ( v21 >= v22 )
    {
      if ( v21 - v22 < 0 )
        goto LABEL_22;
      v23 = 0;
    }
    else
    {
      v23 = (unsigned int)(v22 - v21) >> 31;
    }
    if ( !v23 )
    {
      v24 = *(_QWORD *)(v13 + 48);
      v25 = EngNineGrid;
      if ( *(_QWORD *)(v24 + 3432) )
        v25 = *(__int64 (__fastcall **)(int, int, int, int, __int64, __int64, __int64, __int64))(v24 + 3432);
      if ( (!*(_QWORD *)(a1 + 16) || (*(_DWORD *)(i + 2144) & 0x400) == 0)
        && !(unsigned int)SURFACE::bRedirHooked((SURFACE *)v13)
        && (*(_BYTE *)(v13 + 112) & 0x10) == 0 )
      {
        v25 = v26;
      }
      v34 = a9[6];
      v33 = a9[5];
      v32 = a9[4];
      v31 = 33488896;
      v12 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int *, _DWORD *, _DWORD *, int *, _QWORD))v25)(
              a1,
              a2,
              a3,
              a4,
              &v35,
              a8 + 5,
              a8 + 9,
              &v31,
              0LL);
      goto LABEL_18;
    }
LABEL_22:
    v12 = 0;
LABEL_18:
    v14 -= 60;
  }
  return v12;
}
