/*
 * XREFs of ??8CAecAttributes@@UEBA_NAEBVCStreamGroupAttributes@@@Z @ 0x1800D5970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAecAttributes::operator==(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // edx

  if ( *(_DWORD *)(a1 + 8) != *(_DWORD *)(a2 + 8) || *(_DWORD *)(a2 + 28) != *(_DWORD *)(a1 + 28) )
    return 0;
  v4 = *(unsigned __int16 **)(a1 + 16);
  v5 = *(_QWORD *)(a2 + 16);
  if ( !v4 )
  {
    if ( !v5 )
      return *(_DWORD *)(a1 + 24) == *(_DWORD *)(a2 + 24);
    return 0;
  }
  if ( !v5 )
    return 0;
  v7 = v5 - (_QWORD)v4;
  do
  {
    v8 = *(unsigned __int16 *)((char *)v4 + v7);
    v9 = *v4 - v8;
    if ( v9 )
      break;
    ++v4;
  }
  while ( v8 );
  return v9 == 0;
}
