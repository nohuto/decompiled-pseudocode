/*
 * XREFs of ObpInitObjectTypeSD @ 0x140621E9C
 * Callers:
 *     ObCreateObjectTypeEx @ 0x14062189C (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x1404C6E50 (ObLogSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x140621F3C (ObpCreateDefaultObjectTypeSD.c)
 */

__int64 __fastcall ObpInitObjectTypeSD(__int64 a1, void *a2)
{
  char *v4; // rbx
  int v5; // eax
  int v6; // edi
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = a2;
  v4 = (char *)a2;
  if ( a2 || (v5 = ObpCreateDefaultObjectTypeSD(&P), v4 = (char *)P, v6 = v5, v5 >= 0) )
  {
    v6 = ObLogSecurityDescriptor(v4, &P, 0x10u);
    if ( v6 >= 0 )
    {
      if ( P )
        *(_QWORD *)(a1 - 8) = (char *)P + 15;
      else
        *(_QWORD *)(a1 - 8) = 0LL;
    }
  }
  if ( v4 && !a2 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
