/*
 * XREFs of ndisDeviceControlHandler @ 0x1C00A5594
 * Callers:
 *     ndisDeviceControlIrpHandler @ 0x1C00A5580 (ndisDeviceControlIrpHandler.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x1C00DFDC0 (NdisWdfDeviceControlIrpHandler.c)
 * Callees:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C00093E0 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C0009D78 (ndisDereferenceMiniportForNsi.c)
 *     ndisQuerySetMiniport @ 0x1C0009F4C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisMGetLogData @ 0x1C005B7F0 (ndisMGetLogData.c)
 *     ndisGetPowerInfo @ 0x1C005D5A8 (ndisGetPowerInfo.c)
 *     ndisIovIoctlInvalidate @ 0x1C006AF3C (ndisIovIoctlInvalidate.c)
 *     ndisIovIoctlNotification @ 0x1C006B030 (ndisIovIoctlNotification.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0074908 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisValidOid @ 0x1C00A5E4C (ndisValidOid.c)
 *     ndisQueryStatisticsOids @ 0x1C00A5E9C (ndisQueryStatisticsOids.c)
 *     ndisQueryDeviceOid @ 0x1C00A6220 (ndisQueryDeviceOid.c)
 *     ndisDummyHandler @ 0x1C00A63E4 (ndisDummyHandler.c)
 *     NdisMSleep @ 0x1C00BC470 (NdisMSleep.c)
 *     ndisGetAdapterHardwareInfo @ 0x1C00DC938 (ndisGetAdapterHardwareInfo.c)
 *     ndisGetAdapterRssInfo @ 0x1C00DCB30 (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00DCDAC (ndisGetHardwareInfo.c)
 *     ndisGetPerformanceCounters @ 0x1C00DD224 (ndisGetPerformanceCounters.c)
 *     ndisMethodDeviceOid @ 0x1C00DD408 (ndisMethodDeviceOid.c)
 *     ndisSetPerfTrackParameters @ 0x1C00DD510 (ndisSetPerfTrackParameters.c)
 *     ndisMiniportFatalError @ 0x1C00E122C (ndisMiniportFatalError.c)
 *     ndisGetRdmaCapabilities @ 0x1C00E3B58 (ndisGetRdmaCapabilities.c)
 *     ndisIovIoctlDetach @ 0x1C00E6384 (ndisIovIoctlDetach.c)
 */

