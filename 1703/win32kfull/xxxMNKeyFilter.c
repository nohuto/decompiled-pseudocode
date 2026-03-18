/*
 * XREFs of xxxMNKeyFilter @ 0x1C0219524
 * Callers:
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 * Callees:
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNPositionSysMenu @ 0x1C01336B0 (MNPositionSysMenu.c)
 *     xxxMessageBeep @ 0x1C0137A80 (xxxMessageBeep.c)
 *     xxxMNStartMenu @ 0x1C01EB49C (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C02022C0 (xxxMNLoop.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C020497C (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C0204D10 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C02071C0 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0207B78 (xxxMNSwitchToAlternateMenu.c)
 */

_QWORD *__fastcall xxxMNKeyFilter(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 *v5; // rbx
  int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v13[4]; // [rsp+20h] [rbp-20h] BYREF

  v5 = a1;
  if ( (*(_DWORD *)(a2 + 8) & 8) == 0 )
  {
    v6 = *(_DWORD *)(a2 + 8) & 4;
    if ( !v6 )
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v13, *a1);
      if ( !xxxMNStartMenu(v13, a2, 1) )
      {
LABEL_26:
        a1 = v5;
        return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
      }
      *(_DWORD *)(a2 + 8) |= 4u;
    }
    if ( a3 )
    {
      if ( a3 == 32 || a3 == 45 && ((v7 = *(_QWORD *)(*v5 + 8)) == 0 || (*(_BYTE *)(v7 + 71) & 0xC0) == 0x40) )
      {
        v8 = *(_QWORD *)(*v5 + 8);
        if ( v8 && (*(_BYTE *)(v8 + 70) & 8) == 0 )
        {
          xxxMessageBeep(0LL);
          goto LABEL_19;
        }
        xxxMNCloseHierarchy(*v5, a2);
        v11 = *v5;
        if ( (*(_DWORD *)*v5 & 4) == 0 && *(_QWORD *)(v11 + 48) )
        {
          SmartObjStackRef<tagPOPUPMENU>::Init(v13, v11);
          xxxMNSwitchToAlternateMenu(v13, a2);
        }
        if ( (*(_DWORD *)*v5 & 4) == 0 )
          goto LABEL_19;
        MNPositionSysMenu(*(_QWORD *)(*v5 + 16), *(_QWORD *)(*v5 + 40), v9, v10);
        SmartObjStackRef<tagPOPUPMENU>::Init(v13, *v5);
        xxxMNSelectItem(v13, a2, 0);
        SmartObjStackRef<tagPOPUPMENU>::Init(v13, *v5);
        xxxMNOpenHierarchy(v13, a2);
        *(_DWORD *)*v5 &= ~0x80u;
      }
      else
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v13, *v5);
        xxxMNChar(v13, a2, a3);
        if ( *(_DWORD *)(*v5 + 80) == -1 )
        {
LABEL_19:
          *(_DWORD *)(a2 + 8) &= ~0x100u;
          if ( (*(_DWORD *)*v5 & 0x80000) == 0 )
            xxxMNCancel(a2, 0, 0, 0LL);
          goto LABEL_26;
        }
      }
    }
    else
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v13, *v5);
      xxxMNSelectItem(v13, a2, 0);
    }
    if ( !v6 && (*(_DWORD *)(a2 + 8) & 4) != 0 )
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v13, *v5);
      xxxMNLoop(v13, a2, 0LL, 0);
    }
    goto LABEL_26;
  }
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
}
