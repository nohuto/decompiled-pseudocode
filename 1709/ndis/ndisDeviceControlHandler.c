/*
 * XREFs of ndisDeviceControlHandler @ 0x1C00B74EC
 * Callers:
 *     ndisDeviceControlIrpHandler @ 0x1C00B74D0 (ndisDeviceControlIrpHandler.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x1C00E9C40 (NdisWdfDeviceControlIrpHandler.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C000985C (ndisDereferenceMiniportForNsi.c)
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000BC90 (ndisReferenceTopMiniportByNameForNsi.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisMGetLogData @ 0x1C005B31C (ndisMGetLogData.c)
 *     ndisGetPowerInfo @ 0x1C005D108 (ndisGetPowerInfo.c)
 *     ndisIovIoctlInvalidate @ 0x1C006C4A0 (ndisIovIoctlInvalidate.c)
 *     ndisIovIoctlNotification @ 0x1C006C594 (ndisIovIoctlNotification.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0076478 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisDummyHandler @ 0x1C00AC1B8 (ndisDummyHandler.c)
 *     ndisQueryStatisticsOids @ 0x1C00B640C (ndisQueryStatisticsOids.c)
 *     ndisValidOid @ 0x1C00C2238 (ndisValidOid.c)
 *     NdisMSleep @ 0x1C00C4100 (NdisMSleep.c)
 *     ndisGetAdapterHardwareInfo @ 0x1C00E685C (ndisGetAdapterHardwareInfo.c)
 *     ndisGetAdapterRssInfo @ 0x1C00E6A54 (ndisGetAdapterRssInfo.c)
 *     ndisGetHardwareInfo @ 0x1C00E6CD0 (ndisGetHardwareInfo.c)
 *     ndisGetPerformanceCounters @ 0x1C00E714C (ndisGetPerformanceCounters.c)
 *     ndisMethodDeviceOid @ 0x1C00E7330 (ndisMethodDeviceOid.c)
 *     ndisSetPerfTrackParameters @ 0x1C00E7438 (ndisSetPerfTrackParameters.c)
 *     ndisMiniportFatalError @ 0x1C00EB0CC (ndisMiniportFatalError.c)
 *     ndisGetRdmaCapabilities @ 0x1C00EDB74 (ndisGetRdmaCapabilities.c)
 *     ndisIovIoctlDetach @ 0x1C00EF9B4 (ndisIovIoctlDetach.c)
 */

