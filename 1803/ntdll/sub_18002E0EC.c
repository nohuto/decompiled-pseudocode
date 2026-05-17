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
        _QWORD *a7,
        _QWORD *a8,
        __int64 *a9)
{
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdi
  __int64 v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h] BYREF
  __int64 v20; // [rsp+40h] [rbp-38h] BYREF

  v19 = 0LL;
  *a7 = 0LL;
  *a8 = 0LL;
  *a9 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v17 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v17 = 2147353476LL;
    sub_1800DBCC0(a2, *(unsigned __int8 *)v17);
  }
  v14 = sub_18002CD64(a1, a2, a3, &v19, &v18, &v20);
  if ( v14 >= 0 )
  {
    v15 = v18 | 1;
    if ( (unsigned __int8)sub_180030F54(a1, v18 | 1, a2, a5, a4, a6) )
    {
      *a7 = v19;
      *a8 = v20;
      *a9 = v15;
    }
    else
    {
      ZwUnmapViewOfSection(-1LL);
      ZwClose(v19);
      return (unsigned int)-1073020926;
    }
  }
  return (unsigned int)v14;
}
