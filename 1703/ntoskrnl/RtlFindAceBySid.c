/*
 * XREFs of RtlFindAceBySid @ 0x140087F40
 * Callers:
 *     SepRemoveAceFromTokenDefaultDacl @ 0x140034AA4 (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x14003DE8C (SepAppendAceToTokenDefaultDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404F4620 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpSetSecurityObject @ 0x1404F50F0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 */

unsigned __int8 *__fastcall RtlFindAceBySid(__int64 a1, _WORD *a2, unsigned int *a3)
{
  unsigned int v5; // r14d
  unsigned __int8 *v6; // rbx
  unsigned int v7; // ebp
  int v8; // r15d
  int v9; // r12d
  unsigned int v10; // ecx
  unsigned __int8 *v11; // rcx

  if ( !a1 )
    return 0LL;
  v5 = *(unsigned __int16 *)(a1 + 4);
  v6 = (unsigned __int8 *)(a1 + 8);
  v7 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  v8 = 4089359;
  v9 = 104928;
  while ( 1 )
  {
    v10 = *v6;
    if ( (unsigned __int8)v10 <= 0x15u && _bittest(&v8, v10) )
    {
      v11 = v6 + 8;
    }
    else if ( (_BYTE)v10 == 4 )
    {
      v11 = v6 + 12;
    }
    else
    {
      if ( (unsigned __int8)v10 > 0x10u || !_bittest(&v9, v10) )
        goto LABEL_10;
      v11 = &v6[8 * (*((_DWORD *)v6 + 2) & 2) + ((16LL * (*((_DWORD *)v6 + 2) & 1)) | 0xC)];
    }
    if ( v11 )
      break;
LABEL_10:
    ++v7;
    v6 += *((unsigned __int16 *)v6 + 1);
    if ( v7 >= v5 )
      return 0LL;
  }
  if ( !a3 )
  {
    if ( *(_WORD *)v11 == *a2 && !memcmp(v11, a2, 4LL * v11[1] + 8) )
      return v6;
    goto LABEL_10;
  }
  if ( v7 < *a3 || !RtlEqualSid(v11, a2) )
    goto LABEL_10;
  *a3 = v7;
  return v6;
}
