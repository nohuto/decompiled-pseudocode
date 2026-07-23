/*
 * XREFs of RtlSidHashLookup @ 0x18007CC90
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x18008EED0 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  unsigned __int8 v4; // bp
  __int16 v5; // r8
  unsigned int v6; // r9d
  unsigned int v7; // eax
  SID_HASH_ENTRY i; // rsi
  int v9; // edi
  int v10; // r12d
  _SID_AND_ATTRIBUTES *v11; // r15
  DWORD SidCount; // esi
  unsigned int v13; // edi
  PSID_AND_ATTRIBUTES SidAttr; // rbp
  const void **p_Sid; // rbx
  unsigned int v17; // [rsp+50h] [rbp+8h]

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = 0;
  v5 = *(_WORD *)Sid;
  v6 = 4 * *((unsigned __int8 *)Sid + 1) + 8;
  v17 = v6;
  v7 = *((unsigned __int8 *)Sid + 4 * (unsigned __int8)HIBYTE(*(_WORD *)Sid) + 4);
  for ( i = SidAttrHash->Hash[v7 & 0xF] & SidAttrHash->Hash[(v7 >> 4) + 16]; i; i >>= 8 )
  {
    LOBYTE(v9) = i;
    if ( (_BYTE)i )
    {
      do
      {
        v10 = byte_18011A360[(unsigned __int8)v9];
        v11 = &SidAttrHash->SidAttr[v10 + (unsigned int)v4];
        if ( *(_WORD *)v11->Sid == v5 )
        {
          if ( !memcmp(Sid, v11->Sid, v6) )
            return v11;
          v5 = *(_WORD *)Sid;
          v6 = v17;
        }
        v9 = (unsigned __int8)v9 ^ (1 << v10);
      }
      while ( (_BYTE)v9 );
    }
    v4 += 8;
  }
  SidCount = SidAttrHash->SidCount;
  v13 = 64;
  if ( SidAttrHash->SidCount <= 0x40 )
    return 0LL;
  SidAttr = SidAttrHash->SidAttr;
  while ( 1 )
  {
    p_Sid = (const void **)&SidAttr[v13].Sid;
    if ( *(_WORD *)*p_Sid != v5 )
      goto LABEL_17;
    if ( !memcmp(Sid, *p_Sid, v6) )
      return &SidAttr[v13];
    v5 = *(_WORD *)Sid;
LABEL_17:
    if ( ++v13 >= SidCount )
      return 0LL;
    v6 = v17;
  }
}
