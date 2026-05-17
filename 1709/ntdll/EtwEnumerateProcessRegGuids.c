/*
 * XREFs of EtwEnumerateProcessRegGuids @ 0x1801092B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     EtwpGetNextRegistration @ 0x180063EF4 (EtwpGetNextRegistration.c)
 */

__int64 __fastcall EtwEnumerateProcessRegGuids(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v6; // edi
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 i; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  unsigned int j; // eax

  v6 = (unsigned int)a2 >> 4;
  v7 = 0;
  if ( !a1 && (_DWORD)a2 )
    return 87LL;
  for ( i = EtwpGetNextRegistration(0LL, a2, a3, a4); ; i = EtwpGetNextRegistration(v12, v10, v11, v13) )
  {
    v12 = i;
    if ( !i )
      break;
    v13 = v6;
    if ( v7 < v6 )
      v13 = v7;
    for ( j = 0; j < (unsigned int)v13; ++j )
    {
      v11 = (unsigned __int64 *)(16LL * j);
      v10 = *(_QWORD *)(v12 + 32) - *(unsigned __int64 *)((char *)v11 + a1);
      if ( !v10 )
        v10 = *(_QWORD *)(v12 + 40) - *(unsigned __int64 *)((char *)v11 + a1 + 8);
      if ( !v10 )
        goto LABEL_17;
    }
    if ( v7 < v6 )
      *(_OWORD *)(16LL * v7 + a1) = *(_OWORD *)(v12 + 32);
    ++v7;
LABEL_17:
    ;
  }
  result = v6 < v7 ? 0x7A : 0;
  *(_DWORD *)a3 = 16 * v7;
  return result;
}
