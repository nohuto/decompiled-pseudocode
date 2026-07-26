/*
 * XREFs of ndisHandlePnPRequest @ 0x1C0101AFC
 * Callers:
 *     ndisDispatchRequest @ 0x1C00B6280 (ndisDispatchRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisConfigurePeriodicReceives @ 0x1C0010DD4 (ndisConfigurePeriodicReceives.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001E2D0 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     NdisGetVersion @ 0x1C001F4E0 (NdisGetVersion.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ndisIfCreatePersistedInterface @ 0x1C00414E8 (ndisIfCreatePersistedInterface.c)
 *     ndisIfDeletePersistedInterface @ 0x1C00416D8 (ndisIfDeletePersistedInterface.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0041AAC (ndisIfReferenceCompartmentForUser.c)
 *     ndisIfSetIfDescr @ 0x1C0041CD8 (ndisIfSetIfDescr.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C00722C0 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00734A0 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C0073748 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C007949C (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00AAFD0 (NdisIfFreeNetLuidIndex.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00B4154 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z @ 0x1C00C4914 (-ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z @ 0x1C00C49EC (-ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z.c)
 *     ndisHandleLegacyTransport @ 0x1C00C4E68 (ndisHandleLegacyTransport.c)
 *     ndisHandleUModePnPOp @ 0x1C00C5E14 (ndisHandleUModePnPOp.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C00DB780 (NdisIfAllocateNetLuidIndex.c)
 *     ndisIfEnumerateNsiObjects @ 0x1C00DBA90 (ndisIfEnumerateNsiObjects.c)
 *     ?ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_DESC@@@Z @ 0x1C00E30B8 (-ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_D.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x1C00E3114 (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00E319C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z @ 0x1C00E31F8 (-ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PE.c)
 *     ?ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNICODE_STRING@@@Z @ 0x1C00E325C (-ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNI.c)
 *     ?ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING@@@Z @ 0x1C00E32A0 (-ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING.c)
 *     ndisEnumerateInterfaces @ 0x1C0105F2C (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C010AEB4 (ndisEnumerateInterfaces32.c)
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
  unsigned int Options; // r14d
  unsigned int Length; // ecx
  _IRP::<unnamed_type_AssociatedIrp> v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v21; // eax
  unsigned int v22; // eax
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
    Length = CurrentStackLocation->Parameters.Read.Length;
    v11.MasterIrp = (_IRP *)a1->AssociatedIrp;
    LODWORD(Src) = Length;
    if ( LowPart <= 0x170054 )
    {
      if ( LowPart == 1507412 )
      {
        if ( !v8 )
          return 3221225506LL;
        if ( !IoIs32bitProcess(a1) )
        {
          if ( Options >= 0x20C )
          {
            v41 = ndisIfSetIfDescr((__int64)v11.MasterIrp);
            goto LABEL_105;
          }
          goto LABEL_104;
        }
        return (unsigned int)-1073741637;
      }
      if ( LowPart == 1507392 )
      {
        if ( !v8 )
          return 3221225506LL;
        if ( IoIs32bitProcess(a1) )
          return (unsigned int)-1073741637;
        if ( Options >= 0x10 )
        {
          if ( ndisPeriodicReceives )
          {
            if ( v11.MasterIrp->Type == 1 && v11.MasterIrp->Size == 16 )
            {
              v21 = *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber;
              if ( v21 && (v21 == -1 || v11.MasterIrp->MdlAddress) )
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
          goto LABEL_34;
        }
      }
      else
      {
        if ( LowPart <= 0x170040 )
        {
          v12 = LowPart - 1507336;
          if ( v12 )
          {
            v13 = v12 - 8;
            if ( !v13 )
            {
              if ( IoIs32bitProcess(a1) )
              {
                v28 = (unsigned int)Src;
                if ( (unsigned int)Src >= 0x20 )
                {
                  v22 = ndisEnumerateInterfaces32(v11.SystemBuffer, (unsigned int)Src);
                  a1->IoStatus.Information = v28;
                  goto LABEL_38;
                }
              }
              else if ( (unsigned int)Src >= 0x30 )
              {
                v22 = ndisEnumerateInterfaces(v11.SystemBuffer, (unsigned int)Src);
LABEL_38:
                v4 = (unsigned int)pNetLuidIndex;
                NetLuidIndex = v22;
LABEL_39:
                a1->IoStatus.Information = v4;
                return NetLuidIndex;
              }
LABEL_67:
              NetLuidIndex = -1073741789;
              goto LABEL_39;
            }
            v14 = v13 - 4;
            if ( !v14 )
            {
              if ( v8 )
              {
                NetLuidIndex = -1073741811;
                if ( !Options || (Options & 1) != 0 )
                  return NetLuidIndex;
                *((_WORD *)v11.MasterIrp + ((unsigned __int64)Options >> 1) - 1) = 0;
                RtlInitUnicodeString(&DestinationString, &v11.MasterIrp->Type);
                return (unsigned int)ndisHandleLegacyTransport((__int64)&DestinationString);
              }
              return 3221225506LL;
            }
            v25 = v14 - 12;
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
                goto LABEL_39;
              }
              goto LABEL_67;
            }
            if ( v25 != 20 )
              return NetLuidIndex;
            NdisTraceLoggingRareFeaturePath();
            if ( v8 )
            {
              if ( Options >= 0x30 && (unsigned int)Src >= 0x30 )
              {
                v22 = ndisIfEnumerateNsiObjects((NET_LUID *)v11.MasterIrp, (unsigned int)Src, &pNetLuidIndex);
                goto LABEL_38;
              }
              goto LABEL_67;
            }
            return 3221225506LL;
          }
          if ( !v8 )
            return 3221225506LL;
          if ( !IoIs32bitProcess(a1) )
            goto LABEL_46;
          MasterIrp = (unsigned __int64)a1->AssociatedIrp.MasterIrp;
          v30 = *(_DWORD *)(*(_QWORD *)&v47.Length + 16LL);
          if ( Options >= 0x28 )
          {
            v31 = *(unsigned __int16 *)(MasterIrp + 18)
                + *(unsigned __int16 *)(MasterIrp + 26)
                + *(unsigned __int16 *)(MasterIrp + 34);
            v32 = v31 + *(_DWORD *)(MasterIrp + 12);
            if ( v32 < v31 || v32 >= 0xFFFFFFD8 )
              return (unsigned int)-1073741811;
            if ( Options >= v32 + 40 )
            {
              if ( v32 < 0xFFFFFFB8 && v32 + 72 < 0xFFFFFFF8 )
              {
                Options = v32 + 80;
                PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v32 + 80, 0x2020444Eu);
                P = PoolWithTag;
                v34 = PoolWithTag;
                if ( !PoolWithTag )
                  return (unsigned int)-1073741670;
                memset(PoolWithTag, 0, Options);
                *(_DWORD *)v34 = *(_DWORD *)MasterIrp;
                *((_DWORD *)v34 + 1) = *(_DWORD *)(MasterIrp + 4);
                v11.MasterIrp = (_IRP *)v34;
                pNetLuidIndex = (struct _NDIS_MINIPORT_BLOCK *)(v34 + 72);
                if ( !ndisValidateNdisVarDataDesc32InputString(
                        MasterIrp,
                        v30,
                        (const struct _NDIS_VAR_DATA_DESC32 *)(MasterIrp + 16),
                        &v47) )
                  goto LABEL_59;
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
                  goto LABEL_59;
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
                  goto LABEL_59;
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
                  goto LABEL_59;
                v36 = Src;
                v37 = (char *)(((unsigned __int64)&pNetLuidIndex->Header + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                *((_DWORD *)v34 + 4) = v35;
                *((_QWORD *)v34 + 1) = v37 - v34;
                memmove(v37, v36, v35);
LABEL_46:
                if ( Options < 0x48 )
                {
LABEL_90:
                  NetLuidIndex = -1073741789;
                  goto LABEL_55;
                }
                v23 = HIWORD(v11.MasterIrp->AssociatedIrp.IrpCount)
                    + WORD1(v11.MasterIrp->ThreadListEntry.Blink)
                    + WORD1(v11.MasterIrp->IoStatus.Information);
                v24 = v23 + v11.MasterIrp->Flags;
                if ( v24 >= v23 && v24 + 72 >= 0x48 )
                {
                  if ( Options >= v24 + 72 )
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
                  goto LABEL_90;
                }
LABEL_59:
                NetLuidIndex = -1073741811;
                goto LABEL_55;
              }
              return (unsigned int)-1073741811;
            }
          }
          return (unsigned int)-1073741789;
        }
        v38 = LowPart - 1507396;
        if ( !v38 )
        {
          if ( !v8 )
            return 3221225506LL;
          if ( !IoIs32bitProcess(a1) )
          {
            if ( Options >= 2 && (unsigned int)Src >= 4 )
            {
              NetLuidIndex = NdisIfAllocateNetLuidIndex(v11.MasterIrp->Type, (PUINT32)&pNetLuidIndex);
              if ( !NetLuidIndex )
              {
                v4 = 4;
                *(_DWORD *)&v11.MasterIrp->Type = (_DWORD)pNetLuidIndex;
              }
              goto LABEL_39;
            }
            goto LABEL_67;
          }
          return (unsigned int)-1073741637;
        }
        v39 = v38 - 4;
        if ( !v39 )
        {
          if ( !v8 )
            return 3221225506LL;
          if ( !IoIs32bitProcess(a1) )
          {
            if ( Options >= 8 )
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
          return (unsigned int)-1073741637;
        }
        v40 = v39 - 4;
        if ( v40 )
        {
          if ( v40 != 4 )
            return NetLuidIndex;
          if ( !v8 )
            return 3221225506LL;
          if ( !IoIs32bitProcess(a1) )
          {
            if ( Options >= 8 )
            {
              v41 = ndisIfDeletePersistedInterface((__int64)v11.MasterIrp);
LABEL_105:
              NetLuidIndex = v41;
              goto LABEL_106;
            }
            goto LABEL_104;
          }
          return (unsigned int)-1073741637;
        }
        if ( !v8 )
          return 3221225506LL;
        if ( IoIs32bitProcess(a1) )
          return (unsigned int)-1073741637;
        if ( Options >= 0x490 )
        {
          NetLuidIndex = ndisIfCreatePersistedInterface(
                           (union _NET_LUID_LH *)v11.MasterIrp,
                           NdisIfBlockSourcePersistedNsi);
          goto LABEL_34;
        }
      }
      NetLuidIndex = -1073741789;
LABEL_34:
      a1->IoStatus.Information = 0LL;
      return NetLuidIndex;
    }
    if ( LowPart == 1507488 )
    {
      if ( !ndisAoAcRefMiniportForIoctl(
              (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
              Options,
              (enum _NDIS_PM_COMPONENT_ID *)v11.MasterIrp,
              1,
              MPREF_AOAC_WAKE_ENABLE,
              &v52,
              &pNetLuidIndex) )
        return (unsigned int)v52;
      active = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp, 1u);
      v43 = 5;
    }
    else
    {
      if ( LowPart > 0x1700A0 )
      {
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
                if ( Options >= 0x1C )
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
              if ( Options < 0x10 )
                return (unsigned int)-1073741789;
              if ( ndisIsInNetSetupMode() )
              {
                ndisPnpRefresh((struct _GUID *)v11.MasterIrp);
                return NetLuidIndex;
              }
              return (unsigned int)-1073741637;
            }
          }
          else if ( v8 )
          {
            if ( Options >= 0x18 )
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
        if ( ndisAoAcRefMiniportForIoctl(
               (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
               Options,
               (enum _NDIS_PM_COMPONENT_ID *)v11.MasterIrp,
               1,
               MPREF_AOAC_WAKE_DISABLE,
               &v52,
               &pNetLuidIndex) )
        {
          NetLuidIndex = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp, 0);
          ndisDereferenceMiniport((__int64)pNetLuidIndex, 6u);
LABEL_55:
          if ( P )
            ExFreePoolWithTag(P, 0);
          return NetLuidIndex;
        }
        return (unsigned int)v52;
      }
      v16 = LowPart - 1507416;
      if ( !v16 )
        return (unsigned int)-1073741637;
      v17 = v16 - 4;
      if ( !v17 )
        return (unsigned int)-1073741637;
      v18 = v17 - 4;
      if ( !v18 )
        return (unsigned int)-1073741637;
      v19 = v18 - 40;
      if ( v19 )
      {
        if ( v19 != 4 )
          return NetLuidIndex;
        if ( !ndisAoAcRefMiniportForIoctl(
                (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                Options,
                (enum _NDIS_PM_COMPONENT_ID *)v11.MasterIrp,
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
                (enum _NDIS_PM_COMPONENT_ID *)v11.MasterIrp,
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
    }
    NetLuidIndex = active;
    ndisDereferenceMiniport((__int64)pNetLuidIndex, v43);
    return NetLuidIndex;
  }
  return 3221225485LL;
}
