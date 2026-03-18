/*
 * XREFs of MNSetTimerToCloseHierarchy @ 0x1C02040A4
 * Callers:
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     InternalSetTimer @ 0x1C00B26E0 (InternalSetTimer.c)
 */

__int64 __fastcall MNSetTimerToCloseHierarchy(int **a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rax
  _DWORD *v5; // rcx
  _DWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD **v8; // rdx
  _QWORD **v9; // rcx
  _QWORD *v10; // rax
  _DWORD *v12; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-18h] BYREF
  _QWORD **v14; // [rsp+40h] [rbp-10h]

  SmartObjStackRef<tagPOPUPMENU>::Init(&v12, 0LL);
  v2 = **a1;
  if ( (v2 & 0x20) == 0 )
  {
    v3 = 0;
    goto LABEL_19;
  }
  if ( (v2 & 0x4000) != 0 )
  {
    v3 = 1;
    goto LABEL_19;
  }
  v4 = safe_cast_fnid_to_PMENUWND(*((_QWORD *)*a1 + 3));
  v3 = 0;
  if ( !v4 )
    goto LABEL_19;
  v5 = *(_DWORD **)(v4 + 8);
  v6 = v12;
  if ( v12 != v5 )
  {
    if ( v12 )
    {
      v7 = v13;
      v8 = v14;
      if ( (_QWORD **)v13[1] != &v13 || *v14 != &v13 )
        __fastfail(3u);
      *v14 = v13;
      v7[1] = v8;
    }
    v12 = v5;
    if ( !v5 )
      goto LABEL_19;
    v9 = (_QWORD **)(v5 + 22);
    v10 = *v9;
    if ( (_QWORD **)(*v9)[1] != v9 )
      __fastfail(3u);
    v13 = *v9;
    v14 = v9;
    v10[1] = &v13;
    *v9 = &v13;
    v6 = v12;
  }
  if ( !v6 )
  {
LABEL_19:
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v12);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
    return v3;
  }
  if ( !InternalSetTimer(*((_QWORD *)*a1 + 2), 0xFFFFLL, gdtMNDropDown, 0LL, 0, 16) )
  {
    v3 = -1;
    goto LABEL_19;
  }
  **a1 |= 0x4000u;
  *v12 |= 0x1000u;
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v12);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return 1LL;
}
