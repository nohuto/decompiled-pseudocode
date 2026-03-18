/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00313D0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0031560 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C003F66C (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreDCSelectPen @ 0x1C0076FF0 (GreDCSelectPen.c)
 *     GreDCSelectBrush @ 0x1C00771F0 (GreDCSelectBrush.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F5140 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0030EA0 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     bDeleteBrush @ 0x1C0058800 (bDeleteBrush.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY0(struct HOBJ__ **a1)
{
  struct HOBJ__ *v1; // rdi
  int v2; // esi
  int v3; // ebx
  GdiHandleManager *v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // r9d
  __int64 v7; // r8
  unsigned int v8; // r10d
  signed int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // [rsp+28h] [rbp-20h] BYREF
  int v14; // [rsp+30h] [rbp-18h]

  if ( !a1 )
    return;
  v1 = *a1;
  if ( (unsigned __int16)HmgDecrementShareReferenceCount((__int64)a1) != 1 )
    return;
  v2 = 0;
  v13 = 0LL;
  v14 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v13, v1, 16);
  v3 = v14;
  if ( v14 && v13 )
  {
    v4 = gpHandleManager;
    v5 = GdiHandleManager::DecodeIndex(gpHandleManager, *v13 & 0xFFFFFF);
    v6 = v5;
    v7 = *((_QWORD *)v4 + 2);
    v8 = *(_DWORD *)(v7 + 2056);
    if ( v5 < v8 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
    {
      if ( v5 >= v8 )
      {
        v9 = ((v5 - v8) >> 16) + 1;
        if ( (v5 - v8) >> 16 == -2 )
          goto LABEL_21;
      }
      else
      {
        v9 = 0;
      }
      v10 = *(_QWORD *)(v7 + 8LL * v9 + 8);
      if ( v9 )
        v6 = v5 - (v9 << 16) - v8 + 0x10000;
      if ( v6 < *(_DWORD *)(v10 + 20) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8LL * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
LABEL_13:
        v12 = *(_DWORD **)(v11 + 56);
        if ( v12 )
          v2 = *v12 & 2;
        HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
        v3 = v14;
        goto LABEL_16;
      }
    }
LABEL_21:
    v11 = 0LL;
    goto LABEL_13;
  }
LABEL_16:
  if ( v2 )
    bDeleteBrush((HBRUSH)v1);
  if ( v3 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v13);
}
