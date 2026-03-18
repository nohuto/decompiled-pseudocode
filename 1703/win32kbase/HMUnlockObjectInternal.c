/*
 * XREFs of HMUnlockObjectInternal @ 0x1C0049030
 * Callers:
 *     HMFreeObject @ 0x1C0040150 (HMFreeObject.c)
 *     HMAssignmentUnlock @ 0x1C0049000 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C0049070 (HMAssignmentLock.c)
 *     HMUnlockObject @ 0x1C004A168 (HMUnlockObject.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C004E7F0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     HMRemoveHandleForObject @ 0x1C008B570 (HMRemoveHandleForObject.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00D8BA0 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     HMDestroyUnlockedObject @ 0x1C0041FC0 (HMDestroyUnlockedObject.c)
 */

_DWORD *__fastcall HMUnlockObjectInternal(_DWORD *a1)
{
  char *v1; // rax
  char v2; // dl

  v1 = (char *)qword_1C0189E38 + dword_1C0189E40 * (unsigned int)(unsigned __int16)*a1;
  v2 = v1[25];
  if ( (v2 & 1) == 0 || (v2 & 2) != 0 )
    return a1;
  HMDestroyUnlockedObject(v1);
  return 0LL;
}
