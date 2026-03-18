/*
 * XREFs of CreateDesktopHeap @ 0x1C01151C0
 * Callers:
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C0114E30 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     Win32CreateSection @ 0x1C0115260 (Win32CreateSection.c)
 */

PVOID __fastcall CreateDesktopHeap(__int64 *a1, unsigned int a2, int a3)
{
  ULONG_PTR v3; // rsi
  NTSTATUS v5; // eax
  int v6; // eax
  __int64 Heap; // rax
  __int64 v8; // rdx
  ULONG v10; // eax
  __int64 v11; // rdx
  ULONG v12; // eax
  __int64 v13; // rdx
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-8h] BYREF
  PVOID Section; // [rsp+90h] [rbp+30h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF

  v3 = a2;
  v14 = a2;
  v5 = Win32CreateSection((unsigned int)&Section, a2, a3, (unsigned int)&v14);
  if ( v5 < 0 )
  {
    v10 = RtlNtStatusToDosError(v5);
    UserSetLastError(v10, v11);
  }
  else
  {
    MappedBase = 0LL;
    ViewSize = v3;
    v6 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v6 < 0 )
    {
      v12 = RtlNtStatusToDosError(v6);
      UserSetLastError(v12, v13);
    }
    else
    {
      Heap = UserCreateHeap(Section, 0LL, MappedBase, (unsigned int)v3, UserCommitDesktopMemory);
      if ( Heap )
      {
        *a1 = Heap;
        return Section;
      }
      UserSetLastError(8LL, v8);
      MmUnmapViewInSessionSpace(MappedBase);
    }
    ObfDereferenceObject(Section);
    *a1 = 0LL;
  }
  return 0LL;
}
