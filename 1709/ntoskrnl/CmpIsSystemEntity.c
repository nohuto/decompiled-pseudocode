/*
 * XREFs of CmpIsSystemEntity @ 0x140569D5C
 * Callers:
 *     CmQueryLayeredKey @ 0x1401E318C (CmQueryLayeredKey.c)
 *     NtDeleteKey @ 0x14047207C (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140474B2C (NtDeleteValueKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpVEExecuteOpenLogic @ 0x1404B85E0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteCreateLogic @ 0x140569AAC (CmpVEExecuteCreateLogic.c)
 *     CmpVEPerformOpenAccessCheck @ 0x140569CE0 (CmpVEPerformOpenAccessCheck.c)
 *     NtSetInformationKey @ 0x14056AC30 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x14068812C (NtRenameKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14069045C (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmpIsVirtEnabled @ 0x140569DE8 (CmpIsVirtEnabled.c)
 */

bool __fastcall CmpIsSystemEntity(int *a1)
{
  bool v2; // di
  int v4; // eax
  int v5; // eax

  v2 = 1;
  if ( !CmpVEEnabled )
    return 1;
  if ( a1 && (*a1 & 1) != 0 )
    return (*a1 & 2) != 0;
  if ( KeGetCurrentThread()->PreviousMode )
    v2 = (unsigned __int8)CmpIsVirtEnabled() == 0;
  if ( a1 )
  {
    *a1 |= 1u;
    v4 = *a1;
    if ( v2 )
      v5 = v4 | 2;
    else
      v5 = v4 | 4;
    *a1 = v5;
  }
  return v2;
}
