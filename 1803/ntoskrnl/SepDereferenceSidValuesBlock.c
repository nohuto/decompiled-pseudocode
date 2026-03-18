/*
 * XREFs of SepDereferenceSidValuesBlock @ 0x140792980
 * Callers:
 *     SepDeleteLogonSessionSidValues @ 0x1407928C8 (SepDeleteLogonSessionSidValues.c)
 *     SepDeleteTokenUserAndGroups @ 0x1407928F8 (SepDeleteTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x140792AD8 (SepSetTokenUserAndGroups.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SepLogTokenSidManagement @ 0x140794224 (SepLogTokenSidManagement.c)
 */

void __fastcall SepDereferenceSidValuesBlock(volatile signed __int64 *P, int a2, __int64 a3)
{
  signed __int64 v4; // rax
  bool v5; // zf
  bool v6; // sf
  bool v7; // of
  signed __int64 v8; // rax

  if ( P )
  {
    v4 = _InterlockedExchangeAdd64(P + 1, 0xFFFFFFFFFFFFFFFFuLL);
    v7 = __OFSUB__(v4, 1LL);
    v5 = v4 == 1;
    v6 = v4 - 1 < 0;
    v8 = v4 - 1;
    if ( v6 ^ v7 | v5 )
    {
      if ( v8 )
        __fastfail(0xEu);
      SepLogTokenSidManagement(5, (_DWORD)P, 0, a2, a3);
      ExFreePoolWithTag((PVOID)P, 0);
    }
  }
}
