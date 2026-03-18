/*
 * XREFs of RtlpCompareKnownObjectAces @ 0x1406E9ED8
 * Callers:
 *     RtlpIsDuplicateAce @ 0x1404726C0 (RtlpIsDuplicateAce.c)
 * Callees:
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 */

bool __fastcall RtlpCompareKnownObjectAces(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v2; // r8
  int v4; // esi
  _DWORD *v5; // r10
  int v6; // r14d
  unsigned __int8 *v7; // r9
  int v8; // edi
  _DWORD *v9; // r8
  unsigned __int8 *v10; // rdx

  v2 = *a2;
  if ( *((_BYTE *)&RtlBaseAceType + v2) != *((_BYTE *)&RtlBaseAceType + *a1)
    || *((_BYTE *)&RtlIsSystemAceType + v2) && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
  {
    return 0;
  }
  v4 = *((_DWORD *)a2 + 2) & 1;
  v5 = (_DWORD *)((unsigned __int64)(a2 + 12) & -(__int64)(v4 != 0));
  v6 = *((_DWORD *)a2 + 2) & 2;
  if ( v6 )
    v7 = &a2[(v4 != 0 ? 0x10 : 0) + 12];
  else
    v7 = 0LL;
  v8 = *((_DWORD *)a1 + 2) & 1;
  v9 = (_DWORD *)((unsigned __int64)(a1 + 12) & -(__int64)(v8 != 0));
  if ( (*((_DWORD *)a1 + 2) & 2) != 0 )
    v10 = &a1[(v8 != 0 ? 0x10 : 0) + 12];
  else
    v10 = 0LL;
  if ( v7 )
  {
    if ( !v10
      || *(_DWORD *)v7 != *(_DWORD *)v10
      || *((_DWORD *)v7 + 1) != *((_DWORD *)v10 + 1)
      || *((_DWORD *)v7 + 2) != *((_DWORD *)v10 + 2)
      || *((_DWORD *)v7 + 3) != *((_DWORD *)v10 + 3) )
    {
      return 0;
    }
  }
  else if ( v10 )
  {
    return 0;
  }
  if ( v5 )
  {
    if ( !v9
      || *v5 != *v9
      || v5[1] != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 4)
      || v5[2] != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 8)
      || v5[3] != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 0xC) )
    {
      return 0;
    }
  }
  else if ( v9 )
  {
    return 0;
  }
  return RtlEqualSid(
           &a2[(v6 != 0 ? 0x10 : 0) + (v4 != 0 ? 28LL : 12LL)],
           &a1[((*((_DWORD *)a1 + 2) & 2) != 0 ? 0x10 : 0) + (v8 != 0 ? 28LL : 12LL)]) != 0;
}
