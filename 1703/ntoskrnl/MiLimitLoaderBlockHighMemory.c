/*
 * XREFs of MiLimitLoaderBlockHighMemory @ 0x140813114
 * Callers:
 *     MiMemoryLicense @ 0x14081302C (MiMemoryLicense.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall MiLimitLoaderBlockHighMemory(__int64 a1, ULONG_PTR a2)
{
  __int64 *v2; // r11
  __int64 *i; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  ULONG_PTR v7; // r9
  int v8; // eax
  __int64 *v9; // rdx
  __int64 **v10; // rax

  v2 = (__int64 *)(a1 + 32);
  for ( i = *(__int64 **)(a1 + 32); i != v2; i = (__int64 *)*i )
  {
    v5 = *((int *)i + 4);
    if ( (unsigned int)v5 <= 0x20 )
    {
      v6 = 0x1C0C00048LL;
      if ( _bittest64(&v6, v5) )
        continue;
    }
    v7 = i[3];
    if ( v7 + i[4] > a2 )
    {
      if ( (unsigned int)v5 > 0x18 || (v8 = 16777524, !_bittest(&v8, v5)) )
        KeBugCheckEx(0x1Au, 0x3030308uLL, a2, v7, i[4]);
      if ( v7 < a2 )
      {
        i[4] = a2 - v7;
      }
      else
      {
        v9 = (__int64 *)*i;
        v10 = (__int64 **)i[1];
        if ( *(__int64 **)(*i + 8) != i || *v10 != i )
          __fastfail(3u);
        *v10 = v9;
        v9[1] = (__int64)v10;
      }
    }
  }
}
