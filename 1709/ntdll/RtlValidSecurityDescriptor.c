/*
 * XREFs of RtlValidSecurityDescriptor @ 0x18002D560
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E5BD4 (RtlpConvertToAutoInheritSecurityObject.c)
 *     _ResCreateSecurityDescriptor @ 0x18010F7D8 (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     RtlValidAcl @ 0x18002D7F0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x18002DA50 (RtlValidSid.c)
 */

char __fastcall RtlValidSecurityDescriptor(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( *(_BYTE *)a1 != 1 )
    return 0;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v2 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 4) )
      goto LABEL_7;
    v2 = a1 + *(unsigned int *)(a1 + 4);
  }
  if ( v2 && !(unsigned __int8)RtlValidSid(v2) )
    return 0;
LABEL_7:
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 8) )
      goto LABEL_12;
    v3 = a1 + *(unsigned int *)(a1 + 8);
  }
  if ( v3 && !(unsigned __int8)RtlValidSid(v3) )
    return 0;
LABEL_12:
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_18;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 16) )
      goto LABEL_18;
    v4 = a1 + *(unsigned int *)(a1 + 16);
  }
  if ( v4 && !(unsigned __int8)RtlValidAcl() )
    return 0;
LABEL_18:
  if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v5 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 12) )
        return 1;
      v5 = a1 + *(unsigned int *)(a1 + 12);
    }
    if ( v5 && !(unsigned __int8)RtlValidAcl() )
      return 0;
  }
  return 1;
}
