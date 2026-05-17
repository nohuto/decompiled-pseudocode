/*
 * XREFs of TppValidateCleanupGroupMember @ 0x18000FA1C
 * Callers:
 *     TppWorkpValidateWork @ 0x18000C9A8 (TppWorkpValidateWork.c)
 *     TppWaitpValidateWait @ 0x18000F748 (TppWaitpValidateWait.c)
 *     TppIopValidateIo @ 0x18000F958 (TppIopValidateIo.c)
 *     TppTimerpValidateTimer @ 0x18000F9AC (TppTimerpValidateTimer.c)
 *     TppAlpcpValidateAlpc @ 0x180013AB0 (TppAlpcpValidateAlpc.c)
 *     TppJobpValidateJob @ 0x180014200 (TppJobpValidateJob.c)
 * Callees:
 *     <none>
 */

bool __fastcall TppValidateCleanupGroupMember(__int64 a1, int a2)
{
  int v2; // eax
  bool result; // al
  void *ThreadPoolData; // rcx

  v2 = *(_DWORD *)(a1 + 168);
  if ( (v2 & 0x10000) != 0 )
    return 0;
  if ( (v2 & 0x20000) == 0 )
    return 1;
  result = 0;
  if ( a2 )
  {
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
      return *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) == a1;
  }
  return result;
}
