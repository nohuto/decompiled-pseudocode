/*
 * XREFs of HMAssignmentLock @ 0x1C0049070
 * Callers:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     AllocQueue @ 0x1C0049F90 (AllocQueue.c)
 *     zzzDestroyQueue @ 0x1C004A190 (zzzDestroyQueue.c)
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 *     CleanupResources @ 0x1C0078618 (CleanupResources.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0078DC0 (xxxChangeForegroundKeyboardTable.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0079674 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0079840 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C007A180 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C007A3A8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     rimDispatchCompleteFrame @ 0x1C010CB20 (rimDispatchCompleteFrame.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C011842C (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C011C7A4 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C012CE7C (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C012CEF0 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0049030 (HMUnlockObjectInternal.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

_DWORD *__fastcall HMAssignmentLock(__int64 a1)
{
  _DWORD *v1; // rdi
  _DWORD *v2; // rbx

  v1 = *(_DWORD **)(a1 + 8);
  v2 = **(_DWORD ***)a1;
  **(_QWORD **)a1 = v1;
  if ( !v2 || v2 != v1 )
  {
    if ( v1 )
    {
      if ( (*((_BYTE *)qword_1C0189E38 + dword_1C0189E40 * (unsigned int)(unsigned __int16)*v1 + 25) & 1) != 0 )
        UserSetLastError(87LL);
      ++v1[2];
    }
    if ( v2 )
    {
      if ( v2[2]-- == 1 )
        return HMUnlockObjectInternal(v2);
    }
  }
  return v2;
}
