/*
 * XREFs of SepCreateImpersonationTokenDacl @ 0x14050BEC0
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140510670 (NtOpenThreadTokenEx.c)
 * Callees:
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlpAddKnownAce @ 0x14050C130 (RtlpAddKnownAce.c)
 */

__int64 __fastcall SepCreateImpersonationTokenDacl(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 *v6; // r14
  unsigned __int8 *v7; // rbp
  unsigned __int8 *v8; // rdi
  unsigned int v9; // esi
  _WORD *PoolWithTag; // rbx
  void *Src; // [rsp+78h] [rbp+10h]

  v6 = 0LL;
  v7 = 0LL;
  Src = **(void ***)(a2 + 152);
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
    v7 = *(unsigned __int8 **)(a2 + 784);
  v8 = **(unsigned __int8 ***)(a1 + 152);
  if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
    v6 = *(unsigned __int8 **)(a1 + 784);
  v9 = 4
     * (*(unsigned __int8 *)(**(_QWORD **)(a2 + 152) + 1LL)
      + v8[1]
      + *((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeRestrictedSid + 1))
     + 88;
  if ( v6 )
    v9 += 4 * v6[1] + 16;
  if ( v7 )
  {
    if ( v6 && RtlEqualSid(v7, v6) )
      v7 = 0LL;
    else
      v9 += 4 * v7[1] + 16;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x20206553u);
  if ( PoolWithTag )
  {
    if ( v9 - 8 <= 0xFFF4 )
    {
      memset(PoolWithTag, 0, v9);
      *PoolWithTag = 2;
      PoolWithTag[1] = v9 & 0xFFFC;
      *((_DWORD *)PoolWithTag + 1) = 0;
    }
    RtlpAddKnownAce((int)PoolWithTag, 2, 0, 983551, Src, 0);
    RtlpAddKnownAce((int)PoolWithTag, 2, 0, 983551, v8, 0);
    RtlpAddKnownAce((int)PoolWithTag, 2, 0, 983551, SeAliasAdminsSid, 0);
    RtlpAddKnownAce((int)PoolWithTag, 2, 0, 983551, SeLocalSystemSid, 0);
    if ( v6 )
      RtlpAddKnownAce((int)PoolWithTag, 2, 0, 983551, v6, 0);
    if ( v7 )
      RtlpAddKnownAce((int)PoolWithTag, 2, 0, 983551, v7, 0);
    if ( *(_QWORD *)(a2 + 160) || *(_QWORD *)(a1 + 160) )
      RtlpAddKnownAce((int)PoolWithTag, 2, 0, 983551, SeRestrictedSid, 0);
    *a3 = PoolWithTag;
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    return 3221225626LL;
  }
}
