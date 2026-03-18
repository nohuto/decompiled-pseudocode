/*
 * XREFs of ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C010035C
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1C00CCB10 (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00CCD08 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C0100480 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 */

__int64 __fastcall RemoveMessageFromFilter(void ***a1, unsigned int a2, int *a3)
{
  void **v3; // rdi
  unsigned __int64 v5; // rbp
  int v7; // ebx
  void *const *v8; // rcx
  int v9; // r12d
  void **v11; // r8
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  void **v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  void **v22; // [rsp+50h] [rbp+8h] BYREF
  void **v23; // [rsp+60h] [rbp+18h] BYREF

  v3 = *a1;
  v5 = a2;
  v7 = 0;
  v8 = *a1;
  v23 = 0LL;
  v22 = 0LL;
  v9 = IsMessageAllowedByFilterEx(v8, a2, &v23, &v22);
  if ( v9 )
  {
    v11 = v22;
    v12 = (v5 >> 3) & 0x3F;
    v13 = *((unsigned __int8 *)v22 + v12) & ~(1 << (v5 & 7));
    *((_BYTE *)v22 + v12) = v13;
    if ( !(_BYTE)v13 )
    {
      v14 = 0LL;
      while ( !v11[v14] )
      {
        if ( (unsigned __int64)++v14 >= 8 )
        {
          Win32FreePool(v11, v12, v11);
          v17 = v23;
          v23[(v5 >> 9) & 0xF] = 0LL;
          v18 = 0LL;
          while ( !v17[v18] )
          {
            if ( (unsigned __int64)++v18 >= 0x10 )
            {
              Win32FreePool(v17, v15, v16);
              v21 = 0LL;
              v3[v5 >> 13] = 0LL;
              while ( !v3[v21] )
              {
                if ( (unsigned __int64)++v21 >= 8 )
                {
                  Win32FreePool(v3, v19, v20);
                  v3 = 0LL;
                  goto LABEL_2;
                }
              }
              goto LABEL_2;
            }
          }
          break;
        }
      }
    }
  }
LABEL_2:
  if ( a3 )
  {
    LOBYTE(v7) = v9 == 0;
    *a3 = v7;
  }
  if ( v3 != *a1 )
    *a1 = v3;
  return 1LL;
}
