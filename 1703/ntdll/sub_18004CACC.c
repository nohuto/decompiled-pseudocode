/*
 * XREFs of sub_18004CACC @ 0x18004CACC
 * Callers:
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_18004CBB4 @ 0x18004CBB4 (sub_18004CBB4.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_18004CACC(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax
  char v7; // cl
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  RtlAcquireSRWLockExclusive(&qword_18015C1E0);
  if ( !*(_QWORD *)a1 )
  {
    v3 = sub_18004CBB4(
           *(_QWORD *)(a1 + 32),
           *(_DWORD *)(a1 + 24),
           (unsigned int)&v8,
           (unsigned int)&v9,
           a1 + 120,
           a1 + 40,
           (__int64)&v10);
    v2 = v3;
    if ( v3 < 0 )
    {
      v7 = dword_180155A10;
      if ( (dword_180155A10 & 3) != 0 )
      {
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1370,
          (unsigned int)"LdrpComputeLazyDllPath",
          0,
          "Lazy DLL search path computation failed with status: 0x%08lx.\n",
          v3);
        v7 = dword_180155A10;
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
        if ( (dword_180155A10 & 5) != 0 )
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrutil.c",
            1388,
            (unsigned int)"LdrpComputeLazyDllPath",
            2,
            "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
            v5,
            v4);
      }
      else if ( (dword_180155A10 & 5) != 0 )
      {
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1381,
          (unsigned int)"LdrpComputeLazyDllPath",
          2,
          "DLL search path computed: %ws\n",
          v4);
      }
    }
  }
  RtlReleaseSRWLockExclusive(&qword_18015C1E0);
  return v2;
}
