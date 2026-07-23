/*
 * XREFs of SepReferenceTokenUsingPseudoHandle @ 0x1400EF560
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepReferenceTokenByHandle @ 0x1400EF490 (SepReferenceTokenByHandle.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1400EF700 (RtlSidDominatesForTrust.c)
 *     SepSidFromProcessProtection @ 0x1400EF778 (SepSidFromProcessProtection.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x1404C9060 (PsReferenceImpersonationTokenEx.c)
 *     PsReferenceEffectiveToken @ 0x1404D42B0 (PsReferenceEffectiveToken.c)
 */

__int64 __fastcall SepReferenceTokenUsingPseudoHandle(__int64 a1, PACCESS_TOKEN *a2, _BYTE *a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v8; // rax
  void *v9; // rdi
  void *v10; // rbp
  PSID v11; // r9
  int v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+34h] [rbp-34h] BYREF
  char v15; // [rsp+70h] [rbp+8h] BYREF
  BOOLEAN DominatesTrust; // [rsp+78h] [rbp+10h] BYREF
  char v17; // [rsp+80h] [rbp+18h] BYREF
  char v18; // [rsp+88h] [rbp+20h] BYREF

  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( a1 == -4 )
  {
    *a2 = PsReferencePrimaryToken(CurrentThread->ApcState.Process);
    return 0LL;
  }
  if ( a1 == -5 )
  {
    v8 = (void *)PsReferenceImpersonationTokenEx(
                   (_DWORD)CurrentThread,
                   0,
                   (unsigned int)&v18,
                   (unsigned int)&v17,
                   (__int64)&v13,
                   (__int64)&v15);
    v9 = v8;
    if ( !v8 )
      return 3221225596LL;
    goto LABEL_8;
  }
  v8 = (void *)PsReferenceEffectiveToken(
                 (_DWORD)CurrentThread,
                 (unsigned int)&v14,
                 (unsigned int)&v17,
                 (unsigned int)&v13,
                 (__int64)&v15);
  v9 = v8;
  if ( v14 == 2 )
  {
LABEL_8:
    if ( !v13 )
    {
      ObfDereferenceObject(v8);
      return 3221225638LL;
    }
  }
  *a3 = 0;
  *a4 = 0LL;
  DominatesTrust = 0;
  v10 = (void *)SepSidFromProcessProtection(&v15);
  RtlSidDominatesForTrust(v10, v11, &DominatesTrust);
  if ( !DominatesTrust )
  {
    *a3 = 1;
    *a4 = v10;
  }
  *a2 = v9;
  return 0LL;
}
