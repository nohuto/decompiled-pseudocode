/*
 * XREFs of ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C00F8360
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003D0D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C006CDD0 (HmgSafeNextObjt.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C00FB414 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 */

void __fastcall DrvTransferGdiObjects(struct SURFACE **a1, HDEV a2)
{
  _QWORD *v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rsi
  __int64 Objt; // rax
  int v10; // r8d
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // rsi
  __int64 *v14; // rax
  int v15; // r8d
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  struct SURFACE **v19; // [rsp+30h] [rbp+8h] BYREF
  PDEV **v20; // [rsp+38h] [rbp+10h] BYREF

  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v4[3] = a1;
  v4[4] = a2;
  v4[5] = 15LL;
  WdLogEvent5_WdEvent(v4);
  v19 = a1;
  v20 = (PDEV **)a2;
  GreAcquireHmgrSemaphore(v6, v5, v7);
  LODWORD(v8) = 0;
  while ( 1 )
  {
    Objt = HmgSafeNextObjt(v8, 1);
    if ( !Objt )
      break;
    v8 = *(_QWORD *)Objt;
    if ( *(HDEV *)(Objt + 48) == a2 )
    {
      *(_DWORD *)(Objt + 36) &= ~0x2000u;
      *(_QWORD *)(Objt + 48) = a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v19);
      PDEVOBJ::vUnreferencePdev(&v20, 0, v10);
    }
  }
  LODWORD(v11) = 0;
  while ( 1 )
  {
    v12 = (__int64 *)HmgSafeNextObjt(v11, 5);
    if ( !v12 )
      break;
    v11 = *v12;
    if ( (HDEV)v12[6] == a2 )
      v12[6] = (__int64)a1;
  }
  LODWORD(v13) = 0;
  while ( 1 )
  {
    v14 = (__int64 *)HmgSafeNextObjt(v13, 28);
    if ( !v14 )
      break;
    v13 = *v14;
    if ( (HDEV)v14[5] == a2 )
    {
      v14[5] = (__int64)a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v19);
      PDEVOBJ::vUnreferencePdev(&v20, 0, v15);
    }
  }
  vTransferWndObjs(a1[321], a2, (HDEV)a1);
  GreReleaseHmgrSemaphore(v17, v16, v18);
}
