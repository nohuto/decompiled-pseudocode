/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001741C
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C460 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00783D0 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00DD78C (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0012428 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateStatusInternal @ 0x1C00179C4 (ndisFIndicateStatusInternal.c)
 *     ndisFInvokeStatus @ 0x1C0017FC0 (ndisFInvokeStatus.c)
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019420 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019AF4 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisReferenceRefEx @ 0x1C001EE0C (ndisReferenceRefEx.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C00222B0 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0026514 (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C00265B0 (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisFIndicateOffloadChange @ 0x1C00267E4 (ndisFIndicateOffloadChange.c)
 *     ndisMIndicateOffloadChange @ 0x1C0026A54 (ndisMIndicateOffloadChange.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisUpdateRcvFilterQueueParameters @ 0x1C003F188 (ndisUpdateRcvFilterQueueParameters.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C004AFD8 (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C004B080 (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C004B0D0 (ndisFilterIndicateWoLPatternReject.c)
 *     ndisMIndicatePMCapabilities @ 0x1C004B1C8 (ndisMIndicatePMCapabilities.c)
 *     ndisMIndicatePMHardwareCapabilities @ 0x1C004B280 (ndisMIndicatePMHardwareCapabilities.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C004B398 (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C004B488 (ndisMIndicateWoLPatternReject.c)
 *     ndisMValidatePMWakeReason @ 0x1C004B844 (ndisMValidatePMWakeReason.c)
 *     ?ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z @ 0x1C005DD9C (-ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisMIndicateHDSplitChange @ 0x1C005F9C0 (ndisMIndicateHDSplitChange.c)
 *     ndisMIndicateQosParametersChange @ 0x1C005FA8C (ndisMIndicateQosParametersChange.c)
 *     ndisMIndicateTcpConnectionOffloadChange @ 0x1C0066EA0 (ndisMIndicateTcpConnectionOffloadChange.c)
 *     ndisMIndicatePDConfigChange @ 0x1C00760DC (ndisMIndicatePDConfigChange.c)
 *     NdisMSleep @ 0x1C00BC470 (NdisMSleep.c)
 */

void __fastcall ndisMRawIndicateStatusEx(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  size_t StatusBufferSize; // r13
  unsigned int StatusCode; // esi
  char updated; // r12
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *StatusBuffer; // r15
  struct _NDIS_STATUS_INDICATION *v6; // r14
  bool v8; // zf
  int v9; // eax
  bool v10; // al
  KIRQL v11; // dl
  KIRQL v12; // al
  __int64 v13; // rbx
  KIRQL v14; // dl
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rcx
  char v20; // al
  KIRQL v21; // dl
  char v22; // al
  KIRQL v23; // dl
  __int64 v24; // rdx
  char v25; // bl
  KIRQL v26; // dl
  char v27; // al
  KIRQL v28; // dl
  NTSTATUS (__stdcall *SourceHandle)(_DRIVER_OBJECT *, PUNICODE_STRING); // rcx
  unsigned __int8 v30; // al
  unsigned int v31; // esi
  _OWORD *v32; // rax
  KIRQL v33; // dl
  int v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // ecx
  char v39; // bl
  int v40; // [rsp+20h] [rbp-49h]
  KIRQL NewIrql[4]; // [rsp+30h] [rbp-39h] BYREF
  int v42; // [rsp+34h] [rbp-35h]
  KIRQL v43; // [rsp+38h] [rbp-31h]
  BOOL v44; // [rsp+3Ch] [rbp-2Dh]
  unsigned int i; // [rsp+40h] [rbp-29h]
  unsigned int v46; // [rsp+44h] [rbp-25h]
  struct _NDIS_STATUS_INDICATION *v47; // [rsp+50h] [rbp-19h]
  _QWORD v48[5]; // [rsp+58h] [rbp-11h] BYREF

  StatusBufferSize = a2->StatusBufferSize;
  StatusCode = a2->StatusCode;
  updated = 1;
  StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a2->StatusBuffer;
  v6 = a2;
  v46 = a2->StatusBufferSize;
  v47 = a2;
  LOBYTE(v44) = 0;
  LOBYTE(v42) = 0;
  if ( (unsigned __int8)byte_1C009261F >= 4u )
    WPP_SF_qD(166LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, StatusCode);
  memset(v48, 0, sizeof(v48));
  v8 = v6->Header.Type == 0x98;
  LODWORD(v48[1]) = a1[87];
  v48[2] = *((_QWORD *)a1 + 346);
  v48[3] = *((_QWORD *)a1 + 347);
  v48[4] = *(_QWORD *)(a1 + 203);
  LODWORD(v48[0]) = 2621824;
  if ( !v8 || v6->Header.Size < 0x70u )
  {
    if ( (unsigned __int8)byte_1C009261F < 4u )
      return;
    v18 = 167LL;
    goto LABEL_184;
  }
  if ( StatusCode == 1073807384 )
  {
    if ( (unsigned int)StatusBufferSize < 4 )
    {
      if ( (unsigned __int8)byte_1C009261F < 4u )
        return;
      v18 = 168LL;
      goto LABEL_184;
    }
    goto LABEL_28;
  }
  if ( StatusCode - 1073872902 <= 1 )
  {
    updated = ndisMIndicateOffloadChange(a1, StatusCode, StatusBuffer, (unsigned int)StatusBufferSize);
    if ( !updated )
    {
      if ( (unsigned __int8)byte_1C009261F >= 4u )
      {
        v19 = 169LL;
LABEL_81:
        WPP_SF_(v19, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids);
        return;
      }
      return;
    }
  }
  if ( StatusCode != 1073872908 )
  {
    if ( ((StatusCode - 1073872912) & 0xFFFFFFEF) == 0 )
    {
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      *((_DWORD *)a1 + 464) = 733064;
      v20 = ndisMIndicateReceiveFilterCapsChange(a1, StatusCode, StatusBuffer, (unsigned int)StatusBufferSize, 0);
      v21 = NewIrql[0];
      *((_QWORD *)a1 + 65) = 0LL;
      updated = v20;
      *((_DWORD *)a1 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v21);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C009261F >= 4u )
        {
          v19 = 171LL;
          goto LABEL_81;
        }
        return;
      }
    }
    if ( ((StatusCode - 1073872960) & 0xFFFFFFEF) == 0 )
    {
      LOBYTE(v40) = 0;
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      *((_DWORD *)a1 + 464) = 733083;
      v22 = ndisMIndicateNicSwitchCapsChange(a1, StatusCode, StatusBuffer, (unsigned int)StatusBufferSize, v40);
      v23 = NewIrql[0];
      *((_QWORD *)a1 + 65) = 0LL;
      updated = v22;
      *((_DWORD *)a1 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v23);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C009261F >= 4u )
        {
          v19 = 172LL;
          goto LABEL_81;
        }
        return;
      }
    }
    if ( StatusCode == 1073873408 )
    {
      updated = ndisMIndicatePDConfigChange((struct _NDIS_MINIPORT_BLOCK *)a1);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C009261F >= 4u )
        {
          v19 = 173LL;
          goto LABEL_81;
        }
        return;
      }
    }
    else if ( StatusCode == 1076105216 )
    {
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
      v24 = *((_QWORD *)a1 + 69);
      *((_QWORD *)a1 + 65) = KeGetCurrentThread();
      *((_DWORD *)a1 + 464) = 733117;
      if ( v24 && (_DWORD)StatusBufferSize == *(unsigned __int16 *)(v24 + 12) )
      {
        memmove((void *)(v24 + *(unsigned int *)(v24 + 16)), StatusBuffer, StatusBufferSize);
        v25 = 1;
      }
      else
      {
        v25 = 0;
      }
      v26 = NewIrql[0];
      *((_QWORD *)a1 + 65) = 0LL;
      updated = 0;
      *((_DWORD *)a1 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v26);
      if ( !v25 )
      {
        if ( (unsigned __int8)byte_1C009261F >= 3u )
        {
          v19 = 174LL;
          goto LABEL_81;
        }
        return;
      }
    }
    else
    {
      if ( StatusCode - 1073873056 <= 1 )
      {
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        *((_DWORD *)a1 + 464) = 733135;
        v27 = ndisMIndicateQosParametersChange((struct _NDIS_MINIPORT_BLOCK *)a1);
        v28 = NewIrql[0];
        *((_QWORD *)a1 + 65) = 0LL;
        updated = v27;
        *((_DWORD *)a1 + 464) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v28);
        if ( !updated )
        {
          if ( (unsigned __int8)byte_1C009261F >= 3u )
          {
            v19 = 175LL;
            goto LABEL_81;
          }
          return;
        }
      }
      if ( StatusCode == 1073872944 )
      {
        updated = 0;
        if ( (unsigned int)StatusBufferSize >= 0x444
          && *(_BYTE *)StatusBuffer == 0x80
          && *((_WORD *)StatusBuffer + 1) >= 0x444u
          && *((_BYTE *)StatusBuffer + 1) >= 2u
          && ((_DWORD)StatusBuffer[1] & 0xFFFF0000) == 0x100000 )
        {
          updated = ndisUpdateRcvFilterQueueParameters(a1, StatusBuffer);
        }
        if ( !updated )
        {
          if ( (unsigned __int8)byte_1C009261F >= 3u )
          {
            v19 = 176LL;
            goto LABEL_81;
          }
          return;
        }
      }
      else
      {
        if ( ((StatusCode - 1073872899) & 0xFFFFFFF7) == 0 )
        {
          updated = ndisMIndicateTcpConnectionOffloadChange(
                      a1,
                      StatusCode,
                      StatusBuffer,
                      (unsigned int)StatusBufferSize);
          if ( !updated )
          {
            if ( (unsigned __int8)byte_1C009261F >= 3u )
            {
              v19 = 177LL;
              goto LABEL_81;
            }
            return;
          }
        }
        if ( StatusCode == 1073938515 )
          ndisMIndicatePMCapabilities(a1, v6);
        if ( StatusCode == 1073938516 )
          ndisMIndicatePMHardwareCapabilities(a1, v6);
        if ( StatusCode == 1073938513 )
          ndisMIndicateWoLPatternReject(a1, v6);
        if ( StatusCode == 1073938514 )
          ndisMIndicatePMOffloadReject(a1, v6);
        if ( StatusCode == 1073938517 )
        {
          updated = ndisMValidatePMWakeReason(a1, v6);
          if ( !updated )
          {
            if ( (unsigned __int8)byte_1C009261F < 3u )
              return;
            v18 = 178LL;
            goto LABEL_184;
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
                if ( !ndisValidateMacAddressChange((struct _NDIS_MINIPORT_BLOCK *)a1, v6) )
                {
                  if ( (unsigned __int8)byte_1C009261F < 3u )
                    return;
                  v18 = 179LL;
                  goto LABEL_184;
                }
LABEL_137:
                NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
                *((_QWORD *)a1 + 65) = KeGetCurrentThread();
                *((_DWORD *)a1 + 464) = 733239;
                if ( !*((_BYTE *)a1 + 5344) )
                {
                  if ( !ndisReferenceMiniport((__int64)a1, 0x3Au) )
                  {
LABEL_144:
                    v33 = NewIrql[0];
                    *((_QWORD *)a1 + 65) = 0LL;
                    *((_DWORD *)a1 + 464) = 0;
                    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v33);
                    return;
                  }
                  ExQueueWorkItem((PWORK_QUEUE_ITEM)a1 + 166, NormalWorkQueue);
                  *((_BYTE *)a1 + 5344) = 1;
                }
                v31 = StatusCode - 1073873072;
                if ( v31 )
                {
                  if ( v31 == 1 )
                  {
                    a1[1346] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v6->StatusBuffer;
                    *((_BYTE *)a1 + 5346) = 1;
                  }
                }
                else
                {
                  v32 = v6->StatusBuffer;
                  *(_OWORD *)(a1 + 1337) = *v32;
                  *(_OWORD *)(a1 + 1341) = v32[1];
                  *((_WORD *)a1 + 2690) = *((_WORD *)v32 + 16);
                  *((_BYTE *)a1 + 5345) = 1;
                }
                goto LABEL_144;
              }
              if ( StatusCode != 1073873073 )
                goto LABEL_137;
              v30 = *((_BYTE *)a1 + 32);
              if ( (v30 > 6u || v30 == 6 && *((_BYTE *)a1 + 33) >= 0x32u)
                && v6->Header.Type == 0x98
                && v6->Header.Revision
                && v6->Header.Size >= 0x70u
                && !v6->DestinationHandle
                && (char *)SourceHandle == (char *)a1
                && !v6->PortNumber
                && v6->StatusBufferSize == 4 )
              {
                goto LABEL_137;
              }
              if ( (unsigned __int8)byte_1C009261F < 3u )
                return;
              v18 = 180LL;
LABEL_184:
              WPP_SF_q(v18, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
              return;
            }
          }
          v9 = HIDWORD(v48[0]);
          if ( StatusCode == 1073807372 )
            v9 = 2;
          HIDWORD(v48[0]) = v9;
        }
      }
    }
LABEL_28:
    v10 = StatusCode == 1073807372;
    if ( StatusCode == 1073807371 )
    {
      HIDWORD(v48[0]) = 1;
      v10 = 1;
    }
    if ( v10 )
    {
      v6->StatusCode = 1073807383;
      v6->StatusBuffer = v48;
      StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v48;
      v6->StatusBufferSize = 40;
      StatusCode = 1073807383;
      LODWORD(StatusBufferSize) = 40;
      v46 = 40;
    }
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
    *((_QWORD *)a1 + 65) = KeGetCurrentThread();
    *((_DWORD *)a1 + 464) = 733304;
    if ( StatusCode == 1073807383 )
    {
      *((_BYTE *)a1 + 88) |= 0x18u;
      if ( *((_DWORD *)StatusBuffer + 1) == 1 && *((_DWORD *)a1 + 86) != 1 )
        *((_QWORD *)a1 + 199) = MEMORY[0xFFFFF78000000320];
      a1[86] = StatusBuffer[1];
      a1[87] = StatusBuffer[2];
      *((_QWORD *)a1 + 346) = *((_QWORD *)StatusBuffer + 2);
      *((_QWORD *)a1 + 347) = *((_QWORD *)StatusBuffer + 3);
      a1[203] = StatusBuffer[8];
      a1[204] = StatusBuffer[9];
    }
    v11 = NewIrql[0];
    *((_QWORD *)a1 + 65) = 0LL;
    *((_DWORD *)a1 + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v11);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
    v13 = *((_QWORD *)a1 + 256);
    v43 = v12;
    *((_QWORD *)a1 + 65) = KeGetCurrentThread();
    *((_DWORD *)a1 + 464) = 2105675;
    if ( v13 )
    {
      do
      {
        if ( (unsigned __int8)ndisReferenceRefEx((PKSPIN_LOCK)(v13 + 320)) )
          break;
        v13 = *(_QWORD *)(v13 + 120);
      }
      while ( v13 );
      v12 = v43;
    }
    *((_QWORD *)a1 + 65) = 0LL;
    *((_DWORD *)a1 + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v12);
    if ( v13 )
    {
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 144));
      *(_QWORD *)(v13 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v13 + 160) = 733332;
      if ( (*(_DWORD *)(v13 + 56) & 0x2000) != 0 )
      {
        do
        {
          *(_QWORD *)(v13 + 152) = 0LL;
          *(_DWORD *)(v13 + 160) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 144), NewIrql[0]);
          if ( KeGetCurrentIrql() == 2 )
          {
            for ( i = 0; i < 0x32; ++i )
              ;
          }
          else
          {
            NdisMSleep(0x32u);
          }
          NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 144));
          *(_QWORD *)(v13 + 152) = KeGetCurrentThread();
          *(_DWORD *)(v13 + 160) = 733332;
        }
        while ( (*(_DWORD *)(v13 + 56) & 0x2000) != 0 );
        v6 = v47;
        LODWORD(StatusBufferSize) = v46;
      }
      *(_DWORD *)(v13 + 56) |= 0x2000u;
      *(_QWORD *)(v13 + 152) = 0LL;
      *(_DWORD *)(v13 + 160) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v13 + 144));
      if ( v6->SourceHandle == &ndisIntReqGeneric )
      {
        if ( StatusCode != 1073807383 )
          goto LABEL_40;
        StatusBuffer[1] = a1[86];
      }
      if ( StatusCode == 1073807383 )
      {
        if ( (_DWORD)StatusBufferSize == -2 )
        {
          LODWORD(StatusBufferSize) = 40;
          v6->StatusBufferSize = 40;
        }
        if ( !StatusBuffer || (unsigned int)StatusBufferSize < 0x28 )
          goto LABEL_48;
        v15 = *(_DWORD *)(v13 + 352);
        v16 = *((_DWORD *)StatusBuffer + 1);
        if ( v15 != v16 )
        {
          if ( v15 == 1 )
          {
            LOBYTE(v44) = 1;
          }
          else
          {
            v17 = (unsigned __int8)v42;
            if ( v16 == 1 )
              v17 = 1;
            v42 = v17;
          }
        }
        *(_DWORD *)(v13 + 352) = v16;
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v13 + 356) = StatusBuffer[2];
        *(_QWORD *)(v13 + 368) = *((_QWORD *)StatusBuffer + 3);
        *(_QWORD *)(v13 + 360) = *((_QWORD *)StatusBuffer + 2);
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v13 + 376) = StatusBuffer[8];
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v13 + 380) = StatusBuffer[9];
      }
