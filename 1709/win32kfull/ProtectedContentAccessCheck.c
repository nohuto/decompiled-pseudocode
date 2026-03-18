/*
 * XREFs of ProtectedContentAccessCheck @ 0x1C0072C34
 * Callers:
 *     ValidateNewParent @ 0x1C0072B58 (ValidateNewParent.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

__int64 __fastcall ProtectedContentAccessCheck(__int64 a1)
{
  __int64 v2; // r11
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int8 Prop; // al
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // rsi

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
    v12 = *(_QWORD *)(v2 + 16);
    if ( *(_QWORD *)(v12 + 1360) )
      v2 = *(_QWORD *)(v12 + 1360);
  }
  Prop = GetProp(v2, (unsigned __int16)atomDispAffinity, 1LL);
  if ( (Prop & (unsigned __int8)v10) == 0 )
    return v10;
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 400LL);
  return v13 == PsGetCurrentProcessWin32Process(v9)
      || v13 == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) && (*(_DWORD *)(gptiCurrent + 1184LL) & 0x40000) != 0;
}
