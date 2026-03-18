/*
 * XREFs of xxxMNButtonUp @ 0x1C020451C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C02034AC (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 */

_QWORD *__fastcall xxxMNButtonUp(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // rdx
  __int64 v12; // rsi
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a1;
  if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
  {
    if ( a3 == -1 )
      goto LABEL_10;
    v7 = *a1;
    v8 = *(unsigned int *)(*a1 + 80);
    if ( (_DWORD)v8 != a3 )
      goto LABEL_10;
    v9 = *(_DWORD *)v7;
    if ( (*(_DWORD *)v7 & 1) != 0 )
    {
      if ( (v9 & 0x20) != 0 )
      {
        if ( (v9 & 0x80u) != 0 )
        {
          *(_DWORD *)v7 = v9 & 0xFFFFFF7F;
          xxxMNCancel(a2, 0LL, 0LL, 0LL);
LABEL_11:
          a1 = v6;
          return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
        }
LABEL_10:
        *(_DWORD *)(a2 + 8) &= 0xFFFFFFB7;
        goto LABEL_11;
      }
    }
    else if ( (v9 & 0x2000) != 0 )
    {
      *(_DWORD *)v7 = v9 & 0xFFFFFF7F;
      SmartObjStackRef<tagPOPUPMENU>::Init(v13, *v6);
      xxxMNOpenHierarchy(v13, a2);
      goto LABEL_10;
    }
    if ( (_DWORD)v8 != -1 )
    {
      v11 = *(_QWORD *)(v7 + 40);
      if ( (unsigned int)v8 < *(_DWORD *)(v11 + 68) )
      {
        v12 = *(_QWORD *)(v11 + 96) + 152 * v8;
        if ( (*(_DWORD *)v12 & 0x800) == 0 && (*(_DWORD *)(v12 + 4) & 3) == 0 && !*(_QWORD *)(v12 + 16) )
        {
          SmartObjStackRef<tagPOPUPMENU>::Init(v13, v7);
          xxxMNDismissWithNotify(a2, v13, v12, *(_DWORD *)(v7 + 80), a4);
          goto LABEL_11;
        }
      }
    }
    goto LABEL_10;
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
}
