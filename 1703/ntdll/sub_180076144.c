/*
 * XREFs of sub_180076144 @ 0x180076144
 * Callers:
 *     sub_180075EA0 @ 0x180075EA0 (sub_180075EA0.c)
 *     sub_180075FD4 @ 0x180075FD4 (sub_180075FD4.c)
 *     LdrGetFileNameFromLoadAsDataTable @ 0x1800E1860 (LdrGetFileNameFromLoadAsDataTable.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18002FBD4 @ 0x18002FBD4 (sub_18002FBD4.c)
 */

__int64 __fastcall sub_180076144(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  int v7; // ecx
  __int64 v8; // r8

  if ( !a1 || !a2 )
    return 3221225485LL;
  v6 = -1073741823;
  sub_18002FBD4(dword_18015A270, (__int64)&unk_18015A220, a3, a4);
  RtlEnterCriticalSection((__int64)&unk_18015A220);
  v7 = dword_18015A254;
  if ( dword_18015A254 )
  {
    v8 = qword_18015A248;
    while ( v7 > 0 )
    {
      if ( *(_QWORD *)(v8 + 48LL * --v7) == a1 )
      {
        if ( *(_QWORD *)(v8 + 48LL * v7 + 8) )
        {
          *a2 = *(_OWORD *)(v8 + 48LL * v7);
          a2[1] = *(_OWORD *)(v8 + 48LL * v7 + 16);
          a2[2] = *(_OWORD *)(v8 + 48LL * v7 + 32);
          v6 = 0;
        }
      }
    }
  }
  RtlLeaveCriticalSection((__int64)&unk_18015A220);
  return v6;
}
