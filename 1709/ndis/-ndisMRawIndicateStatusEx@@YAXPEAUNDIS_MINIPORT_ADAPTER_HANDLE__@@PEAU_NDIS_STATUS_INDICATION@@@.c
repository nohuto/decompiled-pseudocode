/*
 * XREFs of ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0005B84
 * Callers:
 *     ?ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0010AB0 (-ndisMpHookDefaultIndicateStatus@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIP.c)
 *     ?ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C007C580 (-ndisMpHookRawIndicateStatus@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00E76B4 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00056C8 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0005714 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisFIndicateStatusInternal @ 0x1C00064EC (ndisFIndicateStatusInternal.c)
 *     NdisDereferenceWithTag @ 0x1C0006C70 (NdisDereferenceWithTag.c)
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001CBE8 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001DA70 (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C001ED7C (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateOffloadChange @ 0x1C0023D40 (ndisFIndicateOffloadChange.c)
 *     ndisMIndicateOffloadChange @ 0x1C0023F24 (ndisMIndicateOffloadChange.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisUpdateRcvFilterQueueParameters @ 0x1C003BC38 (ndisUpdateRcvFilterQueueParameters.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C0048A30 (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C0048AD8 (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C0048B2C (ndisFilterIndicateWoLPatternReject.c)
 *     ndisMIndicatePMCapabilities @ 0x1C0048C24 (ndisMIndicatePMCapabilities.c)
 *     ndisMIndicatePMHardwareCapabilities @ 0x1C0048CDC (ndisMIndicatePMHardwareCapabilities.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C0048DF4 (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C0048EE4 (ndisMIndicateWoLPatternReject.c)
 *     ndisMValidatePMWakeReason @ 0x1C0049338 (ndisMValidatePMWakeReason.c)
 *     ?ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z @ 0x1C005D980 (-ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisMIndicateHDSplitChange @ 0x1C005F76C (ndisMIndicateHDSplitChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C005F838 (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisMIndicateQosParametersChange @ 0x1C005F8B4 (ndisMIndicateQosParametersChange.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C005FB3C (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateTcpConnectionOffloadChange @ 0x1C0067680 (ndisMIndicateTcpConnectionOffloadChange.c)
 *     ndisMIndicatePDConfigChange @ 0x1C0077C5C (ndisMIndicatePDConfigChange.c)
 *     NdisMSleep @ 0x1C00C4100 (NdisMSleep.c)
 */

