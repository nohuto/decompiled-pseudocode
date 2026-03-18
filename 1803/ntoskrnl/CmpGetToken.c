/*
 * XREFs of CmpGetToken @ 0x1408B1B2C
 * Callers:
 *     CmpParseInfBuffer @ 0x1408B1834 (CmpParseInfBuffer.c)
 * Callees:
 *     isspace @ 0x140188ED0 (isspace.c)
 *     strchr @ 0x140189DB0 (strchr.c)
 *     strncpy_s @ 0x14018E880 (strncpy_s.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void __fastcall CmpGetToken(const char **a1, unsigned __int64 a2, __int64 a3)
{
  const char *i; // rdi
  char v7; // al
  const char *v8; // r14
  __int64 v9; // rbx
  char *PoolWithTag; // rax
  char *v11; // r15
  char v12; // al
  const char *v13; // rbx
  const char *v14; // rbx
  int v15; // eax

  *(_QWORD *)(a3 + 8) = 0LL;
  *(_BYTE *)(a3 + 16) = 0;
  while ( 1 )
  {
    for ( i = *a1; (unsigned __int64)i < a2 && *i != 10 && isspace(*(unsigned __int8 *)i); ++i )
      ;
    if ( (unsigned __int64)i >= a2 )
      break;
    if ( *i == 59 || *i == 35 )
    {
      do
      {
        if ( *i == 10 )
          break;
        ++i;
      }
      while ( (unsigned __int64)i < a2 );
    }
    if ( (unsigned __int64)i >= a2 )
      break;
    v7 = *i;
    if ( *i == 26 )
      break;
    switch ( v7 )
    {
      case 10:
        *(_DWORD *)a3 = 1;
        break;
      case 34:
        v14 = ++i;
        while ( (unsigned __int64)i < a2 && !strchr(&StringTerminators[6], *i) )
          ++i;
        if ( (unsigned __int64)i < a2 && *i == 34 )
        {
          *i = 0;
          v15 = 4;
          ++i;
          *(_QWORD *)(a3 + 8) = v14;
        }
        else
        {
          v15 = 7;
        }
        *(_DWORD *)a3 = v15;
        goto LABEL_28;
      case 44:
        *(_DWORD *)a3 = 6;
        break;
      case 61:
        *(_DWORD *)a3 = 5;
        break;
      case 91:
        *(_DWORD *)a3 = 2;
        break;
      case 92:
        v13 = ++i;
        if ( (unsigned __int64)i < a2 )
        {
          do
          {
            if ( *v13 == 10 )
              break;
            if ( !isspace(*(unsigned __int8 *)v13) )
              break;
            ++v13;
          }
          while ( (unsigned __int64)v13 < a2 );
        }
        if ( *v13 == 59 || *v13 == 35 )
        {
          v13 = ++i;
          if ( (unsigned __int64)i < a2 )
          {
            do
            {
              if ( *v13 == 10 )
                break;
              ++v13;
            }
            while ( (unsigned __int64)v13 < a2 );
          }
        }
        if ( (unsigned __int64)v13 >= a2 )
        {
          *(_DWORD *)a3 = 7;
          goto LABEL_28;
        }
        if ( *v13 == 10 )
        {
          i = v13 + 1;
          v12 = 0;
          goto LABEL_29;
        }
LABEL_19:
        v8 = i;
        if ( (unsigned __int64)i < a2 )
        {
          do
          {
            if ( strchr(StringTerminators, *i) )
              break;
            ++i;
          }
          while ( (unsigned __int64)i < a2 );
          if ( i != v8 )
          {
            v9 = (unsigned int)((_DWORD)i - (_DWORD)v8);
            if ( (int)v9 + 1 >= (unsigned int)v9
              && (PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v9 + 1), 0x69704D43u),
                  (v11 = PoolWithTag) != 0LL) )
            {
              strncpy_s(PoolWithTag, (unsigned int)(v9 + 1), v8, (unsigned int)v9);
              v11[v9] = 0;
              *(_DWORD *)a3 = 4;
              *(_QWORD *)(a3 + 8) = v11;
              *(_BYTE *)(a3 + 16) = 1;
            }
            else
            {
              *(_DWORD *)a3 = 8;
            }
            goto LABEL_28;
          }
        }
        *(_DWORD *)a3 = 7;
        break;
      case 93:
        *(_DWORD *)a3 = 3;
        break;
      default:
        goto LABEL_19;
    }
    ++i;
LABEL_28:
    v12 = 1;
LABEL_29:
    *a1 = i;
    if ( v12 )
      return;
  }
  *(_DWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *a1 = i;
}
