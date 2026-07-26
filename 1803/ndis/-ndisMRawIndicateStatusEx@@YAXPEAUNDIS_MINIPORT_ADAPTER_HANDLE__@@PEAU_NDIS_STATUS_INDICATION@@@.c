/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00197A4
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CD00 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C007D4E0 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00E90F0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C000FDEC (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0013610 (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C00136AC (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisFIndicateOffloadChange @ 0x1C0013AA8 (ndisFIndicateOffloadChange.c)
 *     ndisMIndicateOffloadChange @ 0x1C0013ED4 (ndisMIndicateOffloadChange.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015514 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001673C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisFInvokeStatus @ 0x1C0019D44 (ndisFInvokeStatus.c)
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019E34 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019E80 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisReferenceRefEx @ 0x1C0022014 (ndisReferenceRefEx.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisUpdateRcvFilterQueueParameters @ 0x1C003CF80 (ndisUpdateRcvFilterQueueParameters.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C0049E40 (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C0049EE8 (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C0049F3C (ndisFilterIndicateWoLPatternReject.c)
 *     ndisMIndicatePMCapabilities @ 0x1C004A038 (ndisMIndicatePMCapabilities.c)
 *     ndisMIndicatePMHardwareCapabilities @ 0x1C004A0F8 (ndisMIndicatePMHardwareCapabilities.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C004A200 (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C004A30C (ndisMIndicateWoLPatternReject.c)
 *     ndisMValidatePMWakeReason @ 0x1C004A77C (ndisMValidatePMWakeReason.c)
 *     ?ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z @ 0x1C005E368 (-ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisMIndicateHDSplitChange @ 0x1C00602CC (ndisMIndicateHDSplitChange.c)
 *     ndisMIndicateQosParametersChange @ 0x1C0060398 (ndisMIndicateQosParametersChange.c)
 *     ndisMIndicateTcpConnectionOffloadChange @ 0x1C0068250 (ndisMIndicateTcpConnectionOffloadChange.c)
 *     ndisMIndicatePDConfigChange @ 0x1C007840C (ndisMIndicatePDConfigChange.c)
 *     NdisMSleep @ 0x1C00C8450 (NdisMSleep.c)
 */

void __fastcall ndisMRawIndicateStatusEx(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  unsigned int StatusBufferSize; // esi
  unsigned int StatusCode; // edi
  char updated; // r12
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *StatusBuffer; // r15
  struct _NDIS_STATUS_INDICATION *v6; // r14
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v7; // rbx
  bool v8; // zf
  KSPIN_LOCK *v9; // r13
  int v10; // eax
  bool v11; // al
  KIRQL v12; // dl
  KIRQL v13; // r13
  __int64 v14; // rsi
  KIRQL v15; // dl
  KSPIN_LOCK *v16; // r13
  int v17; // eax
  KIRQL v18; // dl
  int v19; // eax
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char v26; // al
  KIRQL v27; // dl
  char v28; // al
  KIRQL v29; // dl
  char v30; // si
  __int64 v31; // rdx
  unsigned int v32; // eax
  KIRQL v33; // dl
  char v34; // al
  KIRQL v35; // dl
  NTSTATUS (__stdcall *SourceHandle)(_DRIVER_OBJECT *, PUNICODE_STRING); // rcx
  unsigned __int8 v37; // al
  unsigned int v38; // edi
  _OWORD *v39; // rax
  __int64 v40; // r8
  int v41; // eax
  int v42; // edx
  bool v43; // cl
  int v44; // eax
  int v45; // eax
  char v46; // di
  KIRQL NewIrql[4]; // [rsp+30h] [rbp-39h] BYREF
  int v48; // [rsp+34h] [rbp-35h]
  unsigned int v49; // [rsp+38h] [rbp-31h]
  BOOL v50; // [rsp+3Ch] [rbp-2Dh]
  unsigned int i; // [rsp+40h] [rbp-29h]
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v52; // [rsp+48h] [rbp-21h]
  struct _NDIS_STATUS_INDICATION *v53; // [rsp+50h] [rbp-19h]
  _QWORD v54[5]; // [rsp+58h] [rbp-11h] BYREF

  StatusBufferSize = a2->StatusBufferSize;
  StatusCode = a2->StatusCode;
  updated = 1;
  StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a2->StatusBuffer;
  v6 = a2;
  v53 = a2;
  v7 = a1;
  v52 = a1;
  v49 = StatusBufferSize;
  LOBYTE(v50) = 0;
  LOBYTE(v48) = 0;
  if ( (unsigned __int8)byte_1C009961F >= 4u )
    WPP_SF_qD(181LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, StatusCode);
  memset(v54, 0, sizeof(v54));
  v8 = v6->Header.Type == 0x98;
  LODWORD(v54[1]) = v7[87];
  v54[2] = *((_QWORD *)v7 + 346);
  v54[3] = *((_QWORD *)v7 + 347);
  v54[4] = *(_QWORD *)(v7 + 203);
  LODWORD(v54[0]) = 2621824;
  if ( !v8 || v6->Header.Size < 0x70u )
  {
    if ( (unsigned __int8)byte_1C009961F < 4u )
      return;
    v24 = 182LL;
    goto LABEL_187;
  }
  if ( StatusCode == 1073807384 )
  {
    if ( StatusBufferSize < 4 )
    {
      if ( (unsigned __int8)byte_1C009961F < 4u )
        return;
      v24 = 183LL;
      goto LABEL_187;
    }
    goto LABEL_9;
  }
  if ( StatusCode - 1073872902 <= 1 )
  {
    updated = ndisMIndicateOffloadChange((__int64)v7, StatusCode, StatusBuffer, StatusBufferSize);
    if ( !updated )
    {
      if ( (unsigned __int8)byte_1C009961F >= 4u )
      {
        v25 = 184LL;
LABEL_84:
        WPP_SF_(v25, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids);
        return;
      }
      return;
    }
  }
  if ( StatusCode != 1073872908 )
  {
    if ( ((StatusCode - 1073872912) & 0xFFFFFFEF) == 0 )
    {
      v9 = (KSPIN_LOCK *)(v7 + 24);
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 12);
      *((_QWORD *)v7 + 65) = KeGetCurrentThread();
      *((_DWORD *)v7 + 464) = 733350;
      v26 = ndisMIndicateReceiveFilterCapsChange((__int64)v7, StatusCode, StatusBuffer, StatusBufferSize, 0);
      v27 = NewIrql[0];
      *((_QWORD *)v7 + 65) = 0LL;
      updated = v26;
      *((_DWORD *)v7 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)v7 + 12, v27);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C009961F >= 4u )
        {
          v25 = 186LL;
          goto LABEL_84;
        }
        return;
      }
LABEL_10:
      if ( ((StatusCode - 1073872960) & 0xFFFFFFEF) == 0 )
      {
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v9);
        *((_QWORD *)v7 + 65) = KeGetCurrentThread();
        *((_DWORD *)v7 + 464) = 733369;
        v28 = ndisMIndicateNicSwitchCapsChange(v7, StatusCode, StatusBuffer, StatusBufferSize, 0);
        v29 = NewIrql[0];
        *((_QWORD *)v7 + 65) = 0LL;
        updated = v28;
        *((_DWORD *)v7 + 464) = 0;
        KeReleaseSpinLock(v9, v29);
        if ( !updated )
        {
          if ( (unsigned __int8)byte_1C009961F >= 4u )
          {
            v25 = 187LL;
            goto LABEL_84;
          }
          return;
        }
      }
      if ( StatusCode == 1073873408 )
      {
        updated = ndisMIndicatePDConfigChange((struct _NDIS_MINIPORT_BLOCK *)v7);
        if ( !updated )
        {
          if ( (unsigned __int8)byte_1C009961F >= 4u )
          {
            v25 = 188LL;
            goto LABEL_84;
          }
          return;
        }
      }
      else if ( StatusCode == 1076105216 )
      {
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v9);
        *((_QWORD *)v7 + 65) = KeGetCurrentThread();
        *((_DWORD *)v7 + 464) = 733403;
        if ( ndisIsRssEnabledForMiniport((struct _NDIS_MINIPORT_BLOCK *)v7) )
        {
          v31 = *((_QWORD *)v7 + 69);
          v32 = StatusBufferSize;
          if ( StatusBufferSize >= *(unsigned __int16 *)(v31 + 12) )
            v32 = *(unsigned __int16 *)(v31 + 12);
          memmove((void *)(v31 + *(unsigned int *)(v31 + 16)), StatusBuffer, v32);
          v30 = 1;
        }
        else
        {
          v30 = 0;
        }
        v33 = NewIrql[0];
        *((_QWORD *)v7 + 65) = 0LL;
        updated = 0;
        *((_DWORD *)v7 + 464) = 0;
        KeReleaseSpinLock(v9, v33);
        if ( !v30 )
        {
          if ( (unsigned __int8)byte_1C009961F >= 3u )
          {
            v25 = 189LL;
            goto LABEL_84;
          }
          return;
        }
      }
      else
      {
        if ( StatusCode - 1073873056 <= 1 )
        {
          NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v9);
          *((_QWORD *)v7 + 65) = KeGetCurrentThread();
          *((_DWORD *)v7 + 464) = 733421;
          v34 = ndisMIndicateQosParametersChange((struct _NDIS_MINIPORT_BLOCK *)v7);
          v35 = NewIrql[0];
          *((_QWORD *)v7 + 65) = 0LL;
          updated = v34;
          *((_DWORD *)v7 + 464) = 0;
          KeReleaseSpinLock(v9, v35);
          if ( !updated )
          {
            if ( (unsigned __int8)byte_1C009961F >= 3u )
            {
              v25 = 190LL;
              goto LABEL_84;
            }
            return;
          }
        }
        if ( StatusCode == 1073872944 )
        {
          updated = 0;
          if ( StatusBufferSize >= 0x444
            && *(_BYTE *)StatusBuffer == 0x80
            && *((_WORD *)StatusBuffer + 1) >= 0x444u
            && *((_BYTE *)StatusBuffer + 1) >= 2u
            && ((_DWORD)StatusBuffer[1] & 0xFFFF0000) == 0x100000 )
          {
            updated = ndisUpdateRcvFilterQueueParameters(v7, StatusBuffer);
          }
          if ( !updated )
          {
            if ( (unsigned __int8)byte_1C009961F >= 3u )
            {
              v25 = 191LL;
              goto LABEL_84;
            }
            return;
          }
        }
        else
        {
          if ( ((StatusCode - 1073872899) & 0xFFFFFFF7) == 0 )
          {
            updated = ndisMIndicateTcpConnectionOffloadChange(v7, StatusCode, StatusBuffer, StatusBufferSize);
            if ( !updated )
            {
              if ( (unsigned __int8)byte_1C009961F >= 3u )
              {
                v25 = 192LL;
                goto LABEL_84;
              }
              return;
            }
          }
          if ( StatusCode == 1073938515 )
            ndisMIndicatePMCapabilities(v7, v6);
          if ( StatusCode == 1073938516 )
            ndisMIndicatePMHardwareCapabilities(v7, v6);
          if ( StatusCode == 1073938513 )
            ndisMIndicateWoLPatternReject(v7, v6);
          if ( StatusCode == 1073938514 )
            ndisMIndicatePMOffloadReject(v7, v6);
          if ( StatusCode == 1073938517 )
          {
            updated = ndisMValidatePMWakeReason(v7, v6);
            if ( !updated )
            {
              if ( (unsigned __int8)byte_1C009961F < 3u )
                return;
              v24 = 193LL;
              goto LABEL_187;
            }
          }
          else
          {
            if ( StatusCode - 1073873072 <= 1 )
            {
              SourceHandle = (NTSTATUS (__stdcall *)(_DRIVER_OBJECT *, PUNICODE_STRING))v6->SourceHandle;
              if ( SourceHandle != DriverEntry )
              {
                if ( StatusCode == 1073873072 )
                {
                  if ( !ndisValidateMacAddressChange((struct _NDIS_MINIPORT_BLOCK *)v7, v6) )
                  {
                    if ( (unsigned __int8)byte_1C009961F < 3u )
                      return;
                    v24 = 194LL;
                    goto LABEL_187;
                  }
LABEL_142:
                  NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v9);
                  v8 = *((_BYTE *)v7 + 5344) == 0;
                  *((_QWORD *)v7 + 65) = KeGetCurrentThread();
                  *((_DWORD *)v7 + 464) = 733525;
                  if ( v8 )
                  {
                    if ( !ndisReferenceMiniport((__int64)v7) )
                    {
LABEL_149:
                      *((_QWORD *)v7 + 65) = 0LL;
                      *((_DWORD *)v7 + 464) = 0;
                      KeReleaseSpinLock(v9, NewIrql[0]);
                      return;
                    }
                    ExQueueWorkItem((PWORK_QUEUE_ITEM)v7 + 166, (WORK_QUEUE_TYPE)40);
                    *((_BYTE *)v7 + 5344) = 1;
                  }
                  v38 = StatusCode - 1073873072;
                  if ( v38 )
                  {
                    if ( v38 == 1 )
                    {
                      v7[1346] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v6->StatusBuffer;
                      *((_BYTE *)v7 + 5346) = 1;
                    }
                  }
                  else
                  {
                    v39 = v6->StatusBuffer;
                    *(_OWORD *)(v7 + 1337) = *v39;
                    *(_OWORD *)(v7 + 1341) = v39[1];
                    *((_WORD *)v7 + 2690) = *((_WORD *)v39 + 16);
                    *((_BYTE *)v7 + 5345) = 1;
                  }
                  goto LABEL_149;
                }
                if ( StatusCode != 1073873073 )
                  goto LABEL_142;
                v37 = *((_BYTE *)v7 + 32);
                if ( (v37 > 6u || v37 == 6 && *((_BYTE *)v7 + 33) >= 0x32u)
                  && v6->Header.Type == 0x98
                  && v6->Header.Revision
                  && v6->Header.Size >= 0x70u
                  && !v6->DestinationHandle
                  && (char *)SourceHandle == (char *)v7
                  && !v6->PortNumber
                  && v6->StatusBufferSize == 4 )
                {
                  goto LABEL_142;
                }
                if ( (unsigned __int8)byte_1C009961F < 3u )
                  return;
                v24 = 195LL;
LABEL_187:
                WPP_SF_q(v24, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v7);
                return;
              }
            }
            v10 = HIDWORD(v54[0]);
            if ( StatusCode == 1073807372 )
              v10 = 2;
            HIDWORD(v54[0]) = v10;
          }
        }
      }
      v11 = StatusCode == 1073807372;
      if ( StatusCode == 1073807371 )
      {
        HIDWORD(v54[0]) = 1;
        v11 = 1;
      }
      if ( v11 )
      {
        v6->StatusCode = 1073807383;
        v6->StatusBuffer = v54;
        StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v54;
        StatusCode = 1073807383;
        v6->StatusBufferSize = 40;
        v49 = 40;
      }
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v9);
      *((_QWORD *)v7 + 65) = KeGetCurrentThread();
      *((_DWORD *)v7 + 464) = 733590;
      if ( StatusCode == 1073807383 )
      {
        *((_BYTE *)v7 + 88) |= 0x18u;
        v19 = *((_DWORD *)StatusBuffer + 1);
        if ( v19 == 1 )
        {
          v19 = 1;
          if ( *((_DWORD *)v7 + 86) != 1 )
          {
            *((_QWORD *)v7 + 199) = MEMORY[0xFFFFF78000000320];
            v19 = *((_DWORD *)StatusBuffer + 1);
          }
        }
        *((_DWORD *)v7 + 86) = v19;
        v7[87] = StatusBuffer[2];
        *((_QWORD *)v7 + 346) = *((_QWORD *)StatusBuffer + 2);
        *((_QWORD *)v7 + 347) = *((_QWORD *)StatusBuffer + 3);
        v7[203] = StatusBuffer[8];
        v7[204] = StatusBuffer[9];
      }
      if ( StatusCode == 1073938437 )
        *((_QWORD *)v7 + 199) = MEMORY[0xFFFFF78000000320];
      v12 = NewIrql[0];
      *((_QWORD *)v7 + 65) = 0LL;
      *((_DWORD *)v7 + 464) = 0;
      KeReleaseSpinLock(v9, v12);
      v13 = KeAcquireSpinLockRaiseToDpc(v9);
      v14 = *((_QWORD *)v7 + 256);
      *((_QWORD *)v7 + 65) = KeGetCurrentThread();
      *((_DWORD *)v7 + 464) = 2105638;
      while ( v14 && !(unsigned __int8)ndisReferenceRefEx((PKSPIN_LOCK)(v14 + 320)) )
        v14 = *(_QWORD *)(v14 + 120);
      *((_QWORD *)v7 + 65) = 0LL;
      v15 = v13;
      *((_DWORD *)v7 + 464) = 0;
      v16 = (KSPIN_LOCK *)(v7 + 24);
      KeReleaseSpinLock((PKSPIN_LOCK)v7 + 12, v15);
      if ( v14 )
      {
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 144));
        *(_QWORD *)(v14 + 152) = KeGetCurrentThread();
        v17 = *(_DWORD *)(v14 + 56);
        *(_DWORD *)(v14 + 160) = 733628;
        if ( (v17 & 0x2000) != 0 )
        {
          do
          {
            *(_QWORD *)(v14 + 152) = 0LL;
            *(_DWORD *)(v14 + 160) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 144), NewIrql[0]);
            if ( KeGetCurrentIrql() == 2 )
            {
              for ( i = 0; i < 0x32; ++i )
                ;
            }
            else
            {
              NdisMSleep(0x32u);
            }
            NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 144));
            *(_QWORD *)(v14 + 152) = KeGetCurrentThread();
            *(_DWORD *)(v14 + 160) = 733628;
            v17 = *(_DWORD *)(v14 + 56);
          }
          while ( (v17 & 0x2000) != 0 );
          v7 = v52;
          v6 = v53;
        }
        *(_QWORD *)(v14 + 152) = 0LL;
        *(_DWORD *)(v14 + 160) = 0;
        *(_DWORD *)(v14 + 56) = v17 | 0x2000;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v14 + 144));
        if ( v6->SourceHandle == &ndisIntReqGeneric )
        {
          if ( StatusCode != 1073807383 )
            goto LABEL_43;
          StatusBuffer[1] = v7[86];
        }
        if ( StatusCode == 1073807383 )
        {
          v20 = v49;
          if ( v49 == -2 )
          {
            v20 = 40;
            v49 = 40;
            v6->StatusBufferSize = 40;
          }
          if ( !StatusBuffer || v20 < 0x28 )
            goto LABEL_51;
          v21 = *(_DWORD *)(v14 + 352);
          v22 = *((_DWORD *)StatusBuffer + 1);
          if ( v21 != v22 )
          {
            if ( v21 == 1 )
            {
              LOBYTE(v50) = 1;
            }
            else
            {
              v23 = (unsigned __int8)v48;
              if ( v22 == 1 )
                v23 = 1;
              v48 = v23;
            }
          }
          *(_DWORD *)(v14 + 352) = v22;
          *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v14 + 356) = StatusBuffer[2];
          *(_QWORD *)(v14 + 368) = *((_QWORD *)StatusBuffer + 3);
          *(_QWORD *)(v14 + 360) = *((_QWORD *)StatusBuffer + 2);
          *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v14 + 376) = StatusBuffer[8];
          *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v14 + 380) = StatusBuffer[9];
        }
