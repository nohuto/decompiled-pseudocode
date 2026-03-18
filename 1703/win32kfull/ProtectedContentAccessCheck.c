/*
 * XREFs of ProtectedContentAccessCheck @ 0x1C0069F44
 * Callers:
 *     ValidateNewParent @ 0x1C0069E64 (ValidateNewParent.c)
 * Callees:
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall ProtectedContentAccessCheck(__int64 a1)
{
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int8 Prop; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rsi

  v2 = a1;
  if ( a1 )
  {
    do
    {
      v3 = *(_QWORD *)(v2 + 104);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v2 + 24);
        v5 = 0LL;
        if ( v4 )
        {
          v6 = *(_QWORD *)(v4 + 8);
          if ( v6 )
            v5 = *(_QWORD *)(v6 + 16);
        }
        if ( v3 == v5 )
          break;
      }
      v2 = *(_QWORD *)(v2 + 104);
    }
    while ( v3 );
  }
  if ( !v2 )
    return 1LL;
  if ( *(char *)(v2 + 306) < 0 )
  {
    v13 = *(_QWORD *)(v2 + 16);
    if ( *(_QWORD *)(v13 + 1272) )
      v2 = *(_QWORD *)(v13 + 1272);
  }
  Prop = GetProp(v2, atomDispAffinity, 1);
  if ( (Prop & (unsigned __int8)v11) == 0 )
    return v11;
  v14 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 376LL);
  return v14 == PsGetCurrentProcessWin32Process(v10, v9)
      || v14 == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) && (*(_DWORD *)(gptiCurrent + 1096LL) & 0x40000) != 0;
}