LABEL_40:
      if ( StatusCode == 1073938515 )
        ndisFilterIndicatePMCapabilities(v13, v6);
      if ( StatusCode == 1073938513 )
        updated = ndisFilterIndicateWoLPatternReject(v13, v6);
      if ( StatusCode == 1073938514 )
        updated = ndisFilterIndicatePMOffloadReject(v13, v6);
      if ( StatusCode == 1073872902 )
        updated = ndisFIndicateOffloadChange(v13, StatusBuffer, (unsigned int)StatusBufferSize);
LABEL_48:
      if ( updated )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v13 + 16) + 288LL) )
          ndisFInvokeStatus(v13, v6);
        else
          ndisFIndicateStatusInternal(v13, v6);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 12);
        *((_QWORD *)a1 + 65) = KeGetCurrentThread();
        *((_DWORD *)a1 + 464) = 733414;
        if ( v44 )
          ndisSwapFilterHandlersForMediaDisconnect((__int64)a1, 0LL, v13);
        if ( (_BYTE)v42 )
          ndisRestoreFilterHandlersForMediaDisconnect(a1, 0LL, v13);
        *((_QWORD *)a1 + 65) = 0LL;
        *((_DWORD *)a1 + 464) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)a1 + 12);
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 144));
      v14 = NewIrql[0];
      *(_DWORD *)(v13 + 56) &= ~0x2000u;
      *(_QWORD *)(v13 + 152) = 0LL;
      *(_DWORD *)(v13 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 144), v14);
      ndisDereferenceRef((PKSPIN_LOCK)(v13 + 320));
