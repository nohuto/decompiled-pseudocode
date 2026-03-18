/*
 * XREFs of ACPIEcGetGpeVector @ 0x1C00A10B4
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C004BF30 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C0023374 (AMLIFreeDataBuffs.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIEcGetGpeVector(__int64 a1)
{
  __int64 *v2; // rdi
  int v4; // esi
  _WORD v5[28]; // [rsp+20h] [rbp-38h] BYREF

  v2 = AMLIGetNamedChild(*(__int64 **)(a1 + 56), 1162889055);
  if ( !v2 )
    return 3221225524LL;
  memset(v5, 0, 0x28uLL);
  v5[1] = 0;
  v4 = AMLIEvalNameSpaceObject(v2, v5, 0, 0LL);
  AMLIDereferenceHandleEx((__int64)v2);
  if ( v4 >= 0 )
  {
    if ( v5[1] != 1 )
    {
      AMLIFreeDataBuffs((__int64)v5);
      return 3222536207LL;
    }
    *(_DWORD *)(a1 + 48) = LOBYTE(v5[8]);
    AMLIFreeDataBuffs((__int64)v5);
  }
  return (unsigned int)v4;
}
