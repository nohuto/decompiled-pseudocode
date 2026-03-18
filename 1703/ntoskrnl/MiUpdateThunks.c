/*
 * XREFs of MiUpdateThunks @ 0x1408161C0
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14008B920 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall MiUpdateThunks(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // r14
  __int64 result; // rax
  __int64 v7; // rbp
  unsigned __int64 i; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+68h] [rbp+20h] BYREF

  v4 = *(_QWORD **)(a1 + 16);
  v5 = (_QWORD *)(a1 + 16);
  result = a4;
  v7 = a3 - a2;
  for ( i = a4 + a2 - 1; v4 != v5; v4 = (_QWORD *)*v4 )
  {
    if ( RtlpImageDirectoryEntryToDataEx(v4[6], 1, 0xCu, &v13, &v12) < 0 )
    {
      result = 0LL;
      v12 = 0LL;
    }
    else
    {
      result = v12;
    }
    if ( result )
    {
      v13 >>= 3;
      v10 = v13;
      if ( v13 )
      {
        do
        {
          v11 = *(_QWORD *)result;
          if ( *(_QWORD *)result >= a2 && v11 <= i )
            *(_QWORD *)result = v7 + v11;
          result += 8LL;
          --v10;
        }
        while ( v10 );
      }
    }
  }
  return result;
}
