/*
 * XREFs of XilRegister_WriteUlong64 @ 0x1C0019828
 * Callers:
 *     XilCoreCommand_AbortCommandRing @ 0x1C003E49C (XilCoreCommand_AbortCommandRing.c)
 *     XilCoreCommand_FreeResources @ 0x1C003E65C (XilCoreCommand_FreeResources.c)
 *     XilCoreCommand_Initialize @ 0x1C003E6A8 (XilCoreCommand_Initialize.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C003F788 (XilCoreDeviceSlot_FreeResources.c)
 *     XilCoreDeviceSlot_Initialize @ 0x1C003F860 (XilCoreDeviceSlot_Initialize.c)
 * Callees:
 *     Register_WriteSecureMmio @ 0x1C005B15C (Register_WriteSecureMmio.c)
 */

__int64 __fastcall XilRegister_WriteUlong64(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  __int128 v5; // xmm0
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+20h] [rbp-18h]
  unsigned __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v3 + 441) )
    return Register_WriteSecureMmio(a1, a2, 3LL, &v8);
  v5 = *(_OWORD *)(v3 + 272);
  result = *(_QWORD *)(v3 + 272);
  v7 = v5;
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
