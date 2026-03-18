/*
 * XREFs of AlpcpReleaseMessageAttributesOnCancel @ 0x140462A78
 * Callers:
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140464F28 (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     AlpcpReleaseViewAttribute @ 0x140468A24 (AlpcpReleaseViewAttribute.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 */

LONG_PTR __fastcall AlpcpReleaseMessageAttributesOnCancel(__int64 a1, int a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rcx
  __int64 v7; // rcx
  LONG_PTR result; // rax

  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
  {
    result = AlpcpDereferenceBlobEx(v4);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 144);
  if ( v5 && (!a2 || (*(_DWORD *)(a1 + 40) & 0x8000) == 0) )
  {
    result = AlpcpReleaseViewAttribute(v5);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 152);
  if ( v6 )
  {
    result = AlpcpDereferenceBlobEx(v6);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 160);
  if ( v7 )
  {
    if ( (v7 & 1) != 0 )
      result = ObfDereferenceObject((PVOID)(v7 & 0xFFFFFFFFFFFFFFFEuLL));
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  return result;
}
