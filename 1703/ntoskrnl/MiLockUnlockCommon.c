/*
 * XREFs of MiLockUnlockCommon @ 0x1404C84A0
 * Callers:
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1400FA8B0 (NtUnlockVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall MiLockUnlockCommon(
        ULONG_PTR BugCheckParameter1,
        void **a2,
        PVOID *a3,
        int a4,
        _QWORD *a5,
        _QWORD *a6,
        PVOID *a7)
{
  char v7; // si
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // rdi
  PVOID v14; // rbx
  __int64 result; // rax
  PVOID Object[5]; // [rsp+48h] [rbp-30h] BYREF

  v7 = a4;
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 0 )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v11 = 0x7FFFFFFF0000LL;
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a2;
    *(_QWORD *)v12 = *(_QWORD *)v12;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v11 = (__int64)a3;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  v13 = *a2;
  Object[2] = v13;
  v14 = *a3;
  Object[3] = *a3;
  if ( (unsigned __int64)v13 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFEFFFFLL - (__int64)v13 < (unsigned __int64)v14 || !v14 )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 1834380621, (__int64)Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( (v7 & 2) == 0 || SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    {
      *a5 = v13;
      *a6 = v14;
      *a7 = Object[0];
      return 0LL;
    }
    else
    {
      ObfDereferenceObjectWithTag(Object[0], 0x6D566D4Du);
      return 3221225569LL;
    }
  }
  return result;
}
