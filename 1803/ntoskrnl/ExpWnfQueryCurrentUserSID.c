/*
 * XREFs of ExpWnfQueryCurrentUserSID @ 0x1404F7234
 * Callers:
 *     ExpWnfGetCurrentScopeInstance @ 0x1404F6B44 (ExpWnfGetCurrentScopeInstance.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     PsReferenceEffectiveToken @ 0x1404D42B0 (PsReferenceEffectiveToken.c)
 *     SeQueryUserSidToken @ 0x1404D4FE8 (SeQueryUserSidToken.c)
 */

__int64 __fastcall ExpWnfQueryCurrentUserSID(struct _KPROCESS *a1, __int64 a2, void *a3, ULONG *a4, _DWORD *a5)
{
  int v5; // edi
  PACCESS_TOKEN v9; // rbx
  int v10; // ebp
  int UserSidToken; // esi
  void *v13; // rax
  int v14; // [rsp+30h] [rbp-28h] BYREF
  int v15[9]; // [rsp+34h] [rbp-24h] BYREF
  bool v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  if ( !a2 )
  {
    v9 = PsReferencePrimaryToken(a1);
    v10 = 1;
LABEL_3:
    UserSidToken = SeQueryUserSidToken((__int64)v9, a3, *a4, a4);
    if ( v10 == 1 )
    {
      ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v9);
    }
    else if ( v9 )
    {
      ObfDereferenceObject(v9);
    }
    if ( UserSidToken >= 0 )
    {
      LOBYTE(v5) = v10 == 1;
      *a5 = v5;
    }
    return (unsigned int)UserSidToken;
  }
  v13 = PsReferenceEffectiveToken(a2, &v14, &v16, v15, 0LL);
  v10 = v14;
  v9 = v13;
  if ( v14 != 2 || v15[0] >= 2 )
    goto LABEL_3;
  if ( v13 )
    ObfDereferenceObject(v13);
  return 3221225637LL;
}
