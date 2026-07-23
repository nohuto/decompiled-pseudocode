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
  __int64 v4; // rax
  char v6; // cl
  __int64 v7; // [rsp+60h] [rbp+8h]
  __int64 v8; // [rsp+68h] [rbp+10h]
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  RtlAcquireSRWLockExclusive(&stru_18015C1E0);
  if ( !*(_QWORD *)a1 )
  {
    v3 = sub_18004CBB4(*(PCWSTR *)(a1 + 32), a1 + 120, a1 + 40, (__int64)&v9);
    v2 = v3;
    if ( v3 < 0 )
    {
      v6 = dword_180155A10;
      if ( (dword_180155A10 & 3) != 0 )
      {
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1370,
          (unsigned int)"LdrpComputeLazyDllPath",
          0,
          "Lazy DLL search path computation failed with status: 0x%08lx.\n",
          v3);
        v6 = dword_180155A10;
      }
      if ( (v6 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v8;
      v4 = v9;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v7;
      *(_QWORD *)(a1 + 16) = v4;
      if ( v4 )
      {
        if ( (dword_180155A10 & 5) != 0 )
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrutil.c",
            1388,
            (unsigned int)"LdrpComputeLazyDllPath",
            2,
            "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
            v4,
            v7);
      }
      else if ( (dword_180155A10 & 5) != 0 )
      {
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          1381,
          (unsigned int)"LdrpComputeLazyDllPath",
          2,
          "DLL search path computed: %ws\n",
          v7);
      }
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015C1E0);
  return v2;
}