LABEL_43:
        if ( StatusCode == 1073938515 )
          ndisFilterIndicatePMCapabilities(v14, v6);
        if ( StatusCode == 1073938513 )
          updated = ndisFilterIndicateWoLPatternReject(v14, v6);
        if ( StatusCode == 1073938514 )
          updated = ndisFilterIndicatePMOffloadReject(v14, v6);
        if ( StatusCode == 1073872902 )
          updated = ndisFIndicateOffloadChange(v14, StatusBuffer, v49);
LABEL_51:
        if ( updated )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v14 + 16) + 288LL) )
            ndisFInvokeStatus(v14, v6);
          else
            ndisFIndicateStatusInternal(v14, (__int64)v6);
          KeAcquireSpinLockAtDpcLevel(v16);
          *((_QWORD *)v7 + 65) = KeGetCurrentThread();
          *((_DWORD *)v7 + 464) = 733710;
          if ( v50 )
            ndisSwapFilterHandlersForMediaDisconnect((__int64)v7, 0LL, v14);
          if ( (_BYTE)v48 )
            ndisRestoreFilterHandlersForMediaDisconnect((__int64)v7, 0LL, v14);
          *((_QWORD *)v7 + 65) = 0LL;
          *((_DWORD *)v7 + 464) = 0;
          KeReleaseSpinLockFromDpcLevel(v16);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 144));
        v18 = NewIrql[0];
        *(_DWORD *)(v14 + 56) &= ~0x2000u;
        *(_QWORD *)(v14 + 152) = 0LL;
        *(_DWORD *)(v14 + 160) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 144), v18);
        ndisDereferenceRef((PKSPIN_LOCK)(v14 + 320));
