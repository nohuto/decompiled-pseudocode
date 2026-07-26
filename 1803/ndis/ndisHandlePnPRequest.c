/*
 * XREFs of ndisHandlePnPRequest @ 0x1C0100008
 * Callers:
 *     ndisDispatchRequest @ 0x1C00AC650 (ndisDispatchRequest.c)
 * Callees:
 *     ndisConfigurePeriodicReceives @ 0x1C00050B0 (ndisConfigurePeriodicReceives.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0013BC8 (ndisIfReferenceCompartmentForUser.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023FC0 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     NdisGetVersion @ 0x1C0025310 (NdisGetVersion.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ndisIfCreatePersistedInterface @ 0x1C0042630 (ndisIfCreatePersistedInterface.c)
 *     ndisIfDeletePersistedInterface @ 0x1C0042820 (ndisIfDeletePersistedInterface.c)
 *     ndisIfSetIfDescr @ 0x1C0042C6C (ndisIfSetIfDescr.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C0072B34 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C0073D08 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C0073FB4 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C0079C60 (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00B2770 (NdisIfFreeNetLuidIndex.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00B7824 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ndisHandleLegacyTransport @ 0x1C00C89C4 (ndisHandleLegacyTransport.c)
 *     ?ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z @ 0x1C00CA0EC (-ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z @ 0x1C00CA1CC (-ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z.c)
 *     ndisHandleUModePnPOp @ 0x1C00CADD4 (ndisHandleUModePnPOp.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C00DD340 (NdisIfAllocateNetLuidIndex.c)
 *     ndisIfEnumerateNsiObjects @ 0x1C00DD650 (ndisIfEnumerateNsiObjects.c)
 *     ?ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_DESC@@@Z @ 0x1C00E4828 (-ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_D.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x1C00E4884 (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00E490C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z @ 0x1C00E4968 (-ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PE.c)
 *     ?ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNICODE_STRING@@@Z @ 0x1C00E49CC (-ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNI.c)
 *     ?ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING@@@Z @ 0x1C00E4A10 (-ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING.c)
 *     ndisEnumerateInterfaces @ 0x1C010719C (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C010CE40 (ndisEnumerateInterfaces32.c)
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
  unsigned int Length; // ecx
  _IRP::<unnamed_type_AssociatedIrp> v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // edx
  unsigned int v24; // ecx
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
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int8 v45; // dl
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // r8
  __int64 v50; // r9
  struct _UNICODE_STRING v51; // [rsp+40h] [rbp-38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING v53; // [rsp+60h] [rbp-18h] BYREF
  struct _NDIS_MINIPORT_BLOCK *pNetLuidIndex; // [rsp+C0h] [rbp+48h] BYREF
  void *Src; // [rsp+C8h] [rbp+50h] BYREF
  int v56; // [rsp+D0h] [rbp+58h] BYREF
  PVOID P; // [rsp+D8h] [rbp+60h]

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  NetLuidIndex = 0;
  v56 = 0;
  v4 = 0;
  LODWORD(pNetLuidIndex) = 0;
  P = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  *(_QWORD *)&v51.Length = CurrentStackLocation;
  FsContext = (char *)FileObject->FsContext;
  if ( !FsContext )
    return 3221225487LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = *FsContext;
  if ( (LowPart & 3) == 0 )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    Length = CurrentStackLocation->Parameters.Read.Length;
    v11.MasterIrp = (_IRP *)a1->AssociatedIrp;
    LODWORD(Src) = Length;
    if ( LowPart > 0x170054 )
    {
      if ( LowPart == 1507488 )
      {
        if ( ndisAoAcRefMiniportForIoctl(
               (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
               Options,
               (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
               1,
               MPREF_AOAC_WAKE_ENABLE,
               &v56,
               &pNetLuidIndex) )
        {
          active = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp, 1u);
          v45 = 5;
          goto LABEL_126;
        }
        return (unsigned int)v56;
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
              if ( !v15 )
              {
                if ( ndisAoAcRefMiniportForIoctl(
                       (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                       Options,
                       (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
                       1,
                       MPREF_AOAC_NA_ACQUIRE,
                       &v56,
                       &pNetLuidIndex) )
                {
                  active = ndisNicActiveAcquire(
                             pNetLuidIndex,
                             (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                             (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
                             a1);
                  v45 = 0;
LABEL_126:
                  NetLuidIndex = active;
                  ndisDereferenceMiniport((__int64)pNetLuidIndex, v45, v43, v44);
                  return NetLuidIndex;
                }
                return (unsigned int)v56;
              }
              if ( v15 == 4 )
              {
                if ( ndisAoAcRefMiniportForIoctl(
                       (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                       Options,
                       (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
                       0,
                       MPREF_AOAC_NA_RELEASE,
                       &v56,
                       &pNetLuidIndex) )
                {
                  active = ndisNicActiveRelease(
                             pNetLuidIndex,
                             (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                             (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp);
                  v45 = 1;
                  goto LABEL_126;
                }
                return (unsigned int)v56;
              }
              return NetLuidIndex;
            }
          }
        }
        return (unsigned int)-1073741637;
      }
      v46 = LowPart - 1507492;
      if ( v46 )
      {
        v47 = v46 - 8;
        if ( v47 )
        {
          v48 = v47 - 1880;
          if ( v48 )
          {
            if ( v48 != 4 )
              return NetLuidIndex;
            if ( FsContext[1] )
            {
              if ( (unsigned int)Options >= 0x1C )
              {
                pNetLuidIndex = 0LL;
                if ( ndisValidateNdisOffsetAndLengthInputString(
                       a1,
                       (const struct _NDIS_OFFSET_AND_LENGTH *)&v11.MasterIrp->AllocationProcessorNumber,
                       &v53)
                  && ndisValidateNdisOffsetAndLengthInputString(
                       a1,
                       (const struct _NDIS_OFFSET_AND_LENGTH *)((char *)&v11.MasterIrp->MdlAddress + 4),
                       &v51)
                  && ndisValidateNdisOffsetAndLengthInputBufferBounds(
                       a1,
                       (const struct _NDIS_OFFSET_AND_LENGTH *)(&v11.MasterIrp->Flags + 1),
                       (void **)&pNetLuidIndex) )
                {
                  return (unsigned int)ndisPnpInvokeTdi(*(_DWORD *)v11.MasterIrp, (__int64)&v53, (__int64)&v51);
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
              &v56,
              &pNetLuidIndex) )
        return (unsigned int)v56;
      NetLuidIndex = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp, 0);
      ndisDereferenceMiniport((__int64)pNetLuidIndex, 6u, v49, v50);
LABEL_55:
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
        goto LABEL_105;
      }
      goto LABEL_104;
    }
    if ( LowPart == 1507392 )
    {
      if ( !v8 )
        return 3221225506LL;
      if ( IoIs32bitProcess(a1) )
        return (unsigned int)-1073741637;
      if ( (unsigned int)Options >= 0x10 )
      {
        if ( ndisPeriodicReceives )
        {
          if ( v11.MasterIrp->Type == 1 && v11.MasterIrp->Size == 16 )
          {
            v22 = *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber;
            if ( v22 && (v22 == -1 || v11.MasterIrp->MdlAddress) )
              ndisConfigurePeriodicReceives((LARGE_INTEGER *)v11.MasterIrp);
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
        goto LABEL_43;
      }
    }
    else
    {
      if ( LowPart <= 0x170040 )
      {
        v16 = LowPart - 1507336;
        if ( v16 )
        {
          v17 = v16 - 8;
          if ( !v17 )
          {
            if ( IoIs32bitProcess(a1) )
            {
              v28 = (unsigned int)Src;
              if ( (unsigned int)Src >= 0x20 )
              {
                v21 = ndisEnumerateInterfaces32(v11.SystemBuffer, (unsigned int)Src);
                a1->IoStatus.Information = v28;
                goto LABEL_32;
              }
            }
            else if ( (unsigned int)Src >= 0x30 )
            {
              v21 = ndisEnumerateInterfaces(v11.SystemBuffer, (unsigned int)Src);
LABEL_32:
              v4 = (unsigned int)pNetLuidIndex;
              NetLuidIndex = v21;
LABEL_33:
              a1->IoStatus.Information = v4;
              return NetLuidIndex;
            }
LABEL_67:
            NetLuidIndex = -1073741789;
            goto LABEL_33;
          }
          v18 = v17 - 4;
          if ( !v18 )
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
          v25 = v18 - 12;
          if ( !v25 )
          {
            if ( Length >= 4 )
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
              goto LABEL_33;
            }
            goto LABEL_67;
          }
          if ( v25 != 20 )
            return NetLuidIndex;
          NdisTraceLoggingRareFeaturePath();
          if ( v8 )
          {
            if ( (unsigned int)Options >= 0x30 && (unsigned int)Src >= 0x30 )
            {
              v21 = ndisIfEnumerateNsiObjects((NET_LUID *)v11.MasterIrp, (unsigned int)Src, &pNetLuidIndex);
              goto LABEL_32;
            }
            goto LABEL_67;
          }
          return 3221225506LL;
        }
        if ( !v8 )
          return 3221225506LL;
        if ( IoIs32bitProcess(a1) )
        {
          MasterIrp = (unsigned __int64)a1->AssociatedIrp.MasterIrp;
          v30 = *(_DWORD *)(*(_QWORD *)&v51.Length + 16LL);
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
                  &v51) )
            goto LABEL_59;
          ndisMoveUnicodeStringToNdisVarDataDesc(
            &v51,
            (unsigned __int8 *)v34,
            (unsigned __int8 **)&pNetLuidIndex,
            (struct _NDIS_VAR_DATA_DESC *)(v34 + 24));
          if ( !ndisValidateNdisVarDataDesc32InputString(
                  MasterIrp,
                  v30,
                  (const struct _NDIS_VAR_DATA_DESC32 *)(MasterIrp + 24),
                  &v51) )
            goto LABEL_59;
          ndisMoveUnicodeStringToNdisVarDataDesc(
            &v51,
            (unsigned __int8 *)v34,
            (unsigned __int8 **)&pNetLuidIndex,
            (struct _NDIS_VAR_DATA_DESC *)(v34 + 40));
          if ( !ndisValidateNdisVarDataDesc32InputString(
                  MasterIrp,
                  v30,
                  (const struct _NDIS_VAR_DATA_DESC32 *)(MasterIrp + 32),
                  &v51) )
            goto LABEL_59;
          ndisMoveUnicodeStringToNdisVarDataDesc(
            &v51,
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
            goto LABEL_59;
          v36 = Src;
          v37 = (char *)(((unsigned __int64)&pNetLuidIndex->Header + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          *((_DWORD *)v34 + 4) = v35;
          *((_QWORD *)v34 + 1) = v37 - v34;
          memmove(v37, v36, v35);
        }
        if ( (unsigned int)Options < 0x48 )
          goto LABEL_90;
        v23 = HIWORD(v11.MasterIrp->AssociatedIrp.IrpCount)
            + WORD1(v11.MasterIrp->ThreadListEntry.Blink)
            + WORD1(v11.MasterIrp->IoStatus.Information);
        v24 = v23 + v11.MasterIrp->Flags;
        if ( v24 >= v23 && v24 + 72 >= 0x48 )
        {
          if ( (unsigned int)Options >= v24 + 72 )
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
              goto LABEL_55;
            }
            goto LABEL_59;
          }
LABEL_90:
          NetLuidIndex = -1073741789;
          goto LABEL_55;
        }
LABEL_59:
        NetLuidIndex = -1073741811;
        goto LABEL_55;
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
            goto LABEL_33;
          }
          goto LABEL_67;
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
          goto LABEL_105;
        }
LABEL_104:
        NetLuidIndex = -1073741789;
LABEL_106:
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
LABEL_105:
          NetLuidIndex = v41;
          goto LABEL_106;
        }
        goto LABEL_104;
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
        goto LABEL_43;
      }
    }
    NetLuidIndex = -1073741789;
LABEL_43:
    a1->IoStatus.Information = 0LL;
    return NetLuidIndex;
  }
  return 3221225485LL;
}
