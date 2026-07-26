/*
 * XREFs of ndisHandlePnPRequest @ 0x1C00F7108
 * Callers:
 *     ndisDispatchRequest @ 0x1C00ACA10 (ndisDispatchRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisConfigurePeriodicReceives @ 0x1C00142C8 (ndisConfigurePeriodicReceives.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0016578 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     NdisGetVersion @ 0x1C0023D70 (NdisGetVersion.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ndisIfCreatePersistedInterface @ 0x1C00449D0 (ndisIfCreatePersistedInterface.c)
 *     ndisIfDeletePersistedInterface @ 0x1C0044BC0 (ndisIfDeletePersistedInterface.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0044F04 (ndisIfReferenceCompartmentForUser.c)
 *     ndisIfSetIfDescr @ 0x1C0044FFC (ndisIfSetIfDescr.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C0070A54 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00719C4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C0071C6C (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C007767C (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     ndisHandleLegacyTransport @ 0x1C00ACB98 (ndisHandleLegacyTransport.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00AF260 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z @ 0x1C00BD974 (-ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z @ 0x1C00BDA38 (-ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00BF2D0 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C00D0F00 (NdisIfAllocateNetLuidIndex.c)
 *     ndisIfEnumerateNsiObjects @ 0x1C00D1204 (ndisIfEnumerateNsiObjects.c)
 *     ?ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_DESC@@@Z @ 0x1C00D8CF4 (-ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_D.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x1C00D8D50 (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00D8DD8 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z @ 0x1C00D8E34 (-ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PE.c)
 *     ?ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNICODE_STRING@@@Z @ 0x1C00D8E98 (-ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNI.c)
 *     ?ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING@@@Z @ 0x1C00D8EDC (-ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING.c)
 *     ndisHandleUModePnPOp @ 0x1C00D9594 (ndisHandleUModePnPOp.c)
 *     ndisEnumerateInterfaces @ 0x1C00F6F00 (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C0101F14 (ndisEnumerateInterfaces32.c)
 */

