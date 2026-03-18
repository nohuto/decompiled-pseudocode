/*
 * XREFs of DestroyKL @ 0x1C00786CC
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0067500 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?DestroyKLIfSupported@@YAXPEAUtagKL@@@Z @ 0x1C00786C0 (-DestroyKLIfSupported@@YAXPEAUtagKL@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     HMAssignmentUnlock @ 0x1C0049000 (HMAssignmentUnlock.c)
 *     DestroyKF @ 0x1C0078758 (DestroyKF.c)
 */

__int64 __fastcall DestroyKL(_QWORD *BaseAddress)
{
  void *v2; // rax
  __int64 v3; // rcx
  __int64 i; // rdi
  __int64 *v6; // rcx
  void *v7; // rax

  *(_QWORD *)(BaseAddress[3] + 16LL) = BaseAddress[2];
  *(_QWORD *)(BaseAddress[2] + 24LL) = BaseAddress[3];
  if ( HMAssignmentUnlock(BaseAddress + 6) )
  {
    v2 = (void *)HMAssignmentUnlock(BaseAddress + 7);
    if ( v2 )
      DestroyKF(v2);
  }
  if ( BaseAddress[12] )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)BaseAddress + 22); i = (unsigned int)(i + 1) )
    {
      v6 = (__int64 *)(BaseAddress[12] + 8 * i);
      if ( !*v6 )
        break;
      v7 = (void *)HMAssignmentUnlock(v6);
      if ( v7 )
        DestroyKF(v7);
    }
    Win32FreePool(BaseAddress[12]);
  }
  v3 = BaseAddress[10];
  if ( v3 )
    Win32FreePool(v3);
  if ( BaseAddress == (_QWORD *)gpKL )
    gpKL = 0LL;
  return HMFreeObject(BaseAddress);
}
