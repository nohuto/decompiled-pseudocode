/*
 * XREFs of sub_180043500 @ 0x180043500
 * Callers:
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 * Callees:
 *     sub_1800250A4 @ 0x1800250A4 (sub_1800250A4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 */

__int64 __fastcall sub_180043500(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  char v10; // cl
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D220, a2, a3, a4);
  if ( !*(_QWORD *)a1 )
  {
    v6 = sub_1800250A4(
           *(_QWORD *)(a1 + 32),
           *(_DWORD *)(a1 + 24),
           &v11,
           &v12,
           (_DWORD *)(a1 + 120),
           (_OWORD *)(a1 + 40),
           &v13);
    v5 = v6;
    if ( v6 < 0 )
    {
      v10 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1390,
          (unsigned int)"LdrpComputeLazyDllPath",
          0,
          "Lazy DLL search path computation failed with status: 0x%08lx.\n",
          v6);
        v10 = dword_180156A70;
      }
      if ( (v10 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v7 = v11;
      *(_QWORD *)(a1 + 8) = v12;
      v8 = v13;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 16) = v8;
      if ( v8 )
      {
        if ( (dword_180156A70 & 5) != 0 )
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrutil.c",
            1408,
            (unsigned int)"LdrpComputeLazyDllPath",
            2,
            "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
            v8,
            v7);
      }
      else if ( (dword_180156A70 & 5) != 0 )
      {
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1401,
          (unsigned int)"LdrpComputeLazyDllPath",
          2,
          "DLL search path computed: %ws\n",
          v7);
      }
    }
  }
  RtlReleaseSRWLockExclusive(&qword_18015D220);
  return v5;
}
