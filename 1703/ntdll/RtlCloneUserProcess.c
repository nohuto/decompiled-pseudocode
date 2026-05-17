/*
 * XREFs of RtlCloneUserProcess @ 0x1800D86D0
 * Callers:
 *     sub_1800D8360 @ 0x1800D8360 (sub_1800D8360.c)
 * Callees:
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18000C9B0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x180051860 (RtlWakeAllConditionVariable.c)
 *     sub_18008D520 @ 0x18008D520 (sub_18008D520.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D7B28 @ 0x1800D7B28 (sub_1800D7B28.c)
 *     sub_1800D7BCC @ 0x1800D7BCC (sub_1800D7BCC.c)
 *     sub_1800D7D28 @ 0x1800D7D28 (sub_1800D7D28.c)
 *     sub_1800D8EC0 @ 0x1800D8EC0 (sub_1800D8EC0.c)
 *     sub_1800D8F18 @ 0x1800D8F18 (sub_1800D8F18.c)
 *     sub_1800EF328 @ 0x1800EF328 (sub_1800EF328.c)
 *     sub_1800EFBEC @ 0x1800EFBEC (sub_1800EFBEC.c)
 */

__int64 __fastcall RtlCloneUserProcess(int a1, __int64 a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v7; // rbp
  int v9; // esi
  int v10; // r15d
  int v11; // r14d
  int v12; // edi
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  volatile signed __int64 *v18; // rbx
  __int64 v19; // rbp
  unsigned int v20; // eax
  unsigned int v21; // ebp
  unsigned int v22; // ebx
  __int64 v23[8]; // [rsp+30h] [rbp-68h] BYREF

  v7 = a2;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225711LL;
  v9 = 2;
  v10 = a1 & 1;
  v11 = 2 * (a1 & 2);
  v12 = a1 & 4;
  if ( (a1 & 4) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v13 = -1073741420;
    }
    else
    {
      sub_18001AE14(0);
      sub_180019FC0(v15, v14, v16, v17);
      RtlEnterCriticalSection((__int64)&unk_18015B220);
      v13 = 0;
    }
    if ( v13 >= 0 )
    {
      RtlAcquireSRWLockExclusive(&qword_18015C200);
      sub_1800D8EC0();
      RtlEnterCriticalSection((__int64)&unk_18015AE60);
      RtlAcquireSRWLockShared(&qword_18015C0D8);
      v18 = (volatile signed __int64 *)&unk_18015C0E8;
      v19 = 16LL;
      do
      {
        RtlAcquireSRWLockExclusive(v18);
        v18 += 2;
        --v19;
      }
      while ( v19 );
      RtlAcquireSRWLockExclusive(&qword_18015C290);
      sub_1800D7D28(0);
      v13 = sub_1800EF328();
      if ( v13 >= 0 )
      {
        RtlAcquireSRWLockExclusive(&qword_18015C1F8);
        RtlAcquireSRWLockExclusive(&qword_18015C1E8);
        v13 = 0;
        byte_18015AE99 = 1;
      }
      else
      {
        sub_1800D7D28(2);
        RtlReleaseSRWLockExclusive(&qword_18015C290);
        sub_1800D7BCC(0);
        RtlLeaveCriticalSection((__int64)&unk_18015AE60);
        sub_1800D8F18(0LL);
        RtlReleaseSRWLockExclusive(&qword_18015C200);
        sub_1800D7B28(0);
      }
      v7 = a2;
    }
    if ( v13 < 0 )
      return (unsigned int)v13;
  }
  memset(v23, 0, 0x38uLL);
  v23[1] = v7;
  LOWORD(v23[0]) = 1;
  v23[2] = a3;
  v23[4] = a4;
  v20 = sub_18008D520(0LL, 0LL, v11, v10, (__int64)v23, a5);
  v21 = v20;
  if ( !v12 )
  {
    if ( v20 == 297 )
    {
      qword_18015C1F8 = 1LL;
      v22 = 1;
      v9 = 1;
      qword_18015AE70 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
      dword_18015AE68 = -2;
      dword_18015AE6C = 1;
      qword_18015AE78 = 0LL;
      qword_18015C200 = 1LL;
    }
    else
    {
      byte_18015AE99 = 0;
      v22 = 0;
      RtlReleaseSRWLockExclusive(&qword_18015C1E8);
    }
    RtlReleaseSRWLockExclusive(&qword_18015C1F8);
    sub_1800D7D28(v9);
    if ( v9 == 1 )
      qword_18015C290 = 1LL;
    else
      RtlReleaseSRWLockExclusive(&qword_18015C290);
    sub_1800EFBEC(v22);
    sub_1800D7BCC(v22);
    RtlLeaveCriticalSection((__int64)&unk_18015AE60);
    sub_1800D8F18(v22);
    RtlReleaseSRWLockExclusive(&qword_18015C200);
    sub_1800D7B28(v22);
    if ( v22 )
    {
      byte_18015AE99 = 0;
      RtlAcquireReleaseSRWLockExclusive(&qword_18015C1E8);
      RtlWakeAllConditionVariable(&qword_18015C1F0);
    }
  }
  return v21;
}
