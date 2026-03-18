/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x1404593A4
 * Callers:
 *     PopEtGetProcessAppId @ 0x140458AB8 (PopEtGetProcessAppId.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x140019A00 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     PsQueryProcessAttributesByToken @ 0x140483CF0 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x1405034B0 (SeQueryUserSidToken.c)
 */

signed __int64 __fastcall PopEtGetProcessSidAndPackageIdentity(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  PACCESS_TOKEN v6; // rsi
  unsigned __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v6 = PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken(v6, &v8, &v9);
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
  if ( (int)SeQueryUserSidToken(v6, a2, 68LL) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v6);
}
