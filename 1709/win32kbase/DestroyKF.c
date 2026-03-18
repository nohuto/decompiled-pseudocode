/*
 * XREFs of DestroyKF @ 0x1C0071050
 * Callers:
 *     DestroyKL @ 0x1C0070FC4 (DestroyKL.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0071C80 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z @ 0x1C00E4BF0 (-DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z.c)
 * Callees:
 *     HMFreeObject @ 0x1C003E4A0 (HMFreeObject.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RemoveKeyboardLayoutFile @ 0x1C0071088 (RemoveKeyboardLayoutFile.c)
 *     HMMarkObjectDestroy @ 0x1C00727D0 (HMMarkObjectDestroy.c)
 */

__int64 __fastcall DestroyKF(_QWORD *BaseAddress)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  result = HMMarkObjectDestroy(BaseAddress);
  if ( (_DWORD)result )
  {
    RemoveKeyboardLayoutFile(BaseAddress);
    Win32FreePool(BaseAddress[3]);
    return HMFreeObject(BaseAddress, v3, v4);
  }
  return result;
}
