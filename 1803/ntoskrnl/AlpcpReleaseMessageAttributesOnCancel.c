/*
 * XREFs of AlpcpReleaseMessageAttributesOnCancel @ 0x1404DF1B4
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x1404DB380 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x1404DFC44 (AlpcpReleaseViewAttribute.c)
 */

void __fastcall AlpcpReleaseMessageAttributesOnCancel(__int64 a1, int a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rcx
  __int64 v7; // rcx

  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
  {
    AlpcpDereferenceBlobEx(v4, 1);
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 144);
  if ( v5 && (!a2 || (*(_DWORD *)(a1 + 40) & 0x4000) == 0) )
  {
    AlpcpReleaseViewAttribute(v5);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 152);
  if ( v6 )
  {
    AlpcpDereferenceBlobEx(v6, 1);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 160);
  if ( v7 )
  {
    if ( (v7 & 1) != 0 )
      ObfDereferenceObject((PVOID)(v7 & 0xFFFFFFFFFFFFFFFEuLL));
    *(_QWORD *)(a1 + 160) = 0LL;
  }
}
