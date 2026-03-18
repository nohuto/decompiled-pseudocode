/*
 * XREFs of ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C00A6D8C
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0007750 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     Win32CreateSection @ 0x1C0006A80 (Win32CreateSection.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 */

__int64 __fastcall ReserveUserSessionViewsWorker(void **a1, void **a2)
{
  int v4; // ebp
  int v5; // ebp
  int v6; // ebp
  ULONG_PTR v7; // rbp
  NTSTATUS Section; // eax
  unsigned int v9; // ebx
  PVOID v10; // rcx
  int v11; // eax
  ULONG v13; // eax
  ULONG v14; // eax
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+20h] BYREF

  v4 = 10 * GetDesktopHeapSize(3LL);
  v5 = GetDesktopHeapSize(2LL) + v4;
  v6 = GetDesktopHeapSize(1LL) + v5;
  v7 = (unsigned int)GetDesktopHeapSize(0LL) + v6;
  Section = Win32CreateSection(a1, 983071LL);
  v9 = Section;
  if ( Section < 0 )
  {
    v13 = RtlNtStatusToDosError(Section);
    UserSetLastError(v13);
  }
  else
  {
    *a2 = 0LL;
    v10 = *a1;
    ViewSize = v7;
    v11 = MmMapViewInSessionSpace(v10, a2, &ViewSize);
    v9 = v11;
    if ( v11 < 0 )
    {
      v14 = RtlNtStatusToDosError(v11);
      UserSetLastError(v14);
      ObfDereferenceObject(*a1);
    }
  }
  return v9;
}
