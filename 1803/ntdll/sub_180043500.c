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

__int64 __fastcall sub_180043500(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  char v7; // cl
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  RtlAcquireSRWLockExclusive(&stru_18015D220);
  if ( !*(_QWORD *)a1 )
  {
    v3 = sub_1800250A4(
           *(PCWSTR *)(a1 + 32),
           *(_DWORD *)(a1 + 24),
           &v8,
           &v9,
           (_DWORD *)(a1 + 120),
           (_OWORD *)(a1 + 40),
           &v10);
    v2 = v3;
    if ( v3 < 0 )
    {
      v7 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1390,
          (unsigned int)"LdrpComputeLazyDllPath",
          0,
          "Lazy DLL search path computation failed with status: 0x%08lx.\n",
          v3);
        v7 = dword_180156A70;
      }
      if ( (v7 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v4 = v8;
      *(_QWORD *)(a1 + 8) = v9;
      v5 = v10;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 16) = v5;
      if ( v5 )
      {
        if ( (dword_180156A70 & 5) != 0 )
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrutil.c",
            1408,
            (unsigned int)"LdrpComputeLazyDllPath",
            2,
            "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
            v5,
            v4);
      }
      else if ( (dword_180156A70 & 5) != 0 )
      {
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1401,
          (unsigned int)"LdrpComputeLazyDllPath",
          2,
          "DLL search path computed: %ws\n",
          v4);
      }
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015D220);
  return v2;
}