void __fastcall ndisMRawIndicateStatusEx(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  unsigned int StatusBufferSize; // r13d
  unsigned int StatusCode; // esi
  char updated; // r12
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *StatusBuffer; // r15
  struct _NDIS_STATUS_INDICATION *v6; // r14
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v7; // rdi
  bool v8; // zf
  int v9; // eax
  bool v10; // al
  KIRQL v11; // dl
  KIRQL v12; // al
  __int64 v13; // rbx
  KIRQL v14; // al
  unsigned __int16 v15; // cx
  __int64 v16; // rsi
  unsigned int v17; // r15d
  KIRQL v18; // dl
  __int64 v19; // rbx
  KIRQL v20; // si
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  char v28; // bl
  __int64 v29; // rcx
  __int64 v30; // rcx
  char v31; // al
  KIRQL v32; // dl
  char v33; // al
  KIRQL v34; // dl
  char v35; // bl
  __int64 v36; // rax
  unsigned int v37; // edx
  KIRQL v38; // dl
  char v39; // al
  KIRQL v40; // dl
  NTSTATUS (__stdcall *SourceHandle)(_DRIVER_OBJECT *, PUNICODE_STRING); // rcx
  unsigned __int8 v42; // al
  __int64 v43; // rdx
  _OWORD *v44; // rax
  KIRQL v45; // dl
  unsigned int v46; // esi
  int v47; // eax
  int v48; // [rsp+20h] [rbp-49h]
  KIRQL NewIrql[4]; // [rsp+30h] [rbp-39h] BYREF
  int v50; // [rsp+34h] [rbp-35h]
  unsigned int i; // [rsp+38h] [rbp-31h]
  KIRQL v52; // [rsp+3Ch] [rbp-2Dh]
  KIRQL v53; // [rsp+3Dh] [rbp-2Ch]
  int v54; // [rsp+40h] [rbp-29h]
  BOOL v55; // [rsp+44h] [rbp-25h]
  struct NDIS_MINIPORT_ADAPTER_HANDLE__ *v56; // [rsp+48h] [rbp-21h]
  struct _NDIS_STATUS_INDICATION *v57; // [rsp+50h] [rbp-19h]
  _QWORD v58[5]; // [rsp+58h] [rbp-11h] BYREF

  StatusBufferSize = a2->StatusBufferSize;
  StatusCode = a2->StatusCode;
  updated = 1;
  StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)a2->StatusBuffer;
  v6 = a2;
  v57 = a2;
  v7 = a1;
  v56 = a1;
  v54 = StatusBufferSize;
  LOBYTE(v55) = 0;
  LOBYTE(v50) = 0;
  if ( (unsigned __int8)byte_1C009875F >= 4u )
    WPP_SF_qD(178LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, StatusCode);
  memset(v58, 0, sizeof(v58));
  v8 = v6->Header.Type == 0x98;
  LODWORD(v58[1]) = v7[87];
  v58[2] = *((_QWORD *)v7 + 346);
  v58[3] = *((_QWORD *)v7 + 347);
  v58[4] = *(_QWORD *)(v7 + 203);
  LODWORD(v58[0]) = 2621824;
  if ( !v8 || v6->Header.Size < 0x70u )
  {
    if ( (unsigned __int8)byte_1C009875F < 4u )
      return;
    v29 = 179LL;
    goto LABEL_197;
  }
  if ( StatusCode == 1073807384 )
  {
    if ( StatusBufferSize < 4 )
    {
      if ( (unsigned __int8)byte_1C009875F < 4u )
        return;
      v29 = 180LL;
      goto LABEL_197;
    }
    goto LABEL_28;
  }
  if ( StatusCode - 1073872902 <= 1 )
  {
    updated = ndisMIndicateOffloadChange(v7, StatusCode, StatusBuffer, StatusBufferSize);
    if ( !updated )
    {
      if ( (unsigned __int8)byte_1C009875F >= 4u )
      {
        v30 = 181LL;
LABEL_108:
        WPP_SF_(v30, &WPP_89f39f5878d93d725c4978a535989123_Traceguids);
        return;
      }
      return;
    }
  }
  if ( StatusCode != 1073872908 )
  {
    if ( ((StatusCode - 1073872912) & 0xFFFFFFEF) == 0 )
    {
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 12);
      *((_QWORD *)v7 + 65) = KeGetCurrentThread();
      *((_DWORD *)v7 + 464) = 733286;
      v31 = ndisMIndicateReceiveFilterCapsChange(v7, StatusCode, StatusBuffer, StatusBufferSize, 0);
      v32 = NewIrql[0];
      *((_QWORD *)v7 + 65) = 0LL;
      updated = v31;
      *((_DWORD *)v7 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)v7 + 12, v32);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C009875F >= 4u )
        {
          v30 = 183LL;
          goto LABEL_108;
        }
        return;
      }
    }
    if ( ((StatusCode - 1073872960) & 0xFFFFFFEF) == 0 )
    {
      LOBYTE(v48) = 0;
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 12);
      *((_QWORD *)v7 + 65) = KeGetCurrentThread();
      *((_DWORD *)v7 + 464) = 733305;
      v33 = ndisMIndicateNicSwitchCapsChange(v7, StatusCode, StatusBuffer, StatusBufferSize, v48);
      v34 = NewIrql[0];
      *((_QWORD *)v7 + 65) = 0LL;
      updated = v33;
      *((_DWORD *)v7 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)v7 + 12, v34);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C009875F >= 4u )
        {
          v30 = 184LL;
          goto LABEL_108;
        }
        return;
      }
    }
    if ( StatusCode == 1073873408 )
    {
      updated = ndisMIndicatePDConfigChange((struct _NDIS_MINIPORT_BLOCK *)v7);
      if ( !updated )
      {
        if ( (unsigned __int8)byte_1C009875F >= 4u )
        {
          v30 = 185LL;
          goto LABEL_108;
        }
        return;
      }
    }
    else if ( StatusCode == 1076105216 )
    {
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 12);
      *((_QWORD *)v7 + 65) = KeGetCurrentThread();
      *((_DWORD *)v7 + 464) = 733339;
      if ( ndisIsRssEnabledForMiniport((struct _NDIS_MINIPORT_BLOCK *)v7) )
      {
        v36 = *((_QWORD *)v7 + 69);
        v37 = *(unsigned __int16 *)(v36 + 12);
        if ( StatusBufferSize < v37 )
          v37 = StatusBufferSize;
        memmove((void *)(v36 + *(unsigned int *)(v36 + 16)), StatusBuffer, v37);
        v35 = 1;
      }
      else
      {
        v35 = 0;
      }
      v38 = NewIrql[0];
      *((_QWORD *)v7 + 65) = 0LL;
      updated = 0;
      *((_DWORD *)v7 + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)v7 + 12, v38);
      if ( !v35 )
      {
        if ( (unsigned __int8)byte_1C009875F >= 3u )
        {
          v30 = 186LL;
          goto LABEL_108;
        }
        return;
      }
    }
    else
    {
      if ( StatusCode - 1073873056 <= 1 )
      {
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 12);
        *((_QWORD *)v7 + 65) = KeGetCurrentThread();
        *((_DWORD *)v7 + 464) = 733357;
        v39 = ndisMIndicateQosParametersChange((struct _NDIS_MINIPORT_BLOCK *)v7);
        v40 = NewIrql[0];
        *((_QWORD *)v7 + 65) = 0LL;
        updated = v39;
        *((_DWORD *)v7 + 464) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)v7 + 12, v40);
        if ( !updated )
        {
          if ( (unsigned __int8)byte_1C009875F >= 3u )
          {
            v30 = 187LL;
            goto LABEL_108;
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
          if ( (unsigned __int8)byte_1C009875F >= 3u )
          {
            v30 = 188LL;
            goto LABEL_108;
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
            if ( (unsigned __int8)byte_1C009875F >= 3u )
            {
              v30 = 189LL;
              goto LABEL_108;
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
            if ( (unsigned __int8)byte_1C009875F < 3u )
              return;
            v29 = 190LL;
            goto LABEL_197;
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
                  if ( (unsigned __int8)byte_1C009875F < 3u )
                    return;
                  v29 = 191LL;
                  goto LABEL_197;
                }
LABEL_165:
                NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 12);
                *((_QWORD *)v7 + 65) = KeGetCurrentThread();
                *((_DWORD *)v7 + 464) = 733461;
                if ( !*((_BYTE *)v7 + 5344) )
                {
                  LOBYTE(v43) = 58;
                  if ( !(unsigned __int8)ndisReferenceMiniport(v7, v43) )
                  {
LABEL_169:
                    v45 = NewIrql[0];
                    *((_QWORD *)v7 + 65) = 0LL;
                    *((_DWORD *)v7 + 464) = 0;
                    KeReleaseSpinLock((PKSPIN_LOCK)v7 + 12, v45);
                    return;
                  }
                  ExQueueWorkItem((PWORK_QUEUE_ITEM)v7 + 166, (WORK_QUEUE_TYPE)40);
                  *((_BYTE *)v7 + 5344) = 1;
                }
                v46 = StatusCode - 1073873072;
                if ( v46 )
                {
                  if ( v46 == 1 )
                  {
                    v7[1346] = *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v6->StatusBuffer;
                    *((_BYTE *)v7 + 5346) = 1;
                  }
                }
                else
                {
                  v44 = v6->StatusBuffer;
                  *(_OWORD *)(v7 + 1337) = *v44;
                  *(_OWORD *)(v7 + 1341) = v44[1];
                  *((_WORD *)v7 + 2690) = *((_WORD *)v44 + 16);
                  *((_BYTE *)v7 + 5345) = 1;
                }
                goto LABEL_169;
              }
              if ( StatusCode != 1073873073 )
                goto LABEL_165;
              v42 = *((_BYTE *)v7 + 32);
              if ( (v42 > 6u || v42 == 6 && *((_BYTE *)v7 + 33) >= 0x32u)
                && v6->Header.Type == 0x98
                && v6->Header.Revision
                && v6->Header.Size >= 0x70u
                && !v6->DestinationHandle
                && (char *)SourceHandle == (char *)v7
                && !v6->PortNumber
                && v6->StatusBufferSize == 4 )
              {
                goto LABEL_165;
              }
              if ( (unsigned __int8)byte_1C009875F < 3u )
                return;
              v29 = 192LL;
LABEL_197:
              WPP_SF_q(v29, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v7);
              return;
            }
          }
          v9 = HIDWORD(v58[0]);
          if ( StatusCode == 1073807372 )
            v9 = 2;
          HIDWORD(v58[0]) = v9;
        }
      }
    }
