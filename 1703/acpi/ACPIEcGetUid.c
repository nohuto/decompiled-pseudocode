/*
 * XREFs of ACPIEcGetUid @ 0x1C009E18C
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C004CAF0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIFreeDataBuffs @ 0x1C001DB68 (AMLIFreeDataBuffs.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIEcGetUid(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rsi
  int v4; // ebx
  __int64 v5; // rdx
  _WORD v6[28]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  result = (__int64)AMLIGetNamedChild(*(__int64 **)(a1 + 56), 1145656671);
  v3 = (__int64 *)result;
  if ( result )
  {
    memset(v6, 0, 0x28uLL);
    v6[1] = 0;
    v4 = AMLIEvalNameSpaceObject(v3, v6, 0, 0LL);
    result = AMLIDereferenceHandleEx((volatile signed __int32 *)v3, v5);
    if ( v4 >= 0 )
    {
      if ( v6[1] == 1 )
        *(_DWORD *)(a1 + 16) = LOBYTE(v6[8]);
      return AMLIFreeDataBuffs((__int64)v6);
    }
  }
  return result;
}
