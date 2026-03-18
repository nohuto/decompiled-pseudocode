/*
 * XREFs of InitCreateSharedSection @ 0x1C01DD220
 * Callers:
 *     Win32UserInitialize @ 0x1C01DD910 (Win32UserInitialize.c)
 * Callees:
 *     UserCreateHeap @ 0x1C0006970 (UserCreateHeap.c)
 *     Win32CreateSection @ 0x1C0006A80 (Win32CreateSection.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 */

__int64 InitCreateSharedSection()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF

  result = Win32CreateSection(&ghSectionShared, 983071LL);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    gpvSharedBase = 0LL;
    v1 = MmMapViewInSessionSpace(ghSectionShared, &gpvSharedBase, &ViewSize);
    if ( v1 < 0 )
    {
      ObfDereferenceObject(ghSectionShared);
    }
    else
    {
      gpvSharedAlloc = UserCreateHeap(
                         (__int64)ghSectionShared,
                         0x200000,
                         (char *)gpvSharedBase + 0x200000,
                         0x8000u,
                         (NTSTATUS (__stdcall *)(PVOID, PVOID *, PSIZE_T))UserCommitSharedMemory);
      if ( gpvSharedAlloc )
        return 0LL;
      UserSetLastError(8);
      MmUnmapViewInSessionSpace(gpvSharedBase);
      ObfDereferenceObject(ghSectionShared);
      gpvSharedAlloc = 0LL;
      v1 = -1073741801;
      gpvSharedBase = 0LL;
    }
    ghSectionShared = 0LL;
    return (unsigned int)v1;
  }
  return result;
}
