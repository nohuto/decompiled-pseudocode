/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x1406D29A8
 * Callers:
 *     PopEtGetProcessAppId @ 0x1406D27C0 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140088580 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     SeQueryUserSidToken @ 0x1404F1B24 (SeQueryUserSidToken.c)
 *     PsQueryProcessAttributesByToken @ 0x1404F77A0 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 */

signed __int64 __fastcall PopEtGetProcessSidAndPackageIdentity(struct _KPROCESS *a1, _DWORD *a2, __int64 a3)
{
  PACCESS_TOKEN v6; // rsi
  unsigned __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  ULONG v10; // [rsp+70h] [rbp+18h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
  v6 = PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken((__int64)v6, &v8, &v9);
  if ( (_BYTE)v8 )
  {
    v8 = 256LL;
    v9 = 132LL;
    if ( (int)RtlQueryPackageIdentity((__int64)v6, a3 + 4, (__int64)&v8, a3 + 260, (__int64)&v9, 0LL) >= 0 )
    {
      *(_WORD *)a3 = (v8 >> 1) - 1;
      *(_WORD *)(a3 + 2) = (v9 >> 1) - 1;
    }
  }
  if ( (int)SeQueryUserSidToken((__int64)v6, a2, 0x44u, &v10) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    a2[2] = 0;
  }
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v6);
}
