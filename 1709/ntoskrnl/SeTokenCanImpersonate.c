/*
 * XREFs of SeTokenCanImpersonate @ 0x1404CEBB0
 * Callers:
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 * Callees:
 *     RtlSidDominates @ 0x140087AD0 (RtlSidDominates.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     RtlSidDominatesForTrust @ 0x1400A09D0 (RtlSidDominatesForTrust.c)
 *     SeTokenIsRestricted @ 0x1400D5140 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x1400D5160 (SeTokenIsWriteRestricted.c)
 *     SepCopyTokenIntegrity @ 0x1400E4A04 (SepCopyTokenIntegrity.c)
 *     SepReleaseOrderedReadLocks @ 0x14011C128 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x14011C15C (SepAcquireOrderedReadLocks.c)
 *     RtlIsParentOfChildAppContainer @ 0x1404485C8 (RtlIsParentOfChildAppContainer.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405132F0 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsElevated @ 0x14057D434 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x1405801E0 (RtlQueryElevationFlags.c)
 */

NTSTATUS __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  NTSTATUS result; // eax
  NTSTATUS IsElevated; // ebx
  void *v9; // rbp
  void *v10; // r14
  int v11; // eax
  PSID Sid2; // [rsp+20h] [rbp-48h]
  PSID Sid1; // [rsp+30h] [rbp-38h]
  _RTL_ELEVATION_FLAGS DominatesTrust; // [rsp+70h] [rbp+8h] BYREF
  BOOLEAN Dominates; // [rsp+78h] [rbp+10h] BYREF
  char v16; // [rsp+80h] [rbp+18h] BYREF

  Dominates = 0;
  LOBYTE(DominatesTrust.Flags) = 0;
  v16 = 0;
  *a4 = 0;
  if ( a3 < 2 || *(_DWORD *)(a2 + 24) == 998 && !*(_DWORD *)(a2 + 28) )
    return 0;
  result = RtlSidDominatesForTrust(*(PSID *)(Token + 1104), *(PSID *)(a2 + 1104), (PBOOLEAN)&DominatesTrust);
  if ( result < 0 )
    return result;
  if ( !LOBYTE(DominatesTrust.Flags) )
    *a4 = 1;
  if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) != 0 )
    return 0;
  SepAcquireOrderedReadLocks(Token, a2);
  SepCopyTokenIntegrity(Token);
  SepCopyTokenIntegrity(a2);
  IsElevated = RtlSidDominates(Sid1, Sid2, &Dominates);
  if ( IsElevated >= 0 )
  {
    if ( !Dominates )
      goto LABEL_33;
    if ( (unsigned __int8)SepIsImpersonationAllowedDueToCapability((PACCESS_TOKEN)Token)
      || *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
    {
      IsElevated = 0;
    }
    else
    {
      if ( !RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
        goto LABEL_33;
      if ( RtlQueryElevationFlags(&DominatesTrust) < 0 || (DominatesTrust.Flags & 1) == 0 )
        goto LABEL_23;
      IsElevated = SeTokenIsElevated(a2, &v16);
      if ( IsElevated >= 0 )
      {
        if ( !v16 )
        {
LABEL_23:
          IsElevated = 0;
          if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
            || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
            && ((v9 = *(void **)(a2 + 784), v10 = *(void **)(Token + 784), RtlEqualSid(v10, v9))
             || RtlIsParentOfChildAppContainer(v10, v9)) )
          {
            if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
              || SeTokenIsRestricted((PACCESS_TOKEN)a2)
              && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
            {
              v11 = *(_DWORD *)(a2 + 120);
              if ( *(_DWORD *)(Token + 120) == v11 || v11 )
                goto LABEL_34;
            }
          }
          goto LABEL_33;
        }
        IsElevated = SeTokenIsElevated(Token, &v16);
        if ( IsElevated >= 0 )
        {
          if ( v16 || (*(_DWORD *)(*(_QWORD *)(Token + 216) + 32LL) & 4) == 0 )
            goto LABEL_23;
LABEL_33:
          IsElevated = -1073741727;
        }
      }
    }
  }
LABEL_34:
  SepReleaseOrderedReadLocks(Token, a2);
  return IsElevated;
}