LABEL_28:
    v10 = StatusCode == 1073807372;
    if ( StatusCode == 1073807371 )
    {
      HIDWORD(v58[0]) = 1;
      v10 = 1;
    }
    if ( v10 )
    {
      v6->StatusCode = 1073807383;
      v6->StatusBuffer = v58;
      StatusBuffer = (struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)v58;
      v6->StatusBufferSize = 40;
      StatusCode = 1073807383;
      StatusBufferSize = 40;
      v54 = 40;
    }
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 12);
    *((_QWORD *)v7 + 65) = KeGetCurrentThread();
    *((_DWORD *)v7 + 464) = 733526;
    if ( StatusCode == 1073807383 )
    {
      *((_BYTE *)v7 + 88) |= 0x18u;
      if ( *((_DWORD *)StatusBuffer + 1) == 1 && *((_DWORD *)v7 + 86) != 1 )
        *((_QWORD *)v7 + 199) = MEMORY[0xFFFFF78000000320];
      v7[86] = StatusBuffer[1];
      v7[87] = StatusBuffer[2];
      *((_QWORD *)v7 + 346) = *((_QWORD *)StatusBuffer + 2);
      *((_QWORD *)v7 + 347) = *((_QWORD *)StatusBuffer + 3);
      v7[203] = StatusBuffer[8];
      v7[204] = StatusBuffer[9];
    }
    if ( StatusCode == 1073938437 )
      *((_QWORD *)v7 + 199) = MEMORY[0xFFFFF78000000320];
    v11 = NewIrql[0];
    *((_QWORD *)v7 + 65) = 0LL;
    *((_DWORD *)v7 + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)v7 + 12, v11);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 12);
    v13 = *((_QWORD *)v7 + 256);
    v53 = v12;
    *((_QWORD *)v7 + 65) = KeGetCurrentThread();
    *((_DWORD *)v7 + 464) = 2105637;
    if ( v13 )
    {
      do
      {
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 320));
        v8 = *(_BYTE *)(v13 + 330) == 0;
        v52 = v14;
        i = 1;
        if ( v8 )
        {
          v15 = *(_WORD *)(v13 + 328);
          if ( v15 >= 0xFFEBu )
          {
            ndisRefCountReferenceCountOverflow = 1;
            i = 2;
          }
          else
          {
            *(_WORD *)(v13 + 328) = v15 + 1;
            NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v13 + 336));
            i = 0;
            v14 = v52;
          }
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 320), v14);
        if ( !i )
          break;
        v13 = *(_QWORD *)(v13 + 120);
      }
      while ( v13 );
      v7 = v56;
      v6 = v57;
      v12 = v53;
      StatusBufferSize = v54;
    }
    *((_QWORD *)v7 + 65) = 0LL;
    *((_DWORD *)v7 + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)v7 + 12, v12);
    if ( v13 )
    {
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 144));
      *(_QWORD *)(v13 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v13 + 160) = 733564;
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
          *(_DWORD *)(v13 + 160) = 733564;
        }
        while ( (*(_DWORD *)(v13 + 56) & 0x2000) != 0 );
        v7 = v56;
        v6 = v57;
        StatusBufferSize = v54;
      }
      *(_DWORD *)(v13 + 56) |= 0x2000u;
      *(_QWORD *)(v13 + 152) = 0LL;
      *(_DWORD *)(v13 + 160) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v13 + 144));
      if ( v6->SourceHandle == &ndisIntReqGeneric )
      {
        if ( StatusCode != 1073807383 )
          goto LABEL_45;
        StatusBuffer[1] = v7[86];
      }
      if ( StatusCode == 1073807383 )
      {
        if ( StatusBufferSize == -2 )
        {
          StatusBufferSize = 40;
          v6->StatusBufferSize = 40;
        }
        if ( !StatusBuffer || StatusBufferSize < 0x28 )
          goto LABEL_53;
        v21 = *(_DWORD *)(v13 + 352);
        v22 = *((_DWORD *)StatusBuffer + 1);
        if ( v21 != v22 )
        {
          if ( v21 == 1 )
          {
            LOBYTE(v55) = 1;
          }
          else
          {
            v23 = (unsigned __int8)v50;
            if ( v22 == 1 )
              v23 = 1;
            v50 = v23;
          }
        }
        *(_DWORD *)(v13 + 352) = v22;
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v13 + 356) = StatusBuffer[2];
        *(_QWORD *)(v13 + 368) = *((_QWORD *)StatusBuffer + 3);
        *(_QWORD *)(v13 + 360) = *((_QWORD *)StatusBuffer + 2);
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v13 + 376) = StatusBuffer[8];
        *(_DWORD *)(struct NDIS_MINIPORT_ADAPTER_HANDLE__ *)(v13 + 380) = StatusBuffer[9];
      }
