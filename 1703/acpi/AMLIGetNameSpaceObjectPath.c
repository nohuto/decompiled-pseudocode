/*
 * XREFs of AMLIGetNameSpaceObjectPath @ 0x1C0014558
 * Callers:
 *     ACPIAmliBuildObjectPathname @ 0x1C001447C (ACPIAmliBuildObjectPathname.c)
 *     AcpiDiagTraceDeviceReset @ 0x1C0041B44 (AcpiDiagTraceDeviceReset.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C00164F0 (GetObjectPathNoLock.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall AMLIGetNameSpaceObjectPath(__int64 *a1, void *a2, _DWORD *a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdi
  KIRQL v7; // bl
  _BYTE *ObjectPathNoLock; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx

  v5 = -1073741823;
  if ( a1 )
  {
    v6 = *a1;
    v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    ObjectPathNoLock = (_BYTE *)GetObjectPathNoLock(v6);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
    if ( ObjectPathNoLock )
    {
      v9 = -1LL;
      if ( a2 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( ObjectPathNoLock[v10] );
        if ( (unsigned int)*a3 >= (unsigned __int64)(v10 + 1) )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( ObjectPathNoLock[v11] );
          memmove(a2, ObjectPathNoLock, v11 + 1);
          do
            ++v9;
          while ( ObjectPathNoLock[v9] );
          v12 = v9 + 1;
          v5 = 0;
          goto LABEL_12;
        }
        do
          ++v9;
        while ( ObjectPathNoLock[v9] );
      }
      else
      {
        do
          ++v9;
        while ( ObjectPathNoLock[v9] );
      }
      v5 = -1073741789;
      v12 = v9 + 1;
LABEL_12:
      *a3 = v12;
      ExFreePoolWithTag(ObjectPathNoLock, 0);
    }
  }
  return v5;
}
