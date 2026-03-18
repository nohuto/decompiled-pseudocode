/*
 * XREFs of DestroyKF @ 0x1C0078758
 * Callers:
 *     DestroyKL @ 0x1C00786CC (DestroyKL.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0079840 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z @ 0x1C00DE640 (-DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     HMFreeObject @ 0x1C0040150 (HMFreeObject.c)
 *     RemoveKeyboardLayoutFile @ 0x1C0078790 (RemoveKeyboardLayoutFile.c)
 *     HMMarkObjectDestroy @ 0x1C007A370 (HMMarkObjectDestroy.c)
 */

__int64 __fastcall DestroyKF(_QWORD *BaseAddress)
{
  __int64 result; // rax

  result = HMMarkObjectDestroy(BaseAddress);
  if ( (_DWORD)result )
  {
    RemoveKeyboardLayoutFile(BaseAddress);
    Win32FreePool(BaseAddress[3]);
    return HMFreeObject(BaseAddress);
  }
  return result;
}
