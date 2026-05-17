/*
 * XREFs of RtlFindAceBySid @ 0x1800E74F4
 * Callers:
 *     RtlpSetSecurityObject @ 0x18005A120 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x18005C240 (RtlEqualSid.c)
 */

__int64 __fastcall RtlFindAceBySid(__int64 a1, _WORD *a2, unsigned int *a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rbx
  unsigned int v7; // edi
  int v8; // edx
  __int64 v9; // rcx

  if ( !a1 )
    return 0LL;
  v5 = *(unsigned __int16 *)(a1 + 4);
  v6 = a1 + 8;
  v7 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  while ( 1 )
  {
    LOBYTE(a1) = *(_BYTE *)v6;
    if ( *(_BYTE *)v6 <= 0x15u && (v8 = 4089359, _bittest(&v8, a1)) )
    {
      v9 = 8LL;
    }
    else if ( (_BYTE)a1 == 4 )
    {
      v9 = 12LL;
    }
    else
    {
      if ( (unsigned __int8)(a1 - 5) > 3u && (unsigned __int8)(a1 - 11) > 1u && (unsigned __int8)(a1 - 15) > 1u )
        goto LABEL_18;
      v9 = 16LL * (*(_DWORD *)(v6 + 8) & 1) + ((8LL * (*(_DWORD *)(v6 + 8) & 2)) | 0xC);
    }
    a1 = v6 + v9;
    if ( a1 )
      break;
LABEL_18:
    ++v7;
    v6 += *(unsigned __int16 *)(v6 + 2);
    if ( v7 >= v5 )
      return 0LL;
  }
  if ( !a3 )
  {
    if ( RtlEqualSid((unsigned __int8 *)a1, a2) )
      return v6;
    goto LABEL_18;
  }
  if ( v7 < *a3 || !RtlEqualSid((unsigned __int8 *)a1, a2) )
    goto LABEL_18;
  *a3 = v7;
  return v6;
}
