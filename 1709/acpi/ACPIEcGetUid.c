/*
 * XREFs of ACPIEcGetUid @ 0x1C00A1164
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C004BF30 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C0023374 (AMLIFreeDataBuffs.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIEcGetUid(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rsi
  int v4; // ebx
  _WORD v5[28]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  result = (__int64)AMLIGetNamedChild(*(__int64 **)(a1 + 56), 1145656671);
  v3 = (__int64 *)result;
  if ( result )
  {
    memset(v5, 0, 0x28uLL);
    v5[1] = 0;
    v4 = AMLIEvalNameSpaceObject(v3, v5, 0, 0LL);
    result = AMLIDereferenceHandleEx((__int64)v3);
    if ( v4 >= 0 )
    {
      if ( v5[1] == 1 )
        *(_DWORD *)(a1 + 16) = LOBYTE(v5[8]);
      return AMLIFreeDataBuffs((__int64)v5);
    }
  }
  return result;
}
