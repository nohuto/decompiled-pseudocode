/*
 * XREFs of MiCreateSparsePfnDatabase @ 0x14082B158
 * Callers:
 *     MiCreatePfnDatabase @ 0x140829C3C (MiCreatePfnDatabase.c)
 * Callees:
 *     MxMapPfnRange @ 0x14082B318 (MxMapPfnRange.c)
 */

__int64 __fastcall MiCreateSparsePfnDatabase(__int64 a1)
{
  __int64 *v1; // r15
  __int64 *v2; // rbx
  unsigned int v3; // esi
  int v4; // edi
  __int64 v5; // r9
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8

  v1 = (__int64 *)(a1 + 32);
  v2 = *(__int64 **)(a1 + 32);
  v3 = 0;
  v4 = 3;
  v5 = -1LL;
  v6 = 0LL;
  if ( v2 == (__int64 *)(a1 + 32) )
    goto LABEL_25;
  v7 = 0x5C0C00048LL;
  do
  {
    v8 = *((int *)v2 + 4);
    if ( (unsigned int)v8 <= 0x22 && _bittest64(&v7, v8) )
    {
      if ( v5 == -1 )
        goto LABEL_20;
LABEL_14:
      if ( v4 != 2 )
      {
        v9 = 1LL;
        if ( v4 != 24 )
          goto LABEL_16;
      }
      goto LABEL_28;
    }
    if ( v5 == -1 )
      goto LABEL_19;
    if ( v6 + v5 != v2[3] )
      goto LABEL_14;
    if ( (v4 == 2 || v4 == 24) && ((_DWORD)v8 == 2 || (_DWORD)v8 == 24) )
    {
LABEL_13:
      v6 += v2[4];
      goto LABEL_20;
    }
    if ( v4 != 2 )
    {
      if ( (_DWORD)v8 != 2 && v4 != 24 && (_DWORD)v8 != 24 )
        goto LABEL_13;
      goto LABEL_14;
    }
LABEL_28:
    v9 = 0LL;
LABEL_16:
    if ( !(unsigned int)MxMapPfnRange(v5, v6, v9) )
      return 0LL;
    v8 = *((int *)v2 + 4);
    v7 = 0x5C0C00048LL;
    if ( (unsigned int)v8 > 0x22 || !_bittest64(&v7, v8) )
    {
LABEL_19:
      v6 = v2[4];
      v4 = v8;
      v5 = v2[3];
      goto LABEL_20;
    }
    v5 = -1LL;
LABEL_20:
    v2 = (__int64 *)*v2;
  }
  while ( v2 != v1 );
  if ( v5 == -1 )
    goto LABEL_25;
  if ( v4 == 2 || (v10 = 1LL, v4 == 24) )
    v10 = 0LL;
  if ( (unsigned int)MxMapPfnRange(v5, v6, v10) )
  {
LABEL_25:
    if ( qword_140388DE0 == qword_1403885E0 + 1 || (unsigned int)MxMapPfnRange(qword_140388DE0, 2048LL, 1LL) )
    {
      LOBYTE(v3) = (unsigned int)MxMapPfnRange(qword_1403885E0 + 1, -1LL, 1LL) != 0;
      return v3;
    }
  }
  return 0LL;
}
