/*
 * XREFs of RtlpCompareKnownObjectAces @ 0x140721DE8
 * Callers:
 *     RtlpIsDuplicateAce @ 0x1404C0AD0 (RtlpIsDuplicateAce.c)
 * Callees:
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 */

bool __fastcall RtlpCompareKnownObjectAces(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v3; // r8
  unsigned int v5; // edi
  _DWORD *v6; // r9
  int v7; // ebp
  unsigned __int8 *v8; // r8
  unsigned int v9; // ebx
  _DWORD *v10; // rdx
  int v11; // esi
  unsigned __int8 *v12; // rcx

  v3 = *a2;
  if ( *((_BYTE *)&RtlBaseAceType + v3) != *((_BYTE *)&RtlBaseAceType + *a1)
    || *((_BYTE *)&RtlIsSystemAceType + v3) && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
  {
    return 0;
  }
  v5 = *((_DWORD *)a2 + 2) & 1;
  v6 = (_DWORD *)((unsigned __int64)(a2 + 12) & -(__int64)(v5 != 0));
  v7 = *((_DWORD *)a2 + 2) & 2;
  if ( v7 )
    v8 = &a2[16 * v5 + 12];
  else
    v8 = 0LL;
  v9 = *((_DWORD *)a1 + 2) & 1;
  v10 = (_DWORD *)((unsigned __int64)(a1 + 12) & -(__int64)(v9 != 0));
  v11 = *((_DWORD *)a1 + 2) & 2;
  if ( v11 )
    v12 = &a1[16 * v9 + 12];
  else
    v12 = 0LL;
  if ( v8 )
  {
    if ( !v12
      || *(_DWORD *)v8 != *(_DWORD *)v12
      || *((_DWORD *)v8 + 1) != *((_DWORD *)v12 + 1)
      || *((_DWORD *)v8 + 2) != *((_DWORD *)v12 + 2)
      || *((_DWORD *)v8 + 3) != *((_DWORD *)v12 + 3) )
    {
      return 0;
    }
  }
  else if ( v12 )
  {
    return 0;
  }
  if ( v6 )
  {
    if ( !v10
      || *v6 != *v10
      || v6[1] != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 4)
      || v6[2] != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 8)
      || v6[3] != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 0xC) )
    {
      return 0;
    }
  }
  else if ( v10 )
  {
    return 0;
  }
  return RtlEqualSid(&a2[16 * v5 + (v7 != 0 ? 28LL : 12LL)], &a1[16 * v9 + 12 + (v11 != 0 ? 0x10 : 0)]) != 0;
}
