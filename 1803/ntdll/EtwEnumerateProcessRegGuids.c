/*
 * XREFs of EtwEnumerateProcessRegGuids @ 0x180106590
 * Callers:
 *     <none>
 * Callees:
 *     sub_180005A98 @ 0x180005A98 (sub_180005A98.c)
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall EtwEnumerateProcessRegGuids(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  unsigned int v9; // r9d
  unsigned int i; // eax
  __int64 v11; // r8
  __int64 v12; // rdx

  v5 = a2 >> 4;
  v6 = 0;
  if ( !a1 && a2 )
    return 87LL;
  v8 = 0LL;
LABEL_5:
  while ( 1 )
  {
    v8 = sub_180005A98(v8);
    if ( !v8 )
      break;
    v9 = v6;
    if ( v6 >= v5 )
      v9 = v5;
    for ( i = 0; i < v9; ++i )
    {
      v11 = 16LL * i;
      v12 = *(_QWORD *)(v8 + 32) - *(_QWORD *)(v11 + a1);
      if ( !v12 )
        v12 = *(_QWORD *)(v8 + 40) - *(_QWORD *)(v11 + a1 + 8);
      if ( !v12 )
        goto LABEL_5;
    }
    if ( v6 < v5 )
      *(_OWORD *)(16LL * v6 + a1) = *(_OWORD *)(v8 + 32);
    ++v6;
  }
  result = v5 < v6 ? 0x7A : 0;
  *a3 = 16 * v6;
  return result;
}
