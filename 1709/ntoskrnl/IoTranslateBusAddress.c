/*
 * XREFs of IoTranslateBusAddress @ 0x1401FE440
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     IopFindResourceHandlerInfo @ 0x14055A068 (IopFindResourceHandlerInfo.c)
 *     IopFindLegacyBusDeviceNode @ 0x14055A0F8 (IopFindLegacyBusDeviceNode.c)
 *     IopQueryResourceHandlerInterface @ 0x14055A234 (IopQueryResourceHandlerInterface.c)
 */

BOOLEAN __stdcall IoTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  ULONG v9; // eax
  __int16 v10; // cx
  __int64 LegacyBusDeviceNode; // rdi
  __int64 v12; // r8
  char ResourceHandlerInfo; // r13
  PVOID v14; // rsi
  int v15; // r12d
  PVOID P; // [rsp+40h] [rbp-31h] BYREF
  __int64 v17; // [rsp+48h] [rbp-29h] BYREF
  __int128 v18; // [rsp+50h] [rbp-21h] BYREF
  int v19; // [rsp+60h] [rbp-11h]
  __int128 v20; // [rsp+68h] [rbp-9h] BYREF
  int v21; // [rsp+78h] [rbp+7h]

  if ( KeGetCurrentIrql() || !IopRootDeviceNode )
  {
    *TranslatedAddress = BusAddress;
    return 1;
  }
  v9 = *AddressSpace;
  if ( *AddressSpace )
  {
    if ( v9 != 1 )
      return 0;
    v10 = 1;
  }
  else
  {
    LOBYTE(v9) = 3;
    v10 = 0;
  }
  WORD1(v18) = v10;
  LOBYTE(v18) = v9;
  BYTE1(v18) = 3;
  *(PHYSICAL_ADDRESS *)((char *)&v18 + 4) = BusAddress;
  HIDWORD(v18) = 1;
  PpDevNodeLockTree(0LL);
  LegacyBusDeviceNode = IopFindLegacyBusDeviceNode((unsigned int)InterfaceType, BusNumber);
  if ( LegacyBusDeviceNode == IopRootDeviceNode )
  {
LABEL_22:
    PpDevNodeUnlockTree(0LL);
    if ( (((unsigned __int8)v18 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( (unsigned __int8)v18 != 1 )
        return 0;
      *AddressSpace = 1;
    }
    else
    {
      *AddressSpace = 0;
    }
    *TranslatedAddress = *(PPHYSICAL_ADDRESS)((char *)&v18 + 4);
    return 1;
  }
  LOBYTE(v12) = v18;
  while ( 1 )
  {
    ResourceHandlerInfo = IopFindResourceHandlerInfo(1LL, LegacyBusDeviceNode, v12, &v17);
    if ( !ResourceHandlerInfo )
    {
      if ( (int)IopQueryResourceHandlerInterface(1LL, *(_QWORD *)(LegacyBusDeviceNode + 32), v12, &P) >= 0 )
      {
        v14 = P;
        goto LABEL_16;
      }
LABEL_20:
      LOBYTE(v12) = v18;
      goto LABEL_21;
    }
    if ( v17 )
      break;
LABEL_21:
    LegacyBusDeviceNode = *(_QWORD *)(LegacyBusDeviceNode + 16);
    if ( LegacyBusDeviceNode == IopRootDeviceNode )
      goto LABEL_22;
  }
  v14 = *(PVOID *)(v17 + 24);
LABEL_16:
  v15 = (*((__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *))v14 + 4))(
          *((_QWORD *)v14 + 1),
          &v18,
          0LL,
          0LL,
          0LL,
          0LL,
          &v20);
  if ( !ResourceHandlerInfo )
  {
    (*((void (__fastcall **)(_QWORD))v14 + 3))(*((_QWORD *)v14 + 1));
    ExFreePoolWithTag(v14, 0);
  }
  if ( v15 >= 0 )
  {
    v19 = v21;
    v18 = v20;
    if ( v15 == 288 )
      goto LABEL_22;
    goto LABEL_20;
  }
  PpDevNodeUnlockTree(0LL);
  return 0;
}
