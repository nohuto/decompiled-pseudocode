/*
 * XREFs of sub_18001B91C @ 0x18001B91C
 * Callers:
 *     EtwNotificationRegister @ 0x18001B3E0 (EtwNotificationRegister.c)
 * Callees:
 *     sub_18001B9D8 @ 0x18001B9D8 (sub_18001B9D8.c)
 *     RtlRbInsertNodeEx @ 0x18001E790 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_18001B91C(__int64 a1)
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
  RtlAcquireSRWLockExclusive(&unk_18015C348);
  v3 = 0;
  v4 = qword_18015C338;
  v5 = qword_18015C340 & 1;
  if ( qword_18015C338 )
  {
    while ( 1 )
    {
      if ( (int)sub_18001B9D8(&v8, v4) >= 0 )
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
  RtlRbInsertNodeEx(&qword_18015C338, v4, v2, a1);
  return RtlReleaseSRWLockExclusive(&unk_18015C348);
}