LABEL_45:
      if ( StatusCode == 1073938515 )
        ndisFilterIndicatePMCapabilities(v13, v6);
      if ( StatusCode == 1073938513 )
        updated = ndisFilterIndicateWoLPatternReject(v13, v6);
      if ( StatusCode == 1073938514 )
        updated = ndisFilterIndicatePMOffloadReject(v13, v6);
      if ( StatusCode == 1073872902 )
        updated = ndisFIndicateOffloadChange(v13, StatusBuffer, StatusBufferSize);
LABEL_53:
      if ( updated )
      {
        v16 = *(_QWORD *)(v13 + 16);
        if ( *(_QWORD *)(v16 + 288) )
        {
          v17 = v6->StatusCode;
          if ( (unsigned __int8)byte_1C009875F >= 4u )
            WPP_SF_qD(129LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v13, v17);
          (*(void (__fastcall **)(_QWORD, struct _NDIS_STATUS_INDICATION *))(v16 + 288))(*(_QWORD *)(v13 + 24), v6);
          if ( (unsigned __int8)byte_1C009875F >= 4u )
            WPP_SF_qD(130LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v13, v17);
        }
        else
        {
          ndisFIndicateStatusInternal(v13, v6);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v7 + 12);
        *((_QWORD *)v7 + 65) = KeGetCurrentThread();
        *((_DWORD *)v7 + 464) = 733646;
        if ( v55 )
          ndisSwapFilterHandlersForMediaDisconnect(v7, 0LL, v13);
        if ( (_BYTE)v50 )
          ndisRestoreFilterHandlersForMediaDisconnect(v7, 0LL, v13);
        *((_QWORD *)v7 + 65) = 0LL;
        *((_DWORD *)v7 + 464) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v7 + 12);
      }
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v13 + 144));
      v18 = NewIrql[0];
      *(_DWORD *)(v13 + 56) &= ~0x2000u;
      *(_QWORD *)(v13 + 152) = 0LL;
      *(_DWORD *)(v13 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 144), v18);
      v19 = v13 + 320;
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v19);
      NdisDereferenceWithTag(*(_QWORD *)(v19 + 16));
      v8 = (*(_WORD *)(v19 + 8))-- == 1;
      if ( v8 && !*(_BYTE *)(v19 + 11) )
      {
        NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(v19 + 16));
        *(_QWORD *)(v19 + 16) = 0LL;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v19, v20);
