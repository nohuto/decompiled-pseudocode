/*
 * XREFs of sub_1800096A8 @ 0x1800096A8
 * Callers:
 *     sub_180009468 @ 0x180009468 (sub_180009468.c)
 * Callees:
 *     sub_180009164 @ 0x180009164 (sub_180009164.c)
 *     sub_18000978C @ 0x18000978C (sub_18000978C.c)
 *     sub_180009940 @ 0x180009940 (sub_180009940.c)
 *     sub_18001EFB4 @ 0x18001EFB4 (sub_18001EFB4.c)
 */

__int64 __fastcall sub_1800096A8(char *BaseAddress, size_t Size, ULONG_PTR a3, char a4, int *a5)
{
  int v9; // edi
  __int64 v10; // r8
  PVOID v11; // rax

  v9 = 3;
  if ( a3 > 0x3FF0 || (v10 = sub_18000978C(BaseAddress + 288), v10 == -1) )
  {
    if ( a3 > 0x20000 )
    {
      if ( a3 > 0x7F000 )
        v11 = sub_180009164(BaseAddress, Size, a3, a4);
      else
        v11 = (PVOID)sub_18001EFB4(BaseAddress, Size);
    }
    else
    {
      v11 = (PVOID)sub_180009940((PRTL_SRWLOCK)BaseAddress + 22, (unsigned int)Size);
    }
    v10 = (__int64)v11;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v10;
}
