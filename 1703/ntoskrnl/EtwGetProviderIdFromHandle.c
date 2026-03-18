/*
 * XREFs of EtwGetProviderIdFromHandle @ 0x14003DD38
 * Callers:
 *     WdiDispatchControl @ 0x14046748C (WdiDispatchControl.c)
 *     EtwWriteStartScenario @ 0x140586140 (EtwWriteStartScenario.c)
 *     EtwWriteEndScenario @ 0x140586480 (EtwWriteEndScenario.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x140480DC8 (EtwpReferenceGuidEntry.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwGetProviderIdFromHandle(ULONG_PTR *a1, char a2, _OWORD *a3)
{
  NTSTATUS v3; // edi
  PVOID v6; // rcx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 )
  {
    v3 = ObReferenceObjectByHandle(a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    if ( v3 >= 0 )
    {
      v6 = Object;
      *a3 = *(_OWORD *)(*((_QWORD *)Object + 4) + 24LL);
      ObfDereferenceObjectWithTag(v6, 0x746C6644u);
    }
    return (unsigned int)v3;
  }
  if ( a1 && (unsigned __int8)EtwpReferenceGuidEntry(a1[4]) )
  {
    *a3 = *(_OWORD *)(a1[4] + 24);
    EtwpUnreferenceGuidEntry(a1[4]);
    return (unsigned int)v3;
  }
  return 3221225480LL;
}
