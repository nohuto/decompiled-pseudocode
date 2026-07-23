/*
 * XREFs of SeTokenCanImpersonate @ 0x140599E60
 * Callers:
 *     PsImpersonateClient @ 0x14059AA70 (PsImpersonateClient.c)
 * Callees:
 *     RtlSidDominates @ 0x14005CC30 (RtlSidDominates.c)
 *     SeTokenIsRestricted @ 0x140063230 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x140063250 (SeTokenIsWriteRestricted.c)
 *     SepCopyTokenIntegrity @ 0x14006A264 (SepCopyTokenIntegrity.c)
 *     SepReleaseOrderedReadLocks @ 0x1400BB618 (SepReleaseOrderedReadLocks.c)
 *     SepAcquireOrderedReadLocks @ 0x1400BB64C (SepAcquireOrderedReadLocks.c)
 *     RtlSidDominatesForTrust @ 0x1400EF700 (RtlSidDominatesForTrust.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405091A8 (SepIsImpersonationAllowedDueToCapability.c)
 *     RtlIsParentOfChildAppContainer @ 0x140540D98 (RtlIsParentOfChildAppContainer.c)
 *     SeTokenIsElevated @ 0x14056A4C8 (SeTokenIsElevated.c)
 *     RtlQueryElevationFlags @ 0x14056E310 (RtlQueryElevationFlags.c)
 */

NTSTATUS __fastcall SeTokenCanImpersonate(_DWORD *Token, _DWORD *a2, int a3, _BYTE *a4)
{
  NTSTATUS result; // eax
  int IsElevated; // ebx
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
  if ( a3 < 2 || a2[6] == 998 && !a2[7] )
    return 0;
  result = RtlSidDominatesForTrust(*((PSID *)Token + 138), *((PSID *)a2 + 138), (PBOOLEAN)&DominatesTrust);
  if ( result < 0 )
    return result;
  if ( !LOBYTE(DominatesTrust.Flags) )
    *a4 = 1;
  if ( (Token[16] & Token[18] & 0x20000000) != 0 )
    return 0;
  SepAcquireOrderedReadLocks((unsigned __int64)Token, (unsigned __int64)a2);
  SepCopyTokenIntegrity((__int64)Token);
  SepCopyTokenIntegrity((__int64)a2);
  IsElevated = RtlSidDominates(Sid1, Sid2, &Dominates);
  if ( IsElevated >= 0 )
  {
    if ( !Dominates )
      goto LABEL_33;
    if ( SepIsImpersonationAllowedDueToCapability((char *)Token, (__int64)a2)
      || Token[6] == a2[56] && Token[7] == a2[57] )
    {
      IsElevated = 0;
    }
    else
    {
      if ( !RtlEqualSid(**((PSID **)Token + 19), **((PSID **)a2 + 19)) )
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
          if ( (Token[50] & 0x4000) == 0
            || (a2[50] & 0x4000) != 0
            && ((v9 = (void *)*((_QWORD *)a2 + 98), v10 = (void *)*((_QWORD *)Token + 98), RtlEqualSid(v10, v9))
             || RtlIsParentOfChildAppContainer(v10, v9)) )
          {
            if ( !SeTokenIsRestricted(Token)
              || SeTokenIsRestricted(a2) && (SeTokenIsWriteRestricted(Token) || !SeTokenIsWriteRestricted(a2)) )
            {
              v11 = a2[30];
              if ( Token[30] == v11 || v11 )
                goto LABEL_34;
            }
          }
          goto LABEL_33;
        }
        IsElevated = SeTokenIsElevated(Token, &v16);
        if ( IsElevated >= 0 )
        {
          if ( v16 || (*(_DWORD *)(*((_QWORD *)Token + 27) + 32LL) & 4) == 0 )
            goto LABEL_23;
LABEL_33:
          IsElevated = -1073741727;
        }
      }
    }
  }
LABEL_34:
  SepReleaseOrderedReadLocks((__int64)Token, (__int64)a2);
  return IsElevated;
}
