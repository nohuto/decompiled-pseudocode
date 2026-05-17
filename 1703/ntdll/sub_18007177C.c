/*
 * XREFs of sub_18007177C @ 0x18007177C
 * Callers:
 *     sub_180071630 @ 0x180071630 (sub_180071630.c)
 * Callees:
 *     sub_1800662B0 @ 0x1800662B0 (sub_1800662B0.c)
 *     sub_1800774C8 @ 0x1800774C8 (sub_1800774C8.c)
 */

bool __fastcall sub_18007177C(__int64 a1, unsigned __int64 *a2)
{
  _BOOL8 v2; // r9
  unsigned __int64 v3; // rax
  bool v4; // di
  volatile signed __int64 *v5; // r11
  __int64 v6; // r10
  bool v7; // bl
  signed __int64 v8; // rdx
  int v9; // ecx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *a2;
  v4 = (*(_DWORD *)(a1 + 36) & 1) == 0;
  v11 = 0;
  v5 = (volatile signed __int64 *)a2;
  v6 = a1;
  while ( (v3 & 1) != 0 && (!v4 || (v3 & 2) != 0 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    *(_QWORD *)(v6 + 16) = v2;
    v7 = v2;
    if ( (v3 & 2) != 0 )
    {
      *(_DWORD *)(v6 + 32) = -1;
      *(_QWORD *)(v6 + 8) = v2;
      v8 = v6 | v3 & 8 | 7;
      *(_QWORD *)v6 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
      v7 = (v3 & 4) == 0;
    }
    else
    {
      *(_QWORD *)(v6 + 8) = v6;
      *(_DWORD *)(v6 + 32) = v3 >> 4;
      if ( (int)(v3 >> 4) > 1 )
        v8 = v6 | 0xB;
      else
        v8 = v6 | 3;
      v9 = v3 >> 4;
      if ( !v9 )
        v9 = -2;
      *(_DWORD *)(v6 + 32) = v9;
    }
    if ( v3 == _InterlockedCompareExchange64(v5, v8, v3) )
    {
      if ( v7 )
        sub_1800774C8(v5);
      LOBYTE(v2) = 1;
      return v2;
    }
    sub_1800662B0(&v11);
    _m_prefetchw((const void *)v5);
    v3 = *v5;
  }
  return v2;
}
