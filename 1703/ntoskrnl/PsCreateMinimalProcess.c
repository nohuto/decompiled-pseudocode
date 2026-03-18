/*
 * XREFs of PsCreateMinimalProcess @ 0x1405D991C
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14012E500 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     PspCreateProcess @ 0x14045D9C0 (PspCreateProcess.c)
 *     PspCreatePicoProcess @ 0x1406E3710 (PspCreatePicoProcess.c)
 *     PspInitPhase1 @ 0x14081A1E8 (PspInitPhase1.c)
 * Callees:
 *     KeUnstackDetachProcess @ 0x1400B0360 (KeUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1400B25D0 (KeStackAttachProcess.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeKvaShadowingActive @ 0x14017BC94 (KeKvaShadowingActive.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MmSynchronizeAddressPolicy @ 0x14041DA50 (MmSynchronizeAddressPolicy.c)
 *     PspInsertProcess @ 0x14049CB2C (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     PspCreateObjectHandle @ 0x140541060 (PspCreateObjectHandle.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 *     PsTerminateProcess @ 0x14054E978 (PsTerminateProcess.c)
 *     DbgkCreateMinimalProcess @ 0x1405D9B64 (DbgkCreateMinimalProcess.c)
 *     PspSetMinimalProcessName @ 0x1405D9BBC (PspSetMinimalProcessName.c)
 */

__int64 __fastcall PsCreateMinimalProcess(
        struct _KPROCESS *a1,
        __int64 a2,
        char a3,
        void *a4,
        int a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  PACCESS_TOKEN v7; // r14
  char v11; // si
  unsigned __int8 v12; // r15
  int inserted; // edi
  PRKPROCESS v14; // rbx
  signed __int8 v15; // cf
  PRKPROCESS PROCESS; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v19; // [rsp+80h] [rbp-80h]
  _BYTE v20[400]; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+220h] [rbp+120h] BYREF
  int v22; // [rsp+2D0h] [rbp+1D0h]

  v19 = a7;
  v7 = a4;
  v11 = 1;
  if ( a4 )
  {
    v12 = 1;
  }
  else
  {
    v7 = PsReferencePrimaryToken(a1);
    v12 = 0;
  }
  v22 = a5 | 0x800;
  inserted = PspAllocateProcess((ULONG_PTR)a1, 0, 0LL, a3, 0, 0, 0LL, v7, v22, 0LL, v12, 0LL, (__int64)&v18, &PROCESS);
  if ( inserted >= 0 )
  {
    v14 = PROCESS;
    if ( a6 )
      PROCESS[2].ActiveProcessors.Bitmap[9] = a6;
    if ( (v14[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 && !v14[2].ActiveProcessors.Bitmap[9] )
    {
      if ( (unsigned int)KeKvaShadowingActive() )
      {
        v14->AddressPolicy = 1;
        v15 = _interlockedbittestandset((volatile signed __int32 *)&v14[2].SchedulingGroup, 2u);
        v14 = PROCESS;
        if ( !v15 )
        {
          KeStackAttachProcess(PROCESS, &ApcState);
          MmSynchronizeAddressPolicy(v14);
          KeUnstackDetachProcess(&ApcState);
        }
      }
    }
    if ( a2 )
      PspSetMinimalProcessName(v14, a2);
    memset(v20, 0, sizeof(v20));
    if ( v18 )
      v11 = 3;
    v20[388] = 0;
    inserted = PspInsertProcess((char *)v14, (__int64)a1, 0x2000000u, v22, 0LL, v11, 0LL, (PACCESS_STATE)v20);
    if ( inserted >= 0 )
    {
      DbgkCreateMinimalProcess(v14);
      *(_DWORD *)&v20[384] |= 0x200u;
      inserted = PspCreateObjectHandle(v14, (__int64)v20, (struct _OBJECT_TYPE *)PsProcessType);
      if ( inserted >= 0 )
        *v19 = *(_QWORD *)&v20[392];
      SepDeleteAccessState((__int64)v20);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v20[32]);
      if ( inserted < 0 )
        PsTerminateProcess((ULONG_PTR)v14);
    }
    else
    {
      PspRundownSingleProcess((__int64)v14, 0);
    }
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
  }
  if ( !v12 )
    ObfDereferenceObject(v7);
  return (unsigned int)inserted;
}
