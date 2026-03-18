/*
 * XREFs of CmpIsSystemEntity @ 0x1404D4280
 * Callers:
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x1404CE698 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpVEExecuteCreateLogic @ 0x1404D3F0C (CmpVEExecuteCreateLogic.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1404D4178 (CmpVEPerformOpenAccessCheck.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     NtSetInformationKey @ 0x140521290 (NtSetInformationKey.c)
 *     CmpVEExecuteOpenLogic @ 0x140538520 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     NtRenameKey @ 0x14065F2B4 (NtRenameKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x140666A94 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     CmpIsVirtEnabled @ 0x1404D430C (CmpIsVirtEnabled.c)
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
