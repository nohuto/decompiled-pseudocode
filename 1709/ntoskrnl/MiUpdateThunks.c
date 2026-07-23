/*
 * XREFs of MiUpdateThunks @ 0x140837E10
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AE2D0 (RtlpImageDirectoryEntryToDataEx.c)
 */

int __fastcall MiUpdateThunks(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rax
  _QWORD *v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 *v10; // rcx
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h] BYREF

  v4 = (_QWORD *)(a1 + 16);
  LODWORD(v5) = a4;
  v6 = *(_QWORD **)(a1 + 16);
  v7 = a4 + a2 - 1;
  v8 = a3 - a2;
  v9 = a2;
  if ( v6 != (_QWORD *)(a1 + 16) )
  {
    do
    {
      LOWORD(a3) = 12;
      LOBYTE(a2) = 1;
      LODWORD(v5) = RtlpImageDirectoryEntryToDataEx(v6[6], a2, a3, (__int64)&v13, &v12);
      v10 = (unsigned __int64 *)v12;
      if ( (v5 & 0x80000000) != 0LL )
        v10 = 0LL;
      v12 = (__int64)v10;
      if ( v10 )
      {
        LODWORD(v5) = v13 >> 3;
        v13 = v5;
        a2 = (unsigned int)v5;
        if ( (_DWORD)v5 )
        {
          do
          {
            v5 = *v10;
            if ( *v10 >= v9 && v5 <= v7 )
            {
              v5 += v8;
              *v10 = v5;
            }
            ++v10;
            --a2;
          }
          while ( a2 );
        }
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != v4 );
  }
  return v5;
}
