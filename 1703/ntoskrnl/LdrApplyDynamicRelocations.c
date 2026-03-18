/*
 * XREFs of LdrApplyDynamicRelocations @ 0x140158F74
 * Callers:
 *     MiApplyDynamicRelocations @ 0x140810CD0 (MiApplyDynamicRelocations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrApplyDynamicRelocations(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int *v8; // r8
  unsigned __int64 v9; // rcx
  unsigned int *v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned int *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r10
  unsigned int *v16; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  unsigned int v19; // r10d
  unsigned __int16 *v20; // r11
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // r8

  if ( *a2 != 1 )
    return 3221225659LL;
  v8 = a2 + 2;
  v9 = (unsigned __int64)a2 + (unsigned int)a2[1] + 8;
  if ( v9 >= (unsigned __int64)(a2 + 2) )
  {
    v10 = a2 + 2;
    if ( v8 == (unsigned int *)v9 )
      return 0LL;
    while ( 1 )
    {
      v11 = v10[2];
      v12 = (unsigned __int64)v10 + v11 + 12;
      if ( v10 < v8 || v12 > v9 || v12 < (unsigned __int64)v10 )
        break;
      if ( *(_QWORD *)v10 == a6 )
      {
        v13 = v10 + 3;
        if ( v10 + 3 == (unsigned int *)v12 )
          return 0LL;
        while ( 1 )
        {
          v14 = v13[1];
          if ( (unsigned int)v14 < 0xA )
            break;
          if ( (v14 & 1) != 0 )
            break;
          v15 = (unsigned int)v14;
          v16 = (unsigned int *)((char *)v13 + v14);
          if ( v13 <= v10 || (unsigned __int64)v16 > v12 || v16 < v13 )
            break;
          v17 = a1 + *v13;
          v18 = (unsigned __int64)(v15 - 8) >> 1;
          v19 = 0;
          if ( (_DWORD)v18 )
          {
            v20 = (unsigned __int16 *)(v13 + 2);
            do
            {
              v21 = *v20;
              if ( !*v20 && v19 )
                break;
              if ( v21 >= 0x1000u )
                return 3221225595LL;
              ++v19;
              v22 = v21 | v17;
              ++v20;
              *(_QWORD *)v22 += a7 - a6;
              v17 = v22 & 0xFFFFFFFFFFFFF000uLL;
            }
            while ( v19 < (unsigned int)v18 );
          }
          v13 = v16;
          if ( v16 == (unsigned int *)v12 )
            return 0LL;
        }
        return 3221225595LL;
      }
      v10 = (unsigned int *)((char *)v10 + v11 + 12);
      if ( v12 == v9 )
        return 0LL;
    }
  }
  return 3221225595LL;
}