LABEL_60:
        if ( (unsigned __int8)byte_1C009961F >= 4u )
          WPP_SF_qD(196LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v7, (unsigned int)v6->StatusCode);
        return;
      }
      ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v7, NewIrql);
      if ( v6->SourceHandle == &ndisIntReqGeneric )
      {
        if ( StatusCode != 1073807383 )
          goto LABEL_175;
        StatusBuffer[1] = v7[86];
      }
      if ( StatusCode == 1073807383 && StatusBuffer && v49 >= 0x28 )
      {
        v40 = 1LL;
        if ( *((_DWORD *)StatusBuffer + 1) == 1
          || (v41 = *((_DWORD *)v7 + 30),
              *((_DWORD *)v7 + 30) = v41 & 0xDFFFFFFF,
              v42 = *((_DWORD *)StatusBuffer + 1),
              v50 = (v41 & 0x20000000) != 0,
              v42 == 1) )
        {
          v44 = *((_DWORD *)v7 + 30);
          *((_DWORD *)v7 + 30) = v44 | 0x20000000;
          v42 = *((_DWORD *)StatusBuffer + 1);
          v43 = (v44 & 0x20000000) == 0;
          v48 = v43;
        }
        else
        {
          v43 = v48;
        }
        v45 = *((_DWORD *)v7 + 120);
        if ( v45 != v42 )
        {
          if ( v45 != 1 )
          {
            v46 = v43;
            if ( v42 == 1 )
              v46 = 1;
            goto LABEL_176;
          }
          LOBYTE(v50) = 1;
        }
      }
LABEL_175:
      v46 = v48;
LABEL_176:
      v6->Flags |= 2u;
      ndisIndicateStatusInternal((__int64)v7, (__int128 *)v6, v40);
      if ( v50 )
        ndisSwapFilterHandlersForMediaDisconnect((__int64)v7, 0LL, 0LL);
      if ( v46 )
        ndisRestoreFilterHandlersForMediaDisconnect((__int64)v7, 0LL, 0LL);
      ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v7, NewIrql[0]);
      goto LABEL_60;
    }
LABEL_9:
    v9 = (KSPIN_LOCK *)(v7 + 24);
    goto LABEL_10;
  }
  updated = ndisMIndicateHDSplitChange(v7, StatusBuffer, StatusBufferSize);
  if ( updated )
    goto LABEL_9;
  if ( (unsigned __int8)byte_1C009961F >= 4u )
  {
    v25 = 185LL;
    goto LABEL_84;
  }
}
