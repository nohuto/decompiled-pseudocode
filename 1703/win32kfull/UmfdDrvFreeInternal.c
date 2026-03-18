/*
 * XREFs of UmfdDrvFreeInternal @ 0x1C02B96C0
 * Callers:
 *     UmfdQueryFontTree @ 0x1C00D49D0 (UmfdQueryFontTree.c)
 *     UmfdQueryFont @ 0x1C00D4D30 (UmfdQueryFont.c)
 *     UmfdDrvFree @ 0x1C010A3D0 (UmfdDrvFree.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0090638 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdDrvFreeInternal(__int64 a1, __int64 a2, unsigned int a3)
{
  void **v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v5 = 9;
  CurrentThread = KeGetCurrentThread();
  v7 = a1;
  v8 = a2;
  v4 = &FreeRequest::`vftable';
  return UmfdClientSendAndWaitForCompletion(a3, (__int64)&v4);
}
