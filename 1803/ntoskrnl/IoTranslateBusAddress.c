/*
 * XREFs of IoTranslateBusAddress @ 0x14023AE10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     IopFindResourceHandlerInfo @ 0x14061729C (IopFindResourceHandlerInfo.c)
 *     IopFindLegacyBusDeviceNode @ 0x14061732C (IopFindLegacyBusDeviceNode.c)
 *     IopQueryResourceHandlerInterface @ 0x140617468 (IopQueryResourceHandlerInterface.c)
 */

BOOLEAN __stdcall IoTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  PULONG v5; // r14
  int v8; // edi
  ULONG v10; // eax
  __int16 v11; // cx
  __int64 LegacyBusDeviceNode; // rsi
  __int64 v13; // r8
  char ResourceHandlerInfo; // r13
  PVOID v15; // r14
  int v16; // r12d
  PVOID P; // [rsp+48h] [rbp-29h] BYREF
  __int64 v19; // [rsp+50h] [rbp-21h] BYREF
  __int128 v20; // [rsp+58h] [rbp-19h] BYREF
  int v21; // [rsp+68h] [rbp-9h]
  __int128 v22; // [rsp+70h] [rbp-1h] BYREF
  int v23; // [rsp+80h] [rbp+Fh]

  v5 = AddressSpace;
  v8 = 0;
  if ( KeGetCurrentIrql() || !IopRootDeviceNode )
  {
    *TranslatedAddress = BusAddress;
    return 1;
  }
  v10 = *AddressSpace;
  if ( *AddressSpace )
  {
    if ( v10 != 1 )
      return 0;
    v11 = 1;
  }
  else
  {
    LOBYTE(v10) = 3;
    v11 = 0;
  }
  WORD1(v20) = v11;
  LOBYTE(v20) = v10;
  BYTE1(v20) = 3;
  *(PHYSICAL_ADDRESS *)((char *)&v20 + 4) = BusAddress;
  HIDWORD(v20) = 1;
  PpDevNodeLockTree(0LL);
  LegacyBusDeviceNode = IopFindLegacyBusDeviceNode((unsigned int)InterfaceType, BusNumber);
  if ( LegacyBusDeviceNode == IopRootDeviceNode )
  {
LABEL_23:
    PpDevNodeUnlockTree(0LL);
    if ( (unsigned __int8)v20 != 3 && (unsigned __int8)v20 != 7 )
    {
      if ( (unsigned __int8)v20 != 1 )
        return 0;
      v8 = 1;
    }
    *v5 = v8;
    *TranslatedAddress = *(PPHYSICAL_ADDRESS)((char *)&v20 + 4);
    return 1;
  }
  LOBYTE(v13) = v20;
  while ( 1 )
  {
    ResourceHandlerInfo = IopFindResourceHandlerInfo(1LL, LegacyBusDeviceNode, v13, &v19);
    if ( !ResourceHandlerInfo )
    {
      if ( (int)IopQueryResourceHandlerInterface(1LL, *(_QWORD *)(LegacyBusDeviceNode + 32), v13, &P) >= 0 )
      {
        v15 = P;
        goto LABEL_16;
      }
LABEL_20:
      LOBYTE(v13) = v20;
      goto LABEL_21;
    }
    if ( v19 )
      break;
LABEL_21:
    LegacyBusDeviceNode = *(_QWORD *)(LegacyBusDeviceNode + 16);
    if ( LegacyBusDeviceNode == IopRootDeviceNode )
    {
LABEL_22:
      v5 = AddressSpace;
      goto LABEL_23;
    }
  }
  v15 = *(PVOID *)(v19 + 24);
LABEL_16:
  v16 = (*((__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *))v15 + 4))(
          *((_QWORD *)v15 + 1),
          &v20,
          0LL,
          0LL,
          0LL,
          0LL,
          &v22);
  if ( !ResourceHandlerInfo )
  {
    (*((void (__fastcall **)(_QWORD))v15 + 3))(*((_QWORD *)v15 + 1));
    ExFreePoolWithTag(v15, 0);
  }
  if ( v16 >= 0 )
  {
    v21 = v23;
    v20 = v22;
    if ( v16 == 288 )
      goto LABEL_22;
    goto LABEL_20;
  }
  PpDevNodeUnlockTree(0LL);
  return 0;
}
