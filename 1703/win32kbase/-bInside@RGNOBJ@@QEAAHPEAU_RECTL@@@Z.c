/*
 * XREFs of ?bInside@RGNOBJ@@QEAAHPEAU_RECTL@@@Z @ 0x1C003D450
 * Callers:
 *     GreRectInRegion @ 0x1C00421D0 (GreRectInRegion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::bInside(RGNOBJ *this, struct _RECTL *a2)
{
  _DWORD *v2; // rax
  LONG left; // ebx
  LONG right; // r10d
  LONG top; // r9d
  LONG bottom; // r11d
  int v7; // r8d
  unsigned int *v8; // rdx
  __int64 v9; // r9
  LONG *v10; // rax
  unsigned __int64 v11; // rcx

  v2 = *(_DWORD **)this;
  left = a2->left;
  if ( a2->left < *(_DWORD *)(*(_QWORD *)this + 96LL) )
  {
    right = a2->right;
    if ( right > v2[22] )
    {
      top = a2->top;
      if ( top < v2[25] )
      {
        bottom = a2->bottom;
        if ( bottom > v2[23] )
        {
          v7 = v2[21];
          v8 = v2 + 26;
          if ( v7 )
          {
            do
            {
              if ( top < (int)v8[2] )
                break;
              v8 += *v8 + 4;
              --v7;
            }
            while ( v7 );
            if ( v7 )
            {
              while ( bottom > (int)v8[1] )
              {
                v9 = *v8;
                v10 = (LONG *)(v8 + 3);
                v11 = (unsigned __int64)&v8[v9 + 3];
                if ( (unsigned __int64)(v8 + 3) < v11 )
                {
                  do
                  {
                    if ( left < v10[1] )
                      break;
                    v10 += 2;
                  }
                  while ( (unsigned __int64)v10 < v11 );
                  if ( (unsigned __int64)v10 < v11 && right > *v10 )
                    return 2LL;
                }
                v8 = (unsigned int *)((char *)v8 + (unsigned int)(4 * v9 + 16));
                if ( !--v7 )
                  return 1LL;
              }
            }
          }
        }
      }
    }
  }
  return 1LL;
}
