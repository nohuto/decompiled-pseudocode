/*
 * XREFs of EtwpInsertRegistration @ 0x180036BF0
 * Callers:
 *     EtwNotificationRegister @ 0x1800366A0 (EtwNotificationRegister.c)
 * Callees:
 *     EtwpRegistrationCompare @ 0x180036CAC (EtwpRegistrationCompare.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18003A130 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall EtwpInsertRegistration(__int64 a1)
{
  __int64 v2; // r8
  char v3; // bl
  __int64 v4; // rdi
  int v5; // esi
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int16 v9; // [rsp+28h] [rbp-10h]

  v8 = a1 + 32;
  v9 = *(_WORD *)(a1 + 96);
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v3 = 0;
  v4 = EtwpRegistrationTable;
  v5 = qword_180160410 & 1;
  if ( EtwpRegistrationTable )
  {
    while ( 1 )
    {
      if ( (int)EtwpRegistrationCompare(&v8, v4) >= 0 )
      {
        v6 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          if ( !v6 )
          {
LABEL_8:
            v3 = 1;
            break;
          }
          v6 ^= v4;
        }
        if ( !v6 )
          goto LABEL_8;
      }
      else
      {
        v6 = *(_QWORD *)v4;
        if ( v5 )
        {
          if ( !v6 )
            break;
          v6 ^= v4;
        }
        if ( !v6 )
          break;
      }
      v4 = v6;
    }
  }
  LOBYTE(v2) = v3;
  RtlRbInsertNodeEx(&EtwpRegistrationTable, v4, v2, a1);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