LABEL_57:
      if ( (unsigned __int8)byte_1C009261F >= 4u )
        WPP_SF_qD(181LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, (unsigned int)v6->StatusCode);
      return;
    }
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
    if ( v6->SourceHandle == &ndisIntReqGeneric )
    {
      if ( StatusCode != 1073807383 )
        goto LABEL_172;
      StatusBuffer[1] = a1[86];
    }
    if ( StatusCode == 1073807383 && StatusBuffer && (unsigned int)StatusBufferSize >= 0x28 )
    {
      if ( *((_DWORD *)StatusBuffer + 1) == 1
        || (v35 = *((_DWORD *)a1 + 30),
            *((_DWORD *)a1 + 30) = v35 & 0xDFFFFFFF,
            v44 = (v35 & 0x20000000) != 0,
            *((_DWORD *)StatusBuffer + 1) == 1) )
      {
        v36 = *((_DWORD *)a1 + 30);
        *((_DWORD *)a1 + 30) = v36 | 0x20000000;
        LOBYTE(v34) = (v36 & 0x20000000) == 0;
        v42 = v34;
      }
      else
      {
        LOBYTE(v34) = v42;
      }
      v37 = *((_DWORD *)a1 + 120);
      v38 = *((_DWORD *)StatusBuffer + 1);
      if ( v37 != v38 )
      {
        if ( v37 != 1 )
        {
          v39 = v34;
          if ( v38 == 1 )
            v39 = 1;
          goto LABEL_173;
        }
        LOBYTE(v44) = 1;
      }
    }
LABEL_172:
    v39 = v42;
LABEL_173:
    v6->Flags |= 2u;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1);
    if ( v44 )
      ndisSwapFilterHandlersForMediaDisconnect((__int64)a1, 0LL, 0LL);
    if ( v39 )
      ndisRestoreFilterHandlersForMediaDisconnect(a1, 0LL, 0LL);
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql[0]);
    goto LABEL_57;
  }
  updated = ndisMIndicateHDSplitChange(a1, StatusBuffer, (unsigned int)StatusBufferSize);
  if ( updated )
    goto LABEL_28;
  if ( (unsigned __int8)byte_1C009261F >= 4u )
  {
    v19 = 170LL;
    goto LABEL_81;
  }
}
