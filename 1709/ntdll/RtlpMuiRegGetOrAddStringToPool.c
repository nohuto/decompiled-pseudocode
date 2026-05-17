/*
 * XREFs of RtlpMuiRegGetOrAddStringToPool @ 0x1800517D0
 * Callers:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800516DC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800FCCB0 (RtlpMuiRegGetOrAddString.c)
 * Callees:
 *     RtlpMuiRegGetStringIndexInPool @ 0x180052408 (RtlpMuiRegGetStringIndexInPool.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddStringToPool(__int64 a1, _WORD *a2, char a3, _DWORD *a4)
{
  int StringIndexInPool; // eax
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int16 v14; // cx
  __int64 v15; // rax

  StringIndexInPool = RtlpMuiRegGetStringIndexInPool();
  LODWORD(v9) = StringIndexInPool;
  if ( a4 )
    *a4 = 0;
  if ( StringIndexInPool >= 0 )
    return (unsigned int)v9;
  if ( !a1 || !a2 )
    return 0xFFFFFFFFLL;
  v10 = -1LL;
  do
    ++v10;
  while ( a2[v10] );
  v11 = *(unsigned __int16 *)(a1 + 10);
  v12 = v10 + 1;
  if ( v12 + v11 > *(unsigned __int16 *)(a1 + 8) )
  {
    if ( a4 )
      *a4 = v12;
    return 0xFFFFFFFFLL;
  }
  if ( !a3 )
    return 0xFFFFFFFFLL;
  v14 = *(_WORD *)(a1 + 6);
  if ( v14 >= *(_WORD *)(a1 + 4) || !is_mul_ok(v12, 2uLL) )
    return 0xFFFFFFFFLL;
  v9 = v14;
  *(_WORD *)(a1 + 6) = v14 + 1;
  *(_WORD *)(a1 + 10) = v11 + 1;
  memmove((void *)(*(_QWORD *)(a1 + 24) + 2LL * (__int16)v11), a2, 2 * v12);
  v15 = *(_QWORD *)(a1 + 16);
  *(_WORD *)(a1 + 10) += v12;
  *(_WORD *)(v15 + 2 * v9) = v11;
  return (unsigned int)v9;
}
