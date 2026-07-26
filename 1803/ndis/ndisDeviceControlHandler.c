/*
 * XREFs of ndisDeviceControlHandler @ 0x1C00AF99C
 * Callers:
 *     ndisDeviceControlIrpHandler @ 0x1C00B0020 (ndisDeviceControlIrpHandler.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x1C00EC180 (NdisWdfDeviceControlIrpHandler.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C000ABF0 (ndisDereferenceMiniportForNsi.c)
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB30 (ndisReferenceTopMiniportByNameForNsi.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisMGetLogData @ 0x1C005BB28 (ndisMGetLogData.c)
 *     ndisGetPowerInfo @ 0x1C005DA88 (ndisGetPowerInfo.c)
 *     ndisIovIoctlInvalidate @ 0x1C006CCFC (ndisIovIoctlInvalidate.c)
 *     ndisIovIoctlNotification @ 0x1C006CDF0 (ndisIovIoctlNotification.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0076C28 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisQueryDeviceOid @ 0x1C00AC7DC (ndisQueryDeviceOid.c)
 *     ndisQueryStatisticsOids @ 0x1C00B00DC (ndisQueryStatisticsOids.c)
 *     ndisValidOid @ 0x1C00B0474 (ndisValidOid.c)
 *     NdisMSleep @ 0x1C00C8450 (NdisMSleep.c)
 *     ndisDummyHandler @ 0x1C00E81CC (ndisDummyHandler.c)
 *     ndisGetAdapterHardwareInfo @ 0x1C00E8290 (ndisGetAdapterHardwareInfo.c)
 *     ndisGetAdapterRssInfo @ 0x1C00E848C (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00E8708 (ndisGetHardwareInfo.c)
 *     ndisGetPerformanceCounters @ 0x1C00E8B88 (ndisGetPerformanceCounters.c)
 *     ndisMethodDeviceOid @ 0x1C00E8D6C (ndisMethodDeviceOid.c)
 *     ndisSetPerfTrackParameters @ 0x1C00E8E74 (ndisSetPerfTrackParameters.c)
 *     ndisMiniportFatalError @ 0x1C00EDC6C (ndisMiniportFatalError.c)
 *     ndisGetRdmaCapabilities @ 0x1C00F08A4 (ndisGetRdmaCapabilities.c)
 *     ndisIovIoctlDetach @ 0x1C00F25D4 (ndisIovIoctlDetach.c)
 */