__int64 __fastcall ndisDeviceControlHandler(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, _IRP *a3)
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
  _QWORD *v15; // r10
  unsigned int LowPart; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 Options; // r12
  unsigned int Length; // eax
  _IRP::<unnamed_type_AssociatedIrp> v23; // rbx
  unsigned __int16 Blink; // r8
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
  ULONG v44; // r12d
  _DWORD *v45; // rax
  unsigned int v46; // eax
  __int64 v47; // r10
  _MDL *v48; // rcx
  SIZE_T ByteCount; // rdx
  PVOID v50; // rax
  PVOID MappedSystemVa; // rbx
  PVOID PoolWithTag; // rax
  void *v53; // r12
  void *v54; // rbx
  unsigned int v55; // eax
  _DWORD *p_Type; // rcx
  unsigned int v57; // ebx
  unsigned int v58; // ebx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned int v62; // eax
  unsigned int v63; // eax
  unsigned int PdInfo; // eax
  unsigned int *MasterIrp; // r12
  unsigned int v66; // ebx
  int v67; // ecx
  int v68; // ecx
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // eax
  unsigned int v73; // eax
  SIZE_T Priority; // [rsp+28h] [rbp-D8h]
  unsigned int SetMiniport; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v76; // [rsp+58h] [rbp-A8h]
  _BYTE v77[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v78; // [rsp+64h] [rbp-9Ch]
  __int64 v79; // [rsp+68h] [rbp-98h] BYREF
  void *v80; // [rsp+70h] [rbp-90h]
  unsigned int v81; // [rsp+78h] [rbp-88h]
  int v82[2]; // [rsp+80h] [rbp-80h]
  void *Src; // [rsp+88h] [rbp-78h]
  __int64 v84; // [rsp+90h] [rbp-70h]
  _QWORD v85[5]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v86[248]; // [rsp+C0h] [rbp-40h] BYREF

  SetMiniport = -1073741823;
  v4 = a2;
  v76 = 0LL;
  LODWORD(v79) = 0;
  v6 = 1;
  v80 = 0LL;
  v7 = 0;
  v77[0] = 0;
  v8 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x17u, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a2, a3);
  if ( a1 && **(_BYTE **)(a1 + 64) == 23 )
  {
    a3->IoStatus.Status = -1073741637;
    IofCompleteRequest(a3, 0);
    return 3221225659LL;
  }
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
  if ( FileObject )
  {
    if ( v4->Header.Type == 17 )
    {
      FsContext = FileObject->FsContext;
      *(_QWORD *)v82 = FsContext;
      v14 = ndisReferenceTopMiniportByNameForNsi((__int64)v4, 0, v10, 0, 0, 0x56u);
      v84 = v14;
      if ( v14 )
      {
        v4 = (struct _NDIS_MINIPORT_BLOCK *)v14;
        memset(v85, 0, sizeof(v85));
        v15 = v85;
        v85[3] = v4->OidList;
        LOBYTE(v85[4]) = FsContext[32];
        v85[1] = *((_QWORD *)FsContext + 1);
        v85[2] = v4;
        *(_QWORD *)v82 = v85;
      }
      else
      {
        v15 = FsContext;
      }
      if ( (v4->PnPFlags & 0x4010) != 0 )
      {
        v7 = -1073741436;
LABEL_57:
        if ( v84 )
          ndisDereferenceMiniportForNsi(v84, 0, 0x56u);
        goto LABEL_59;
      }
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( LowPart > 0x170078 )
      {
        if ( LowPart > 0x1700B0 )
        {
          v69 = LowPart - 2252868;
          if ( !v69 )
          {
            SetMiniport = ndisIovIoctlNotification((__int64)v4, (__int64)a3);
            v7 = SetMiniport;
            if ( SetMiniport == 259 )
            {
              v6 = 0;
              goto LABEL_84;
            }
            goto LABEL_83;
          }
          v70 = v69 - 4;
          if ( v70 && (v71 = v70 - 4) != 0 && (v72 = v71 - 4) != 0 )
          {
            if ( v72 != 4 )
              goto LABEL_189;
            v73 = ndisIovIoctlInvalidate((__int64)v4, (__int64)a3);
          }
          else
          {
            v73 = ndisIovIoctlDetach(v4, a3);
          }
          SetMiniport = v73;
          v7 = v73;
          v8 = v73 != 259;
          v6 = v73 != 259;
          goto LABEL_84;
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
                  v78 = Length;
                  if ( (unsigned int)Options >= 0x2C
                    && Length >= 0x2C
                    && LOBYTE(v23.MasterIrp->Type) == 0xB9
                    && v23.MasterIrp->Size >= 0x2Cu )
                  {
                    Blink = (unsigned __int16)v23.MasterIrp->ThreadListEntry.Blink;
                    if ( Blink >= 0x2Cu )
                    {
                      v25 = Length;
                      if ( (unsigned int)Options < Length )
                        v25 = Options;
                      if ( Blink <= v25 )
                      {
                        if ( !HIBYTE(v23.MasterIrp->Type) )
                        {
                          v7 = -1071448060;
                          goto LABEL_84;
                        }
                        v26 = v15[2];
                        MdlAddress_high = HIDWORD(v23.MasterIrp->MdlAddress);
                        if ( (*(_BYTE *)(v26 + 32) >= 6u || (MdlAddress_high & 0xFF000000) != 0xFF000000)
                          && (*(_DWORD *)(v26 + 120) & 0x80u) == 0 )
                        {
                          v28 = v15[3];
                          if ( !v28 )
                            goto LABEL_166;
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
                            v15 = *(_QWORD **)v82;
                          }
                          if ( (unsigned int)v30 >= v29 )
                          {
LABEL_166:
                            v7 = -1073741637;
                            goto LABEL_84;
                          }
                        }
                        v80 = (char *)v23.MasterIrp + Blink;
                        if ( ((unsigned __int8)v80 & 3) != 0 )
                        {
                          v7 = -2147483646;
                          goto LABEL_84;
                        }
                        if ( !*((_BYTE *)v15 + 32)
                          && (*(_DWORD *)&v23.MasterIrp->AllocationProcessorNumber & 0xFFFFFFFD) != 0 )
                        {
                          v7 = -1073741790;
                          goto LABEL_84;
                        }
                        memset(v86, 0, sizeof(v86));
                        *(_DWORD *)&v86[88] |= 8u;
                        v31 = v80;
                        v32 = v78;
                        *(_QWORD *)&v86[104] = &ndisIntReqIoctl;
                        *(_DWORD *)v86 = 15466902;
                        *(_DWORD *)&v86[32] = HIDWORD(v23.MasterIrp->MdlAddress);
                        *(_DWORD *)&v86[4] = *(_DWORD *)&v23.MasterIrp->AllocationProcessorNumber;
                        MdlAddress = (int)v23.MasterIrp->MdlAddress;
                        *(_DWORD *)&v86[48] = 0;
                        *(_DWORD *)&v86[8] = MdlAddress;
                        *(_QWORD *)&v86[40] = v80;
                        if ( (unsigned int)Options < v78 )
                        {
                          memset((char *)v23.MasterIrp + Options, 0, v78 - (unsigned int)Options);
                          v31 = v80;
                          v32 = v78;
                        }
                        v34 = *(_DWORD *)&v23.MasterIrp->AllocationProcessorNumber;
                        if ( !v34 )
                          goto LABEL_40;
                        v67 = v34 - 1;
                        if ( !v67 )
                        {
                          *(_DWORD *)&v86[48] = Options - LOWORD(v23.MasterIrp->ThreadListEntry.Blink);
LABEL_41:
                          *(_DWORD *)&v86[12] = *(&v23.MasterIrp->Flags + 1);
                          HIDWORD(v23.MasterIrp->ThreadListEntry.Flink) = ndisQuerySetMiniport(
                                                                            *(void **)(*(_QWORD *)v82 + 16LL),
                                                                            0LL,
                                                                            (struct _NDIS_OID_REQUEST *)v86,
                                                                            0LL,
                                                                            0LL);
                          if ( *(_DWORD *)&v86[4] )
                          {
                            if ( *(_DWORD *)&v86[4] == 1 )
                            {
                              HIDWORD(v23.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v86[52];
                              goto LABEL_43;
                            }
                            if ( *(_DWORD *)&v86[4] != 2 )
                            {
                              if ( *(_DWORD *)&v86[4] != 12 )
                                goto LABEL_45;
                              v23.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v86[60];
                              HIDWORD(v23.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v86[64];
                              v35 = *(_DWORD *)&v86[68];
LABEL_44:
                              LODWORD(v23.MasterIrp->ThreadListEntry.Flink) = v35;
LABEL_45:
                              SetMiniport = 0;
                              a3->IoStatus.Information = v78;
LABEL_46:
                              v8 = 1;
LABEL_47:
                              v36 = 0LL;
LABEL_48:
                              if ( (v7 & 0xC0230000) == 0xC0230000 )
                                v7 = (unsigned __int16)v7 | 0xC0010000;
                              if ( v8 )
                              {
                                if ( SetMiniport == -1073676268 )
                                {
                                  v7 = -2147483643;
                                }
                                else if ( SetMiniport == -1073741637 )
                                {
                                  v7 = v77[0] == 0 ? 0xC00000BB : 0;
                                }
                                else if ( SetMiniport )
                                {
                                  v7 = -1073741823;
                                }
                              }
                              if ( v36 )
                                ExFreePoolWithTag(v36, 0);
                              goto LABEL_57;
                            }
                          }
                          v23.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v86[52];
LABEL_43:
                          v35 = *(_DWORD *)&v86[56];
                          goto LABEL_44;
                        }
                        v68 = v67 - 1;
                        if ( !v68 )
                        {
LABEL_40:
                          *(_DWORD *)&v86[48] = v32 - LOWORD(v23.MasterIrp->ThreadListEntry.Blink);
                          memset(v31, 0, *(unsigned int *)&v86[48]);
                          goto LABEL_41;
                        }
                        if ( v68 == 10 )
                        {
                          *(_DWORD *)&v86[48] = Options - LOWORD(v23.MasterIrp->ThreadListEntry.Blink);
                          *(_DWORD *)&v86[52] = v32 - LOWORD(v23.MasterIrp->ThreadListEntry.Blink);
                          *(_DWORD *)&v86[56] = v23.MasterIrp->Flags;
                          goto LABEL_41;
                        }
                      }
                    }
                  }
                  goto LABEL_128;
                }
                if ( v20 == 12 )
                {
                  if ( *((_BYTE *)v15 + 32) )
                  {
                    ndisMiniportFatalError(v4, 70LL);
                    SetMiniport = 0;
                  }
                  else
                  {
                    v7 = -1073741790;
                    SetMiniport = -1073741790;
                  }
                  goto LABEL_83;
                }
LABEL_189:
                v7 = -1073741822;
                goto LABEL_84;
              }
              SetMiniport = 0;
              PdInfo = ndisGetAdapterRssInfo(v4);
            }
            else
            {
              SetMiniport = 0;
              PdInfo = ndisGetAdapterHardwareInfo(v4, a3, &SetMiniport);
            }
            goto LABEL_147;
          }
          PdInfo = ndisGetRdmaCapabilities(v4, a3);
        }
        SetMiniport = PdInfo;
