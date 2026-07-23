/*
 * XREFs of sub_180055158 @ 0x180055158
 * Callers:
 *     sub_18003F37C @ 0x18003F37C (sub_18003F37C.c)
 * Callees:
 *     sub_180055274 @ 0x180055274 (sub_180055274.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 */

__int64 __fastcall sub_180055158(int a1, void *a2, unsigned int a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  int v10; // r9d
  unsigned int v11; // ebx
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // rax
  _QWORD v16[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  a5 = 0LL;
  v16[0] = 0LL;
  v17 = 0LL;
  v7 = (unsigned int)NtCurrentPeb();
  v8 = a3;
  if ( a2 == &unk_180110408 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() passed the empty activation context\n", "RtlGetAssemblyStorageRoot");
    return (unsigned int)-1073741811;
  }
  if ( a4 )
    *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a3 || !a4 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters:\n"
      "SXS:    Flags              : 0x%lx\n"
      "SXS:    AssemblyRosterIndex: 0x%lx\n"
      "SXS:    AssemblyStorageRoot: %p\n"
      "SXS:    Callback           : %p\n",
      "RtlGetAssemblyStorageRoot",
      a1,
      a3,
      a4,
      sub_180055C50);
    return (unsigned int)-1073741811;
  }
  v9 = sub_180055274(a1 & 3, v7, (_DWORD)a2, (unsigned int)&a5, (__int64)&v17, (__int64)v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: RtlGetAssemblyStorageRoot() unable to get activation context data, storage map and assembly roster header.  S"
      "tatus = 0x%08lx\n",
      (unsigned int)v9);
    return v11;
  }
  if ( !a5 )
    return 0;
  if ( !v16[0] || !v17 )
    return (unsigned int)-1073741595;
  v12 = *(_DWORD *)(v16[0] + 8LL);
  if ( (unsigned int)v8 >= v12 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters AssemblyRosterIndex 0x%lx >= AssemblyRosterHeader->EntryCount: 0x%lx\n",
      "RtlGetAssemblyStorageRoot",
      v8,
      v12);
    return (unsigned int)-1073741811;
  }
  v13 = sub_180055830(v17, a5, v8, v10, a6);
  v11 = v13;
  if ( v13 < 0 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: RtlGetAssemblyStorageRoot() unable to resolve storage map entry.  Status = 0x%08lx\n",
      (unsigned int)v13);
    return v11;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8 * v8);
  if ( !v14 )
    return (unsigned int)-1073741595;
  *a4 = v14 + 8;
  return 0;
}
