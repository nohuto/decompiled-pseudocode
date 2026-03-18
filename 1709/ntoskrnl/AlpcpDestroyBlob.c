/*
 * XREFs of AlpcpDestroyBlob @ 0x14049DF24
 * Callers:
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404A1000 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDestroyBlob(__int64 a1)
{
  _BYTE *v1; // rdi
  __int64 v2; // rbx
  int (*v3)(void); // rax

  v1 = (_BYTE *)(a1 - 48);
  v2 = AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 48 + 17)];
  v3 = *(int (**)(void))(v2 + 32);
  if ( !v3 || v3() >= 0 )
  {
    if ( (v1[16] & 2) != 0 )
    {
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v2 + 8), v1);
    }
    else if ( *(_QWORD *)(v2 + 40) )
    {
      (*((void (__fastcall **)(_BYTE *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v2 + 8) + 7))(v1);
    }
    else
    {
      ExFreePoolWithTag(v1, *(_DWORD *)(v2 + 4));
    }
  }
}
