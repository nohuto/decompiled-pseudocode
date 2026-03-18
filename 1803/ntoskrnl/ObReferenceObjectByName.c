/*
 * XREFs of ObReferenceObjectByName @ 0x1404D2990
 * Callers:
 *     IopGetDriverPathInformation @ 0x14023275C (IopGetDriverPathInformation.c)
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 *     IopGetLegacyVetoListDrivers @ 0x1404D45D0 (IopGetLegacyVetoListDrivers.c)
 *     AlpcpCreateClientPort @ 0x1404DC5A8 (AlpcpCreateClientPort.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x1406F3FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 *     ObShutdownSystem @ 0x14075870C (ObShutdownSystem.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x1400610F8 (ObpReleaseLookupContext.c)
 *     PsDereferenceSiloContext @ 0x1400C5610 (PsDereferenceSiloContext.c)
 *     SeClearLearningModeObjectInformation @ 0x140104B40 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     SeSetLearningModeObjectInformation @ 0x140105410 (SeSetLearningModeObjectInformation.c)
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ObpCheckObjectReference @ 0x1404C05AC (ObpCheckObjectReference.c)
 *     ObpFreeObjectNameBuffer @ 0x1404D2B80 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x1404D2BF0 (SeCreateAccessState.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     ObpCaptureObjectName @ 0x1405AD0E0 (ObpCaptureObjectName.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ObReferenceObjectByName(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v10; // rdx
  int AccessState; // ebx
  unsigned __int64 CurrentSilo; // rax
  void *v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  BOOLEAN v16; // r8
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  _WORD v19[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v21[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-60h]
  _WORD *v23; // [rsp+A8h] [rbp-58h]
  __int64 v24; // [rsp+B0h] [rbp-50h]
  __int64 v25[5]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v26[20]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v27[224]; // [rsp+190h] [rbp+90h] BYREF

  v18 = a7;
  if ( a1 )
  {
    v10 = a1;
    LOBYTE(a1) = a6;
    AccessState = ObpCaptureObjectName(a1, v10, v19, 1LL);
    if ( AccessState < 0 )
      return (unsigned int)AccessState;
    if ( v19[0] )
    {
      if ( a3 || (a3 = v26, AccessState = SeCreateAccessState(v26, v27, a4, a5 + 76), AccessState >= 0) )
      {
        CurrentSilo = PsGetCurrentSilo();
        LODWORD(v18) = ObpLookupObjectName(
                         0LL,
                         a6,
                         v18,
                         0LL,
                         0LL,
                         CurrentSilo,
                         (__int64)a3,
                         (__int64)v25,
                         0LL,
                         (__int64)&v20);
        AccessState = v18;
        ObpReleaseLookupContext((__int64)v25);
        *a8 = 0LL;
        if ( AccessState >= 0 )
        {
          v13 = (void *)v20;
          v14 = *(unsigned __int8 *)(v20 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v20 - 48) >> 8);
          v24 = 0LL;
          v22 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14] + 16;
          v23 = v19;
          SeSetLearningModeObjectInformation((__int64)v21);
          LOBYTE(v15) = a6;
          if ( ObpCheckObjectReference((__int64)v13, (__int64)a3, v16, v15, (PNTSTATUS)&v18) )
            *a8 = v13;
          else
            PsDereferenceSiloContext(v13);
          SeClearLearningModeObjectInformation();
          AccessState = v18;
        }
        if ( a3 == v26 )
        {
          SepDeleteAccessState((__int64)a3);
          SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3 + 1);
        }
      }
      ObpFreeObjectNameBuffer(v19);
      return (unsigned int)AccessState;
    }
  }
  return 3221225523LL;
}
