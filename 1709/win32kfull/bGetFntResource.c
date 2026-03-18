/*
 * XREFs of bGetFntResource @ 0x1C0237D34
 * Callers:
 *     bBmfdLoadFont @ 0x1C023550C (bBmfdLoadFont.c)
 *     bVtfdLoadFont @ 0x1C0238704 (bVtfdLoadFont.c)
 * Callees:
 *     bMappedViewRangeCheck @ 0x1C0238004 (bMappedViewRangeCheck.c)
 *     bMappedViewStrlen @ 0x1C0238040 (bMappedViewStrlen.c)
 */

__int64 __fastcall bGetFntResource(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rbp
  unsigned __int16 *v7; // r12
  int v8; // edi
  int v10; // ecx
  int v11; // edx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v19; // r8
  int v20; // r9d
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = 0;
  v5 = *((unsigned int *)a1 + 2);
  v7 = (unsigned __int16 *)(*a1 + *((int *)a1 + 7) + (unsigned int)(12 * a2));
  v8 = a2;
  if ( (unsigned int)bMappedViewRangeCheck(*a1, v5, v7, 12LL) )
  {
    v10 = *((_DWORD *)a1 + 4);
    v11 = *v7 << v10;
    v12 = v3 + v11;
    *(_DWORD *)(a3 + 8) = v11;
    *(_QWORD *)a3 = v12;
    v13 = v7[1] << v10;
    *(_DWORD *)(a3 + 12) = v13;
    if ( (unsigned int)bMappedViewRangeCheck(v3, (unsigned int)v5, v12, v13) )
    {
      v14 = v3 + *((int *)a1 + 8);
      while ( (unsigned int)bMappedViewStrlen(v3, v5, v14 + 115, &v22) )
      {
        v14 = v22 + 1 + v16;
        if ( v8 )
        {
          if ( !(unsigned int)bMappedViewStrlen(v15, v5, v14, &v22) )
            return v4;
          v14 = v22 + 1 + v17;
        }
        if ( !v8-- )
        {
          if ( (unsigned int)bMappedViewStrlen(v3, v5, v14, 0LL) )
          {
            *(_QWORD *)(a3 + 16) = v19;
            return (unsigned int)(v20 + 1);
          }
          return v4;
        }
      }
    }
  }
  return v4;
}
