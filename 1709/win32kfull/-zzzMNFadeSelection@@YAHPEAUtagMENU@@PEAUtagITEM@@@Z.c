/*
 * XREFs of ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0205578
 * Callers:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0204EF0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     MNGetPopupFromMenu @ 0x1C0097378 (MNGetPopupFromMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     zzzShowFade @ 0x1C013DE64 (zzzShowFade.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C013FDAC (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall zzzMNFadeSelection(struct tagMENU *a1, struct tagITEM *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  LONG v12; // edx
  LONG v13; // ecx
  HDC FadeInternal; // rbp
  HDC DCEx; // rbx
  _QWORD v17[2]; // [rsp+60h] [rbp-48h] BYREF
  struct tagRECT v18; // [rsp+70h] [rbp-38h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v17, 0LL, a3, a4);
  if ( gbDisableAlpha )
    goto LABEL_10;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000400) != 0x80000400 )
    goto LABEL_10;
  v9 = 1;
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1 )
    goto LABEL_10;
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 3 )
    goto LABEL_10;
  if ( CInputGlobals::WasLastInputJournalling(gpInputGlobals) )
    goto LABEL_10;
  v10 = MNGetPopupFromMenu((__int64)a1, 0LL, v7, v8);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v17, (__int64)v10);
  if ( !*(_QWORD *)v17[0] )
    goto LABEL_10;
  v11 = *(_DWORD **)(*(_QWORD *)v17[0] + 16LL);
  if ( !v11
    || (v18.left = *((_DWORD *)a2 + 18) + v11[36],
        v12 = *((_DWORD *)a2 + 19) + v11[37],
        v18.right = *((_DWORD *)a2 + 20) + v18.left,
        v13 = v12 + *((_DWORD *)a2 + 21),
        v18.top = v12,
        v18.bottom = v13,
        (FadeInternal = CreateFadeInternal(0LL, (__m128i *)&v18, 350, (v11[92] & 0xF) == 0 ? 0x100 : 0, v11[92])) == 0LL) )
  {
LABEL_10:
    v9 = 0;
  }
  else
  {
    DCEx = (HDC)_GetDCEx(v11, 0LL, 1073807360LL);
    NtGdiBitBltInternal(
      FadeInternal,
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
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17, v6, v7, v8);
  return v9;
}