__int64 __fastcall ndisHandlePnPRequest(struct _IRP *a1)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int NetLuidIndex; // ebx
  unsigned int v4; // r15d
  _FILE_OBJECT *FileObject; // rax
  char *FsContext; // r13
  unsigned int LowPart; // eax
  char v8; // r12
  unsigned __int64 Options; // r14
  const struct _TlgProvider_t *Length; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // eax
  UINT Version; // eax
  bool v27; // cf
  unsigned __int64 v28; // r14
  unsigned __int64 MasterIrp; // rsi
  unsigned int v30; // r12d
  unsigned int v31; // edx
  unsigned int v32; // ecx
  char *PoolWithTag; // rax
  char *v34; // rbx
  unsigned int v35; // r13d
  void *v36; // rdx
  char *v37; // rcx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int active; // eax
  unsigned __int8 v43; // dl
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  struct _UNICODE_STRING v47; // [rsp+40h] [rbp-38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING v49; // [rsp+60h] [rbp-18h] BYREF
  struct _NDIS_MINIPORT_BLOCK *pNetLuidIndex; // [rsp+C0h] [rbp+48h] BYREF
  void *Src; // [rsp+C8h] [rbp+50h] BYREF
  int v52; // [rsp+D0h] [rbp+58h] BYREF
  PVOID P; // [rsp+D8h] [rbp+60h]

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  NetLuidIndex = 0;
  v52 = 0;
  v4 = 0;
  LODWORD(pNetLuidIndex) = 0;
  P = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  *(_QWORD *)&v47.Length = CurrentStackLocation;
  FsContext = (char *)FileObject->FsContext;
  if ( !FsContext )
    return 3221225487LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = *FsContext;
  if ( (LowPart & 3) == 0 )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    Length = (const struct _TlgProvider_t *)CurrentStackLocation->Parameters.Read.Length;
    v11.MasterIrp = (_IRP *)a1->AssociatedIrp;
    LODWORD(Src) = (_DWORD)Length;
    if ( LowPart > 0x170054 )
    {
      if ( LowPart == 1507488 )
      {
        if ( !ndisAoAcRefMiniportForIoctl(
                (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                Options,
                (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
                1,
                MPREF_AOAC_WAKE_ENABLE,
                &v52,
                &pNetLuidIndex) )
          return (unsigned int)v52;
        active = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp, 1u);
        v43 = 5;
        goto LABEL_124;
      }
      if ( LowPart <= 0x1700A0 )
      {
        v12 = LowPart - 1507416;
        if ( v12 )
        {
          v13 = v12 - 4;
          if ( v13 )
          {
            v14 = v13 - 4;
            if ( v14 )
            {
              v15 = v14 - 40;
              if ( v15 )
              {
                if ( v15 != 4 )
                  return NetLuidIndex;
                if ( !ndisAoAcRefMiniportForIoctl(
                        (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                        Options,
                        (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
                        0,
                        MPREF_AOAC_NA_RELEASE,
                        &v52,
                        &pNetLuidIndex) )
                  return (unsigned int)v52;
                active = ndisNicActiveRelease(
                           pNetLuidIndex,
                           (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                           (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp);
                v43 = 1;
              }
              else
              {
                if ( !ndisAoAcRefMiniportForIoctl(
                        (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                        Options,
                        (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
                        1,
                        MPREF_AOAC_NA_ACQUIRE,
                        &v52,
                        &pNetLuidIndex) )
                  return (unsigned int)v52;
                active = ndisNicActiveAcquire(
                           pNetLuidIndex,
                           (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                           (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
                           a1);
                v43 = 0;
              }
LABEL_124:
              NetLuidIndex = active;
              ndisDereferenceMiniport((__int64)pNetLuidIndex, v43);
              return NetLuidIndex;
            }
          }
        }
        return (unsigned int)-1073741637;
      }
      v44 = LowPart - 1507492;
      if ( v44 )
      {
        v45 = v44 - 8;
        if ( v45 )
        {
          v46 = v45 - 1880;
          if ( v46 )
          {
            if ( v46 != 4 )
              return NetLuidIndex;
            if ( FsContext[1] )
            {
              if ( (unsigned int)Options >= 0x1C )
              {
                pNetLuidIndex = 0LL;
                if ( ndisValidateNdisOffsetAndLengthInputString(
                       a1,
                       (const struct _NDIS_OFFSET_AND_LENGTH *)&v11.MasterIrp->AllocationProcessorNumber,
                       &v49)
                  && ndisValidateNdisOffsetAndLengthInputString(
                       a1,
                       (const struct _NDIS_OFFSET_AND_LENGTH *)((char *)&v11.MasterIrp->MdlAddress + 4),
                       &v47)
                  && ndisValidateNdisOffsetAndLengthInputBufferBounds(
                       a1,
                       (const struct _NDIS_OFFSET_AND_LENGTH *)(&v11.MasterIrp->Flags + 1),
                       (void **)&pNetLuidIndex) )
                {
                  return (unsigned int)ndisPnpInvokeTdi(*(_DWORD *)v11.MasterIrp, (__int64)&v49, (__int64)&v47);
                }
                return (unsigned int)-1073741811;
              }
              return (unsigned int)-1073741789;
            }
          }
          else if ( FsContext[1] )
          {
            if ( (unsigned int)Options >= 0x10 )
            {
              if ( ndisIsInNetSetupMode() )
              {
                ndisPnpRefresh((struct _GUID *)v11.MasterIrp);
                return NetLuidIndex;
              }
              return (unsigned int)-1073741637;
            }
            return (unsigned int)-1073741789;
          }
        }
        else if ( v8 )
        {
          if ( (unsigned int)Options >= 0x18 )
          {
            if ( *((_QWORD *)FsContext + 6) )
              return (unsigned int)-1073740024;
            return (unsigned int)ndisIfReferenceCompartmentForUser(
                                   (struct _GUID *)&v11.MasterIrp->AllocationProcessorNumber,
                                   *(&v11.MasterIrp->Flags + 1),
                                   (struct _NDIS_IF_COMPARTMENT_BLOCK **)FsContext + 6);
          }
          return (unsigned int)-1073741789;
        }
        return (unsigned int)-1073741790;
      }
      if ( !ndisAoAcRefMiniportForIoctl(
              (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
              Options,
              (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
              1,
              MPREF_AOAC_WAKE_DISABLE,
              &v52,
              &pNetLuidIndex) )
        return (unsigned int)v52;
      NetLuidIndex = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp, 0);
      ndisDereferenceMiniport((__int64)pNetLuidIndex, 6u);
LABEL_42:
      if ( P )
        ExFreePoolWithTag(P, 0);
      return NetLuidIndex;
    }
    if ( LowPart == 1507412 )
    {
      if ( !v8 )
        return 3221225506LL;
      if ( IoIs32bitProcess(a1) )
        return (unsigned int)-1073741637;
      if ( (unsigned int)Options >= 0x20C )
      {
        v41 = ndisIfSetIfDescr((__int64)v11.MasterIrp);
        goto LABEL_104;
      }
      goto LABEL_103;
    }
    if ( LowPart == 1507392 )
    {
      if ( !v8 )
        return 3221225506LL;
      if ( IoIs32bitProcess(a1) )
        return (unsigned int)-1073741637;
      if ( (unsigned int)Options >= 0x10 )
      {
        if ( LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
        {
          if ( v11.MasterIrp->Type == 1 && v11.MasterIrp->Size == 16 )
          {
            v24 = *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber;
            if ( v24 && (v24 == -1 || v11.MasterIrp->MdlAddress) )
              ndisConfigurePeriodicReceives((__int64)v11.MasterIrp);
            else
              NetLuidIndex = -1073741811;
          }
          else
          {
            NetLuidIndex = -1073741735;
          }
        }
        else
        {
          NetLuidIndex = -1073741823;
        }
        goto LABEL_54;
      }
    }
    else
    {
      if ( LowPart <= 0x170040 )
      {
        v17 = LowPart - 1507336;
        if ( v17 )
        {
          v18 = v17 - 8;
          if ( !v18 )
          {
            if ( IoIs32bitProcess(a1) )
            {
              v28 = (unsigned int)Src;
              if ( (unsigned int)Src >= 0x20 )
              {
                v21 = ndisEnumerateInterfaces32(v11.SystemBuffer, (unsigned int)Src);
                a1->IoStatus.Information = v28;
                goto LABEL_27;
              }
            }
            else if ( (unsigned int)Src >= 0x30 )
            {
              v21 = ndisEnumerateInterfaces((char *)v11.MasterIrp, (unsigned int)Src, &pNetLuidIndex);
LABEL_27:
              v4 = (unsigned int)pNetLuidIndex;
              NetLuidIndex = v21;
LABEL_28:
              a1->IoStatus.Information = v4;
              return NetLuidIndex;
            }
LABEL_66:
            NetLuidIndex = -1073741789;
            goto LABEL_28;
          }
          v19 = v18 - 4;
          if ( !v19 )
          {
            if ( v8 )
            {
              NetLuidIndex = -1073741811;
              if ( !(_DWORD)Options || (Options & 1) != 0 )
                return NetLuidIndex;
              *((_WORD *)v11.MasterIrp + (Options >> 1) - 1) = 0;
              RtlInitUnicodeString(&DestinationString, &v11.MasterIrp->Type);
              return (unsigned int)ndisHandleLegacyTransport((__int64)&DestinationString);
            }
            return 3221225506LL;
          }
          v25 = v19 - 12;
          if ( !v25 )
          {
            if ( (unsigned int)Length >= 4 )
            {
              Version = NdisGetVersion();
              v27 = (unsigned int)Src < 8;
              v4 = 4;
              *(_DWORD *)&v11.MasterIrp->Type = Version;
              if ( !v27 )
              {
                v4 = 8;
                *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber = ndisChecked;
              }
              goto LABEL_28;
            }
            goto LABEL_66;
          }
          if ( v25 != 20 )
            return NetLuidIndex;
          NdisTraceLoggingRareFeaturePath(Length);
          if ( v8 )
          {
            if ( (unsigned int)Options >= 0x30 && (unsigned int)Src >= 0x30 )
            {
              v21 = ndisIfEnumerateNsiObjects((NET_LUID *)v11.MasterIrp, (unsigned int)Src, &pNetLuidIndex);
              goto LABEL_27;
            }
            goto LABEL_66;
          }
          return 3221225506LL;
        }
        if ( !v8 )
          return 3221225506LL;
        if ( IoIs32bitProcess(a1) )
        {
          MasterIrp = (unsigned __int64)a1->AssociatedIrp.MasterIrp;
          v30 = *(_DWORD *)(*(_QWORD *)&v47.Length + 16LL);
          if ( (unsigned int)Options < 0x28 )
            return (unsigned int)-1073741789;
          v31 = *(unsigned __int16 *)(MasterIrp + 18)
              + *(unsigned __int16 *)(MasterIrp + 26)
              + *(unsigned __int16 *)(MasterIrp + 34);
          v32 = v31 + *(_DWORD *)(MasterIrp + 12);
          if ( v32 < v31 || v32 >= 0xFFFFFFD8 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)Options < v32 + 40 )
            return (unsigned int)-1073741789;
          if ( v32 >= 0xFFFFFFB8 || v32 + 72 >= 0xFFFFFFF8 )
            return (unsigned int)-1073741811;
          LODWORD(Options) = v32 + 80;
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v32 + 80, 0x2020444Eu);
          P = PoolWithTag;
          v34 = PoolWithTag;
          if ( !PoolWithTag )
            return (unsigned int)-1073741670;
          memset(PoolWithTag, 0, (unsigned int)Options);
          *(_DWORD *)v34 = *(_DWORD *)MasterIrp;
          *((_DWORD *)v34 + 1) = *(_DWORD *)(MasterIrp + 4);
          v11.MasterIrp = (_IRP *)v34;
          pNetLuidIndex = (struct _NDIS_MINIPORT_BLOCK *)(v34 + 72);
          if ( !ndisValidateNdisVarDataDesc32InputString(
                  MasterIrp,
                  v30,
                  (const struct _NDIS_VAR_DATA_DESC32 *)(MasterIrp + 16),
                  &v47) )
            goto LABEL_41;
          ndisMoveUnicodeStringToNdisVarDataDesc(
            &v47,
            (unsigned __int8 *)v34,
            (unsigned __int8 **)&pNetLuidIndex,
            (struct _NDIS_VAR_DATA_DESC *)(v34 + 24));
          if ( !ndisValidateNdisVarDataDesc32InputString(
                  MasterIrp,
                  v30,
                  (const struct _NDIS_VAR_DATA_DESC32 *)(MasterIrp + 24),
                  &v47) )
            goto LABEL_41;
          ndisMoveUnicodeStringToNdisVarDataDesc(
            &v47,
            (unsigned __int8 *)v34,
            (unsigned __int8 **)&pNetLuidIndex,
            (struct _NDIS_VAR_DATA_DESC *)(v34 + 40));
          if ( !ndisValidateNdisVarDataDesc32InputString(
                  MasterIrp,
                  v30,
                  (const struct _NDIS_VAR_DATA_DESC32 *)(MasterIrp + 32),
                  &v47) )
            goto LABEL_41;
          ndisMoveUnicodeStringToNdisVarDataDesc(
            &v47,
            (unsigned __int8 *)v34,
            (unsigned __int8 **)&pNetLuidIndex,
            (struct _NDIS_VAR_DATA_DESC *)(v34 + 56));
          v35 = *(_DWORD *)(MasterIrp + 12);
          if ( !ndisValidateEmbeddedBufferBounds(
                  MasterIrp,
                  v30,
                  MasterIrp + 8,
                  8u,
                  *(_DWORD *)(MasterIrp + 8),
                  v35,
                  4u,
                  &Src) )
            goto LABEL_41;
          v36 = Src;
          v37 = (char *)(((unsigned __int64)&pNetLuidIndex->Header + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          *((_DWORD *)v34 + 4) = v35;
          *((_QWORD *)v34 + 1) = v37 - v34;
          memmove(v37, v36, v35);
        }
        if ( (unsigned int)Options >= 0x48 )
        {
          v22 = HIWORD(v11.MasterIrp->AssociatedIrp.IrpCount)
              + WORD1(v11.MasterIrp->ThreadListEntry.Blink)
              + WORD1(v11.MasterIrp->IoStatus.Information);
          v23 = v22 + v11.MasterIrp->Flags;
          if ( v23 < v22 || v23 + 72 < 0x48 )
            goto LABEL_41;
          if ( (unsigned int)Options >= v23 + 72 )
          {
            if ( ndisValidateNdisVarDataDescInputString(
                   (unsigned __int64)v11.MasterIrp,
                   Options,
                   (const struct _NDIS_VAR_DATA_DESC *)&v11.MasterIrp->AssociatedIrp,
                   (struct _UNICODE_STRING *)&v11.MasterIrp->AssociatedIrp)
              && ndisValidateNdisVarDataDescInputString(
                   (unsigned __int64)v11.MasterIrp,
                   Options,
                   (const struct _NDIS_VAR_DATA_DESC *)&v11.MasterIrp->ThreadListEntry.Blink,
                   (struct _UNICODE_STRING *)&v11.MasterIrp->ThreadListEntry.Blink)
              && ndisValidateNdisVarDataDescInputString(
                   (unsigned __int64)v11.MasterIrp,
                   Options,
                   (const struct _NDIS_VAR_DATA_DESC *)&v11.MasterIrp->IoStatus.Information,
                   (struct _UNICODE_STRING *)&v11.MasterIrp->IoStatus.Information)
              && ndisValidateEmbeddedBufferBounds(
                   (unsigned __int64)v11.MasterIrp,
                   Options,
                   (unsigned __int64)&v11.MasterIrp->MdlAddress,
                   0xCu,
                   (unsigned int)v11.MasterIrp->MdlAddress,
                   v11.MasterIrp->Flags,
                   8u,
                   (void **)&v11.MasterIrp->MdlAddress) )
            {
              NetLuidIndex = ndisHandleUModePnPOp((__int64)v11.MasterIrp);
              goto LABEL_42;
            }
LABEL_41:
            NetLuidIndex = -1073741811;
            goto LABEL_42;
          }
        }
        NetLuidIndex = -1073741789;
        goto LABEL_42;
      }
      v38 = LowPart - 1507396;
      if ( !v38 )
      {
        if ( v8 )
        {
          if ( IoIs32bitProcess(a1) )
            return (unsigned int)-1073741637;
          if ( (unsigned int)Options >= 2 && (unsigned int)Src >= 4 )
          {
            NetLuidIndex = NdisIfAllocateNetLuidIndex(v11.MasterIrp->Type, (PUINT32)&pNetLuidIndex);
            if ( !NetLuidIndex )
            {
              v4 = 4;
              *(_DWORD *)&v11.MasterIrp->Type = (_DWORD)pNetLuidIndex;
            }
            goto LABEL_28;
          }
          goto LABEL_66;
        }
        return 3221225506LL;
      }
      v39 = v38 - 4;
      if ( !v39 )
      {
        if ( !v8 )
          return 3221225506LL;
        if ( IoIs32bitProcess(a1) )
          return (unsigned int)-1073741637;
        if ( (unsigned int)Options >= 8 )
        {
          v41 = NdisIfFreeNetLuidIndex(v11.MasterIrp->AllocationProcessorNumber, *(_DWORD *)v11.MasterIrp);
          goto LABEL_104;
        }
LABEL_103:
        NetLuidIndex = -1073741789;
LABEL_105:
        a1->IoStatus.Information = 0LL;
        return NetLuidIndex;
      }
      v40 = v39 - 4;
      if ( v40 )
      {
        if ( v40 != 4 )
          return NetLuidIndex;
        if ( !v8 )
          return 3221225506LL;
        if ( IoIs32bitProcess(a1) )
          return (unsigned int)-1073741637;
        if ( (unsigned int)Options >= 8 )
        {
          v41 = ndisIfDeletePersistedInterface((__int64)v11.MasterIrp);
LABEL_104:
          NetLuidIndex = v41;
          goto LABEL_105;
        }
        goto LABEL_103;
      }
      if ( !v8 )
        return 3221225506LL;
      if ( IoIs32bitProcess(a1) )
        return (unsigned int)-1073741637;
      if ( (unsigned int)Options >= 0x490 )
      {
        NetLuidIndex = ndisIfCreatePersistedInterface(
                         (union _NET_LUID_LH *)v11.MasterIrp,
                         NdisIfBlockSourcePersistedNsi);
        goto LABEL_54;
      }
    }
    NetLuidIndex = -1073741789;
LABEL_54:
    a1->IoStatus.Information = 0LL;
    return NetLuidIndex;
  }
  return 3221225485LL;
}
