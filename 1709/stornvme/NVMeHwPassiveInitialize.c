/*
 * XREFs of NVMeHwPassiveInitialize @ 0x1C0001BD0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0001008 (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerInitPart2 @ 0x1C00048E4 (NVMeControllerInitPart2.c)
 *     NVMePowerInitialize @ 0x1C00058CC (NVMePowerInitialize.c)
 */

char __fastcall NVMeHwPassiveInitialize(__int64 a1)
{
  __int64 v2; // r9
  unsigned __int64 v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  if ( !(unsigned int)StorPortExtendedFunction(55LL, a1, 0LL, &unk_1C0014100, &v6) && v6 == 1 )
    *(_DWORD *)(a1 + 20) |= 0x80u;
  if ( (unsigned __int8)NVMeControllerInitPart2(a1) )
  {
    v4 = *(unsigned __int16 *)(a1 + 230) * (unsigned __int64)*(unsigned __int16 *)(a1 + 232);
    if ( v4 > 0x400 )
    {
      if ( v4 > 0xFFFFFFFF )
        LODWORD(v4) = -1;
      StorPortExtendedFunction(80LL, a1, (unsigned int)v4, v2, v5);
    }
    NVMePowerInitialize(a1);
    return 1;
  }
  else
  {
    NVMeControllerStartFailureEventLog(a1);
    return 0;
  }
}
