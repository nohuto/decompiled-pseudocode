/*
 * XREFs of sub_1800E5B10 @ 0x1800E5B10
 * Callers:
 *     sub_18004A198 @ 0x18004A198 (sub_18004A198.c)
 * Callees:
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     RtlEqualPrefixSid @ 0x180049F80 (RtlEqualPrefixSid.c)
 *     RtlEqualSid @ 0x18004A290 (RtlEqualSid.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

char __fastcall sub_1800E5B10(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  __int64 v6; // rcx
  int v9; // r11d
  _DWORD *v10; // r10
  unsigned __int8 *v11; // r9
  int v12; // r15d
  _DWORD *v13; // r8
  unsigned __int8 *v14; // rdx
  __int64 v16; // rbp
  __int64 v17; // r14
  bool v18; // cf
  __int64 v19; // rdi
  int v20; // edx
  void *v21; // rdx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-78h] BYREF
  _BYTE Sid[8]; // [rsp+28h] [rbp-70h] BYREF
  int v24; // [rsp+30h] [rbp-68h]

  v6 = *a2;
  if ( byte_180120FA0[v6] != byte_180120FA0[*a1] || byte_180121000[v6] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  v9 = *((_DWORD *)a2 + 2) & 1;
  v10 = (_DWORD *)((unsigned __int64)(a2 + 12) & -(__int64)(v9 != 0));
  *(_DWORD *)IdentifierAuthority.Value = *((_DWORD *)a2 + 2) & 2;
  if ( *(_DWORD *)IdentifierAuthority.Value )
    v11 = &a2[(v9 != 0 ? 0x10 : 0) + 12];
  else
    v11 = 0LL;
  v12 = *((_DWORD *)a1 + 2) & 1;
  v13 = (_DWORD *)((unsigned __int64)(a1 + 12) & -(__int64)(v12 != 0));
  if ( (*((_DWORD *)a1 + 2) & 2) != 0 )
    v14 = &a1[(v12 != 0 ? 0x10 : 0) + 12];
  else
    v14 = 0LL;
  if ( v11 )
  {
    if ( !v14
      || *(_DWORD *)v11 != *(_DWORD *)v14
      || *((_DWORD *)v11 + 1) != *((_DWORD *)v14 + 1)
      || *((_DWORD *)v11 + 2) != *((_DWORD *)v14 + 2)
      || *((_DWORD *)v11 + 3) != *((_DWORD *)v14 + 3) )
    {
      return 0;
    }
  }
  else if ( v14 )
  {
    return 0;
  }
  if ( v10 )
  {
    if ( !v13
      || *v10 != *v13
      || v10[1] != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 4)
      || v10[2] != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 8)
      || v10[3] != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 0xC) )
    {
      return 0;
    }
  }
  else if ( v13 )
  {
    return 0;
  }
  v16 = (*((_DWORD *)a1 + 2) & 2) != 0 ? 0x10 : 0;
  v17 = v16 + (v12 != 0 ? 28LL : 12LL);
  v18 = *(_DWORD *)IdentifierAuthority.Value != 0;
  *(_DWORD *)IdentifierAuthority.Value = -*(_DWORD *)IdentifierAuthority.Value;
  v19 = (v9 != 0 ? 0x10 : 0) + (v18 ? 28LL : 12LL);
  if ( !RtlEqualSid(&a2[v19], &a1[v17]) )
  {
    if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !a3 && !a4 )
      return 0;
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 768;
    if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) < 0 )
      return 0;
    v24 = 0;
    if ( !RtlEqualPrefixSid(&a1[v17], Sid) )
      return 0;
    v20 = *(_DWORD *)&a1[v16 + (v12 != 0 ? 36LL : 20LL)];
    if ( v20 )
    {
      if ( v20 != 1 || !a4 )
        return 0;
      v21 = a4;
    }
    else
    {
      if ( !a3 )
        return 0;
      v21 = a3;
    }
    if ( !RtlEqualSid(&a2[v19], v21) )
      return 0;
  }
  return 1;
}
