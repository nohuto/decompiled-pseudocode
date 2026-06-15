/*
 * XREFs of ??8CAecAttributes@@UEBA_NAEBVCStreamGroupAttributes@@@Z @ 0x1800AE2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAecAttributes::operator==(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  int v6; // edx
  int v7; // ecx

  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8) || *(_DWORD *)(a2 + 28) != *(_DWORD *)(a1 + 28) )
    return 0;
  v3 = *(unsigned __int16 **)(a1 + 16);
  if ( !v3 )
  {
    if ( !*(_QWORD *)(a2 + 16) )
      return *(_DWORD *)(a1 + 24) == *(_DWORD *)(a2 + 24);
    return 0;
  }
  if ( !*(_QWORD *)(a2 + 16) )
    return 0;
  v4 = *(_QWORD *)(a2 + 16);
  if ( !v4 )
    return *(_DWORD *)(a1 + 24) == *(_DWORD *)(a2 + 24);
  v5 = v4 - (_QWORD)v3;
  do
  {
    v6 = *(unsigned __int16 *)((char *)v3 + v5);
    v7 = *v3 - v6;
    if ( v7 )
      break;
    ++v3;
  }
  while ( v6 );
  return v7 == 0;
}
