/*
 * XREFs of NVMeHwInitialize @ 0x1C0001B80
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerInitPart2 @ 0x1C00048E4 (NVMeControllerInitPart2.c)
 */

char __fastcall NVMeHwInitialize(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
    return NVMeControllerInitPart2(a1);
  v2 = 0;
  StorPortNotification(4096LL, a1, NVMeHwPassiveInitialize, &v2);
  return v2;
}