__int64 __fastcall ndisDeviceControlHandler(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, struct _IRP *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // r13
  bool v6; // r14
  unsigned int v7; // edi
  bool v8; // r15
  signed __int32 v9; // eax
  __int64 v10; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _FILE_OBJECT *FileObject; // rax
  _BYTE *FsContext; // r12
  __int64 v14; // rax
  _QWORD *v15; // r8
  unsigned int LowPart; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 Options; // r12
  unsigned int Length; // eax
  _IRP::<unnamed_type_AssociatedIrp> v23; // rbx
  unsigned __int16 Blink; // r10
  unsigned int v25; // ecx
  __int64 v26; // rcx
  int MdlAddress_high; // r9d
  __int64 v28; // rax
  unsigned int v29; // edx
  __int64 v30; // rcx
  void *v31; // r9
  unsigned int v32; // edx
  int MdlAddress; // eax
  int v34; // ecx
  int v35; // eax
  void *v36; // rcx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  void *v42; // rax
  _MDL *v43; // rcx
  ULONG ByteCount; // r12d
  PVOID MappedSystemVa; // rax
  unsigned int StatisticsOids; // eax
  _MDL *v47; // rcx
  unsigned int v48; // r12d
  PVOID v49; // rax
  PVOID v50; // rax
  void *v51; // rbx
  unsigned int v52; // eax
  __int64 v53; // rcx
  unsigned int v54; // ebx
  unsigned int v55; // ebx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // eax
  unsigned int v60; // eax
  unsigned int AdapterRssInfo; // eax
  unsigned int *MasterIrp; // r12
  unsigned int v63; // ebx
  char v64; // bl
  int v65; // ecx
  int v66; // ecx
  unsigned int PdInfo; // eax
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // eax
  SIZE_T Priority; // [rsp+28h] [rbp-D8h]
  unsigned int DeviceOid; // [rsp+50h] [rbp-B0h] BYREF
  PVOID PoolWithTag; // [rsp+58h] [rbp-A8h]
  _BYTE v76[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v77; // [rsp+64h] [rbp-9Ch]
  void *Src; // [rsp+68h] [rbp-98h]
  __int64 v79; // [rsp+70h] [rbp-90h] BYREF
  int v80[2]; // [rsp+78h] [rbp-88h]
  __int64 v81; // [rsp+80h] [rbp-80h]
  _QWORD v82[5]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v83[248]; // [rsp+B0h] [rbp-50h] BYREF

  DeviceOid = -1073741823;
  v4 = a2;
  PoolWithTag = 0LL;
  LODWORD(v79) = 0;
  v6 = 1;
  Src = 0LL;
  v7 = 0;
  v76[0] = 0;
  v8 = 0;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x17u, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a2, a3);
  v9 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v9 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  a3->IoStatus.Information = 0LL;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  a3->IoStatus.Status = 259;
  FileObject = CurrentStackLocation->FileObject;
  if ( !FileObject )
  {
    v7 = -1073741823;
    goto LABEL_56;
  }
  if ( v4->Header.Type != 17 )
  {
    v6 = 0;
    v7 = ndisDummyHandler(a1, v4, a3);
    goto LABEL_56;
  }
  FsContext = FileObject->FsContext;
  *(_QWORD *)v80 = FsContext;
  v14 = ndisReferenceTopMiniportByNameForNsi((__int64)v4, 0, v10, 0, 0, 0x56u);
  v81 = v14;
  if ( v14 )
  {
    v4 = (struct _NDIS_MINIPORT_BLOCK *)v14;
    memset(v82, 0, sizeof(v82));
    v15 = v82;
    v82[3] = v4->OidList;
    LOBYTE(v82[4]) = FsContext[32];
    v82[1] = *((_QWORD *)FsContext + 1);
    v82[2] = v4;
    *(_QWORD *)v80 = v82;
  }
  else
  {
    v15 = FsContext;
  }
  if ( (v4->PnPFlags & 0x4010) == 0 )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart > 0x170078 )
    {
      if ( LowPart > 0x1700B0 )
      {
        v68 = LowPart - 2252868;
        if ( !v68 )
        {
          DeviceOid = ndisIovIoctlNotification((__int64)v4, (__int64)a3);
          v7 = DeviceOid;
          if ( DeviceOid == 259 )
          {
            v6 = 0;
            goto LABEL_83;
          }
          goto LABEL_82;
        }
        v69 = v68 - 4;
        if ( v69 && (v70 = v69 - 4) != 0 && (v71 = v70 - 4) != 0 )
        {
          if ( v71 != 4 )
            goto LABEL_187;
          v72 = ndisIovIoctlInvalidate((__int64)v4, (__int64)a3);
        }
        else
        {
          v72 = ndisIovIoctlDetach(v4, a3);
        }
        DeviceOid = v72;
        v7 = v72;
        v8 = v72 != 259;
        v6 = v72 != 259;
        goto LABEL_83;
      }
      if ( LowPart == 1507504 )
      {
        PdInfo = ndisGetPdInfo(v4, a3);
      }
      else
      {
        v17 = LowPart - 1507472;
        if ( v17 )
        {
          v18 = v17 - 4;
          if ( v18 )
          {
            v19 = v18 - 4;
            if ( v19 )
            {
              v20 = v19 - 4;
              if ( !v20 )
              {
                Options = CurrentStackLocation->Parameters.Create.Options;
                Length = CurrentStackLocation->Parameters.Read.Length;
                v23.MasterIrp = (_IRP *)a3->AssociatedIrp;
                v77 = Length;
                if ( (unsigned int)Options >= 0x2C
                  && Length >= 0x2C
                  && LOBYTE(v23.MasterIrp->Type) == 0xB9
                  && v23.MasterIrp->Size >= 0x2Cu )
                {
                  Blink = (unsigned __int16)v23.MasterIrp->ThreadListEntry.Blink;
                  if ( Blink >= 0x2Cu )
                  {
                    v25 = Options;
                    if ( (unsigned int)Options >= Length )
                      v25 = Length;
                    if ( Blink <= v25 )
                    {
                      if ( !HIBYTE(v23.MasterIrp->Type) )
                      {
                        v7 = -1071448060;
                        goto LABEL_83;
                      }
                      v26 = v15[2];
                      MdlAddress_high = HIDWORD(v23.MasterIrp->MdlAddress);
                      if ( (*(_BYTE *)(v26 + 32) >= 6u || (MdlAddress_high & 0xFF000000) != 0xFF000000)
                        && (*(_DWORD *)(v26 + 120) & 0x80u) == 0 )
                      {
                        v28 = v15[3];
                        if ( !v28 )
                          goto LABEL_163;
                        v29 = *(_DWORD *)(v28 + 4);
                        v30 = 0LL;
                        if ( v29 )
                        {
                          do
                          {
                            if ( *(_DWORD *)(*(_QWORD *)(v28 + 16) + 4 * v30) == MdlAddress_high )
                              break;
                            v30 = (unsigned int)(v30 + 1);
                          }
                          while ( (unsigned int)v30 < v29 );
                          v15 = *(_QWORD **)v80;
                        }
                        if ( (unsigned int)v30 >= v29 )
                        {
LABEL_163:
                          v7 = -1073741637;
                          goto LABEL_83;
                        }
                      }
                      Src = (char *)v23.MasterIrp + Blink;
                      if ( ((unsigned __int8)Src & 3) != 0 )
                      {
                        v7 = -2147483646;
                        goto LABEL_83;
                      }
                      if ( !*((_BYTE *)v15 + 32)
                        && (*(_DWORD *)&v23.MasterIrp->AllocationProcessorNumber & 0xFFFFFFFD) != 0 )
                      {
                        v7 = -1073741790;
                        goto LABEL_83;
                      }
                      memset(v83, 0, sizeof(v83));
                      *(_DWORD *)&v83[88] |= 8u;
                      v31 = Src;
                      v32 = v77;
                      *(_QWORD *)&v83[104] = &ndisIntReqIoctl;
                      *(_DWORD *)v83 = 15466902;
                      *(_DWORD *)&v83[32] = HIDWORD(v23.MasterIrp->MdlAddress);
                      *(_DWORD *)&v83[4] = *(_DWORD *)&v23.MasterIrp->AllocationProcessorNumber;
                      MdlAddress = (int)v23.MasterIrp->MdlAddress;
                      *(_DWORD *)&v83[48] = 0;
                      *(_DWORD *)&v83[8] = MdlAddress;
                      *(_QWORD *)&v83[40] = Src;
                      if ( (unsigned int)Options < v77 )
                      {
                        memset((char *)v23.MasterIrp + Options, 0, v77 - (unsigned int)Options);
                        v31 = Src;
                        v32 = v77;
                      }
                      v34 = *(_DWORD *)&v23.MasterIrp->AllocationProcessorNumber;
                      if ( !v34 )
                        goto LABEL_37;
                      v65 = v34 - 1;
                      if ( !v65 )
                      {
                        *(_DWORD *)&v83[48] = Options - LOWORD(v23.MasterIrp->ThreadListEntry.Blink);
LABEL_38:
                        *(_DWORD *)&v83[12] = *(&v23.MasterIrp->Flags + 1);
                        HIDWORD(v23.MasterIrp->ThreadListEntry.Flink) = ndisQuerySetMiniport(
                                                                          *(void **)(*(_QWORD *)v80 + 16LL),
                                                                          0LL,
                                                                          (struct _NDIS_OID_REQUEST *)v83,
                                                                          0LL,
                                                                          0LL);
                        if ( *(_DWORD *)&v83[4] )
                        {
                          if ( *(_DWORD *)&v83[4] == 1 )
                          {
                            HIDWORD(v23.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v83[52];
                            goto LABEL_40;
                          }
                          if ( *(_DWORD *)&v83[4] != 2 )
                          {
                            if ( *(_DWORD *)&v83[4] != 12 )
                              goto LABEL_42;
                            v23.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v83[60];
                            HIDWORD(v23.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v83[64];
                            v35 = *(_DWORD *)&v83[68];
LABEL_41:
                            LODWORD(v23.MasterIrp->ThreadListEntry.Flink) = v35;
LABEL_42:
                            DeviceOid = 0;
                            a3->IoStatus.Information = v77;
LABEL_43:
                            v8 = 1;
LABEL_44:
                            v36 = 0LL;
LABEL_45:
                            if ( (v7 & 0xC0230000) == 0xC0230000 )
                              v7 = (unsigned __int16)v7 | 0xC0010000;
                            if ( v8 )
                            {
                              if ( DeviceOid == -1073676268 )
                              {
                                v7 = -2147483643;
                              }
                              else if ( DeviceOid == -1073741637 )
                              {
                                v7 = v76[0] == 0 ? 0xC00000BB : 0;
                              }
                              else if ( DeviceOid )
                              {
                                v7 = -1073741823;
                              }
                            }
                            if ( v36 )
                              ExFreePoolWithTag(v36, 0);
                            goto LABEL_54;
                          }
                        }
                        v23.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v83[52];
LABEL_40:
                        v35 = *(_DWORD *)&v83[56];
                        goto LABEL_41;
                      }
                      v66 = v65 - 1;
                      if ( !v66 )
                      {
LABEL_37:
                        *(_DWORD *)&v83[48] = v32 - LOWORD(v23.MasterIrp->ThreadListEntry.Blink);
                        memset(v31, 0, *(unsigned int *)&v83[48]);
                        goto LABEL_38;
                      }
                      if ( v66 == 10 )
                      {
                        *(_DWORD *)&v83[48] = Options - LOWORD(v23.MasterIrp->ThreadListEntry.Blink);
                        *(_DWORD *)&v83[52] = v32 - LOWORD(v23.MasterIrp->ThreadListEntry.Blink);
                        *(_DWORD *)&v83[56] = v23.MasterIrp->Flags;
                        goto LABEL_38;
                      }
                    }
                  }
                }
                goto LABEL_126;
              }
              if ( v20 == 12 )
              {
                v64 = *((_BYTE *)v15 + 32);
                if ( v64 )
                  ndisMiniportFatalError(v4, 70LL);
                v7 = v64 == 0 ? 0xC0000022 : 0;
                DeviceOid = v7;
                goto LABEL_82;
              }
LABEL_187:
              v7 = -1073741822;
              goto LABEL_83;
            }
            DeviceOid = 0;
            AdapterRssInfo = ndisGetAdapterRssInfo(v4);
          }
          else
          {
            DeviceOid = 0;
            AdapterRssInfo = ndisGetAdapterHardwareInfo(v4, a3, &DeviceOid);
          }
          goto LABEL_144;
        }
        PdInfo = ndisGetRdmaCapabilities(v4, a3);
      }
      v7 = PdInfo;
      DeviceOid = PdInfo;
      goto LABEL_82;
    }
    if ( LowPart == 1507448 )
    {
      DeviceOid = 0;
      AdapterRssInfo = ndisGetPowerInfo((__int64)v4, a3, &DeviceOid);
      goto LABEL_144;
    }
    if ( LowPart > 0x17002C )
    {
      v38 = LowPart - 1507376;
      if ( !v38 )
      {
        v77 = CurrentStackLocation->Parameters.Create.Options;
        if ( v77 >= 0xC )
        {
          MasterIrp = (unsigned int *)a3->AssociatedIrp.MasterIrp;
          if ( ((unsigned __int8)MasterIrp & 7) == 0 )
          {
            if ( (unsigned __int8)ndisValidOid(v15, *MasterIrp) )
            {
              v63 = CurrentStackLocation->Parameters.Read.Length;
              memset(v83, 0, sizeof(v83));
              DeviceOid = ndisMethodDeviceOid(*(_QWORD *)v80, v83, MasterIrp, v77, v63);
              a3->IoStatus.Information = (unsigned int)(*(_DWORD *)&v83[60] + 8);
              goto LABEL_43;
            }
          }
        }
        goto LABEL_126;
      }
      v39 = v38 - 14;
      if ( !v39 )
      {
        v76[0] = 1;
LABEL_69:
        v40 = CurrentStackLocation->Parameters.Create.Options;
        if ( v40 >= 4 && (v40 & 3) == 0 )
        {
          Src = a3->AssociatedIrp.MasterIrp;
          if ( ((unsigned __int8)Src & 3) == 0 )
          {
            v41 = v40 >> 2;
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v41, 0x6D61444Eu);
            v36 = PoolWithTag;
            if ( PoolWithTag )
            {
              memmove(PoolWithTag, Src, 4LL * v41);
              v42 = PoolWithTag;
LABEL_74:
              Src = v42;
              v43 = a3->MdlAddress;
              if ( v43 )
                ByteCount = v43->ByteCount;
              else
                ByteCount = 0;
              if ( ByteCount )
              {
                if ( (v43->MdlFlags & 5) != 0 )
                  MappedSystemVa = v43->MappedSystemVa;
                else
                  MappedSystemVa = MmMapLockedPagesSpecifyCache(v43, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
              }
              else
              {
                MappedSystemVa = 0LL;
              }
              if ( !MappedSystemVa )
              {
                DeviceOid = -1073741670;
                goto LABEL_83;
              }
              LODWORD(Priority) = ByteCount;
              StatisticsOids = ndisQueryStatisticsOids(
                                 (int)v4,
                                 v80[0],
                                 (int)Src,
                                 v41,
                                 (__int64)MappedSystemVa,
                                 Priority,
                                 (__int64)&v79,
                                 0,
                                 (__int64)v76);
              goto LABEL_81;
            }
LABEL_135:
            DeviceOid = -1073741670;
            goto LABEL_45;
          }
        }
LABEL_126:
        v7 = -1073741811;
        goto LABEL_83;
      }
      v59 = v39 - 42;
      if ( v59 )
      {
        v60 = v59 - 4;
        if ( v60 )
        {
          if ( v60 != 4 )
            goto LABEL_187;
          DeviceOid = 0;
          AdapterRssInfo = ndisGetHardwareInfo(v4);
        }
        else
        {
          DeviceOid = 0;
          AdapterRssInfo = ndisGetPerformanceCounters(v4);
        }
      }
      else
      {
        DeviceOid = 0;
        AdapterRssInfo = ndisSetPerfTrackParameters(v4);
      }
LABEL_144:
      v7 = AdapterRssInfo;
      goto LABEL_82;
    }
    if ( LowPart != 1507372 )
    {
      switch ( LowPart )
      {
        case 0x170002u:
          if ( CurrentStackLocation->Parameters.Create.Options >= 4 )
          {
            v77 = *(_DWORD *)a3->AssociatedIrp.MasterIrp;
            if ( (unsigned __int8)ndisValidOid(v15, v77) )
            {
              v47 = a3->MdlAddress;
              if ( v47 )
                v48 = v47->ByteCount;
              else
                v48 = 0;
              if ( v48 )
              {
                if ( (v47->MdlFlags & 5) != 0 )
                  v49 = v47->MappedSystemVa;
                else
                  v49 = MmMapLockedPagesSpecifyCache(v47, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
                Src = v49;
                if ( !v49 )
                {
                  DeviceOid = -1073741670;
                  goto LABEL_44;
                }
                v50 = ExAllocatePoolWithTag(NonPagedPoolNx, v48, 0x6D61444Eu);
                v51 = v50;
                if ( !v50 )
                {
                  v7 = -1073741670;
                  goto LABEL_83;
                }
                memmove(v50, Src, v48);
              }
              else
              {
                v51 = 0LL;
              }
              DeviceOid = ndisQueryDeviceOid(*(__int64 *)v80, v83, v77, (__int64)v51, v48);
              v52 = *(_DWORD *)&v83[52];
              LODWORD(v79) = *(_DWORD *)&v83[52];
              if ( *(_DWORD *)&v83[52] > v48 )
              {
                v52 = 0;
                DeviceOid = -1073676266;
                LODWORD(v79) = 0;
              }
              v8 = 1;
              a3->IoStatus.Information = v52;
              if ( !DeviceOid && v52 && Src )
              {
                if ( !v51 )
                  goto LABEL_83;
                memmove(Src, v51, v52);
              }
              if ( v51 )
              {
                ExFreePoolWithTag(v51, 0);
                goto LABEL_44;
              }
LABEL_83:
              v36 = PoolWithTag;
              goto LABEL_45;
            }
          }
          goto LABEL_126;
        case 0x170006u:
          v57 = v15[3];
          if ( v57 )
          {
            v41 = *(_DWORD *)v57;
            v42 = *(void **)(v57 + 8);
            goto LABEL_74;
          }
          goto LABEL_129;
        case 0x17000Eu:
          goto LABEL_69;
        case 0x17001Eu:
          if ( a3->MdlAddress )
          {
            DeviceOid = ndisMGetLogData((__int64)v4, (__int64)a3);
            v7 = DeviceOid;
            if ( DeviceOid == 259 )
              goto LABEL_83;
            goto LABEL_82;
          }
          goto LABEL_126;
      }
      if ( LowPart != 1507368 )
        goto LABEL_187;
    }
    v77 = CurrentStackLocation->Parameters.Read.Length;
    v53 = (__int64)a3->AssociatedIrp.MasterIrp;
    Src = (void *)v53;
    if ( LowPart == 1507372 )
    {
      v54 = CurrentStackLocation->Parameters.Create.Options;
      if ( v54 < 4 || (v53 & 3) != 0 || (v54 & 3) != 0 )
        goto LABEL_126;
      v55 = v54 >> 2;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v55, 0x6D61444Eu);
      v36 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_135;
      memmove(PoolWithTag, Src, 4LL * v55);
      LODWORD(v56) = (_DWORD)PoolWithTag;
      v53 = (__int64)Src;
LABEL_138:
      LODWORD(Priority) = v77;
      StatisticsOids = ndisQueryStatisticsOids((int)v4, v80[0], v56, v55, v53, Priority, (__int64)&v79, 1, (__int64)v76);
LABEL_81:
      DeviceOid = StatisticsOids;
      a3->IoStatus.Information = (unsigned int)v79;
LABEL_82:
      v8 = 1;
      goto LABEL_83;
    }
    v58 = v15[3];
    if ( v58 )
    {
      v55 = *(_DWORD *)v58;
      v56 = *(_QWORD *)(v58 + 8);
      goto LABEL_138;
    }
LABEL_129:
    v7 = -1073741808;
    goto LABEL_83;
  }
  v7 = -1073741436;
LABEL_54:
  if ( v81 )
    ndisDereferenceMiniportForNsi(v81, 0LL, 0x56u);
LABEL_56:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v6 && v7 != 259 )
  {
    a3->IoStatus.Status = v7;
    IofCompleteRequest(a3, 2);
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0x18u, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, v4, a3);
  return v7;
}
