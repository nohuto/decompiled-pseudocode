/*
 * XREFs of HMAssignmentLock @ 0x1C0017670
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C00052F0 (xxxCreateThreadInfo.c)
 *     AllocQueue @ 0x1C0016FA0 (AllocQueue.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0071180 (xxxChangeForegroundKeyboardTable.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0071AA8 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0071C80 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00725C0 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0072808 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     CleanupResources @ 0x1C007490C (CleanupResources.c)
 *     zzzDestroyQueue @ 0x1C00DE6A0 (zzzDestroyQueue.c)
 *     rimDispatchCompleteFrame @ 0x1C010BA6C (rimDispatchCompleteFrame.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C01172CC (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011B014 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C011B604 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C012C420 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C012C4A0 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0047A80 (HMUnlockObjectInternal.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 */

__int64 __fastcall HMAssignmentLock(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx

  v1 = a1[1];
  v2 = **a1;
  **a1 = (__int64)v1;
  if ( !v2 || (__int64 *)v2 != v1 )
  {
    if ( v1 )
    {
      if ( (*((_BYTE *)qword_1C018E9B8 + dword_1C018E9C0 * (unsigned int)(unsigned __int16)*(_DWORD *)v1 + 25) & 1) != 0 )
        UserSetLastError(87LL);
      _InterlockedIncrement((volatile signed __int32 *)v1 + 2);
    }
    if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
      return HMUnlockObjectInternal(v2);
  }
  return v2;
}
