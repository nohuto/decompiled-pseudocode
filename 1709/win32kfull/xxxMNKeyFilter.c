/*
 * XREFs of xxxMNKeyFilter @ 0x1C021A71C
 * Callers:
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNPositionSysMenu @ 0x1C0138480 (MNPositionSysMenu.c)
 *     xxxMessageBeep @ 0x1C013EAE0 (xxxMessageBeep.c)
 *     xxxMNStartMenu @ 0x1C01F72BC (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C0203CEC (xxxMNLoop.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02064C0 (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C0206910 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0209144 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0209BF8 (xxxMNSwitchToAlternateMenu.c)
 */

_QWORD *__fastcall xxxMNKeyFilter(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 **v6; // rbx
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v17[2]; // [rsp+28h] [rbp-19h] BYREF
  __int64 *v18[2]; // [rsp+38h] [rbp-9h] BYREF
  __int64 *v19[2]; // [rsp+48h] [rbp+7h] BYREF
  __int64 *v20[2]; // [rsp+58h] [rbp+17h] BYREF
  __int64 *v21[2]; // [rsp+68h] [rbp+27h] BYREF
  __int64 *v22[2]; // [rsp+78h] [rbp+37h] BYREF
  __int64 *v23[2]; // [rsp+88h] [rbp+47h] BYREF

  v4 = a3;
  v6 = a1;
  v7 = (*(_DWORD *)(a2 + 8) >> 2) & 1;
  if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
  {
    if ( !v7 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v17, **a1, a3, a4);
      if ( !xxxMNStartMenu(v17, a2, 1LL) )
      {
LABEL_26:
        a1 = v6;
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, a3, a4);
      }
      *(_DWORD *)(a2 + 8) |= 4u;
    }
    if ( v4 )
    {
      if ( v4 == 32 || v4 == 45 && (!*(_QWORD *)(**v6 + 8) || (*(_BYTE *)(*(_QWORD *)(**v6 + 8) + 71LL) & 0xC0) == 0x40) )
      {
        if ( *(_QWORD *)(**v6 + 8) && (*(_BYTE *)(*(_QWORD *)(**v6 + 8) + 70LL) & 8) == 0 )
        {
          xxxMessageBeep(0LL, a2, a3, a4);
          goto LABEL_19;
        }
        xxxMNCloseHierarchy(**v6, a2, a3, a4);
        if ( (*(_DWORD *)**v6 & 4) == 0 && *(_QWORD *)(**v6 + 48) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, **v6, a3, a4);
          xxxMNSwitchToAlternateMenu(v19, a2, v8, v9);
        }
        if ( (*(_DWORD *)**v6 & 4) == 0 )
          goto LABEL_19;
        MNPositionSysMenu(*(_QWORD *)(**v6 + 16), *(_QWORD *)(**v6 + 40));
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v20, **v6, v10, v11);
        xxxMNSelectItem(v20, a2, 0LL);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, **v6, v12, v13);
        xxxMNOpenHierarchy(v21, a2, v14, v15);
        *(_DWORD *)**v6 &= ~0x80u;
      }
      else
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, **v6, a3, a4);
        xxxMNChar(v18, a2, v4);
        if ( *(_DWORD *)(**v6 + 80) == -1 )
        {
LABEL_19:
          *(_DWORD *)(a2 + 8) &= ~0x100u;
          if ( (*(_DWORD *)**v6 & 0x80000) == 0 )
            xxxMNCancel(a2, 0, 0LL, 0LL);
          goto LABEL_26;
        }
      }
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v22, **v6, a3, a4);
      xxxMNSelectItem(v22, a2, 0LL);
    }
    if ( !v7 && (*(_DWORD *)(a2 + 8) & 4) != 0 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v23, **v6, a3, a4);
      xxxMNLoop(v23, a2, 0LL, 0);
    }
    goto LABEL_26;
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, a2, a3, a4);
}
