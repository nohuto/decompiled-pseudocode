/*
 * XREFs of ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0203A74
 * Callers:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C02034AC (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C00424E4 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     CreateFade @ 0x1C01C1A90 (CreateFade.c)
 *     zzzShowFade @ 0x1C01C28F4 (zzzShowFade.c)
 */

__int64 __fastcall zzzMNFadeSelection(struct tagMENU *a1, struct tagITEM *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  _QWORD **v8; // rdx
  _QWORD **v9; // rax
  _QWORD *v10; // rcx
  _DWORD *v11; // rbx
  LONG v12; // edx
  LONG v13; // ecx
  HDC v14; // r14
  HDC DCEx; // rbx
  __int64 v17; // [rsp+60h] [rbp+7h] BYREF
  _QWORD *v18; // [rsp+68h] [rbp+Fh] BYREF
  _QWORD **v19; // [rsp+70h] [rbp+17h]
  struct tagRECT v20; // [rsp+88h] [rbp+2Fh] BYREF

  SmartObjStackRef<tagPOPUPMENU>::Init(&v17, 0LL);
  if ( gbDisableAlpha )
    goto LABEL_20;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000400) != 0x80000400 )
    goto LABEL_20;
  v4 = 1;
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 3
    || CInputGlobals::WasLastInputJournalling(gpInputGlobals) )
  {
    goto LABEL_20;
  }
  v5 = MNGetPopupFromMenu((__int64)a1, 0LL);
  v6 = v17;
  if ( v17 != v5 )
  {
    if ( v17 )
    {
      v7 = v18;
      v8 = v19;
      if ( (_QWORD **)v18[1] != &v18 || *v19 != &v18 )
        __fastfail(3u);
      *v19 = v18;
      v7[1] = v8;
    }
    v17 = v5;
    if ( !v5 )
      goto LABEL_20;
    v9 = (_QWORD **)(v5 + 88);
    v10 = *v9;
    if ( (_QWORD **)(*v9)[1] != v9 )
      __fastfail(3u);
    v18 = *v9;
    v19 = v9;
    v10[1] = &v18;
    *v9 = &v18;
    v6 = v17;
  }
  if ( !v6 )
    goto LABEL_20;
  v11 = *(_DWORD **)(v6 + 16);
  if ( !v11
    || (v20.left = *((_DWORD *)a2 + 18) + v11[36],
        v12 = *((_DWORD *)a2 + 19) + v11[37],
        v20.right = *((_DWORD *)a2 + 20) + v20.left,
        v13 = v12 + *((_DWORD *)a2 + 21),
        v20.top = v12,
        v20.bottom = v13,
        (v14 = (HDC)CreateFade(0LL, &v20, 0x15Eu, (v11[92] & 0xF) == 0 ? 0x100 : 0, v11[92])) == 0LL) )
  {
LABEL_20:
    v4 = 0;
    goto LABEL_21;
  }
  DCEx = (HDC)_GetDCEx(v11, 0LL, 1073807360LL);
  NtGdiBitBltInternal(
    v14,
    0,
    0,
    *((_DWORD *)a2 + 20),
    *((_DWORD *)a2 + 21),
    DCEx,
    *((_DWORD *)a2 + 18),
    *((_DWORD *)a2 + 19),
    13369376,
    0,
    0);
  _ReleaseDC(DCEx);
  zzzShowFade();
LABEL_21:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v17);
  return v4;
}
