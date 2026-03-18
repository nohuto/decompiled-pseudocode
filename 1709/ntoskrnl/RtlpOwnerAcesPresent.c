/*
 * XREFs of RtlpOwnerAcesPresent @ 0x1400154F0
 * Callers:
 *     RtlOwnerAcesPresent @ 0x1400154D0 (RtlOwnerAcesPresent.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SeComputeCreatorDeniedRights @ 0x1400829D0 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 * Callees:
 *     memcmp @ 0x14015F370 (memcmp.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2)
{
  _WORD *SeOwnerRightsSid; // r14
  unsigned __int8 *v4; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // edi
  int v7; // r12d
  unsigned __int8 v8; // si
  unsigned int v9; // ecx
  __int64 v10; // rcx
  unsigned __int8 *v11; // rcx

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
        if ( (unsigned __int8)v9 <= 0x10u && _bittest(&v7, v9) )
        {
          v10 = 16LL * (*((_DWORD *)v4 + 2) & 1) + ((8LL * (*((_DWORD *)v4 + 2) & 2)) | 0xC);
        }
        else if ( (_BYTE)v9 == 4 )
        {
          v10 = 12LL;
        }
        else
        {
          if ( (unsigned __int8)v9 >= 0xBu && (unsigned __int8)(v9 - 13) > 1u )
            goto LABEL_13;
          v10 = 8LL;
        }
        v11 = &v4[v10];
        if ( v11
          && *(_WORD *)v11 == *SeOwnerRightsSid
          && !memcmp(v11, SeOwnerRightsSid, 4 * (unsigned int)v11[1] + 8)
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
