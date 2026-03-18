/*
 * XREFs of DestroyKL @ 0x1C0070FC4
 * Callers:
 *     ?DestroyKLIfSupported@@YAXPEAUtagKL@@@Z @ 0x1C0070FB0 (-DestroyKLIfSupported@@YAXPEAUtagKL@@@Z.c)
 *     CleanupKeyboardLayouts @ 0x1C0075AC8 (CleanupKeyboardLayouts.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1C0017630 (HMAssignmentUnlock.c)
 *     HMFreeObject @ 0x1C003E4A0 (HMFreeObject.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     DestroyKF @ 0x1C0071050 (DestroyKF.c)
 */

__int64 __fastcall DestroyKL(_QWORD *BaseAddress)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  void *v4; // rax
  __int64 v5; // rcx
  __int64 i; // rdi
  __int64 *v8; // rcx
  void *v9; // rax

  *(_QWORD *)(BaseAddress[3] + 16LL) = BaseAddress[2];
  *(_QWORD *)(BaseAddress[2] + 24LL) = BaseAddress[3];
  if ( HMAssignmentUnlock(BaseAddress + 6) )
  {
    v4 = (void *)HMAssignmentUnlock(BaseAddress + 7);
    if ( v4 )
      DestroyKF(v4);
  }
  if ( BaseAddress[12] )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)BaseAddress + 22); i = (unsigned int)(i + 1) )
    {
      v8 = (__int64 *)(BaseAddress[12] + 8 * i);
      if ( !*v8 )
        break;
      v9 = (void *)HMAssignmentUnlock(v8);
      if ( v9 )
        DestroyKF(v9);
    }
    Win32FreePool(BaseAddress[12]);
  }
  v5 = BaseAddress[10];
  if ( v5 )
    Win32FreePool(v5);
  if ( BaseAddress == (_QWORD *)gpKL )
    gpKL = 0LL;
  return HMFreeObject(BaseAddress, v2, v3);
}
