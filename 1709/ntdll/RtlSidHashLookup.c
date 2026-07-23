/*
 * XREFs of RtlSidHashLookup @ 0x18007B800
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x180094960 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  __int64 v4; // rax
  unsigned __int8 v5; // bp
  __int16 v6; // r8
  unsigned int v7; // edx
  unsigned int v8; // r9d
  SID_HASH_ENTRY i; // rbx
  int v10; // esi
  int v11; // r12d
  _SID_AND_ATTRIBUTES *v12; // r15
  DWORD SidCount; // esi
  unsigned int v14; // ebx
  PSID_AND_ATTRIBUTES SidAttr; // rbp
  const void **p_Sid; // rdi
  unsigned int v18; // [rsp+50h] [rbp+8h]

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = *((unsigned __int8 *)Sid + 1);
  v5 = 0;
  v6 = *(_WORD *)Sid;
  v7 = *((unsigned __int8 *)Sid + 4 * v4 + 4);
  v8 = 4 * v4 + 8;
  v18 = v8;
  for ( i = SidAttrHash->Hash[v7 & 0xF] & SidAttrHash->Hash[(v7 >> 4) + 16]; i; i >>= 8 )
  {
    LOBYTE(v10) = i;
    if ( (_BYTE)i )
    {
      do
      {
        v11 = SidHashByteToIndexLookupTable[(unsigned __int8)v10];
        v12 = &SidAttrHash->SidAttr[v11 + (unsigned int)v5];
        if ( *(_WORD *)v12->Sid == v6 )
        {
          if ( !memcmp(Sid, v12->Sid, v8) )
            return v12;
          v6 = *(_WORD *)Sid;
          v8 = v18;
        }
        v10 = (unsigned __int8)v10 ^ (1 << v11);
      }
      while ( (_BYTE)v10 );
    }
    v5 += 8;
  }
  SidCount = SidAttrHash->SidCount;
  v14 = 64;
  if ( SidAttrHash->SidCount <= 0x40 )
    return 0LL;
  SidAttr = SidAttrHash->SidAttr;
  while ( 1 )
  {
    p_Sid = (const void **)&SidAttr[v14].Sid;
    if ( *(_WORD *)*p_Sid != v6 )
      goto LABEL_17;
    if ( !memcmp(Sid, *p_Sid, v8) )
      return &SidAttr[v14];
    v6 = *(_WORD *)Sid;
LABEL_17:
    if ( ++v14 >= SidCount )
      return 0LL;
    v8 = v18;
  }
}
