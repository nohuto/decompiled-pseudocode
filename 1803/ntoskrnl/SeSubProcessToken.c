/*
 * XREFs of SeSubProcessToken @ 0x1404F0580
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1404F019C (PspInitializeProcessSecurity.c)
 * Callees:
 *     SeTokenGetNoChildProcessRestricted @ 0x14006B894 (SeTokenGetNoChildProcessRestricted.c)
 *     SepSetTokenBnoIsolation @ 0x14006B930 (SepSetTokenBnoIsolation.c)
 *     SepMandatorySubProcessToken @ 0x14006B9C8 (SepMandatorySubProcessToken.c)
 *     SepSetTrustLevelForProcessToken @ 0x14006BB54 (SepSetTrustLevelForProcessToken.c)
 *     SepDesktopAppxSubProcessToken @ 0x14006EBC0 (SepDesktopAppxSubProcessToken.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1401052E0 (SepCreateAccessStateFromSubjectContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x1402A0BC4 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x1402A0CE8 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404C20C0 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     SeCreateAccessState @ 0x1404D2BF0 (SeCreateAccessState.c)
 *     PsReferenceEffectiveToken @ 0x1404D42B0 (PsReferenceEffectiveToken.c)
 *     SepSetTokenSessionById @ 0x1404F0508 (SepSetTokenSessionById.c)
 *     SepSetProcessUniqueAttribute @ 0x1404F0948 (SepSetProcessUniqueAttribute.c)
 *     SepSetTokenLowboxNumber @ 0x14053F6FC (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140547090 (SepDereferenceLowBoxNumberEntry.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SepAddTokenOriginClaim @ 0x140792618 (SepAddTokenOriginClaim.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1407AD810 (EtwTimLogProhibitChildProcessCreation.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  int inserted; // edi
  _DWORD *v13; // rbx
  int v14; // r14d
  __int64 v16; // rcx
  int v17; // ecx
  unsigned int v18; // r14d
  void *v19; // rax
  void *v20; // rbx
  bool v21; // bl
  int v22; // eax
  char v23; // [rsp+40h] [rbp-C0h] BYREF
  bool v24; // [rsp+41h] [rbp-BFh] BYREF
  char v25; // [rsp+42h] [rbp-BEh] BYREF
  char v26; // [rsp+43h] [rbp-BDh] BYREF
  char v27; // [rsp+44h] [rbp-BCh]
  bool v28; // [rsp+45h] [rbp-BBh] BYREF
  bool v29; // [rsp+46h] [rbp-BAh] BYREF
  bool v30; // [rsp+47h] [rbp-B9h] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+4Ch] [rbp-B4h]
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v37; // [rsp+70h] [rbp-90h]
  __int128 v38; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v39; // [rsp+88h] [rbp-78h]
  struct _LIST_ENTRY *Flink; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+98h] [rbp-68h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+B0h] [rbp-50h]
  __int128 v45; // [rsp+B8h] [rbp-48h]
  struct _ACCESS_STATE v46; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v47[28]; // [rsp+170h] [rbp+70h] BYREF

  *a3 = 0LL;
  v32 = a4;
  v37 = a3;
  v34 = a2;
  *(_WORD *)a11 = 0;
  *(_BYTE *)(a11 + 2) = 0;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v35 = 0LL;
  SeTokenGetNoChildProcessRestricted(a2, &v24, &v29, &v28);
  if ( v24 || v28 )
  {
    inserted = 0;
    v18 = -1073740643;
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      v19 = PsReferenceEffectiveToken((__int64)KeGetCurrentThread(), &v31, &v30, &v33, 0LL);
      v20 = v19;
      if ( v31 == 2 && v33 < 2
        || (v18 = SeTokenIsNoChildProcessRestrictionEnforced((__int64)v19) ? 0xC000049D : 0, v31 != 1) )
      {
        if ( v20 )
          ObfDereferenceObject(v20);
      }
      else
      {
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
          (unsigned __int64)v20);
      }
    }
    if ( *(_DWORD *)(a6 + 8) != 1 )
      inserted = v18;
    if ( (*(_DWORD *)(a1 + 1740) & 1) != 0 )
      inserted &= -(*(_QWORD *)(a1 + 1808) != 0LL);
    if ( inserted < 0 )
    {
      if ( v29 && *(_DWORD *)(a6 + 12) )
        inserted = 0;
      if ( inserted < 0 )
      {
        v21 = v24;
        EtwTimLogProhibitChildProcessCreation(
          (unsigned int)v24 + 1,
          *(_QWORD *)(a6 + 16),
          (*(_QWORD *)(a6 + 24) + 96LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL),
          (*(_QWORD *)(a6 + 24) + 112LL) & -(__int64)(*(_QWORD *)(a6 + 24) != 0LL));
        if ( v21 )
          goto LABEL_51;
      }
    }
  }
  v41 = 48;
  v42 = 0LL;
  v44 = 0;
  v43 = 0LL;
  v45 = 0LL;
  inserted = SepDuplicateToken(v34, (int)&v41, 0, 1, 0, 0, 1, (char **)&Object);
  if ( inserted < 0 )
    goto LABEL_51;
  v13 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) == 0
    || (v16 = *((unsigned int *)Object + 30), (_DWORD)v16 == a5)
    || (SepDereferenceLowBoxNumberEntry(v16, *((_QWORD *)Object + 135)),
        *((_QWORD *)v13 + 135) = 0LL,
        SepSetTokenSessionById((__int64)v13, a5, 0, 0LL, 0LL),
        v22 = SepSetTokenLowboxNumber(v13, *((_QWORD *)v13 + 98)),
        inserted = v22,
        v22 >= 0) )
  {
    SepSetTokenSessionById((__int64)v13, a5, 0, 0LL, 0LL);
    v13[50] &= ~0x200000u;
    if ( (*(_DWORD *)a6 & 1) != 0 )
    {
      v17 = v13[50] | 0x80000;
      v13[50] = v17;
      if ( (*(_DWORD *)a6 & 4) != 0 )
        v13[50] = v17 | 0x100000;
    }
    inserted = SepSetTokenBnoIsolation((__int64)v13, 0, 0LL, 0, 0LL);
    if ( inserted >= 0 )
    {
      v14 = v32 & 2;
      inserted = SepDesktopAppxSubProcessToken(v13, a1, *(_DWORD *)(a6 + 4), &v25, &v26);
      if ( inserted >= 0 )
      {
        inserted = SepMandatorySubProcessToken((_DWORD *)(v34 & -(__int64)(v14 != 0)), (__int64)v13, a1, &v35);
        if ( inserted >= 0 )
        {
          inserted = SepSetTrustLevelForProcessToken((__int64)v13, a1, &v23);
          if ( inserted >= 0 )
          {
            inserted = 0;
            if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
              inserted = SepSetProcessUniqueAttribute(v13);
            if ( inserted >= 0 )
            {
              if ( (v13[50] & 0x4000) == 0
                || (a7 & 1) == 0
                || (inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)v13, a7), inserted >= 0) )
              {
                if ( a8 )
                  SepAddTokenOriginClaim(a8, a9, v13);
                if ( !a10
                  || (inserted = SepSetTokenBnoIsolation(
                                   (__int64)v13,
                                   *(_BYTE *)(a10 + 32),
                                   (__int128 *)a10,
                                   *(_DWORD *)(a10 + 16),
                                   *(_QWORD *)(a10 + 24)),
                      inserted >= 0) )
                {
                  if ( !v14 || v35 )
                    v23 = 1;
                  if ( v23 )
                  {
                    v39 = v13;
                    *(_QWORD *)&v38 = 0LL;
                    DWORD2(v38) = 0;
                    Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
                    SepCreateAccessStateFromSubjectContext(&v38, (int *)&v46, v47, 0, 0LL);
                    v13 = Object;
                  }
                  else
                  {
                    SeCreateAccessState((int *)&v46, v47, 0, 0LL);
                  }
                  v27 = 1;
                  inserted = ObInsertObjectEx(v13, &v46, 0LL, 0, 0, 0LL, 0LL);
                  if ( inserted >= 0 )
                  {
                    SepAppendAceToTokenObjectAcl((__int64)v13, 8, SeAliasAdminsSid);
                    *((_BYTE *)v13 + 204) = v32 & 1;
                    *v37 = v13;
                    *(_BYTE *)a11 = v23;
                    *(_BYTE *)(a11 + 1) = v25;
                    *(_BYTE *)(a11 + 2) = v26;
                    goto LABEL_23;
                  }
LABEL_51:
                  v13 = 0LL;
LABEL_23:
                  if ( inserted >= 0 )
                    goto LABEL_24;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v13 )
    ObfDereferenceObject(v13);
LABEL_24:
  if ( v27 )
  {
    SepDeleteAccessState((__int64)&v46);
    if ( !v23 )
      SeReleaseSubjectContext(&v46.SubjectSecurityContext);
  }
  return (unsigned int)inserted;
}
