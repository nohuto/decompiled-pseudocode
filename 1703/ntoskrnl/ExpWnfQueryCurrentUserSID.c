/*
 * XREFs of ExpWnfQueryCurrentUserSID @ 0x1404F08B4
 * Callers:
 *     ExpWnfGetCurrentScopeInstance @ 0x1404F07DC (ExpWnfGetCurrentScopeInstance.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     SeQueryUserSidToken @ 0x1404F1B24 (SeQueryUserSidToken.c)
 *     PsReferenceEffectiveToken @ 0x14050B1D0 (PsReferenceEffectiveToken.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall ExpWnfQueryCurrentUserSID(
        struct _KPROCESS *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        _DWORD *a5)
{
  int v5; // edi
  void *v9; // rax
  int v10; // ebp
  PACCESS_TOKEN v11; // rbx
  int UserSidToken; // esi
  int v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+34h] [rbp-24h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  if ( a2 )
  {
    v9 = (void *)PsReferenceEffectiveToken(a2, (unsigned int)&v14, (unsigned int)&v16, (unsigned int)&v15, 0LL);
    v10 = v14;
    v11 = v9;
    if ( v14 == 2 && v15 < 2 )
    {
      if ( v9 )
        ObfDereferenceObject(v9);
      return 3221225637LL;
    }
  }
  else
  {
    v11 = PsReferencePrimaryToken(a1);
    v10 = 1;
  }
  UserSidToken = SeQueryUserSidToken(v11, a3, *a4);
  if ( v10 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v11);
  }
  else if ( v11 )
  {
    ObfDereferenceObject(v11);
  }
  if ( UserSidToken >= 0 )
  {
    LOBYTE(v5) = v10 == 1;
    *a5 = v5;
  }
  return (unsigned int)UserSidToken;
}
