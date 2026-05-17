/*
 * XREFs of PssNtWalkSnapshot @ 0x180106CC0
 * Callers:
 *     <none>
 * Callees:
 *     PssNtValidateDescriptor @ 0x180001DE0 (PssNtValidateDescriptor.c)
 *     sub_180107E44 @ 0x180107E44 (sub_180107E44.c)
 *     sub_180107F68 @ 0x180107F68 (sub_180107F68.c)
 *     sub_1801080E0 @ 0x1801080E0 (sub_1801080E0.c)
 *     sub_180108260 @ 0x180108260 (sub_180108260.c)
 */

__int64 __fastcall PssNtWalkSnapshot(unsigned int *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  int v10; // ebx
  int v11; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      v10 = a2 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
            return 3221225475LL;
          if ( !a4 || a5 == 136 )
            return sub_1801080E0(a1, a3, a4);
        }
        else if ( !a4 || a5 == 72 )
        {
          return sub_180107F68(a1, a3, a4);
        }
      }
      else if ( !a4 || a5 == 80 )
      {
        return sub_180108260(a1, a3, a4);
      }
      return 3221225476LL;
    }
    if ( a4 && a5 != 80 )
      return 3221225476LL;
    return sub_180107E44(a1, a3, a4);
  }
  return result;
}
