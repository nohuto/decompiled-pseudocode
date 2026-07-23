/*
 * XREFs of sub_18002E0EC @ 0x18002E0EC
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002CD64 @ 0x18002CD64 (sub_18002CD64.c)
 *     sub_180030F54 @ 0x180030F54 (sub_180030F54.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 */

__int64 __fastcall sub_18002E0EC(
        __int64 a1,
        __int128 *a2,
        char a3,
        int a4,
        __int64 a5,
        int a6,
        HANDLE *a7,
        _QWORD *a8,
        unsigned __int64 *a9)
{
  __int64 v13; // rcx
  int v14; // ebx
  unsigned __int64 v15; // rdi
  __int64 v17; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR v20[2]; // [rsp+40h] [rbp-38h] BYREF

  Handle = 0LL;
  *a7 = 0LL;
  *a8 = 0LL;
  *a9 = 0LL;
  BaseAddress = 0LL;
  v20[0] = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v17 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v17 = 2147353476LL;
    sub_1800DBCC0(a2, *(unsigned __int8 *)v17);
  }
  v14 = sub_18002CD64(a1, a2, a3, &Handle, &BaseAddress, v20);
  if ( v14 >= 0 )
  {
    v15 = (unsigned __int64)BaseAddress | 1;
    if ( (unsigned __int8)sub_180030F54(a1, (unsigned __int64)BaseAddress | 1, a2, a5, a4, a6) )
    {
      *a7 = Handle;
      *a8 = v20[0];
      *a9 = v15;
    }
    else
    {
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      ZwClose(Handle);
      return (unsigned int)-1073020926;
    }
  }
  return (unsigned int)v14;
}
