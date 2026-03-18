/*
 * XREFs of CmpCopySaclToVirtualKey @ 0x140693140
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1406924F8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x140016054 (CmpGetSecurityDescriptorNode.c)
 *     RtlGetDaclSecurityDescriptor @ 0x1400BB9A0 (RtlGetDaclSecurityDescriptor.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpFreeSecurityDescriptor @ 0x1404731A0 (CmpFreeSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1404BBCD0 (SeCaptureSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140504D60 (RtlGetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140549920 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140549980 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x14054A4F0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x140576E70 (RtlGetGroupSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140577080 (RtlGetOwnerSecurityDescriptor.c)
 */

__int64 __fastcall CmpCopySaclToVirtualKey(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rdx
  unsigned int v6; // r12d
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *); // rax
  __int64 v10; // rax
  int SaclSecurityDescriptor; // ebx
  __int64 v13; // rax
  __int64 v14; // r14
  _WORD *v15; // rsi
  PACL Sacl; // [rsp+30h] [rbp-50h] BYREF
  PSID Owner; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v18[2]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v19[2]; // [rsp+48h] [rbp-38h] BYREF
  unsigned int *v20; // [rsp+50h] [rbp-30h]
  _BYTE SecurityDescriptor[2]; // [rsp+58h] [rbp-28h] BYREF
  __int16 v22; // [rsp+5Ah] [rbp-26h]
  void *SaclDefaulted; // [rsp+C0h] [rbp+40h] BYREF
  BOOLEAN SaclPresent; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+58h]

  v25 = a4;
  v5 = *(unsigned int *)(a2 + 44);
  v6 = *(_DWORD *)(a4 + 44);
  v20 = (unsigned int *)(a4 + 44);
  Sacl = 0LL;
  v19[1] = 0;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8);
  v19[0] = -1;
  v18[0] = -1;
  v18[1] = 0;
  v10 = v9(a1, v5, v19);
  if ( !v10 )
    return 3221225626LL;
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                             (PSECURITY_DESCRIPTOR)(v10 + 20),
                             &SaclPresent,
                             &Sacl,
                             (PBOOLEAN)&SaclDefaulted);
  if ( SaclSecurityDescriptor >= 0 )
  {
    if ( SaclPresent )
    {
      v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v6, v18);
      v14 = v13;
      if ( v13 )
      {
        v15 = (_WORD *)(v13 + 20);
        SaclSecurityDescriptor = RtlCreateSecurityDescriptor(SecurityDescriptor, *(unsigned __int8 *)(v13 + 20));
        if ( SaclSecurityDescriptor >= 0 )
        {
          v22 = v15[1] & 0x7FFF;
          SaclSecurityDescriptor = RtlSetSaclSecurityDescriptor(
                                     SecurityDescriptor,
                                     SaclPresent,
                                     Sacl,
                                     (BOOLEAN)SaclDefaulted);
          if ( SaclSecurityDescriptor >= 0 )
          {
            SaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(v15, &Owner, (PBOOLEAN)&SaclDefaulted);
            if ( SaclSecurityDescriptor >= 0 )
            {
              SaclSecurityDescriptor = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, (BOOLEAN)SaclDefaulted);
              if ( SaclSecurityDescriptor >= 0 )
              {
                SaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(v15, &Owner, (PBOOLEAN)&SaclDefaulted);
                if ( SaclSecurityDescriptor >= 0 )
                {
                  SaclSecurityDescriptor = RtlSetGroupSecurityDescriptor(
                                             SecurityDescriptor,
                                             Owner,
                                             (BOOLEAN)SaclDefaulted);
                  if ( SaclSecurityDescriptor >= 0 )
                  {
                    SaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                                               v15,
                                               &SaclPresent,
                                               &Sacl,
                                               (PBOOLEAN)&SaclDefaulted);
                    if ( SaclSecurityDescriptor >= 0 )
                    {
                      SaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(
                                                 SecurityDescriptor,
                                                 SaclPresent,
                                                 Sacl,
                                                 (BOOLEAN)SaclDefaulted);
                      if ( SaclSecurityDescriptor >= 0 )
                      {
                        SaclSecurityDescriptor = SeCaptureSecurityDescriptor(
                                                   (__int64)SecurityDescriptor,
                                                   0,
                                                   PagedPool,
                                                   1,
                                                   &SaclDefaulted);
                        if ( SaclSecurityDescriptor >= 0 )
                        {
                          if ( HvpMarkCellDirty(a3, v6, 0)
                            && HvpMarkCellDirty(a3, *(unsigned int *)(v14 + 4), 0)
                            && HvpMarkCellDirty(a3, *(unsigned int *)(v14 + 8), 0) )
                          {
                            CmpFreeSecurityDescriptor(a3, a5);
                            SaclSecurityDescriptor = CmpGetSecurityDescriptorNode(a3, a5, v25, SaclDefaulted, 0, v20);
                            SeReleaseSecurityDescriptor(SaclDefaulted, 0, 1);
                          }
                          else
                          {
                            SeReleaseSecurityDescriptor(SaclDefaulted, 0, 1);
                            SaclSecurityDescriptor = -1073741443;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v18);
      }
    }
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v19);
  return (unsigned int)SaclSecurityDescriptor;
}
