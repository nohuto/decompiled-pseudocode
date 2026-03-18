/*
 * XREFs of ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0094ED4
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C005DFCC (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvDisableMDEV @ 0x1C00A27D0 (DrvDisableMDEV.c)
 * Callees:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0060708 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0094F90 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00A5B48 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall DrvDisableMDEVChildren(HSEMAPHORE **a1, int a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // esi
  __int64 v11; // rax
  HDEV *v13; // rdi

  v4 = a2;
  v6 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdTrace(v6);
  v9 = 0LL;
  v10 = 1;
  if ( *((_DWORD *)a1 + 5) )
  {
    do
    {
      if ( (_DWORD)v4 )
      {
        v10 = DrvDisableDisplay(a1[5 * v9 + 4], 0LL);
        if ( !v10 )
          goto LABEL_8;
        DrvDxgkDisplayOnOff(a1[5 * v9 + 4], 0LL, a3);
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *((_DWORD *)a1 + 5) );
    if ( v10 )
      goto LABEL_5;
LABEL_8:
    if ( (_DWORD)v9 && (_DWORD)v4 )
    {
      v13 = (HDEV *)(a1 + 4);
      do
      {
        LOBYTE(v7) = 1;
        DrvDxgkDisplayOnOff(*v13, v7, a3);
        while ( !(unsigned int)DrvEnableDisplay(*v13) )
          ;
        v13 += 5;
        --v9;
      }
      while ( v9 );
    }
  }
LABEL_5:
  v11 = WdLogNewEntry5_WdTrace(v8);
  *(_QWORD *)(v11 + 24) = v10;
  WdLogEvent5_WdTrace(v11);
  return (unsigned int)v10;
}
