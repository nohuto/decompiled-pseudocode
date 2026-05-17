/*
 * XREFs of sub_18004DBBC @ 0x18004DBBC
 * Callers:
 *     sub_18003E4CC @ 0x18003E4CC (sub_18003E4CC.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     sub_18004DCD8 @ 0x18004DCD8 (sub_18004DCD8.c)
 *     sub_18004E290 @ 0x18004E290 (sub_18004E290.c)
 */

__int64 __fastcall sub_18004DBBC(int a1, void *a2, unsigned int a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  int v10; // r9d
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  _QWORD v17[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  a5 = 0LL;
  v17[0] = 0LL;
  v18 = 0LL;
  v7 = (unsigned int)NtCurrentPeb();
  v8 = a3;
  if ( a2 == &unk_180110418 )
  {
    DbgPrintEx(51, 0, (int)"SXS: %s() passed the empty activation context\n", "RtlGetAssemblyStorageRoot");
    return (unsigned int)-1073741811;
  }
  if ( a4 )
    *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a3 || !a4 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() bad parameters:\n"
           "SXS:    Flags              : 0x%lx\n"
           "SXS:    AssemblyRosterIndex: 0x%lx\n"
           "SXS:    AssemblyStorageRoot: %p\n"
           "SXS:    Callback           : %p\n",
      "RtlGetAssemblyStorageRoot",
      a1,
      a3,
      a4,
      sub_18004E6B0);
    return (unsigned int)-1073741811;
  }
  v9 = sub_18004DCD8(a1 & 3, v7, (_DWORD)a2, (unsigned int)&a5, (__int64)&v18, (__int64)v17);
  v11 = v9;
  if ( v9 < 0 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: RtlGetAssemblyStorageRoot() unable to get activation context data, storage map and assembly roster heade"
           "r.  Status = 0x%08lx\n",
      (unsigned int)v9);
    return v11;
  }
  if ( !a5 )
    return 0;
  if ( !v17[0] || !v18 )
    return (unsigned int)-1073741595;
  if ( (unsigned int)v8 >= *(_DWORD *)(v17[0] + 8LL) )
  {
    LODWORD(v16) = *(_DWORD *)(v17[0] + 8LL);
    LODWORD(v15) = v8;
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() bad parameters AssemblyRosterIndex 0x%lx >= AssemblyRosterHeader->EntryCount: 0x%lx\n",
      "RtlGetAssemblyStorageRoot",
      v15,
      v16);
    return (unsigned int)-1073741811;
  }
  v12 = sub_18004E290(v18, a5, v8, v10, a6);
  v11 = v12;
  if ( v12 < 0 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: RtlGetAssemblyStorageRoot() unable to resolve storage map entry.  Status = 0x%08lx\n",
      (unsigned int)v12);
    return v11;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(v18 + 8) + 8 * v8);
  if ( !v13 )
    return (unsigned int)-1073741595;
  *a4 = v13 + 8;
  return 0;
}
