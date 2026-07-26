/*
 * XREFs of ndisOidGetStatisticAllProcessors @ 0x1C00D1788
 * Callers:
 *     ndisOidPreGenStats @ 0x1C00A54C0 (ndisOidPreGenStats.c)
 *     ndisOidPreMiniportStats @ 0x1C00D2000 (ndisOidPreMiniportStats.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisOidGetStatisticAllProcessors(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int v3; // r10d
  char v4; // r9
  int v5; // ebx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // r11
  __int64 v19; // r10
  _QWORD *v20; // rdx

  v3 = -1;
  v4 = 0;
  *a3 = 0LL;
  v5 = -1;
  if ( a2 > 0x20208 )
  {
    v13 = a2 - 131593;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 13;
            if ( v17 )
            {
              if ( v17 != 1 )
                return 1;
              v12 = 88;
              v5 = 96;
              v3 = 104;
            }
            else
            {
              v12 = 8;
              v5 = 24;
              v3 = 16;
            }
          }
          else
          {
            v12 = 48;
          }
        }
        else
        {
          v12 = 16;
        }
      }
      else
      {
        v12 = 40;
      }
    }
    else
    {
      v12 = 24;
    }
  }
  else if ( a2 == 131592 )
  {
    v12 = 32;
  }
  else
  {
    v6 = a2 - 131585;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                if ( v11 == 1 )
                {
                  v12 = 8;
                  goto LABEL_31;
                }
                return 1;
              }
              v12 = 80;
            }
            else
            {
              v12 = 104;
            }
          }
          else
          {
            v12 = 72;
          }
        }
        else
        {
          v12 = 96;
        }
      }
      else
      {
        v12 = 64;
      }
    }
    else
    {
      v12 = 88;
    }
  }
LABEL_31:
  if ( ndisMaxNumberOfProcessors )
  {
    v18 = v3;
    v19 = ndisMaxNumberOfProcessors;
    v20 = (_QWORD *)(v18 + a1);
    do
    {
      *a3 += *(_QWORD *)((char *)v20 + v12 - v18);
      if ( v18 >= 0 )
        *a3 += *v20;
      if ( v5 >= 0LL )
        *a3 += *(_QWORD *)((char *)v20 + v5 - v18);
      v20 += 14;
      --v19;
    }
    while ( v19 );
  }
  return v4;
}
