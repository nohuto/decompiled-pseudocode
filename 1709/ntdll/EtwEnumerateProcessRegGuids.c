/*
 * XREFs of EtwEnumerateProcessRegGuids @ 0x1801092B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     EtwpGetNextRegistration @ 0x180063EF4 (EtwpGetNextRegistration.c)
 */

ULONG __cdecl EtwEnumerateProcessRegGuids(PVOID OutBuffer, ULONG OutBufferSize, PULONG ReturnLength)
{
  ULONG v5; // edi
  ULONG v6; // ebx
  ULONG result; // eax
  __int64 i; // rax
  _RTL_SRWLOCK *v9; // rcx
  ULONG v10; // r9d
  ULONG j; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx

  v5 = OutBufferSize >> 4;
  v6 = 0;
  if ( !OutBuffer && OutBufferSize )
    return 87;
  for ( i = EtwpGetNextRegistration(0LL); ; i = EtwpGetNextRegistration(v9) )
  {
    v9 = (_RTL_SRWLOCK *)i;
    if ( !i )
      break;
    v10 = v5;
    if ( v6 < v5 )
      v10 = v6;
    for ( j = 0; j < v10; ++j )
    {
      v12 = 16LL * j;
      v13 = v9[4].Value - *(_QWORD *)((char *)OutBuffer + v12);
      if ( !v13 )
        v13 = v9[5].Value - *(_QWORD *)((char *)OutBuffer + v12 + 8);
      if ( !v13 )
        goto LABEL_17;
    }
    if ( v6 < v5 )
      *((_OWORD *)OutBuffer + v6) = *(_OWORD *)&v9[4].0;
    ++v6;
LABEL_17:
    ;
  }
  result = v5 < v6 ? 0x7A : 0;
  *ReturnLength = 16 * v6;
  return result;
}
