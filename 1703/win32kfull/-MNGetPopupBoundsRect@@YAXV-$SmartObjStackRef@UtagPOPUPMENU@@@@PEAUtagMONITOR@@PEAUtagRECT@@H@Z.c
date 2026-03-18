/*
 * XREFs of ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0202DD4
 * Callers:
 *     ?MNCheckScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C0202C40 (-MNCheckScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMENU@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0203704 (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     SubtractRect @ 0x1C00EE518 (SubtractRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

_QWORD *__fastcall MNGetPopupBoundsRect(_QWORD *a1, __int64 a2, _OWORD *a3, int a4)
{
  _DWORD *v4; // r10
  BOOL v9; // eax
  __int64 v10; // r8
  int v11; // edx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  bool v16; // zf
  __int128 *v17; // rax
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int128 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v30; // [rsp+20h] [rbp-30h] BYREF
  __int128 v31; // [rsp+28h] [rbp-28h] BYREF
  __int128 v32; // [rsp+38h] [rbp-18h] BYREF

  v4 = (_DWORD *)*a1;
  if ( *(_DWORD *)*a1 < 0x80000000 )
  {
    v10 = *((_QWORD *)v4 + 2);
    v11 = *(_DWORD *)(v10 + 368);
    goto LABEL_13;
  }
  v9 = IsRectEmptyInl((const struct tagRECT *)(a2 + 472));
  v10 = *((_QWORD *)v4 + 2);
  v11 = *(_DWORD *)(v10 + 368);
  if ( v9 )
  {
LABEL_13:
    v18 = v11 & 0xF;
    if ( !v18
      && (v19 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v19 + 8) + 52LL) & 1) != 0 )
    {
      v17 = (__int128 *)(*(_QWORD *)(a2 + 40) + 44LL);
    }
    else if ( v18 == 1
           && (v20 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v20 + 8) + 52LL) & 1) != 0 )
    {
      v17 = (__int128 *)(*(_QWORD *)(a2 + 40) + 60LL);
    }
    else
    {
      v17 = (__int128 *)(*(_QWORD *)(a2 + 40) + 28LL);
    }
    goto LABEL_22;
  }
  v12 = *(_DWORD *)(v10 + 368) & 0xF;
  if ( !v12
    && (v13 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v13 + 8) + 52LL) & 1) != 0 )
  {
    v14 = 488LL;
  }
  else if ( v12 != 1
         || (v15 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 408LL)) == 0
         || (v16 = (*(_DWORD *)(**(_QWORD **)(v15 + 8) + 52LL) & 1) == 0, v14 = 504LL, v16) )
  {
    v14 = 472LL;
  }
  v17 = (__int128 *)(a2 + v14);
LABEL_22:
  v31 = *v17;
  v21 = *((_QWORD *)v4 + 2);
  if ( (*(_DWORD *)(v21 + 368) & 0xF) == 0
    && (v22 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 408LL)) != 0
    && (*(_DWORD *)(**(_QWORD **)(v22 + 8) + 52LL) & 1) != 0 )
  {
    v23 = (__int128 *)(*(_QWORD *)(a2 + 40) + 44LL);
  }
  else if ( (*(_DWORD *)(v21 + 368) & 0xF) == 1
         && (v24 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 408LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v24 + 8) + 52LL) & 1) != 0 )
  {
    v23 = (__int128 *)(*(_QWORD *)(a2 + 40) + 60LL);
  }
  else
  {
    v23 = (__int128 *)(*(_QWORD *)(a2 + 40) + 28LL);
  }
  v32 = *v23;
  v25 = *((_QWORD *)v4 + 2);
  if ( (*(_DWORD *)(v25 + 368) & 0xF) != 2 )
  {
    v26 = ValidateHmonitorNoRip(*(_QWORD *)(v25 + 360));
    v30 = v26;
    if ( v26 )
    {
      if ( v26 != a2 )
      {
        if ( *(_DWORD *)*a1 < 0x80000000 || IsRectEmptyInl((const struct tagRECT *)(a2 + 472)) )
          v28 = *(_QWORD *)(a2 + 40) + 28LL;
        else
          v28 = v27;
        PhysicalToLogicalDPIRect(&v31, v28, 0LL, &v30);
        if ( !a4 )
          goto LABEL_42;
        PhysicalToLogicalDPIRect(&v32, *(_QWORD *)(a2 + 40) + 28LL, 0LL, &v30);
      }
    }
  }
  if ( !a4 )
  {
LABEL_42:
    *a3 = v31;
    return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  }
  SubtractRect((__int64)a3, (int *)&v32, (int *)&v31);
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
}