LABEL_147:
        v7 = PdInfo;
        goto LABEL_83;
      }
      if ( LowPart == 1507448 )
      {
        SetMiniport = 0;
        PdInfo = ndisGetPowerInfo((__int64)v4, a3, &SetMiniport);
        goto LABEL_147;
      }
      if ( LowPart > 0x17002C )
      {
        v38 = LowPart - 1507376;
        if ( !v38 )
        {
          v81 = CurrentStackLocation->Parameters.Create.Options;
          if ( v81 >= 0xC )
          {
            MasterIrp = (unsigned int *)a3->AssociatedIrp.MasterIrp;
            if ( ((unsigned __int8)MasterIrp & 7) == 0 )
            {
              if ( (unsigned __int8)ndisValidOid(v15, *MasterIrp) )
              {
                v66 = CurrentStackLocation->Parameters.Read.Length;
                memset(v86, 0, sizeof(v86));
                SetMiniport = ndisMethodDeviceOid(*(_QWORD *)v82, v86, MasterIrp, v81, v66);
                a3->IoStatus.Information = (unsigned int)(*(_DWORD *)&v86[60] + 8);
                goto LABEL_46;
              }
            }
          }
          goto LABEL_128;
        }
        v39 = v38 - 14;
        if ( v39 )
        {
          v62 = v39 - 42;
          if ( v62 )
          {
            v63 = v62 - 4;
            if ( v63 )
            {
              if ( v63 != 4 )
                goto LABEL_189;
              SetMiniport = 0;
              PdInfo = ndisGetHardwareInfo(v4);
            }
            else
            {
              SetMiniport = 0;
              PdInfo = ndisGetPerformanceCounters(v4);
            }
          }
          else
          {
            SetMiniport = 0;
            PdInfo = ndisSetPerfTrackParameters(v4);
          }
          goto LABEL_147;
        }
        v77[0] = 1;
        goto LABEL_70;
      }
      if ( LowPart != 1507372 )
      {
        switch ( LowPart )
        {
          case 0x170002u:
            if ( CurrentStackLocation->Parameters.Create.Options >= 4 )
            {
              v81 = *(_DWORD *)a3->AssociatedIrp.MasterIrp;
              if ( (unsigned __int8)ndisValidOid(v15, v81) )
              {
                v48 = a3->MdlAddress;
                if ( v48 )
                  ByteCount = v48->ByteCount;
                else
                  ByteCount = 0LL;
                v78 = ByteCount;
                if ( (_DWORD)ByteCount )
                {
                  if ( (v48->MdlFlags & 5) != 0 )
                  {
                    MappedSystemVa = v48->MappedSystemVa;
                    v80 = MappedSystemVa;
                  }
                  else
                  {
                    v50 = MmMapLockedPagesSpecifyCache(v48, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
                    ByteCount = v78;
                    MappedSystemVa = v50;
                    v80 = v50;
                  }
                  if ( !MappedSystemVa )
                  {
                    SetMiniport = -1073741670;
                    goto LABEL_47;
                  }
                  Src = (void *)(unsigned int)ByteCount;
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ByteCount, 0x6D61444Eu);
                  v53 = PoolWithTag;
                  if ( !PoolWithTag )
                  {
                    v7 = -1073741670;
                    goto LABEL_84;
                  }
                  memmove(PoolWithTag, MappedSystemVa, (size_t)Src);
                  v47 = *(_QWORD *)v82;
                }
                else
                {
                  v53 = 0LL;
                }
                v54 = *(void **)(v47 + 16);
                memset(v86, 0, sizeof(v86));
                *(_DWORD *)&v86[88] |= 8u;
                *(_QWORD *)&v86[104] = &ndisIntReqIoctl;
                *(_DWORD *)&v86[32] = v81;
                *(_DWORD *)v86 = 15466902;
                *(_QWORD *)&v86[52] = 0LL;
                *(_QWORD *)&v86[4] = 2LL;
                *(_QWORD *)&v86[40] = v53;
                *(_DWORD *)&v86[48] = v78;
                SetMiniport = ndisQuerySetMiniport(v54, 0LL, (struct _NDIS_OID_REQUEST *)v86, 0LL, 0LL);
                v55 = *(_DWORD *)&v86[52];
                LODWORD(v79) = *(_DWORD *)&v86[52];
                if ( *(_DWORD *)&v86[52] > v78 )
                {
                  v55 = 0;
                  SetMiniport = -1073676266;
                  LODWORD(v79) = 0;
                }
                v8 = 1;
                a3->IoStatus.Information = v55;
                if ( !SetMiniport && v55 && v80 )
                {
                  if ( !v53 )
                    goto LABEL_84;
                  memmove(v80, v53, v55);
                }
                if ( v53 )
                {
                  ExFreePoolWithTag(v53, 0);
                  goto LABEL_47;
                }
LABEL_84:
                v36 = v76;
                goto LABEL_48;
              }
            }
            goto LABEL_128;
          case 0x170006u:
            v60 = v15[3];
            if ( v60 )
            {
              v41 = *(_DWORD *)v60;
              v42 = *(void **)(v60 + 8);
              goto LABEL_75;
            }
            goto LABEL_131;
          case 0x17000Eu:
LABEL_70:
            v40 = CurrentStackLocation->Parameters.Create.Options;
            if ( v40 >= 4 && (v40 & 3) == 0 )
            {
              Src = a3->AssociatedIrp.MasterIrp;
              if ( ((unsigned __int8)Src & 3) == 0 )
              {
                v41 = v40 >> 2;
                v76 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v41, 0x6D61444Eu);
                v36 = v76;
                if ( v76 )
                {
                  memmove(v76, Src, 4LL * v41);
                  v42 = v76;
LABEL_75:
                  v80 = v42;
                  v43 = a3->MdlAddress;
                  if ( v43 )
                    v44 = v43->ByteCount;
                  else
                    v44 = 0;
                  if ( v44 )
                  {
                    if ( (v43->MdlFlags & 5) != 0 )
                      v45 = v43->MappedSystemVa;
                    else
                      v45 = MmMapLockedPagesSpecifyCache(v43, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
                  }
                  else
                  {
                    v45 = 0LL;
                  }
                  if ( !v45 )
                  {
                    SetMiniport = -1073741670;
                    goto LABEL_84;
                  }
                  LODWORD(Priority) = v44;
                  v46 = ndisQueryStatisticsOids(
                          (__int64)v4,
                          *(__int64 *)v82,
                          (__int64)v80,
                          v41,
                          v45,
                          Priority,
                          &v79,
                          0,
                          v77);
                  goto LABEL_82;
                }
LABEL_137:
                SetMiniport = -1073741670;
                goto LABEL_48;
              }
            }
LABEL_128:
            v7 = -1073741811;
            goto LABEL_84;
          case 0x17001Eu:
            if ( a3->MdlAddress )
            {
              SetMiniport = ndisMGetLogData((__int64)v4, (__int64)a3);
              v7 = SetMiniport;
              if ( SetMiniport == 259 )
                goto LABEL_84;
              goto LABEL_83;
            }
            goto LABEL_128;
        }
        if ( LowPart != 1507368 )
          goto LABEL_189;
      }
      v81 = CurrentStackLocation->Parameters.Read.Length;
      p_Type = &a3->AssociatedIrp.MasterIrp->Type;
      v80 = p_Type;
      if ( LowPart == 1507372 )
      {
        v57 = CurrentStackLocation->Parameters.Create.Options;
        if ( v57 < 4 || ((unsigned __int8)p_Type & 3) != 0 || (v57 & 3) != 0 )
          goto LABEL_128;
        v58 = v57 >> 2;
        v76 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v58, 0x6D61444Eu);
        v36 = v76;
        if ( !v76 )
          goto LABEL_137;
        memmove(v76, v80, 4LL * v58);
        v59 = (__int64)v76;
        p_Type = v80;
        v15 = *(_QWORD **)v82;
LABEL_140:
        LODWORD(Priority) = v81;
        v46 = ndisQueryStatisticsOids((__int64)v4, (__int64)v15, v59, v58, p_Type, Priority, &v79, 1, v77);
LABEL_82:
        SetMiniport = v46;
        a3->IoStatus.Information = (unsigned int)v79;
LABEL_83:
        v8 = 1;
        goto LABEL_84;
      }
      v61 = v15[3];
      if ( v61 )
      {
        v58 = *(_DWORD *)v61;
        v59 = *(_QWORD *)(v61 + 8);
        goto LABEL_140;
      }
LABEL_131:
      v7 = -1073741808;
      goto LABEL_84;
    }
    v6 = 0;
    v7 = ndisDummyHandler(a1, v4, a3);
  }
  else
  {
    v7 = -1073741823;
  }
LABEL_59:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v6 && v7 != 259 )
  {
    a3->IoStatus.Status = v7;
    IofCompleteRequest(a3, 2);
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x18u, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, v4, a3);
  return v7;
}
