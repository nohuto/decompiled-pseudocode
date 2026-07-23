/*
 * XREFs of SeSubProcessToken @ 0x1404A138C
 * Callers:
 *     PspInitializeProcessSecurity @ 0x1404A1020 (PspInitializeProcessSecurity.c)
 * Callees:
 *     SepSetTrustLevelForProcessToken @ 0x14006626C (SepSetTrustLevelForProcessToken.c)
 *     SepMandatorySubProcessToken @ 0x1400662F4 (SepMandatorySubProcessToken.c)
 *     SepDesktopAppxSubProcessToken @ 0x140066484 (SepDesktopAppxSubProcessToken.c)
 *     SeTokenIsNoChildProcessRestricted @ 0x1400665B0 (SeTokenIsNoChildProcessRestricted.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1400EE570 (SepCreateAccessStateFromSubjectContext.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x1402479F4 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SepSetTokenBnoIsolation @ 0x140247A90 (SepSetTokenBnoIsolation.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140430FB8 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x140461FFC (SepSetTokenLowboxNumber.c)
 *     SepSetProcessUniqueAttribute @ 0x1404A16F4 (SepSetProcessUniqueAttribute.c)
 *     SepSetTokenSessionById @ 0x1404A19EC (SepSetTokenSessionById.c)
 *     SeCreateAccessState @ 0x1404F4470 (SeCreateAccessState.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404F4620 (SepAppendAceToTokenObjectAcl.c)
 *     PsReferenceEffectiveToken @ 0x14050B1D0 (PsReferenceEffectiveToken.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     SepAddTokenOriginClaim @ 0x1406F6A54 (SepAddTokenOriginClaim.c)
 */

