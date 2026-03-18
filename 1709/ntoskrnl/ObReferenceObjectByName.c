/*
 * XREFs of ObReferenceObjectByName @ 0x140484700
 * Callers:
 *     IopGetDriverPathInformation @ 0x1401F5228 (IopGetDriverPathInformation.c)
 *     AlpcpCreateClientPort @ 0x140465D6C (AlpcpCreateClientPort.c)
 *     IopGetLegacyVetoListDrivers @ 0x140483F0C (IopGetLegacyVetoListDrivers.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14069045C (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 *     ObShutdownSystem @ 0x1406EF22C (ObShutdownSystem.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14001908C (ObpReleaseLookupContext.c)
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     SeSetLearningModeObjectInformation @ 0x140081830 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x140081860 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     PsDereferenceSiloContext @ 0x1401262F0 (PsDereferenceSiloContext.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ObpFreeObjectNameBuffer @ 0x1404848F0 (ObpFreeObjectNameBuffer.c)
 *     ObpCheckObjectReference @ 0x140484944 (ObpCheckObjectReference.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObpCaptureObjectName @ 0x1404ACFE0 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     SeCreateAccessState @ 0x1404C6430 (SeCreateAccessState.c)
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
  __int64 v16; // [rsp+70h] [rbp-90h] BYREF
  _WORD v17[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v18; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v19[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-60h]
  _WORD *v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  __int64 v23[5]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v24[20]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v25[224]; // [rsp+190h] [rbp+90h] BYREF

  v16 = a7;
  if ( a1 )
  {
    v10 = a1;
    LOBYTE(a1) = a6;
    AccessState = ObpCaptureObjectName(a1, v10, v17, 1LL);
    if ( AccessState < 0 )
      return (unsigned int)AccessState;
    if ( v17[0] )
    {
      if ( a3 || (a3 = v24, AccessState = SeCreateAccessState(v24, v25, a4, a5 + 76), AccessState >= 0) )
      {
        CurrentSilo = PsGetCurrentSilo();
        LODWORD(v16) = ObpLookupObjectName(
                         0LL,
                         a6,
                         v16,
                         0LL,
                         0LL,
                         CurrentSilo,
                         (__int64)a3,
                         (__int64)v23,
                         0LL,
                         (__int64)&v18);
        AccessState = v16;
        ObpReleaseLookupContext((__int64)v23);
        *a8 = 0LL;
        if ( AccessState >= 0 )
        {
          v13 = (void *)v18;
          v14 = *(unsigned __int8 *)(v18 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v18 - 48) >> 8);
          v22 = 0LL;
          v20 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14] + 16;
          v21 = v17;
          SeSetLearningModeObjectInformation((__int64)v19);
          if ( (unsigned __int8)ObpCheckObjectReference((_DWORD)v13, (PNTSTATUS)&v16) )
            *a8 = v13;
          else
            PsDereferenceSiloContext(v13);
          SeClearLearningModeObjectInformation();
          AccessState = v16;
        }
        if ( a3 == v24 )
        {
          SepDeleteAccessState((__int64)a3);
          SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3 + 1);
        }
      }
      ObpFreeObjectNameBuffer(v17);
      return (unsigned int)AccessState;
    }
  }
  return 3221225523LL;
}