__int64 __fastcall ndisDeviceControlHandler(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, _IRP *a3)
{
  struct _NDIS_MINIPORT_BLOCK *v4; // r13
  bool v6; // r14
  unsigned int v7; // edi
  bool v8; // r15
  PVOID v9; // rcx
  signed __int32 v10; // eax
  __int64 v11; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _FILE_OBJECT *FileObject; // rax
  _BYTE *FsContext; // r12
  _NDIS_MINIPORT_BLOCK *v15; // rax
  _QWORD *v16; // r11
  unsigned int LowPart; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int Options; // ebx
  unsigned int v21; // ebx
  void *v22; // rcx
  void *v23; // rax
  _MDL *MdlAddress; // rcx
  ULONG ByteCount; // r12d
  PVOID MappedSystemVa; // rax
  unsigned int StatisticsOids; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // r12
  unsigned int v33; // eax
  _IRP::<unnamed_type_AssociatedIrp> v34; // rbx
  unsigned __int16 Blink; // r10
  unsigned int v36; // ecx
  unsigned __int16 v37; // r10
  __int64 v38; // r11
  void *v39; // r9
  unsigned int v40; // edx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  __int64 v45; // r11
  _MDL *v46; // rcx
  ULONG v47; // r12d
  PVOID v48; // rax
  PVOID v49; // rax
  void *v50; // rbx
  unsigned int v51; // eax
  unsigned int v52; // r12d
  void *v53; // rcx
  unsigned int v54; // r12d
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int PowerInfo; // eax
  unsigned int *MasterIrp; // r12
  unsigned int Length; // ebx
  int v63; // ecx
  int v64; // ecx
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // eax
  unsigned int v69; // eax
  SIZE_T Priority; // [rsp+28h] [rbp-D8h]
  unsigned int DeviceOid; // [rsp+50h] [rbp-B0h] BYREF
  PVOID PoolWithTag; // [rsp+58h] [rbp-A8h]
  _BYTE v73[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v74; // [rsp+64h] [rbp-9Ch]
  void *Src; // [rsp+68h] [rbp-98h]
  __int64 v76; // [rsp+70h] [rbp-90h] BYREF
  int v77[2]; // [rsp+78h] [rbp-88h]
  _NDIS_MINIPORT_BLOCK *v78; // [rsp+80h] [rbp-80h]
  _QWORD v79[5]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v80[248]; // [rsp+B0h] [rbp-50h] BYREF

  DeviceOid = -1073741823;
  v4 = a2;
  PoolWithTag = 0LL;
  LODWORD(v76) = 0;
  v6 = 1;
  Src = 0LL;
  v7 = 0;
  v73[0] = 0;
  v8 = 0;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x17u, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a2, a3);
  if ( a1 && **(_BYTE **)(a1 + 64) == 23 )
  {
    a3->IoStatus.Status = -1073741637;
    IofCompleteRequest(a3, 0);
    return 3221225659LL;
  }
  v9 = ImageSectionHandle;
  v10 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v10 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
      v9 = ImageSectionHandle;
    }
    else
    {
      do
      {
        NdisMSleep(0x32u);
        v9 = ImageSectionHandle;
      }
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(v9);
  a3->IoStatus.Information = 0LL;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  a3->IoStatus.Status = 259;
  FileObject = CurrentStackLocation->FileObject;
  if ( FileObject )
  {
    if ( v4->Header.Type == 17 )
    {
      FsContext = FileObject->FsContext;
      *(_QWORD *)v77 = FsContext;
      v15 = ndisReferenceTopMiniportByNameForNsi((__int64)v4, 0, v11, 0, 0, 0x56u);
      v78 = v15;
      if ( v15 )
      {
        v4 = v15;
        memset(v79, 0, sizeof(v79));
        v16 = v79;
        v79[3] = v4->OidList;
        LOBYTE(v79[4]) = FsContext[32];
        v79[1] = *((_QWORD *)FsContext + 1);
        v79[2] = v4;
        *(_QWORD *)v77 = v79;
      }
      else
      {
        v16 = FsContext;
      }
      if ( (v4->PnPFlags & 0x4010) != 0 )
      {
        v7 = -1073741436;
LABEL_70:
        if ( v78 )
          ndisDereferenceMiniportForNsi((__int64)v78, 0, 0x56u);
        goto LABEL_72;
      }
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( LowPart <= 0x170078 )
      {
        if ( LowPart == 1507448 )
        {
          DeviceOid = 0;
          PowerInfo = ndisGetPowerInfo((__int64)v4, a3, &DeviceOid);
          goto LABEL_140;
        }
        if ( LowPart > 0x17002C )
        {
          v18 = LowPart - 1507376;
          if ( v18 )
          {
            v19 = v18 - 14;
            if ( !v19 )
            {
              v73[0] = 1;
LABEL_17:
              Options = CurrentStackLocation->Parameters.Create.Options;
              if ( Options >= 4 && (Options & 3) == 0 )
              {
                Src = a3->AssociatedIrp.MasterIrp;
                if ( ((unsigned __int8)Src & 3) == 0 )
                {
                  v21 = Options >> 2;
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v21, 0x6D61444Eu);
                  v22 = PoolWithTag;
                  if ( PoolWithTag )
                  {
                    memmove(PoolWithTag, Src, 4LL * v21);
                    v23 = PoolWithTag;
LABEL_22:
                    Src = v23;
                    MdlAddress = a3->MdlAddress;
                    if ( MdlAddress )
                      ByteCount = MdlAddress->ByteCount;
                    else
                      ByteCount = 0;
                    if ( ByteCount )
                    {
                      if ( (MdlAddress->MdlFlags & 5) != 0 )
                        MappedSystemVa = MdlAddress->MappedSystemVa;
                      else
                        MappedSystemVa = MmMapLockedPagesSpecifyCache(
                                           MdlAddress,
                                           0,
                                           MmCached,
                                           0LL,
                                           0,
                                           ndisMdlMappingNxFlag);
                    }
                    else
                    {
                      MappedSystemVa = 0LL;
                    }
                    if ( !MappedSystemVa )
                    {
                      DeviceOid = -1073741670;
                      goto LABEL_31;
                    }
                    LODWORD(Priority) = ByteCount;
                    StatisticsOids = ndisQueryStatisticsOids(
                                       (int)v4,
                                       v77[0],
                                       (int)Src,
                                       v21,
                                       MappedSystemVa,
                                       Priority,
                                       (__int64)&v76,
                                       0,
                                       (__int64)v73);
                    goto LABEL_29;
                  }
LABEL_130:
                  DeviceOid = -1073741670;
                  goto LABEL_61;
                }
              }
LABEL_121:
              v7 = -1073741811;
              goto LABEL_31;
            }
            v58 = v19 - 42;
            if ( !v58 )
            {
              DeviceOid = 0;
              PowerInfo = ndisSetPerfTrackParameters(v4);
              goto LABEL_140;
            }
            v59 = v58 - 4;
            if ( !v59 )
            {
              DeviceOid = 0;
              PowerInfo = ndisGetPerformanceCounters(v4);
              goto LABEL_140;
            }
            if ( v59 == 4 )
            {
              DeviceOid = 0;
              PowerInfo = ndisGetHardwareInfo(v4);
LABEL_140:
              v7 = PowerInfo;
              goto LABEL_30;
            }
LABEL_180:
            v7 = -1073741822;
            goto LABEL_31;
          }
          MasterIrp = (unsigned int *)a3->AssociatedIrp.MasterIrp;
          v74 = CurrentStackLocation->Parameters.Create.Options;
          if ( v74 < 0xC || ((unsigned __int8)MasterIrp & 7) != 0 || !(unsigned __int8)ndisValidOid(v16, *MasterIrp) )
            goto LABEL_121;
          Length = CurrentStackLocation->Parameters.Read.Length;
          memset(v80, 0, sizeof(v80));
          DeviceOid = ndisMethodDeviceOid(*(_QWORD *)v77, v80, MasterIrp, v74, Length);
          a3->IoStatus.Information = (unsigned int)(*(_DWORD *)&v80[60] + 8);
          goto LABEL_59;
        }
        if ( LowPart != 1507372 )
        {
          switch ( LowPart )
          {
            case 0x170002u:
              if ( CurrentStackLocation->Parameters.Create.Options < 4 )
                goto LABEL_121;
              v74 = *(_DWORD *)a3->AssociatedIrp.MasterIrp;
              if ( !(unsigned __int8)ndisValidOid(v16, v74) )
                goto LABEL_121;
              v46 = a3->MdlAddress;
              if ( v46 )
                v47 = v46->ByteCount;
              else
                v47 = 0;
              if ( v47 )
              {
                if ( (v46->MdlFlags & 5) != 0 )
                  v48 = v46->MappedSystemVa;
                else
                  v48 = MmMapLockedPagesSpecifyCache(v46, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
                Src = v48;
                if ( !v48 )
                {
                  DeviceOid = -1073741670;
                  goto LABEL_60;
                }
                v49 = ExAllocatePoolWithTag(NonPagedPoolNx, v47, 0x6D61444Eu);
                v50 = v49;
                if ( !v49 )
                {
                  v7 = -1073741670;
                  goto LABEL_31;
                }
                memmove(v49, Src, v47);
                v45 = *(_QWORD *)v77;
              }
              else
              {
                v50 = 0LL;
              }
              DeviceOid = ndisQueryDeviceOid(v45, v80, v74, v50, v47);
              v51 = *(_DWORD *)&v80[52];
              LODWORD(v76) = *(_DWORD *)&v80[52];
              if ( *(_DWORD *)&v80[52] > v47 )
              {
                v51 = 0;
                DeviceOid = -1073676266;
                LODWORD(v76) = 0;
              }
              v8 = 1;
              a3->IoStatus.Information = v51;
              if ( !DeviceOid && v51 && Src )
              {
                if ( !v50 )
                  goto LABEL_31;
                memmove(Src, v50, v51);
              }
              if ( !v50 )
                goto LABEL_31;
              ExFreePoolWithTag(v50, 0);
LABEL_60:
              v22 = 0LL;
              goto LABEL_61;
            case 0x170006u:
              v56 = v16[3];
              if ( v56 )
              {
                v21 = *(_DWORD *)v56;
                v23 = *(void **)(v56 + 8);
                goto LABEL_22;
              }
              goto LABEL_124;
            case 0x17000Eu:
              goto LABEL_17;
            case 0x17001Eu:
              if ( a3->MdlAddress )
              {
                DeviceOid = ndisMGetLogData((__int64)v4, (__int64)a3);
                v7 = DeviceOid;
                if ( DeviceOid == 259 )
                  goto LABEL_31;
                goto LABEL_30;
              }
              goto LABEL_121;
          }
          if ( LowPart != 1507368 )
            goto LABEL_180;
        }
        v52 = CurrentStackLocation->Parameters.Create.Options;
        v74 = CurrentStackLocation->Parameters.Read.Length;
        v53 = a3->AssociatedIrp.MasterIrp;
        Src = v53;
        if ( LowPart == 1507372 )
        {
          if ( v52 < 4 || ((unsigned __int8)v53 & 3) != 0 || (v52 & 3) != 0 )
            goto LABEL_121;
          v54 = v52 >> 2;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v54, 0x6D61444Eu);
          v22 = PoolWithTag;
          if ( !PoolWithTag )
            goto LABEL_130;
          memmove(PoolWithTag, Src, 4LL * v54);
          LODWORD(v55) = (_DWORD)PoolWithTag;
          v53 = Src;
          LODWORD(v16) = v77[0];
LABEL_133:
          LODWORD(Priority) = v74;
          StatisticsOids = ndisQueryStatisticsOids(
                             (int)v4,
                             (int)v16,
                             v55,
                             v54,
                             v53,
                             Priority,
                             (__int64)&v76,
                             1,
                             (__int64)v73);
LABEL_29:
          DeviceOid = StatisticsOids;
          a3->IoStatus.Information = (unsigned int)v76;
LABEL_30:
          v8 = 1;
LABEL_31:
          v22 = PoolWithTag;
LABEL_61:
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
              v7 = v73[0] == 0 ? 0xC00000BB : 0;
            }
            else if ( DeviceOid )
            {
              v7 = -1073741823;
            }
          }
          if ( v22 )
            ExFreePoolWithTag(v22, 0);
          goto LABEL_70;
        }
        v57 = v16[3];
        if ( v57 )
        {
          v54 = *(_DWORD *)v57;
          v55 = *(_QWORD *)(v57 + 8);
          goto LABEL_133;
        }
LABEL_124:
        v7 = -1073741808;
        goto LABEL_31;
      }
      if ( LowPart > 0x1700B0 )
      {
        v65 = LowPart - 2252868;
        if ( !v65 )
        {
          DeviceOid = ndisIovIoctlNotification((__int64)v4, (__int64)a3);
          v7 = DeviceOid;
          if ( DeviceOid == 259 )
          {
            v6 = 0;
            goto LABEL_31;
          }
          goto LABEL_30;
        }
        v66 = v65 - 4;
        if ( v66 && (v67 = v66 - 4) != 0 && (v68 = v67 - 4) != 0 )
        {
          if ( v68 != 4 )
            goto LABEL_180;
          v69 = ndisIovIoctlInvalidate((__int64)v4, (__int64)a3);
        }
        else
        {
          v69 = ndisIovIoctlDetach(v4, a3);
        }
        DeviceOid = v69;
        v7 = v69;
        v8 = v69 != 259;
        v6 = v69 != 259;
        goto LABEL_31;
      }
      if ( LowPart == 1507504 )
      {
        PowerInfo = ndisGetPdInfo(v4, a3);
      }
      else
      {
        v28 = LowPart - 1507472;
        if ( v28 )
        {
          v29 = v28 - 4;
          if ( !v29 )
          {
            DeviceOid = 0;
            PowerInfo = ndisGetAdapterHardwareInfo(v4, a3, &DeviceOid);
            goto LABEL_140;
          }
          v30 = v29 - 4;
          if ( !v30 )
          {
            DeviceOid = 0;
            PowerInfo = ndisGetAdapterRssInfo(v4);
            goto LABEL_140;
          }
          v31 = v30 - 4;
          if ( v31 )
          {
            if ( v31 == 12 )
            {
              if ( *((_BYTE *)v16 + 32) )
              {
                ndisMiniportFatalError(v4, 70LL);
                DeviceOid = 0;
              }
              else
              {
                v7 = -1073741790;
                DeviceOid = -1073741790;
              }
              goto LABEL_30;
            }
            goto LABEL_180;
          }
          v32 = CurrentStackLocation->Parameters.Create.Options;
          v33 = CurrentStackLocation->Parameters.Read.Length;
          v34.MasterIrp = (_IRP *)a3->AssociatedIrp;
          v74 = v33;
          if ( (unsigned int)v32 < 0x2C )
            goto LABEL_121;
          if ( v33 < 0x2C )
            goto LABEL_121;
          if ( LOBYTE(v34.MasterIrp->Type) != 0xB9 )
            goto LABEL_121;
          if ( v34.MasterIrp->Size < 0x2Cu )
            goto LABEL_121;
          Blink = (unsigned __int16)v34.MasterIrp->ThreadListEntry.Blink;
          if ( Blink < 0x2Cu )
            goto LABEL_121;
          v36 = v33;
          if ( (unsigned int)v32 < v33 )
            v36 = v32;
          if ( Blink > v36 )
            goto LABEL_121;
          if ( !HIBYTE(v34.MasterIrp->Type) )
          {
            v7 = -1071448060;
            goto LABEL_31;
          }
          if ( !(unsigned __int8)ndisValidOid(v16, HIDWORD(v34.MasterIrp->MdlAddress)) )
          {
            v7 = -1073741637;
            goto LABEL_31;
          }
          Src = (char *)v34.MasterIrp + v37;
          if ( ((unsigned __int8)Src & 3) != 0 )
          {
            v7 = -2147483646;
            goto LABEL_31;
          }
          if ( !*(_BYTE *)(v38 + 32) && (*(_DWORD *)&v34.MasterIrp->AllocationProcessorNumber & 0xFFFFFFFD) != 0 )
          {
            v7 = -1073741790;
            goto LABEL_31;
          }
          memset(v80, 0, sizeof(v80));
          *(_DWORD *)&v80[88] |= 8u;
          v39 = Src;
          v40 = v74;
          *(_QWORD *)&v80[104] = &ndisIntReqIoctl;
          *(_DWORD *)v80 = 15466902;
          *(_DWORD *)&v80[32] = HIDWORD(v34.MasterIrp->MdlAddress);
          *(_DWORD *)&v80[4] = *(_DWORD *)&v34.MasterIrp->AllocationProcessorNumber;
          v41 = (int)v34.MasterIrp->MdlAddress;
          *(_DWORD *)&v80[48] = 0;
          *(_DWORD *)&v80[8] = v41;
          *(_QWORD *)&v80[40] = Src;
          if ( (unsigned int)v32 < v74 )
          {
            memset((char *)v34.MasterIrp + v32, 0, v74 - (unsigned int)v32);
            v40 = v74;
            v39 = Src;
          }
          v42 = *(_DWORD *)&v34.MasterIrp->AllocationProcessorNumber;
          if ( !v42 )
            goto LABEL_53;
          v63 = v42 - 1;
          if ( v63 )
          {
            v64 = v63 - 1;
            if ( !v64 )
            {
LABEL_53:
              *(_DWORD *)&v80[48] = v40 - LOWORD(v34.MasterIrp->ThreadListEntry.Blink);
              memset(v39, 0, *(unsigned int *)&v80[48]);
              goto LABEL_54;
            }
            if ( v64 != 10 )
              goto LABEL_121;
            *(_DWORD *)&v80[48] = v32 - LOWORD(v34.MasterIrp->ThreadListEntry.Blink);
            *(_DWORD *)&v80[52] = v40 - LOWORD(v34.MasterIrp->ThreadListEntry.Blink);
            *(_DWORD *)&v80[56] = v34.MasterIrp->Flags;
          }
          else
          {
            *(_DWORD *)&v80[48] = v32 - LOWORD(v34.MasterIrp->ThreadListEntry.Blink);
          }
LABEL_54:
          *(_DWORD *)&v80[12] = *(&v34.MasterIrp->Flags + 1);
          HIDWORD(v34.MasterIrp->ThreadListEntry.Flink) = ndisQuerySetMiniport(
                                                            *(void **)(*(_QWORD *)v77 + 16LL),
                                                            0LL,
                                                            (struct _NDIS_OID_REQUEST *)v80,
                                                            0LL,
                                                            0LL);
          if ( *(_DWORD *)&v80[4] )
          {
            if ( *(_DWORD *)&v80[4] == 1 )
            {
              HIDWORD(v34.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v80[52];
              goto LABEL_56;
            }
            if ( *(_DWORD *)&v80[4] != 2 )
            {
              if ( *(_DWORD *)&v80[4] != 12 )
                goto LABEL_58;
              v34.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v80[60];
              HIDWORD(v34.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v80[64];
              v43 = *(_DWORD *)&v80[68];
LABEL_57:
              LODWORD(v34.MasterIrp->ThreadListEntry.Flink) = v43;
LABEL_58:
              DeviceOid = 0;
              a3->IoStatus.Information = v74;
LABEL_59:
              v8 = 1;
              goto LABEL_60;
            }
          }
          v34.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v80[52];
LABEL_56:
          v43 = *(_DWORD *)&v80[56];
          goto LABEL_57;
        }
        PowerInfo = ndisGetRdmaCapabilities(v4, a3);
      }
      DeviceOid = PowerInfo;
      goto LABEL_140;
    }
    v6 = 0;
    v7 = ndisDummyHandler(a1, v4, a3);
  }
  else
  {
    v7 = -1073741823;
  }
LABEL_72:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v6 && v7 != 259 )
  {
    a3->IoStatus.Status = v7;
    IofCompleteRequest(a3, 2);
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x18u, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, v4, a3);
  return v7;
}
