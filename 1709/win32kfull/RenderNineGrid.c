/*
 * XREFs of RenderNineGrid @ 0x1C000FD60
 * Callers:
 *     xxEngNineGrid @ 0x1C000F8A0 (xxEngNineGrid.c)
 * Callees:
 *     RenderNineGridInternal @ 0x1C0010030 (RenderNineGridInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00EC71C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RenderNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        _DWORD *a9,
        _QWORD *a10,
        int a11)
{
  BOOL v12; // edx
  int v13; // r9d
  int v14; // r10d
  int v15; // ecx
  int v16; // r8d
  _DWORD v18[2]; // [rsp+60h] [rbp-C8h] BYREF
  int v19; // [rsp+68h] [rbp-C0h]
  int v20; // [rsp+6Ch] [rbp-BCh]
  __int64 v21; // [rsp+70h] [rbp-B8h]
  __int64 v22; // [rsp+78h] [rbp-B0h]
  __int64 v23; // [rsp+80h] [rbp-A8h]
  struct _SURFOBJ *v24; // [rsp+88h] [rbp-A0h]
  __int64 v25; // [rsp+90h] [rbp-98h]
  __int64 v26; // [rsp+98h] [rbp-90h]
  _DWORD *v27; // [rsp+A0h] [rbp-88h]
  _DWORD *v28; // [rsp+A8h] [rbp-80h]
  _QWORD *v29; // [rsp+B0h] [rbp-78h]
  int v30; // [rsp+B8h] [rbp-70h]
  __int64 v31; // [rsp+C0h] [rbp-68h]
  __int64 v32; // [rsp+C8h] [rbp-60h]
  __int64 v33; // [rsp+D0h] [rbp-58h]
  __int64 v34; // [rsp+D8h] [rbp-50h]
  int v35; // [rsp+E0h] [rbp-48h]
  int v36; // [rsp+E4h] [rbp-44h]

  v23 = a3;
  v22 = a2;
  v24 = a1;
  v25 = a3;
  v26 = a4;
  v27 = a5;
  v21 = a8;
  v28 = a9;
  v29 = a10;
  SURFOBJ_TO_SURFACE(a2);
  SURFOBJ_TO_SURFACE(a1);
  v12 = a11 && (*a9 & 0x10) != 0;
  v13 = *a5;
  v18[0] = *a5;
  v18[1] = a5[1];
  v14 = a5[2];
  v19 = v14;
  v20 = a5[3];
  if ( v12 )
  {
    v15 = a7[2];
    v16 = *a7;
    v19 = v15 + *a7 - v13;
    v18[0] = v15 + v16 - v14;
  }
  RenderNineGridInternal(v23, v22, (unsigned int)v18, (_DWORD)a7, v21, (__int64)a9);
  v34 = 0LL;
  v35 = a5[2] - *a5;
  v36 = a5[3] - a5[1];
  if ( (*a9 & 4) != 0 )
  {
    v30 = 33488896;
    v33 = a10[6];
    v32 = a10[5];
    v31 = a10[4];
    if ( a1->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread(KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
      {
        goto LABEL_35;
      }
      if ( a1->iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread(KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
      {
        return _guard_dispatch_icall_fptr();
      }
    }
    SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    return _guard_dispatch_icall_fptr();
  }
  if ( (*a9 & 8) != 0 )
  {
    if ( a1->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread(KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
      {
LABEL_35:
        W32GetThreadWin32Thread(KeGetCurrentThread());
        return _guard_dispatch_icall_fptr();
      }
      if ( a1->iType == 1
        && (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread(KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
      {
        return _guard_dispatch_icall_fptr();
      }
    }
    SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    return _guard_dispatch_icall_fptr();
  }
  if ( a1->iType != 1 )
  {
LABEL_8:
    SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    return _guard_dispatch_icall_fptr();
  }
  if ( (unsigned int)bAllowShareAccess(a1)
    && W32GetThreadWin32Thread(KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
    && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
     || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
    && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
  {
    goto LABEL_35;
  }
  if ( a1->iType != 1
    || !(unsigned int)bAllowShareAccess(a1)
    || !W32GetThreadWin32Thread(KeGetCurrentThread())
    || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108) )
  {
    goto LABEL_8;
  }
  return _guard_dispatch_icall_fptr();
}
