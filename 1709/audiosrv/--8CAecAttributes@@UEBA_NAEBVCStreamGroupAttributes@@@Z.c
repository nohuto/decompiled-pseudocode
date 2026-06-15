/*
 * XREFs of ??8CAecAttributes@@UEBA_NAEBVCStreamGroupAttributes@@@Z @ 0x18009E460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAecAttributes::operator==(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rax
  __int64 v5; // r8
  __int64 v6; // r8
  int v7; // edx
  int v8; // ecx

  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8) || *(_DWORD *)(a2 + 28) != *(_DWORD *)(a1 + 28) )
    return 0;
  v3 = *(unsigned __int16 **)(a1 + 16);
  if ( !v3 )
  {
    if ( !*(_QWORD *)(a2 + 16) )
      return *(_DWORD *)(a1 + 24) == *(_DWORD *)(a2 + 24);
    return 0;
  }
  v5 = *(_QWORD *)(a2 + 16);
  if ( !v5 )
    return 0;
  v6 = v5 - (_QWORD)v3;
  do
  {
    v7 = *(unsigned __int16 *)((char *)v3 + v6);
    v8 = *v3 - v7;
    if ( v8 )
      break;
    ++v3;
  }
  while ( v7 );
  return v8 == 0;
}
