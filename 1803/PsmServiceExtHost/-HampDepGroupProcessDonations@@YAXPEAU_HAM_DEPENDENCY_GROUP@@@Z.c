/*
 * XREFs of ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002CC40
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800182E0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x180025C9C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?HampDepGroupGetFirstDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002CD70 (-HampDepGroupGetFirstDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800322CC (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040EFC (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     ?HampActCanChangeStateTo@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180067DB8 (-HampActCanChangeStateTo@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 */

void __fastcall HampDepGroupProcessDonations(struct _HAM_DEPENDENCY_GROUP *a1)
{
  struct _HAM_DONATION_DEPENDENCY *FirstDonation; // rbx
  __int64 v2; // rdx
  __int64 v3; // r10
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r10
  struct _HAM_DEPENDENCY_LINK *v8; // rdx
  struct _HAM_DEPENDENCY_LINK *v9; // r8
  struct _HAM_DEPENDENCY_LINK *i; // rcx
  struct _HAM_DEPENDENCY_LINK *v11; // rdx
  struct _HAM_DEPENDENCY_LINK *NextLink; // rax

  FirstDonation = HampDepGroupGetFirstDonation(a1);
  if ( FirstDonation )
  {
    do
    {
LABEL_2:
      v2 = *((_QWORD *)FirstDonation + 6);
      v3 = *(_QWORD *)FirstDonation;
      if ( *((_QWORD *)FirstDonation + 8) == *(_QWORD *)(v2 + 768) )
      {
        if ( (*(_BYTE *)(v3 + 536) & 8) == 0 )
        {
          if ( (*(_DWORD *)(v3 + 112) & 0x400) != 0 )
          {
            v5 = 912LL;
            v6 = *(_QWORD *)(*((_QWORD *)FirstDonation + 7) + 1008LL);
            *(_OWORD *)((char *)FirstDonation + 72) = *(_OWORD *)(v2 + 856);
            *(_OWORD *)((char *)FirstDonation + 88) = *(_OWORD *)(v2 + 872);
            v4 = *(_QWORD *)(v2 + 912);
          }
          else
          {
            v4 = *(_QWORD *)(v2 + 904);
            v5 = 904LL;
            v6 = *(_QWORD *)(v3 + 456);
          }
          RmpCommitValuesAdd(v4, v6, (unsigned __int64 *)(v2 + v5));
        }
      }
      else
      {
        LOBYTE(v2) = 1;
        if ( (unsigned int)HampActCanChangeStateTo(*(_QWORD *)FirstDonation, v2) )
          HampActRequestStop(v7, 1LL, 10LL, 6400LL, 0, 0LL);
      }
      v8 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)FirstDonation + 2);
      v9 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)FirstDonation + 1);
      FirstDonation = 0LL;
      if ( v8 != (struct _HAM_DEPENDENCY_LINK *)((char *)v9 + 80) )
        FirstDonation = (struct _HAM_DEPENDENCY_LINK *)((char *)v8 - 16);
    }
    while ( FirstDonation );
    for ( i = v9; ; i = NextLink )
    {
      NextLink = HampDepGroupGetNextLink(i);
      FirstDonation = 0LL;
      if ( !NextLink )
        break;
      v11 = (struct _HAM_DEPENDENCY_LINK *)*((_QWORD *)NextLink + 10);
      if ( v11 != (struct _HAM_DEPENDENCY_LINK *)((char *)NextLink + 80) )
        FirstDonation = (struct _HAM_DEPENDENCY_LINK *)((char *)v11 - 16);
      if ( FirstDonation )
        goto LABEL_2;
    }
  }
}
