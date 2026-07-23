/*
 * XREFs of EtwEnumerateProcessRegGuids @ 0x180104330
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_180052724 @ 0x180052724 (sub_180052724.c)
 */

ULONG __cdecl EtwEnumerateProcessRegGuids(PVOID OutBuffer, ULONG OutBufferSize, PULONG ReturnLength)
{
  ULONG v5; // ebx
  ULONG v6; // esi
  ULONG v7; // edi
  __int64 i; // rax
  _RTL_SRWLOCK *v10; // rcx
  ULONG v11; // r9d
  ULONG j; // eax
  __int64 v13; // r8
  char *v14; // rdx

  v5 = 0;
  v6 = OutBufferSize >> 4;
  v7 = 0;
  if ( !OutBuffer && OutBufferSize )
    return 87;
  for ( i = sub_180052724(0LL); ; i = sub_180052724(v10) )
  {
    v10 = (_RTL_SRWLOCK *)i;
    if ( !i )
      break;
    v11 = v6;
    if ( v7 < v6 )
      v11 = v7;
    for ( j = 0; j < v11; ++j )
    {
      v13 = 16LL * j;
      v14 = (char *)v10[4].Ptr - *(_QWORD *)((char *)OutBuffer + v13);
      if ( !v14 )
        v14 = (char *)v10[5].Ptr - *(_QWORD *)((char *)OutBuffer + v13 + 8);
      if ( !v14 )
        goto LABEL_17;
    }
    if ( v7 < v6 )
      *((_OWORD *)OutBuffer + v7) = *(_OWORD *)&v10[4].Ptr;
    ++v7;
LABEL_17:
    ;
  }
  if ( v7 > v6 )
    v5 = 122;
  *ReturnLength = 16 * v7;
  return v5;
}
