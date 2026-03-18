/*
 * XREFs of ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C009CE3C
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0074A90 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Win32CreateSection @ 0x1C0076290 (Win32CreateSection.c)
 */

__int64 __fastcall ReserveUserSessionViewsWorker(void **a1, void **a2)
{
  int v4; // ebp
  int v5; // ebp
  int v6; // ebp
  ULONG_PTR v7; // rbp
  __int64 v8; // r8
  NTSTATUS Section; // eax
  unsigned int v10; // ebx
  PVOID v11; // rcx
  int v12; // eax
  ULONG v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // [rsp+20h] [rbp-48h]
  ULONG_PTR v23; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+20h] BYREF

  v4 = 10 * GetDesktopHeapSize(3LL);
  v5 = GetDesktopHeapSize(2LL) + v4;
  v6 = GetDesktopHeapSize(1LL) + v5;
  v7 = (unsigned int)GetDesktopHeapSize(0LL) + v6;
  v23 = v7;
  Section = Win32CreateSection(a1, 983071LL, v8, (__int64)&v23, v22, 0x4000000);
  v10 = Section;
  if ( Section < 0 )
  {
    v14 = RtlNtStatusToDosError(Section);
    UserSetLastError(v14, v15, v16, v17);
  }
  else
  {
    *a2 = 0LL;
    v11 = *a1;
    ViewSize = v7;
    v12 = MmMapViewInSessionSpace(v11, a2, &ViewSize);
    v10 = v12;
    if ( v12 < 0 )
    {
      v18 = RtlNtStatusToDosError(v12);
      UserSetLastError(v18, v19, v20, v21);
      ObfDereferenceObject(*a1);
    }
  }
  return v10;
}
