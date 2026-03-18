/*
 * XREFs of XilRegister_WriteUlong64 @ 0x1C0006C4C
 * Callers:
 *     XilCoreDeviceSlot_Initialize @ 0x1C0006BC4 (XilCoreDeviceSlot_Initialize.c)
 *     XilCoreCommand_AbortCommandRing @ 0x1C003FDEC (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_FreeResources @ 0x1C003FFD8 (XilCoreCommand_FreeResources.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C004108C (XilCoreDeviceSlot_FreeResources.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x1C005DDE8 (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilRegister_WriteUlong64(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int64 result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+20h] [rbp-18h]
  unsigned __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v3 + 441) )
    return Register_WriteSecureMmio(a1, a2, 3LL, &v8);
  v4 = *(_OWORD *)(v3 + 272);
  result = *(_QWORD *)(v3 + 272);
  v7 = v4;
  if ( (result & 1) != 0 )
  {
    *a2 = a3;
    _InterlockedOr(v6, 0);
    result = HIDWORD(v8);
    a2[1] = HIDWORD(v8);
  }
  else
  {
    *(_QWORD *)a2 = a3;
  }
  _InterlockedOr(v6, 0);
  return result;
}
