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

_RTL_SRWLOCK *__fastcall EtwpFindRegistration(__int64 a1, __int16 a2)
{
  __int64 v2; // rdi
  int v3; // esi
  _RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  __int64 v6; // rax
  _RTL_SRWLOCK *Value; // rax
  _RTL_SRWLOCK *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int16 v11; // [rsp+28h] [rbp-10h]

  v10 = a1;
  v11 = a2;
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v2 = (__int64)EtwpRegistrationTable;
  v3 = qword_180160410 & 1;
  v4 = 0LL;
  while ( v2 )
  {
    v5 = EtwpRegistrationCompare((__int64)&v10, v2);
    if ( v5 >= 0 )
    {
      if ( v5 > 0 )
      {
        v6 = *(_QWORD *)(v2 + 8);
        goto LABEL_6;
      }
      v4 = (_RTL_SRWLOCK *)v2;
    }
    v6 = *(_QWORD *)v2;
LABEL_6:
    if ( v3 && v6 )
      v2 ^= v6;
    else
      v2 = v6;
  }
  if ( v4 )
  {
    while ( !RtlTryAcquireSRWLockShared(v4 + 9) )
    {
      Value = (_RTL_SRWLOCK *)v4[1].Value;
      v9 = v4;
      if ( Value )
      {
        do
        {
          v4 = Value;
          Value = (_RTL_SRWLOCK *)Value->Value;
        }
        while ( Value );
      }
      else
      {
        while ( 1 )
        {
          v4 = (_RTL_SRWLOCK *)(v4[2].Value & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || (_RTL_SRWLOCK *)v4->Value == v9 )
            break;
          v9 = v4;
        }
      }
      if ( !v4 || EtwpRegistrationCompare((__int64)&v10, (__int64)v4) )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v4 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
  return v4;
}
