/*
 * XREFs of CompareId @ 0x1C001254C
 * Callers:
 *     IoctlToNVMe @ 0x1C000CC18 (IoctlToNVMe.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C00126E4 (ReadMultiSzRegistryValueAndCompareId.c)
 * Callees:
 *     <none>
 */

char __fastcall CompareId(__int64 a1, unsigned int a2, char *a3, unsigned int a4, unsigned int *a5)
{
  char *v8; // r10
  char v9; // r9
  char v10; // dl
  unsigned int v11; // ecx
  char *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  char *v16; // rcx
  int v17; // ebx
  __int64 v18; // rsi
  char v19; // al
  char v20; // di
  unsigned int v21; // ecx
  char *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // ecx
  char *v25; // r10
  char v26; // r8
  int v27; // eax

  v8 = a3;
  if ( a1 && a3 )
  {
    v9 = 1;
    while ( 1 )
    {
      if ( !*a3 )
      {
        v10 = 0;
        if ( !a3[1] )
          break;
      }
      v11 = 0;
      if ( a4 )
      {
        v12 = a3;
        do
        {
          if ( !*v12 )
            break;
          ++v11;
          ++v12;
        }
        while ( v11 < a4 );
      }
      v13 = a4;
      if ( v11 < a4 )
        v13 = v11;
      if ( a2 >= v13 )
      {
        v15 = 0;
        if ( a4 )
        {
          v16 = a3;
          do
          {
            if ( !*v16 )
              break;
            ++v15;
            ++v16;
          }
          while ( v15 < a4 );
        }
        v14 = a4;
        if ( v15 < a4 )
          v14 = v15;
      }
      else
      {
        v14 = a2;
      }
      if ( !v14 )
        return 0;
      v17 = 0;
      v10 = 1;
      v18 = a1 - (_QWORD)v8;
      while ( 1 )
      {
        v19 = *v8;
        if ( *v8 == 42 )
        {
          ++v8;
          goto LABEL_37;
        }
        v20 = v8[v18];
        if ( !v20 || !v19 || v20 != v19 && v19 != 63 )
          break;
        ++v8;
        if ( ++v17 >= v14 )
          goto LABEL_37;
      }
      v21 = 0;
      if ( a4 )
      {
        v22 = a3;
        do
        {
          if ( !*v22 )
            break;
          ++v21;
          ++v22;
        }
        while ( v21 < a4 );
      }
      v23 = a4;
      if ( v21 < a4 )
        v23 = v21;
      a3 += v23 + 1;
      v8 = a3;
    }
LABEL_37:
    if ( !a5 || v10 != 1 || *v8 != 32 )
      return v10;
    v24 = 0;
    v25 = v8 + 1;
    if ( v25 )
    {
      v26 = *v25;
      if ( !*v25 )
      {
LABEL_48:
        *a5 = v24;
        return v9 != 0;
      }
      do
      {
        if ( (unsigned __int8)(v26 - 48) > 9u )
          break;
        ++v25;
        v27 = v26;
        v26 = *v25;
        v24 = v27 + 2 * (5 * v24 - 24);
        if ( !*v25 )
          goto LABEL_48;
      }
      while ( v24 <= 0x19999999 );
    }
    v9 = 0;
    return v9 != 0;
  }
  return 1;
}
