/*
 * XREFs of xxxMNButtonUp @ 0x1C0205FA4
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0204EF0 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 */

_QWORD *__fastcall xxxMNButtonUp(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 **v6; // rdi
  _DWORD *v7; // rcx
  __int64 v9; // r14
  __int64 v10; // rbx
  _QWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v5 = a2;
  v6 = a1;
  if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
  {
    a2 = 0xFFFFFFFFLL;
    if ( (_DWORD)a3 == -1 || *(_DWORD *)(**a1 + 80) != (_DWORD)a3 )
      goto LABEL_10;
    v7 = (_DWORD *)**a1;
    if ( (*(_DWORD *)**v6 & 1) != 0 )
    {
      if ( (*v7 & 0x20) != 0 )
      {
        if ( (*(_DWORD *)**v6 & 0x80u) != 0 )
        {
          *(_DWORD *)**v6 &= ~0x80u;
          xxxMNCancel(v5, 0LL, 0LL, 0LL);
LABEL_11:
          a1 = v6;
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, a3, a4);
        }
LABEL_10:
        *(_DWORD *)(v5 + 8) &= 0xFFFFFFB7;
        goto LABEL_11;
      }
    }
    else if ( (*v7 & 0x2000) != 0 )
    {
      *(_DWORD *)**v6 &= ~0x80u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v11, **v6, a3, a4);
      xxxMNOpenHierarchy(v11, v5);
      goto LABEL_10;
    }
    if ( *(_DWORD *)(**v6 + 80) != -1 )
    {
      a2 = **v6;
      if ( *(_DWORD *)(a2 + 80) < *(_DWORD *)(*(_QWORD *)(a2 + 40) + 68LL) )
      {
        a2 = **v6;
        v9 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 96LL) + 152LL * *(unsigned int *)(a2 + 80);
        if ( (*(_DWORD *)v9 & 0x800) == 0 && (*(_DWORD *)(v9 + 4) & 3) == 0 && !*(_QWORD *)(v9 + 16) )
        {
          v10 = **v6;
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v12, v10, a3, a4);
          xxxMNDismissWithNotify(v5, v12, v9, *(_DWORD *)(v10 + 80), a4);
          goto LABEL_11;
        }
      }
    }
    goto LABEL_10;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, a3, a4);
}
