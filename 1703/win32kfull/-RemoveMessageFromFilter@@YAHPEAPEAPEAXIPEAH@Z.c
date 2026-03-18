/*
 * XREFs of ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00C7040
 * Callers:
 *     _ChangeWindowMessageFilter @ 0x1C00C91B0 (_ChangeWindowMessageFilter.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00C93A8 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C00C7150 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 */

__int64 __fastcall RemoveMessageFromFilter(void ***a1, unsigned int a2, int *a3)
{
  void **v3; // rdi
  int v7; // ebx
  void *const *v8; // rcx
  int v9; // r12d
  void **v10; // r8
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rax
  void **v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  void **v18; // [rsp+50h] [rbp+8h] BYREF
  void **v19; // [rsp+60h] [rbp+18h] BYREF

  v3 = *a1;
  v7 = 0;
  v8 = *a1;
  v19 = 0LL;
  v18 = 0LL;
  v9 = IsMessageAllowedByFilterEx(v8, a2, &v19, &v18);
  if ( v9 )
  {
    v10 = v18;
    v11 = (a2 >> 3) & 0x3F;
    v12 = *((unsigned __int8 *)v18 + v11) & ~(1 << (a2 & 7));
    *((_BYTE *)v18 + v11) = v12;
    if ( !(_BYTE)v12 )
    {
      v13 = 0LL;
      while ( !v10[v13] )
      {
        if ( (unsigned __int64)++v13 >= 8 )
        {
          Win32FreePool(v10);
          v14 = v19;
          v19[((unsigned __int64)a2 >> 9) & 0xF] = 0LL;
          v15 = 0LL;
          while ( !v14[v15] )
          {
            if ( (unsigned __int64)++v15 >= 0x10 )
            {
              Win32FreePool(v14);
              v16 = 0LL;
              v3[(unsigned __int64)a2 >> 13] = 0LL;
              while ( !v3[v16] )
              {
                if ( (unsigned __int64)++v16 >= 8 )
                {
                  Win32FreePool(v3);
                  v3 = 0LL;
                  goto LABEL_13;
                }
              }
              goto LABEL_13;
            }
          }
          break;
        }
      }
    }
  }
LABEL_13:
  if ( a3 )
  {
    LOBYTE(v7) = v9 == 0;
    *a3 = v7;
  }
  if ( v3 != *a1 )
    *a1 = v3;
  return 1LL;
}
