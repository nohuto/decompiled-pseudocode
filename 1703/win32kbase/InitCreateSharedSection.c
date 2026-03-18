/*
 * XREFs of InitCreateSharedSection @ 0x1C01D74A4
 * Callers:
 *     Win32UserInitialize @ 0x1C01D6270 (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     UserCreateHeap @ 0x1C0076180 (UserCreateHeap.c)
 *     Win32CreateSection @ 0x1C0076290 (Win32CreateSection.c)
 */

__int64 __fastcall InitCreateSharedSection(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  NTSTATUS v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+64h] [rbp+Ch]
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0;
  v9 = 2129920;
  result = Win32CreateSection(&ghSectionShared, 983071LL, a3, (__int64)&v9, v8, 0x4000000);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    gpvSharedBase = 0LL;
    v4 = MmMapViewInSessionSpace(ghSectionShared, &gpvSharedBase, &ViewSize);
    if ( v4 < 0 )
    {
      ObfDereferenceObject(ghSectionShared);
    }
    else
    {
      gpvSharedAlloc = UserCreateHeap(
                         (__int64)ghSectionShared,
                         0x200000LL,
                         (char *)gpvSharedBase + 0x200000,
                         0x8000LL,
                         (NTSTATUS (__stdcall *)(PVOID, PVOID *, PSIZE_T))UserCommitSharedMemory);
      if ( gpvSharedAlloc )
        return 0LL;
      UserSetLastError(8LL, v5, v6, v7);
      MmUnmapViewInSessionSpace(gpvSharedBase);
      ObfDereferenceObject(ghSectionShared);
      gpvSharedAlloc = 0LL;
      v4 = -1073741801;
      gpvSharedBase = 0LL;
    }
    ghSectionShared = 0LL;
    return (unsigned int)v4;
  }
  return result;
}
