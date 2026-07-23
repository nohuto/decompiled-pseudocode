/*
 * XREFs of PssNtDuplicateSnapshot @ 0x180106790
 * Callers:
 *     <none>
 * Callees:
 *     PssNtValidateDescriptor @ 0x180001DE0 (PssNtValidateDescriptor.c)
 *     sub_18010840C @ 0x18010840C (sub_18010840C.c)
 *     sub_1801088FC @ 0x1801088FC (sub_1801088FC.c)
 */

__int64 __fastcall PssNtDuplicateSnapshot(void *a1, unsigned int *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v9; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = a3;
  if ( a1 == (void *)-1LL )
  {
    result = PssNtValidateDescriptor(a2, retaddr);
    if ( (int)result >= 0 )
    {
      if ( v6 == -1 )
        v9 = -1LL;
      else
        v9 = v6;
      return sub_18010840C(a2, v9, a4, a5);
    }
  }
  else
  {
    if ( a3 == -1 )
      a3 = -1LL;
    return sub_1801088FC(a1, a2, (HANDLE)a3, a5);
  }
  return result;
}
