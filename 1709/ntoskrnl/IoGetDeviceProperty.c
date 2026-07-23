/*
 * XREFs of IoGetDeviceProperty @ 0x140556EB0
 * Callers:
 *     PoStoreRequester @ 0x1400B0064 (PoStoreRequester.c)
 *     PiRebalanceOptOut @ 0x140200EA0 (PiRebalanceOptOut.c)
 *     KseDsCallbackHookAddDevice @ 0x14020F020 (KseDsCallbackHookAddDevice.c)
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 *     PiControlGetPropertyData @ 0x140556C60 (PiControlGetPropertyData.c)
 *     IoGetDmaAdapter @ 0x140599080 (IoGetDmaAdapter.c)
 *     IopIsPciRootBus @ 0x1406C2310 (IopIsPciRootBus.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406F7354 (PopRegisterCoolingExtensionProtection.c)
 *     PopWakeSourceGetDeviceProperty @ 0x1406FAA58 (PopWakeSourceGetDeviceProperty.c)
 *     IoWMISuggestInstanceName @ 0x140740940 (IoWMISuggestInstanceName.c)
 *     ArbQueryConflict @ 0x1407893F0 (ArbQueryConflict.c)
 *     ArbShareDriverExclusive @ 0x14078994C (ArbShareDriverExclusive.c)
 *     VfIsPCIBus @ 0x1407AC318 (VfIsPCIBus.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     PpvUtilFailDriver @ 0x140200C90 (PpvUtilFailDriver.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14048F170 (ObQueryNameStringMode.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     PpIrpQueryCapabilities @ 0x1405522C0 (PpIrpQueryCapabilities.c)
 *     PiGetDeviceRegProperty @ 0x1405573EC (PiGetDeviceRegProperty.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14055761C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PnpDetermineResourceListSize @ 0x14055808C (PnpDetermineResourceListSize.c)
 *     PnpBusTypeGuidGet @ 0x14055A94C (PnpBusTypeGuidGet.c)
 *     PiGetDeviceRegistryProperty @ 0x1406BF5A8 (PiGetDeviceRegistryProperty.c)
 */

