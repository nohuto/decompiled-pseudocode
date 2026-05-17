/*
 * XREFs of PssNtDuplicateSnapshot @ 0x180109C80
 * Callers:
 *     <none>
 * Callees:
 *     PssNtValidateDescriptor @ 0x180084F10 (PssNtValidateDescriptor.c)
 *     sub_18010BD7C @ 0x18010BD7C (sub_18010BD7C.c)
 *     sub_18010C2E8 @ 0x18010C2E8 (sub_18010C2E8.c)
 */

__int64 __fastcall PssNtDuplicateSnapshot(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v9; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = a3;
  if ( a1 == -1 )
  {
    result = PssNtValidateDescriptor(a2, retaddr);
    if ( (int)result >= 0 )
    {
      if ( v6 == -1 )
        v9 = -1LL;
      else
        v9 = v6;
      return sub_18010BD7C(a2, v9, a4, a5);
    }
  }
  else
  {
    if ( a3 == -1 )
      LODWORD(a3) = -1;
    return sub_18010C2E8(a1, (_DWORD)a2, a3, a4, a5);
  }
  return result;
}
