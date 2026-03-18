/*
 * XREFs of VmpProcessUpdateSlat @ 0x1402796D4
 * Callers:
 *     VmpAccessFaultBatch @ 0x1402786D8 (VmpAccessFaultBatch.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvlMapSparseGpaPages @ 0x140294DC0 (HvlMapSparseGpaPages.c)
 */

__int64 __fastcall VmpProcessUpdateSlat(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  _QWORD *v4; // rbx
  unsigned int v5; // r10d
  unsigned __int64 v6; // rdi
  int v7; // edx
  int v10; // eax
  int v11; // esi
  __int64 v12; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-128h] BYREF
  _QWORD v15[32]; // [rsp+40h] [rbp-118h] BYREF

  v4 = a2;
  v5 = 0;
  v6 = (unsigned __int64)&a2[2 * a3];
  v7 = 0;
  if ( (unsigned __int64)v4 < v6 )
  {
    do
    {
      if ( (*v4 & 0x40000000000000LL) == 0 )
      {
        v10 = (*v4 >> 51) & 2 | 0xD;
        if ( (*v4 & 0x20000000000000LL) == 0 )
          v10 = (*v4 >> 51) & 2 | 1;
        v11 = v10 | 0x800;
        if ( !a4 )
          v11 = v10;
        if ( v7 != v11 || v5 == 16 )
        {
          if ( v5 )
          {
            HvlMapSparseGpaPages(*(_QWORD *)(a1 + 72), v7, v5, (unsigned int)v15, (__int64)v14);
            v5 = 0;
          }
          v7 = v11;
        }
        v12 = 2LL * v5++;
        v15[v12 + 1] = *v4 & 0xFFFFFFFFFFFFFLL;
        v15[v12] = v4[1];
      }
      v4 += 2;
    }
    while ( (unsigned __int64)v4 < v6 );
    if ( v5 )
      HvlMapSparseGpaPages(*(_QWORD *)(a1 + 72), v7, v5, (unsigned int)v15, (__int64)v14);
  }
  return 0LL;
}
