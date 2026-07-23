/*
 * XREFs of SeSubProcessToken @ 0x14048CA94
 * Callers:
 *     PspInitializeProcessSecurity @ 0x14048C3A8 (PspInitializeProcessSecurity.c)
 * Callees:
 *     SeTokenGetNoChildProcessRestricted @ 0x140019830 (SeTokenGetNoChildProcessRestricted.c)
 *     SepDesktopAppxSubProcessToken @ 0x1400198CC (SepDesktopAppxSubProcessToken.c)
 *     SepMandatorySubProcessToken @ 0x140019E94 (SepMandatorySubProcessToken.c)
 *     SepSetTrustLevelForProcessToken @ 0x14001A020 (SepSetTrustLevelForProcessToken.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140082000 (SepCreateAccessStateFromSubjectContext.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     SepSetTokenBnoIsolation @ 0x140101B68 (SepSetTokenBnoIsolation.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SeTokenIsNoChildProcessRestrictionEnforced @ 0x14025F114 (SeTokenIsNoChildProcessRestrictionEnforced.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x14025F248 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140484B90 (SepAppendAceToTokenObjectAcl.c)
 *     SepSetTokenSessionById @ 0x14048C960 (SepSetTokenSessionById.c)
 *     SepSetProcessUniqueAttribute @ 0x14048CE74 (SepSetProcessUniqueAttribute.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14048D434 (SepDereferenceLowBoxNumberEntry.c)
 *     PsReferenceEffectiveToken @ 0x14049D4B0 (PsReferenceEffectiveToken.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     SeCreateAccessState @ 0x1404C6430 (SeCreateAccessState.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     SepSetTokenLowboxNumber @ 0x140563EE0 (SepSetTokenLowboxNumber.c)
 *     SepAddTokenOriginClaim @ 0x14072E578 (SepAddTokenOriginClaim.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x14074B8B0 (EtwTimLogProhibitChildProcessCreation.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        PERESOURCE **a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v12; // r12
  __int64 v13; // r12
  int inserted; // edi
  PERESOURCE *v15; // rbx
  int v16; // r14d
  _BYTE *v17; // rcx
  __int64 v19; // rcx
  int v20; // ecx
  unsigned int v21; // r14d
  __int64 v22; // rax
  void *v23; // rbx
  __int64 v24; // rax
  bool v25; // bl
  int v26; // eax
  char v27; // [rsp+40h] [rbp-C0h] BYREF
  bool v28; // [rsp+41h] [rbp-BFh] BYREF
  char v29; // [rsp+42h] [rbp-BEh] BYREF
  char v30; // [rsp+43h] [rbp-BDh] BYREF
  char v31; // [rsp+44h] [rbp-BCh]
  bool v32; // [rsp+45h] [rbp-BBh] BYREF
  bool v33; // [rsp+46h] [rbp-BAh] BYREF
  char v34; // [rsp+47h] [rbp-B9h] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+4Ch] [rbp-B4h]
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h]
  PERESOURCE **v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  __int128 v44; // [rsp+88h] [rbp-78h] BYREF
  PERESOURCE *v45; // [rsp+98h] [rbp-68h]
  struct _LIST_ENTRY *Flink; // [rsp+A0h] [rbp-60h]
  int v47; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  int v50; // [rsp+C0h] [rbp-40h]
  __int128 v51; // [rsp+C8h] [rbp-38h]
  struct _ACCESS_STATE AccessState; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v53[28]; // [rsp+180h] [rbp+80h] BYREF

  *a3 = 0LL;
  v36 = a4;
  v12 = 0LL;
  v42 = a3;
  v41 = a2;
  *(_WORD *)a11 = 0;
  *(_BYTE *)(a11 + 2) = 0;
  v43 = a11;
  v27 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v39 = 0LL;
  v38 = 0LL;
  SeTokenGetNoChildProcessRestricted(a2, &v28, &v33, &v32);
  if ( v28 || v32 )
  {
    inserted = 0;
    v21 = -1073740643;
    if ( (*(_DWORD *)a6 & 2) != 0 )
    {
      v22 = PsReferenceEffectiveToken(
              (unsigned int)KeGetCurrentThread(),
              (unsigned int)&v35,
              (unsigned int)&v34,
              (unsigned int)&v37,
              0LL);
      v23 = (void *)v22;
      if ( v35 == 2 && v37 < 2 || (v21 = SeTokenIsNoChildProcessRestrictionEnforced(v22) ? 0xC000049D : 0, v35 != 1) )
      {
        if ( v23 )
          ObfDereferenceObject(v23);
      }
      else
      {
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
          (unsigned __int64)v23);
      }
    }
    if ( *(_DWORD *)(a6 + 8) != 1 )
      inserted = v21;
    if ( (*(_DWORD *)(a1 + 1740) & 1) != 0 )
      inserted &= -(*(_QWORD *)(a1 + 1808) != 0LL);
    if ( inserted < 0 )
    {
      if ( v33 && *(_DWORD *)(a6 + 12) )
        inserted = 0;
      if ( inserted < 0 )
      {
        v24 = *(_QWORD *)(a6 + 24);
        if ( v24 )
        {
          v12 = v24 + 96;
          v38 = v24 + 112;
        }
        v25 = v28;
        EtwTimLogProhibitChildProcessCreation((unsigned int)v28 + 1, *(_QWORD *)(a6 + 16), v12, v38);
        if ( v25 )
          goto LABEL_54;
      }
    }
  }
  v13 = v41;
  v47 = 48;
  v48 = 0LL;
  v50 = 0;
  v49 = 0LL;
  v51 = 0LL;
  inserted = SepDuplicateToken(v41, (unsigned int)&v47, 0, 1, 0, 0, 1, (__int64)&Object);
  if ( inserted < 0 )
    goto LABEL_54;
  v15 = (PERESOURCE *)Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) == 0
    || (v19 = *((unsigned int *)Object + 30), (_DWORD)v19 == a5)
    || (SepDereferenceLowBoxNumberEntry(v19),
        v15[135] = 0LL,
        SepSetTokenSessionById((__int64)v15, a5, 0, 0LL, 0LL),
        v26 = SepSetTokenLowboxNumber(v15, v15[98]),
        inserted = v26,
        v26 >= 0) )
  {
    SepSetTokenSessionById((__int64)v15, a5, 0, 0LL, 0LL);
    *((_DWORD *)v15 + 50) &= ~0x200000u;
    if ( (*(_DWORD *)a6 & 1) != 0 )
    {
      v20 = *((_DWORD *)v15 + 50) | 0x80000;
      *((_DWORD *)v15 + 50) = v20;
      if ( (*(_DWORD *)a6 & 4) != 0 )
        *((_DWORD *)v15 + 50) = v20 | 0x100000;
    }
    v16 = v36 & 2;
    inserted = SepDesktopAppxSubProcessToken(v15, a1, *(_DWORD *)(a6 + 4), &v29, &v30);
    if ( inserted >= 0 )
    {
      inserted = SepMandatorySubProcessToken((_DWORD *)(v13 & -(__int64)(v16 != 0)), (__int64)v15, a1, &v39);
      if ( inserted >= 0 )
      {
        inserted = SepSetTrustLevelForProcessToken((__int64)v15, a1, &v27);
        if ( inserted >= 0 )
        {
          inserted = 0;
          if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
            inserted = SepSetProcessUniqueAttribute(v15);
          if ( inserted >= 0 )
          {
            if ( ((_DWORD)v15[25] & 0x4000) == 0
              || (a7 & 1) == 0
              || (inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)v15, a7), inserted >= 0) )
            {
              if ( a8 )
                SepAddTokenOriginClaim(a8, a9, v15);
              if ( !a10
                || (inserted = SepSetTokenBnoIsolation(
                                 (__int64)v15,
                                 *(_BYTE *)(a10 + 32),
                                 (__int128 *)a10,
                                 *(_DWORD *)(a10 + 16),
                                 *(_QWORD *)(a10 + 24)),
                    inserted >= 0) )
              {
                if ( !v16 || v39 )
                  v27 = 1;
                if ( v27 )
                {
                  v45 = v15;
                  *(_QWORD *)&v44 = 0LL;
                  DWORD2(v44) = 0;
                  Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
                  SepCreateAccessStateFromSubjectContext(&v44, &AccessState, v53, 0, 0LL);
                  v15 = (PERESOURCE *)Object;
                }
                else
                {
                  SeCreateAccessState(&AccessState, v53, 0LL, 0LL);
                }
                v31 = 1;
                inserted = ObInsertObjectEx(v15, &AccessState, 0, 0LL, 0LL);
                if ( inserted >= 0 )
                {
                  SepAppendAceToTokenObjectAcl((__int64)v15, 8, SeAliasAdminsSid);
                  v17 = (_BYTE *)v43;
                  *((_BYTE *)v15 + 204) = v36 & 1;
                  *v42 = v15;
                  *v17 = v27;
                  v17[1] = v29;
                  v17[2] = v30;
                  goto LABEL_22;
                }
LABEL_54:
                v15 = 0LL;
LABEL_22:
                if ( inserted >= 0 )
                  goto LABEL_23;
              }
            }
          }
        }
      }
    }
  }
  if ( v15 )
    ObfDereferenceObject(v15);
LABEL_23:
  if ( v31 )
  {
    SepDeleteAccessState((__int64)&AccessState);
    if ( !v27 )
      SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
  }
  return (unsigned int)inserted;
}
