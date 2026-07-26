/*
 * XREFs of ndisOidPrePMParameters @ 0x1C00ADD80
 * Callers:
 *     <none>
 * Callees:
 *     ndisPreSetPMParameters @ 0x1C00ADE04 (ndisPreSetPMParameters.c)
 *     ndisPreQueryPMParameters @ 0x1C00E071C (ndisPreQueryPMParameters.c)
 */

char __fastcall ndisOidPrePMParameters(__int64 a1)
{
  __int64 v1; // rax
  char v2; // dl
  __int64 v3; // r9
  __int64 v4; // r8
  int v5; // eax
  __int64 v8; // r8
  unsigned __int8 v9; // al
  __int64 v10; // rax
  unsigned __int8 v11; // r8

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (!v1 || (v8 = *(_QWORD *)(v1 + 24), v9 = *(_BYTE *)(v8 + 56), v9 > 6u) || v9 == 6 && *(_BYTE *)(v8 + 57) >= 0x14u)
    && ((v4 = *(_QWORD *)(a1 + 8)) == 0
     || (*(_DWORD *)(v3 + 88) & 0x4000) != 0
     || (v10 = *(_QWORD *)(v4 + 16), v11 = *(_BYTE *)(v10 + 100), v11 > 6u)
     || v11 == 6 && *(_BYTE *)(v10 + 101) >= 0x14u) )
  {
    v5 = *(_DWORD *)(v3 + 4);
    if ( (v5 & 0xFFFFFFFD) == 0 )
      return ndisPreQueryPMParameters(a1, 1LL);
    if ( v5 != 1 )
    {
      *(_DWORD *)(a1 + 40) = -1073676267;
      return v2;
    }
    return ndisPreSetPMParameters(a1, 1LL);
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  return v2;
}
