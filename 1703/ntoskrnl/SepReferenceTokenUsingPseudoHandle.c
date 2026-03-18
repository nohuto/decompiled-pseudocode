/*
 * XREFs of SepReferenceTokenUsingPseudoHandle @ 0x140026074
 * Callers:
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 * Callees:
 *     SepReconcileTrustSidWithProcessProtection @ 0x140091BA0 (SepReconcileTrustSidWithProcessProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceEffectiveToken @ 0x14050B1D0 (PsReferenceEffectiveToken.c)
 *     PsReferenceImpersonationTokenEx @ 0x14050C610 (PsReferenceImpersonationTokenEx.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall SepReferenceTokenUsingPseudoHandle(__int64 a1, _QWORD *a2, _BYTE *a3, _QWORD *a4)
{
  bool v7; // zf
  unsigned int CurrentThread; // ecx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  int v12; // [rsp+30h] [rbp-10h] BYREF
  char v13; // [rsp+70h] [rbp+30h] BYREF
  char v14; // [rsp+78h] [rbp+38h] BYREF
  char v15; // [rsp+80h] [rbp+40h] BYREF
  int v16; // [rsp+88h] [rbp+48h] BYREF

  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0LL;
  if ( a1 == -4 )
  {
    v10 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
    goto LABEL_6;
  }
  v7 = a1 == -5;
  CurrentThread = (unsigned int)KeGetCurrentThread();
  if ( v7 )
  {
    v9 = (_QWORD *)PsReferenceImpersonationTokenEx(
                     CurrentThread,
                     0,
                     (unsigned int)&v15,
                     (unsigned int)&v14,
                     (__int64)&v16,
                     (__int64)&v13);
    v10 = v9;
    if ( !v9 )
      return 3221225596LL;
  }
  else
  {
    v9 = (_QWORD *)PsReferenceEffectiveToken(
                     CurrentThread,
                     (unsigned int)&v12,
                     (unsigned int)&v14,
                     (unsigned int)&v16,
                     (__int64)&v13);
    v10 = v9;
    if ( v12 != 2 )
      goto LABEL_5;
  }
  if ( v16 )
  {
LABEL_5:
    SepReconcileTrustSidWithProcessProtection(v10[138], &v13, a3, a4);
LABEL_6:
    *a2 = v10;
    return 0LL;
  }
  ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  return 3221225638LL;
}