NTSTATUS __stdcall IoGetDeviceProperty(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  unsigned int v5; // edx
  unsigned __int16 *DeviceNode; // rsi
  int v10; // edi
  int v11; // r15d
  NTSTATUS DeviceRegProp; // ebx
  bool v13; // zf
  unsigned int v15; // edx
  unsigned int v16; // edx
  const void **PoolWithTag; // rax
  const void **v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  __int64 v24; // rbx
  size_t v25; // rdi
  unsigned int v26; // eax
  size_t v27; // r15
  int v28; // eax
  int v29; // eax
  unsigned int v30; // edx
  __int64 v31; // rcx
  ULONG v32; // eax
  int v33; // eax
  ULONG *v34; // rdx
  ULONG v35; // eax
  unsigned int v36; // [rsp+40h] [rbp-51h] BYREF
  int v37; // [rsp+44h] [rbp-4Dh] BYREF
  int v38; // [rsp+48h] [rbp-49h] BYREF
  __int128 v39; // [rsp+50h] [rbp-41h] BYREF
  int v40; // [rsp+60h] [rbp-31h] BYREF
  int v41; // [rsp+68h] [rbp-29h]

  v5 = DeviceProperty & 0xFFF;
  *ResultLength = 0;
  if ( !DeviceObject )
    return -1073741808;
  DeviceNode = (unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    if ( v5 != 18 && (v5 != 15 || !DeviceNode) )
      PpvUtilFailDriver(2);
    return -1073741808;
  }
  if ( v5 > 0xB )
  {
    v11 = 17;
    if ( v5 <= 0x11 )
    {
      if ( v5 == 17 )
      {
        v10 = 4;
        goto LABEL_11;
      }
      v20 = v5 - 12;
      if ( !v20 )
      {
        DeviceRegProp = PnpBusTypeGuidGet(DeviceNode[232], &v39);
        if ( DeviceRegProp < 0 )
          return DeviceRegProp;
        *ResultLength = 16;
        if ( BufferLength >= 0x10 )
        {
          *(_OWORD *)PropertyBuffer = v39;
          return DeviceRegProp;
        }
        return -1073741789;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v5 = v22 - 1;
          if ( !v5 )
          {
            v11 = 23;
            goto LABEL_47;
          }
          if ( v5 != 1 )
            return -1073741584;
          if ( (int)PpIrpQueryCapabilities(DeviceObject, &v40) < 0 )
            return -1073741772;
          v33 = v41;
          if ( v41 == -1 )
            return -1073741772;
          *ResultLength = 4;
          if ( BufferLength >= 4 )
            *(_DWORD *)PropertyBuffer = v33;
          return BufferLength < 4 ? 0xC0000023 : 0;
        }
        if ( *((int *)DeviceNode + 115) < 0 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        v28 = *((_DWORD *)DeviceNode + 115);
      }
      else
      {
        if ( *((_DWORD *)DeviceNode + 114) == -1 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        v28 = *((_DWORD *)DeviceNode + 114);
      }
      *(_DWORD *)PropertyBuffer = v28;
      return 0;
    }
    v15 = v5 - 18;
    if ( !v15 )
    {
      if ( DeviceNode == (unsigned __int16 *)IopRootDeviceNode )
      {
        v29 = 0;
        DeviceRegProp = 0;
      }
      else
      {
        if ( !*((_QWORD *)DeviceNode + 6) )
          return -1073741808;
        while ( 1 )
        {
          v36 = 4;
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *((_QWORD *)DeviceNode + 6),
                            0LL,
                            11,
                            (__int64)&v37,
                            (__int64)&v38,
                            (__int64)&v36,
                            0);
          if ( DeviceRegProp < 0 || v37 != 4 || v36 != 4 )
            break;
          if ( (v38 & 0x20) != 0 )
          {
            v29 = 1;
          }
          else if ( (v38 & 0x40) != 0 )
          {
            v29 = 2;
          }
          else
          {
            v29 = (v38 & 0x400) != 0 ? 3 : 0;
          }
          DeviceNode = (unsigned __int16 *)*((_QWORD *)DeviceNode + 2);
          if ( v29 || DeviceNode == (unsigned __int16 *)IopRootDeviceNode )
            goto LABEL_72;
        }
        v29 = 2;
LABEL_72:
        if ( DeviceRegProp < 0 )
        {
          if ( DeviceRegProp == -1073741275 )
            return -1073741772;
          v13 = DeviceRegProp == -1073741810;
          goto LABEL_13;
        }
      }
      *ResultLength = 4;
      if ( BufferLength >= 4 )
      {
        *(_DWORD *)PropertyBuffer = v29;
        return DeviceRegProp;
      }
      return -1073741789;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      *ResultLength = 4;
      if ( BufferLength >= 4 )
      {
        PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 1LL, PropertyBuffer);
        return 0;
      }
      return -1073741789;
    }
    v23 = v16 - 1;
    if ( v23 )
    {
      v5 = v23 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
          return -1073741584;
        v11 = 37;
        goto LABEL_47;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      if ( *((_QWORD *)DeviceNode + 52) )
      {
        v24 = *((_QWORD *)DeviceNode + 53);
        if ( v24 )
        {
          v25 = (unsigned int)((__int64 (*)(void))PnpDetermineResourceListSize)();
          v26 = PnpDetermineResourceListSize(v24);
          v27 = v26;
          *ResultLength = v25 + v26;
          if ( (unsigned int)v25 + v26 <= BufferLength )
          {
            memmove(PropertyBuffer, *((const void **)DeviceNode + 52), v25);
            memmove((char *)PropertyBuffer + v25, *((const void **)DeviceNode + 53), v27);
            DeviceRegProp = 0;
            goto LABEL_42;
          }
LABEL_41:
          DeviceRegProp = -1073741789;
LABEL_42:
          KeReleaseGuardedMutex(&PiResourceListLock);
          return DeviceRegProp;
        }
      }
    }
    else
    {
      ExAcquireFastMutex(&PiResourceListLock);
      v34 = (ULONG *)*((_QWORD *)DeviceNode + 55);
      if ( v34 )
      {
        v35 = *v34;
        *ResultLength = *v34;
        if ( v35 > BufferLength )
          goto LABEL_41;
        memmove(PropertyBuffer, v34, *v34);
LABEL_108:
        DeviceRegProp = 0;
        goto LABEL_42;
      }
    }
    *ResultLength = 0;
    goto LABEL_108;
  }
  if ( v5 != 11 )
  {
    if ( v5 > 5 )
    {
      v5 -= 6;
      if ( v5 )
      {
        if ( --v5 )
        {
          if ( --v5 )
          {
            if ( --v5 )
            {
              if ( v5 != 1 )
                return -1073741584;
              v11 = 14;
            }
            else
            {
              v11 = 13;
            }
          }
          else
          {
            v11 = 12;
          }
        }
        else
        {
          v11 = 10;
        }
      }
      else
      {
        v11 = 9;
      }
    }
    else
    {
      if ( v5 != 5 )
      {
        if ( !v5 )
        {
          v10 = 1;
          v11 = 1;
          goto LABEL_11;
        }
        if ( !--v5 )
        {
          v10 = 7;
          v11 = 2;
          goto LABEL_11;
        }
        if ( !--v5 )
        {
          v10 = 7;
          v11 = 3;
LABEL_11:
          if ( *((_QWORD *)DeviceNode + 6) )
          {
            *ResultLength = BufferLength;
            DeviceRegProp = PiGetDeviceRegProperty(
                              *((_QWORD *)DeviceNode + 6),
                              v5,
                              v10,
                              v11,
                              PropertyBuffer,
                              ResultLength);
            v13 = DeviceRegProp == -1073741275;
LABEL_13:
            if ( !v13 )
              return DeviceRegProp;
            return -1073741772;
          }
          return -1073741808;
        }
        v30 = v5 - 1;
        if ( !v30 )
        {
          *ResultLength = BufferLength;
          return PiGetDeviceRegistryProperty(
                   (_DWORD)DeviceObject,
                   0,
                   BufferLength,
                   (_DWORD)PropertyBuffer,
                   (__int64)PropertyBuffer,
                   (__int64)ResultLength);
        }
        if ( v30 == 1 )
        {
          v31 = *((_QWORD *)DeviceNode + 69);
          if ( !v31 )
          {
            *ResultLength = 0;
            return 0;
          }
          v32 = PnpDetermineResourceListSize(v31);
          *ResultLength = v32;
          if ( v32 <= BufferLength )
          {
            memmove(PropertyBuffer, *((const void **)DeviceNode + 69), v32);
            return 0;
          }
          return -1073741789;
        }
        return -1073741584;
      }
      v11 = 8;
    }
LABEL_47:
    v10 = 1;
    goto LABEL_11;
  }
  v36 = BufferLength + 16;
  PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, BufferLength + 16, 0x6F697050u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  DeviceRegProp = ObQueryNameStringMode((char *)DeviceObject, (__int64)PoolWithTag, v36, ResultLength, 0);
  if ( DeviceRegProp == -1073741820 )
    DeviceRegProp = -1073741789;
  if ( DeviceRegProp < 0 )
  {
    *ResultLength -= 16;
  }
  else if ( *(_WORD *)v18 )
  {
    v19 = *(unsigned __int16 *)v18 + 2;
    *ResultLength = v19;
    if ( v19 > BufferLength )
    {
      DeviceRegProp = -1073741789;
    }
    else
    {
      memmove(PropertyBuffer, v18[1], *(unsigned __int16 *)v18);
      *(_WORD *)((char *)PropertyBuffer + *(unsigned __int16 *)v18) = 0;
    }
  }
  else
  {
    *ResultLength = 0;
  }
  ExFreePoolWithTag(v18, 0);
  return DeviceRegProp;
}
