/*
 * XREFs of EtwpFindRegistration @ 0x180063FBC
 * Callers:
 *     EtwDeliverDataBlock @ 0x180063BC0 (EtwDeliverDataBlock.c)
 * Callees:
 *     EtwpRegistrationCompare @ 0x180036CAC (EtwpRegistrationCompare.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x180069730 (RtlTryAcquireSRWLockShared.c)
 */

_QWORD *__fastcall EtwpFindRegistration(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // esi
  _QWORD *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int16 v13; // [rsp+28h] [rbp-10h]

  v12 = a1;
  v13 = a2;
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  v4 = EtwpRegistrationTable;
  v5 = qword_180160410 & 1;
  v6 = 0LL;
  while ( v4 )
  {
    v7 = EtwpRegistrationCompare((__int64)&v12, v4);
    if ( v7 >= 0 )
    {
      if ( v7 > 0 )
      {
        v8 = *(_QWORD *)(v4 + 8);
        goto LABEL_6;
      }
      v6 = (_QWORD *)v4;
    }
    v8 = *(_QWORD *)v4;
LABEL_6:
    if ( v5 && v8 )
      v4 ^= v8;
    else
      v4 = v8;
  }
  if ( v6 )
  {
    while ( !(unsigned __int8)RtlTryAcquireSRWLockShared(v6 + 9) )
    {
      v10 = (_QWORD *)v6[1];
      v11 = v6;
      if ( v10 )
      {
        do
        {
          v6 = v10;
          v10 = (_QWORD *)*v10;
        }
        while ( v10 );
      }
      else
      {
        while ( 1 )
        {
          v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v6 || (_QWORD *)*v6 == v11 )
            break;
          v11 = v6;
        }
      }
      if ( !v6 || EtwpRegistrationCompare((__int64)&v12, (__int64)v6) )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v6 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return v6;
}
