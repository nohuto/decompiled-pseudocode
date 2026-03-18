/*
 * XREFs of CmpIsThisSameFile @ 0x1404D6558
 * Callers:
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140665298 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

bool __fastcall CmpIsThisSameFile(__int64 a1, void *a2)
{
  bool v3; // bl
  __int64 v4; // r8
  __int64 v5; // rdx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( ObReferenceObjectByHandle(a2, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL) < 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    v5 = *((_QWORD *)Object + 5);
    if ( v5 )
      v3 = v4 == v5;
  }
  ObfDereferenceObject(Object);
  return v3;
}
