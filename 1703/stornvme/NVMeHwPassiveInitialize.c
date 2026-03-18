/*
 * XREFs of NVMeHwPassiveInitialize @ 0x1C0001B90
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C00010DC (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerInitPart2 @ 0x1C0004640 (NVMeControllerInitPart2.c)
 *     NVMePowerInitialize @ 0x1C00054B0 (NVMePowerInitialize.c)
 */

char __fastcall NVMeHwPassiveInitialize(__int64 a1)
{
  int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !(unsigned int)StorPortExtendedFunction(55LL, a1, 0LL, &unk_1C0013100, &v3) && v3 == 1 )
    *(_DWORD *)(a1 + 20) |= 0x80u;
  if ( (unsigned __int8)NVMeControllerInitPart2(a1) )
  {
    NVMePowerInitialize(a1);
    return 1;
  }
  else
  {
    NVMeControllerStartFailureEventLog(a1);
    return 0;
  }
}
