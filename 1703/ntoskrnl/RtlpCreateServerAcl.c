/*
 * XREFs of RtlpCreateServerAcl @ 0x1406EA480
 * Callers:
 *     RtlpSetSecurityObject @ 0x1404F50F0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 */

__int64 __fastcall RtlpCreateServerAcl(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  unsigned __int16 v8; // bx
  unsigned __int16 *v9; // rdi
  unsigned int v10; // eax
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  __int64 i; // r9
  __int16 v14; // ax
  __int16 v15; // r8
  __int64 v16; // rax
  ACL *PoolWithTag; // rax
  unsigned int v19; // ebp
  ACL *v20; // r15
  ACL *v21; // rbx
  char v22; // al
  ACL *v23; // r12
  unsigned __int8 *v24; // r14
  USHORT *p_AceCount; // rbx
  char *v26; // rbx
  __int64 v27; // rax
  __int16 v28; // cx
  ACL *v29; // [rsp+60h] [rbp+8h]

  v8 = 8;
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  v9 = (unsigned __int16 *)(a1 + 8);
  v10 = *(unsigned __int16 *)(a1 + 4);
  v11 = 4 * (a3[1] + 2);
  v12 = a1 + 8;
  if ( *(_WORD *)(a1 + 4) )
  {
    for ( i = v10; i; --i )
    {
      if ( *(_BYTE *)v12 )
      {
        if ( !a2 || *(_BYTE *)v12 != 4 )
          goto LABEL_13;
        v15 = 4 * *(unsigned __int8 *)(v12 + 13);
        if ( (unsigned __int16)(v15 + 8) <= v11 )
          v14 = v11 - v15 - 8;
        else
          v14 = v15 + 8 - v11;
      }
      else
      {
        v14 = v11 + 4;
      }
      v8 += v14;
LABEL_13:
      v16 = *(unsigned __int16 *)(v12 + 2);
      v8 += v16;
      v12 += v16;
    }
  }
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x63416553u);
  *a4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *a5 = 1;
  RtlCreateAcl(PoolWithTag, v8, 3u);
  v19 = 0;
  v20 = *a4;
  v29 = *a4;
  v21 = *a4 + 1;
  if ( *(_WORD *)(a1 + 4) )
  {
    do
    {
      v22 = *(_BYTE *)v9;
      if ( !*(_BYTE *)v9 || a2 && v22 == 4 )
      {
        v23 = v21;
        if ( v22 )
          v24 = (unsigned __int8 *)v9 + RtlLengthSid(v9 + 6) + 12;
        else
          v24 = (unsigned __int8 *)(v9 + 4);
        *v21 = *(ACL *)v9;
        p_AceCount = &v21[1].AceCount;
        memmove(p_AceCount, a3, 4LL * a3[1] + 8);
        v26 = (char *)p_AceCount + (unsigned __int8)(4 * (a3[1] + 2));
        memmove(v26, v24, 4LL * v24[1] + 8);
        v27 = v24[1];
        v28 = a3[1];
        v23->AclRevision = 4;
        v23->AclSize = 4 * (v27 + v28 + 7);
        v21 = (ACL *)&v26[4 * v27 + 8];
        *(_WORD *)&v23[1].AclRevision = 1;
      }
      else
      {
        memmove(v21, v9, v9[1]);
        v21 = (ACL *)((char *)v21 + v9[1]);
      }
      ++v19;
      v9 = (unsigned __int16 *)((char *)v9 + v9[1]);
    }
    while ( v19 < *(unsigned __int16 *)(a1 + 4) );
    v20 = v29;
  }
  v20->AceCount = *(_WORD *)(a1 + 4);
  return 0LL;
}