__int64 __fastcall SeSubProcessToken(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        int a5,
        _DWORD *a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  int v12; // r10d
  int inserted; // edi
  PVOID v14; // rbx
  int v15; // esi
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  unsigned int v19; // esi
  __int64 v20; // rax
  void *v21; // rdx
  int v22; // eax
  char v23; // [rsp+40h] [rbp-C0h] BYREF
  char v24; // [rsp+41h] [rbp-BFh] BYREF
  char v25; // [rsp+42h] [rbp-BEh] BYREF
  char v26; // [rsp+43h] [rbp-BDh]
  char v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+4Ch] [rbp-B4h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v34; // [rsp+70h] [rbp-90h]
  __int128 v35; // [rsp+78h] [rbp-88h] BYREF
  PVOID v36; // [rsp+88h] [rbp-78h]
  struct _LIST_ENTRY *Flink; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+98h] [rbp-68h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  int v41; // [rsp+B0h] [rbp-50h]
  __int128 v42; // [rsp+B8h] [rbp-48h]
  struct _ACCESS_STATE AccessState; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v44[28]; // [rsp+170h] [rbp+70h] BYREF

  *a3 = 0LL;
  v29 = a4;
  *(_WORD *)a11 = 0;
  *(_BYTE *)(a11 + 2) = 0;
  v34 = a3;
  v30 = a2;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v32 = 0LL;
  if ( SeTokenIsNoChildProcessRestricted(a2) )
  {
    v18 = a6[3] != 1 ? 0xC000049D : 0;
    v19 = v18;
    if ( (*a6 & 2) != 0 )
    {
      v20 = PsReferenceEffectiveToken(
              (unsigned int)KeGetCurrentThread(),
              (unsigned int)&v28,
              (unsigned int)&v27,
              (unsigned int)&v31,
              0LL);
      v21 = (void *)v20;
      if ( v28 == 2 && v31 < 2 || (v19 = SeTokenIsNoChildProcessRestricted(v20) ? v18 : 0, v28 != 1) )
      {
        if ( v21 )
          ObfDereferenceObject(v21);
      }
      else
      {
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
          (unsigned __int64)v21);
      }
      v12 = v30;
    }
    inserted = 0;
    if ( a6[2] != 1 )
      inserted = v19;
    if ( (*(_DWORD *)(a1 + 1740) & 1) != 0 )
      inserted &= -(*(_QWORD *)(a1 + 1808) != 0LL);
    if ( inserted < 0 )
      goto LABEL_45;
  }
  v38 = 48;
  v39 = 0LL;
  v41 = 0;
  v40 = 0LL;
  v42 = 0LL;
  inserted = SepDuplicateToken(v12, (unsigned int)&v38, 0, 1, 0, 0, 1, (__int64)&Object);
  if ( inserted < 0 )
    goto LABEL_45;
  v14 = Object;
  if ( (*((_DWORD *)Object + 50) & 0x4000) == 0
    || (v17 = *((_DWORD *)Object + 30), v17 == a5)
    || (SepDereferenceLowBoxNumberEntry(v17, *((_QWORD *)Object + 135)),
        *((_QWORD *)v14 + 135) = 0LL,
        SepSetTokenSessionById((_DWORD)v14, a5, 0, 0, 0LL),
        v22 = SepSetTokenLowboxNumber((__int64)v14, *((_QWORD *)v14 + 98)),
        inserted = v22,
        v22 >= 0) )
  {
    SepSetTokenSessionById((_DWORD)v14, a5, 0, 0, 0LL);
    if ( (*a6 & 1) != 0 && !a6[3] )
      *((_DWORD *)v14 + 50) |= 0x80000u;
    v15 = v29 & 2;
    inserted = SepDesktopAppxSubProcessToken((PERESOURCE *)v14, a1, a6[1], &v24, &v25);
    if ( inserted >= 0 )
    {
      inserted = SepMandatorySubProcessToken((_DWORD *)(v30 & -(__int64)(v15 != 0)), (__int64)v14, a1, &v32);
      if ( inserted >= 0 )
      {
        inserted = SepSetTrustLevelForProcessToken((__int64)v14, a1, &v23);
        if ( inserted >= 0 )
        {
          inserted = 0;
          if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
            inserted = SepSetProcessUniqueAttribute(v14);
          if ( inserted >= 0 )
          {
            if ( (*((_DWORD *)v14 + 50) & 0x4000) == 0
              || (a7 & 1) == 0
              || (inserted = SepSetTokenAllApplicationPackagesPolicy((__int64)v14, a7), inserted >= 0) )
            {
              if ( a8 )
                SepAddTokenOriginClaim(a8, a9, v14);
              if ( !a10
                || (inserted = SepSetTokenBnoIsolation(
                                 (__int64)v14,
                                 *(_BYTE *)(a10 + 32),
                                 (__int128 *)a10,
                                 *(_DWORD *)(a10 + 16),
                                 *(_QWORD *)(a10 + 24)),
                    inserted >= 0) )
              {
                if ( !v15 || v32 )
                  v23 = 1;
                if ( v23 )
                {
                  v36 = v14;
                  *(_QWORD *)&v35 = 0LL;
                  DWORD2(v35) = 0;
                  Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
                  SepCreateAccessStateFromSubjectContext(&v35, &AccessState, v44, 0, 0LL);
                  v14 = Object;
                }
                else
                {
                  SeCreateAccessState(&AccessState, v44, 0LL, 0LL);
                }
                v26 = 1;
                inserted = ObInsertObjectEx(v14, &AccessState, 0, 0LL, 0LL);
                if ( inserted >= 0 )
                {
                  SepAppendAceToTokenObjectAcl(v14, 8LL);
                  *((_BYTE *)v14 + 204) = v29 & 1;
                  *v34 = v14;
                  *(_BYTE *)a11 = v23;
                  *(_BYTE *)(a11 + 1) = v24;
                  *(_BYTE *)(a11 + 2) = v25;
                  goto LABEL_21;
                }
LABEL_45:
                v14 = 0LL;
LABEL_21:
                if ( inserted >= 0 )
                  goto LABEL_22;
              }
            }
          }
        }
      }
    }
  }
  if ( v14 )
    ObfDereferenceObject(v14);
LABEL_22:
  if ( v26 )
  {
    SepDeleteAccessState((__int64)&AccessState);
    if ( !v23 )
      SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
  }
  return (unsigned int)inserted;
}
