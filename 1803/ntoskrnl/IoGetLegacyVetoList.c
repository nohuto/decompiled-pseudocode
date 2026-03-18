/*
 * XREFs of IoGetLegacyVetoList @ 0x14051CFCC
 * Callers:
 *     PopFilterCapabilities @ 0x14051CDCC (PopFilterCapabilities.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 *     PnprLegacyDeviceDriversPresent @ 0x140734828 (PnprLegacyDeviceDriversPresent.c)
 *     ExpQueryLegacyDriverInformation @ 0x1407BBA58 (ExpQueryLegacyDriverInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopGetLegacyVetoListDrivers @ 0x1404D45D0 (IopGetLegacyVetoListDrivers.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     IopGetLegacyVetoListDeviceNode @ 0x14051D084 (IopGetLegacyVetoListDeviceNode.c)
 *     IopAppendLegacyVeto @ 0x140739A18 (IopAppendLegacyVeto.c)
 */

__int64 __fastcall IoGetLegacyVetoList(PVOID *a1, _DWORD *a2)
{
  bool v4; // zf
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-30h] BYREF
  const WCHAR *v7; // [rsp+28h] [rbp-28h]
  PVOID *v8; // [rsp+30h] [rbp-20h] BYREF
  int v9; // [rsp+38h] [rbp-18h]
  _DWORD *v10; // [rsp+40h] [rbp-10h]
  unsigned int *v11; // [rsp+48h] [rbp-8h]
  unsigned int v12; // [rsp+60h] [rbp+10h] BYREF

  if ( a1 )
    *a1 = 0LL;
  v4 = PnPInitialized == 0;
  *a2 = 0;
  v12 = 0;
  if ( v4 )
    return 0LL;
  v8 = a1;
  v11 = &v12;
  v9 = 0;
  v10 = a2;
  IopGetLegacyVetoListDrivers((__int64)&v8);
  result = v12;
  if ( (v12 & 0x80000000) != 0 )
    goto LABEL_14;
  if ( !*a2 )
  {
    PpDevNodeLockTree(0);
    IopGetLegacyVetoListDeviceNode(IopRootDeviceNode, &v8);
    PpDevNodeUnlockTree(0);
    result = v12;
  }
  if ( (int)result < 0 )
    goto LABEL_14;
  if ( *a2 && a1 )
  {
    v6 = 0x20000;
    v7 = &word_140657F20;
    IopAppendLegacyVeto(&v8, &v6);
    result = v12;
  }
  if ( (int)result < 0 )
  {
LABEL_14:
    if ( a1 )
    {
      if ( *a1 )
      {
        ExFreePoolWithTag(*a1, 0);
        result = v12;
        *a1 = 0LL;
      }
    }
  }
  return result;
}
