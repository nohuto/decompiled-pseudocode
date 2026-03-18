/*
 * XREFs of RtlpOwnerAcesPresent @ 0x1400AAD70
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     RtlOwnerAcesPresent @ 0x1400AAD50 (RtlOwnerAcesPresent.c)
 *     SeComputeCreatorDeniedRights @ 0x1401047E0 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140148E84 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 * Callees:
 *     memcmp @ 0x140189130 (memcmp.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2)
{
  _WORD *SeOwnerRightsSid; // r14
  unsigned __int8 *v4; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // edi
  int v7; // r12d
  unsigned __int8 v8; // si
  unsigned __int8 v9; // cl
  __int64 v10; // rcx
  char *v11; // rcx

  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
  if ( !a2 )
    return 0;
  v4 = (unsigned __int8 *)(a2 + 8);
  v5 = *(unsigned __int16 *)(a2 + 4);
  v6 = 0;
  if ( *(_WORD *)(a2 + 4) )
  {
    v7 = 104928;
    do
    {
      v8 = v4[1];
      if ( (v8 & 8) == 0 )
      {
        v9 = *v4;
        if ( *v4 <= 0x10u && _bittest(&v7, v9) )
        {
          v10 = 16LL * (*((_DWORD *)v4 + 2) & 1) + ((8LL * (*((_DWORD *)v4 + 2) & 2)) | 0xC);
        }
        else if ( v9 == 4 )
        {
          v10 = 12LL;
        }
        else
        {
          if ( v9 >= 0xBu && (unsigned __int8)(v9 - 13) > 1u )
            goto LABEL_13;
          v10 = 8LL;
        }
        v11 = (char *)&v4[v10];
        if ( v11
          && *(_WORD *)v11 == *SeOwnerRightsSid
          && !memcmp(v11, SeOwnerRightsSid, 4 * (unsigned int)(unsigned __int8)HIBYTE(*(_WORD *)v11) + 8)
          && (!a1 || (v8 & a1) != 0) )
        {
          return 1;
        }
      }
LABEL_13:
      ++v6;
      v4 += *((unsigned __int16 *)v4 + 1);
    }
    while ( v6 < v5 );
  }
  return 0;
}
