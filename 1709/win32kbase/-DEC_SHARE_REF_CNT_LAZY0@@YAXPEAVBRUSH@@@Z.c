/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00496B0
 * Callers:
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0050890 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     GreDCSelectBrush @ 0x1C00514D0 (GreDCSelectBrush.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C005DFCC (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     GreDCSelectPen @ 0x1C007F750 (GreDCSelectPen.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F61C4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C004DBDC (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY0(struct HOBJ__ **a1)
{
  struct HOBJ__ *v1; // rdi
  int v2; // r14d
  int v3; // ebx
  _DWORD *v4; // r15
  GdiHandleManager *v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r9d
  __int64 v8; // r8
  unsigned int v9; // r10d
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rax
  GdiHandleManager *v14; // rbx
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // r9d
  unsigned int v19; // ecx
  __int64 v20; // r8
  _DWORD *v21; // rdx
  unsigned int v22; // eax
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  unsigned int v25; // r9d
  unsigned int v26; // ecx
  __int64 v27; // rdx
  _DWORD *v28; // [rsp+28h] [rbp-40h] BYREF
  int v29; // [rsp+30h] [rbp-38h]

  if ( a1 )
  {
    v1 = *a1;
    if ( (unsigned __int16)HmgDecrementShareReferenceCountEx((struct OBJECT *)a1, 0LL) == 1 )
    {
      v2 = 0;
      v28 = 0LL;
      v29 = 0;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v28, v1, 0x10u);
      v3 = v29;
      if ( v29 )
      {
        v4 = v28;
        v5 = gpHandleManager;
        v6 = GdiHandleManager::DecodeIndex(gpHandleManager, *v28 & 0xFFFFFF);
        v7 = v6;
        v8 = *((_QWORD *)v5 + 2);
        v9 = *(_DWORD *)(v8 + 2056);
        if ( v6 >= v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
          goto LABEL_33;
        if ( v6 >= v9 )
          v10 = ((v6 - v9) >> 16) + 1;
        else
          v10 = 0;
        v11 = *(_QWORD *)(v8 + 8LL * v10 + 8);
        if ( v10 )
          v7 = ((1 - v10) << 16) - v9 + v6;
        if ( v7 >= *(_DWORD *)(v11 + 20) )
LABEL_33:
          v12 = 0LL;
        else
          v12 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8LL * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8);
        v13 = *(_DWORD **)(v12 + 56);
        if ( v13 )
          v2 = *v13 & 2;
        v14 = gpHandleManager;
        v15 = GdiHandleManager::DecodeIndex(gpHandleManager, *v4 & 0xFFFFFF);
        v16 = v15;
        v17 = *((_QWORD *)v14 + 2);
        v18 = *(_DWORD *)(v17 + 2056);
        if ( v15 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
          goto LABEL_35;
        if ( v15 >= v18 )
          v19 = ((v15 - v18) >> 16) + 1;
        else
          v19 = 0;
        v20 = *(_QWORD *)(v17 + 8LL * v19 + 8);
        if ( v19 )
          v16 = ((1 - v19) << 16) - v18 + v15;
        if ( (unsigned int)v16 >= *(_DWORD *)(v20 + 20) )
LABEL_35:
          v21 = 0LL;
        else
          v21 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v16 >> 8)) + 16LL * (unsigned __int8)v16 + 8);
        v22 = GdiHandleManager::DecodeIndex(v14, (unsigned __int16)*v21 | (*v21 >> 8) & 0xFF0000);
        v23 = v22;
        v24 = *((_QWORD *)v14 + 2);
        v25 = *(_DWORD *)(v24 + 2056);
        if ( v22 < v25 + ((*(unsigned __int16 *)(v24 + 2) + 0xFFFF) << 16) )
        {
          if ( v22 >= v25 )
            v26 = ((v22 - v25) >> 16) + 1;
          else
            v26 = 0;
          v27 = *(_QWORD *)(v24 + 8LL * v26 + 8);
          if ( v26 )
            v23 = ((1 - v26) << 16) - v25 + v22;
          *(_DWORD *)(*(_QWORD *)v27 + 24 * v23 + 8) &= ~1u;
          ExReleasePushLockExclusiveEx(
            *(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v23 >> 8)) + 16LL * (unsigned __int8)v23,
            0LL);
          KeLeaveCriticalRegion();
        }
        v3 = 0;
        v29 = 0;
        v28 = 0LL;
        KeLeaveCriticalRegion();
      }
      if ( v2 )
        bDeleteBrush((HBRUSH)v1);
      if ( v3 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
    }
  }
}
