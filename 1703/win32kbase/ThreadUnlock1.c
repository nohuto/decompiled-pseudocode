/*
 * XREFs of ThreadUnlock1 @ 0x1C0026B00
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0026E90 (xxxEnumDisplayMonitors.c)
 *     DestroyThreadsObjects @ 0x1C0040A10 (DestroyThreadsObjects.c)
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 *     xxxActivateKeyboardLayout @ 0x1C0078D20 (xxxActivateKeyboardLayout.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0079674 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0079840 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C007A180 (xxxInternalActivateKeyboardLayout.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0083A88 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C01251AC (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     HMDestroyUnlockedObject @ 0x1C0041FC0 (HMDestroyUnlockedObject.c)
 */

_DWORD *ThreadUnlock1()
{
  _QWORD *v0; // rcx
  _DWORD *result; // rax
  char *v3; // rcx
  char v4; // dl

  v0 = (_QWORD *)*((_QWORD *)gptiCurrent + 46);
  *((_QWORD *)gptiCurrent + 46) = *v0;
  result = (_DWORD *)v0[1];
  if ( result )
  {
    if ( result[2]-- == 1 )
    {
      v3 = (char *)qword_1C0189E38 + dword_1C0189E40 * (unsigned int)(unsigned __int16)*result;
      v4 = v3[25];
      if ( (v4 & 1) != 0 && (v4 & 2) == 0 )
      {
        HMDestroyUnlockedObject(v3);
        return 0LL;
      }
    }
  }
  return result;
}