LABEL_66:
      if ( (unsigned __int8)byte_1C009875F >= 4u )
        WPP_SF_qD(193LL, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v7, (unsigned int)v6->StatusCode);
      return;
    }
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v7, NewIrql);
    if ( v6->SourceHandle == &ndisIntReqGeneric )
    {
      if ( StatusCode != 1073807383 )
        goto LABEL_97;
      StatusBuffer[1] = v7[86];
    }
    if ( StatusCode == 1073807383 && StatusBuffer && StatusBufferSize >= 0x28 )
    {
      if ( *((_DWORD *)StatusBuffer + 1) == 1
        || (v25 = *((_DWORD *)v7 + 30),
            *((_DWORD *)v7 + 30) = v25 & 0xDFFFFFFF,
            v55 = (v25 & 0x20000000) != 0,
            *((_DWORD *)StatusBuffer + 1) == 1) )
      {
        v47 = *((_DWORD *)v7 + 30);
        *((_DWORD *)v7 + 30) = v47 | 0x20000000;
        LOBYTE(v24) = (v47 & 0x20000000) == 0;
        v50 = v24;
      }
      else
      {
        LOBYTE(v24) = v50;
      }
      v26 = *((_DWORD *)v7 + 120);
      v27 = *((_DWORD *)StatusBuffer + 1);
      if ( v26 != v27 )
      {
        if ( v26 != 1 )
        {
          v28 = v24;
          if ( v27 == 1 )
            v28 = 1;
          goto LABEL_98;
        }
        LOBYTE(v55) = 1;
      }
    }
LABEL_97:
    v28 = v50;
LABEL_98:
    v6->Flags |= 2u;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v7);
    if ( v55 )
      ndisSwapFilterHandlersForMediaDisconnect(v7, 0LL, 0LL);
    if ( v28 )
      ndisRestoreFilterHandlersForMediaDisconnect(v7, 0LL, 0LL);
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v7, NewIrql[0]);
    goto LABEL_66;
  }
  updated = ndisMIndicateHDSplitChange(v7, StatusBuffer, StatusBufferSize);
  if ( updated )
    goto LABEL_28;
  if ( (unsigned __int8)byte_1C009875F >= 4u )
  {
    v30 = 182LL;
    goto LABEL_108;
  }
}
