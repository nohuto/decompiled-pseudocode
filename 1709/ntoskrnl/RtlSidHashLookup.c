/*
 * XREFs of RtlSidHashLookup @ 0x14006A190
 * Callers:
 *     SepSidInTokenSidHash @ 0x140068A00 (SepSidInTokenSidHash.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 * Callees:
 *     memcmp @ 0x14015F370 (memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  __int64 v4; // rax
  unsigned __int8 v5; // bp
  unsigned int v6; // r12d
  __int16 v7; // r15
  unsigned int v8; // edx
  unsigned __int64 i; // rsi
  unsigned int SidCount; // esi
  int v12; // r13d
  _SID_AND_ATTRIBUTES *SidAttr; // rcx
  int v14; // edx
  _SID_AND_ATTRIBUTES *v15; // r14
  unsigned int v16; // ebp
  _SID_AND_ATTRIBUTES *v17; // r14
  const void **p_Sid; // rdi
  int v19; // [rsp+60h] [rbp+8h]
  _SID_AND_ATTRIBUTES *v20; // [rsp+70h] [rbp+18h]

  if ( !SidAttrHash || !Sid )
    return 0LL;
  v4 = *((unsigned __int8 *)Sid + 1);
  v5 = 0;
  v6 = 4 * v4 + 8;
  v7 = *(_WORD *)Sid;
  v8 = *((unsigned __int8 *)Sid + 4 * v4 + 4);
  for ( i = SidAttrHash->Hash[v8 & 0xF] & SidAttrHash->Hash[(v8 >> 4) + 16]; i; i >>= 8 )
  {
    LOBYTE(v12) = i;
    if ( (_BYTE)i )
    {
      SidAttr = SidAttrHash->SidAttr;
      v20 = SidAttr;
      v14 = v5;
      do
      {
        v19 = SidHashByteToIndexLookupTable[(unsigned __int8)v12];
        v15 = &SidAttr[v14 + v19];
        if ( *(_WORD *)v15->Sid == v7 )
        {
          if ( !memcmp(Sid, v15->Sid, v6) )
            return v15;
          SidAttr = v20;
          v14 = v5;
        }
        v12 = (unsigned __int8)v12 ^ (1 << v19);
      }
      while ( (_BYTE)v12 );
    }
    v5 += 8;
  }
  SidCount = SidAttrHash->SidCount;
  if ( SidAttrHash->SidCount <= 0x40 )
    return 0LL;
  v16 = 64;
  v17 = SidAttrHash->SidAttr;
  while ( 1 )
  {
    p_Sid = (const void **)&v17[v16].Sid;
    if ( *(_WORD *)*p_Sid == v7 && !memcmp(Sid, *p_Sid, v6) )
      break;
    if ( ++v16 >= SidCount )
      return 0LL;
  }
  return &v17[v16];
}
