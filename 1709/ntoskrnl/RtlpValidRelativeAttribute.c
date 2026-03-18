/*
 * XREFs of RtlpValidRelativeAttribute @ 0x140595554
 * Callers:
 *     RtlpValidAttributeAce @ 0x1405954E4 (RtlpValidAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1400E0214 (RtlStringCbLengthW.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // r11d
  unsigned int v6; // edx
  unsigned __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int *i; // rbx
  unsigned int *m; // r8
  __int64 v12; // rcx
  unsigned int *k; // r8
  __int64 v14; // rcx
  int v15; // r9d
  unsigned int *j; // r8
  __int64 v17; // rcx
  unsigned int v18; // r10d
  int v19; // esi
  __int64 v20; // rcx
  size_t pcbLength; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 >= 0x14 && !*((_WORD *)a1 + 3) && (a1[2] & 0xFFC0) == 0 )
    {
      if ( a1[3] )
      {
        v4 = *a1;
        if ( a2 >= (unsigned int)v4
          && a2 - (unsigned int)v4 >= 4
          && RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v4), a2 - (unsigned int)v4, &pcbLength) >= 0 )
        {
          v6 = a1[3];
          v7 = 4LL * v6;
          if ( v7 <= 0xFFFFFFFF && a2 >= 0x10 && a2 - 16 >= (unsigned int)v7 )
          {
            v8 = *((unsigned __int16 *)a1 + 2);
            if ( *((_WORD *)a1 + 2) )
            {
              if ( v8 <= 2 )
              {
                if ( v6 )
                {
                  for ( i = a1 + 4; a2 >= *i && a2 - *i >= 8; ++i )
                  {
                    if ( ++v5 >= v6 )
                      return 1;
                  }
                  return 0;
                }
                return 1;
              }
              switch ( v8 )
              {
                case 3u:
                  v19 = v5;
                  if ( v6 )
                  {
                    while ( 1 )
                    {
                      v20 = a1[v19 + 4];
                      if ( a2 < (unsigned int)v20
                        || a2 - (unsigned int)v20 < 2
                        || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v20), a2 - (unsigned int)v20, &pcbLength) < 0 )
                      {
                        break;
                      }
                      if ( ++v19 >= a1[3] )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                case 5u:
                  v15 = v5;
                  if ( v6 )
                  {
                    for ( j = a1 + 4; ; ++j )
                    {
                      v17 = *j;
                      if ( a2 < (unsigned int)v17 )
                        break;
                      if ( a2 - (unsigned int)v17 < 4 )
                        break;
                      v18 = *(unsigned int *)((char *)a1 + v17);
                      if ( !v18 || (int)v17 + 4 < (unsigned int)v17 || a2 - ((_DWORD)v17 + 4) < v18 )
                        break;
                      if ( ++v15 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                case 6u:
                  if ( v6 )
                  {
                    for ( k = a1 + 4; ; ++k )
                    {
                      v14 = *k;
                      if ( a2 < (unsigned int)v14 || a2 - (unsigned int)v14 < 8 || *(_QWORD *)((char *)a1 + v14) > 1uLL )
                        break;
                      if ( ++v5 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                case 0x10u:
                  if ( v6 )
                  {
                    for ( m = a1 + 4; ; ++m )
                    {
                      v12 = *m;
                      if ( a2 < (unsigned int)v12
                        || a2 - (unsigned int)v12 < 4
                        || (int)v12 + 4 < (unsigned int)v12
                        || a2 - ((_DWORD)v12 + 4) < *(unsigned int *)((char *)a1 + v12) )
                      {
                        break;
                      }
                      if ( ++v5 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
