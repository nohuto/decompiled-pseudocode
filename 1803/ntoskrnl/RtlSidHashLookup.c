/*
 * XREFs of RtlSidHashLookup @ 0x14005E820
 * Callers:
 *     SepSidInTokenSidHash @ 0x14005E750 (SepSidInTokenSidHash.c)
 * Callees:
 *     memcmp @ 0x140189130 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  unsigned __int8 v4; // bp
  unsigned int v5; // r13d
  __int16 v6; // r14
  unsigned int v7; // eax
  unsigned __int64 i; // rsi
  unsigned int SidCount; // esi
  int v11; // r12d
  _SID_AND_ATTRIBUTES *SidAttr; // rcx
  int v13; // edx
  _SID_AND_ATTRIBUTES *v14; // r15
  _SID_AND_ATTRIBUTES *v15; // r15
  unsigned int v16; // ebp
  const void **p_Sid; // rdi
  int v18; // [rsp+60h] [rbp+8h]
  _SID_AND_ATTRIBUTES *v19; // [rsp+70h] [rbp+18h]

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = 0;
  v5 = 4 * *((unsigned __int8 *)Sid + 1) + 8;
  v6 = *(_WORD *)Sid;
  v7 = *((unsigned __int8 *)Sid + 4 * (unsigned __int8)HIBYTE(*(_WORD *)Sid) + 4);
  for ( i = SidAttrHash->Hash[v7 & 0xF] & SidAttrHash->Hash[(v7 >> 4) + 16]; i; i >>= 8 )
  {
    LOBYTE(v11) = i;
    if ( (_BYTE)i )
    {
      SidAttr = SidAttrHash->SidAttr;
      v19 = SidAttr;
      v13 = v4;
      do
      {
        v18 = SidHashByteToIndexLookupTable[(unsigned __int8)v11];
        v14 = &SidAttr[v13 + v18];
        if ( *(_WORD *)v14->Sid == v6 )
        {
          if ( !memcmp(Sid, v14->Sid, v5) )
            return v14;
          SidAttr = v19;
          v13 = v4;
        }
        v11 = (unsigned __int8)v11 ^ (1 << v18);
      }
      while ( (_BYTE)v11 );
    }
    v4 += 8;
  }
  SidCount = SidAttrHash->SidCount;
  if ( SidAttrHash->SidCount <= 0x40 )
    return 0LL;
  v15 = SidAttrHash->SidAttr;
  v16 = 64;
  while ( 1 )
  {
    p_Sid = (const void **)&v15[v16].Sid;
    if ( *(_WORD *)*p_Sid == v6 && !memcmp(Sid, *p_Sid, v5) )
      break;
    if ( ++v16 >= SidCount )
      return 0LL;
  }
  return &v15[v16];
}
