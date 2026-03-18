/*
 * XREFs of RtlpOwnerAcesPresent @ 0x14003E400
 * Callers:
 *     RtlOwnerAcesPresent @ 0x14003E3F0 (RtlOwnerAcesPresent.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SeComputeCreatorDeniedRights @ 0x1400EDF40 (SeComputeCreatorDeniedRights.c)
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 * Callees:
 *     memcmp @ 0x14016A960 (memcmp.c)
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
  unsigned __int8 *v10; // rcx

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
          v10 = &v4[8 * (*((_DWORD *)v4 + 2) & 2) + ((16LL * (*((_DWORD *)v4 + 2) & 1)) | 0xC)];
        }
        else if ( (_BYTE)v9 == 4 )
        {
          v10 = v4 + 12;
        }
        else
        {
          if ( (unsigned __int8)v9 > 0xAu && (unsigned __int8)(v9 - 13) > 1u )
            goto LABEL_13;
          v10 = v4 + 8;
        }
        if ( v10
          && *(_WORD *)v10 == *SeOwnerRightsSid
          && !memcmp(v10, SeOwnerRightsSid, 4LL * v10[1] + 8)
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
