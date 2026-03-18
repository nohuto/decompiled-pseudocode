/*
 * XREFs of Interrupter_FilterRemoveResourceRequirements @ 0x1C005C3BC
 * Callers:
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C0059F80 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 * Callees:
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C001EB08 (Interrupter_SetSecondaryInterrupterCount.c)
 *     Interrupter_DetermineSecondaryInterrupterCount @ 0x1C005BE40 (Interrupter_DetermineSecondaryInterrupterCount.c)
 *     Interrupter_FilterAllMSIResources @ 0x1C005BF9C (Interrupter_FilterAllMSIResources.c)
 *     Interrupter_FilterMessageDescriptors @ 0x1C005C1F0 (Interrupter_FilterMessageDescriptors.c)
 *     Interrupter_IoResList_GetMessageCountAndType @ 0x1C005C450 (Interrupter_IoResList_GetMessageCountAndType.c)
 */

__int64 __fastcall Interrupter_FilterRemoveResourceRequirements(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  char v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) & 0x200LL) != 0 )
  {
    Interrupter_SetSecondaryInterrupterCount(a1, 0);
    return (unsigned int)Interrupter_FilterAllMSIResources(a1, a2);
  }
  else
  {
    Interrupter_IoResList_GetMessageCountAndType(a2, &v8, &v7, &v6);
    v4 = 0;
    if ( v6 )
      Interrupter_DetermineSecondaryInterrupterCount(a1, v7);
    else
      Interrupter_SetSecondaryInterrupterCount(a1, 0);
    Interrupter_FilterMessageDescriptors(a1, a2, v8, *(_DWORD *)(a1 + 20) + 1);
  }
  return v4;
}
