/*
 * XREFs of CreateDesktopHeap @ 0x1C010B9D4
 * Callers:
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C010B644 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     Win32CreateSection @ 0x1C010BA74 (Win32CreateSection.c)
 */

PVOID __fastcall CreateDesktopHeap(__int64 *a1, unsigned int a2, int a3)
{
  ULONG_PTR v3; // rsi
  NTSTATUS v5; // eax
  int v6; // eax
  __int64 Heap; // rax
  ULONG v9; // eax
  ULONG v10; // eax
  __int64 v11; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-8h] BYREF
  PVOID Section; // [rsp+90h] [rbp+30h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF

  v3 = a2;
  v11 = a2;
  v5 = Win32CreateSection((unsigned int)&Section, a2, a3, (unsigned int)&v11);
  if ( v5 < 0 )
  {
    v9 = RtlNtStatusToDosError(v5);
    UserSetLastError(v9);
  }
  else
  {
    MappedBase = 0LL;
    ViewSize = v3;
    v6 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v6 < 0 )
    {
      v10 = RtlNtStatusToDosError(v6);
      UserSetLastError(v10);
    }
    else
    {
      Heap = UserCreateHeap(Section, 0LL, MappedBase, (unsigned int)v3, UserCommitDesktopMemory);
      if ( Heap )
      {
        *a1 = Heap;
        return Section;
      }
      UserSetLastError(8LL);
      MmUnmapViewInSessionSpace(MappedBase);
    }
    ObfDereferenceObject(Section);
    *a1 = 0LL;
  }
  return 0LL;
}
