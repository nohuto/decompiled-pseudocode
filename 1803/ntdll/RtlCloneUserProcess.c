/*
 * XREFs of RtlCloneUserProcess @ 0x1800D1660
 * Callers:
 *     sub_1800D12F0 @ 0x1800D12F0 (sub_1800D12F0.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180046FBC @ 0x180046FBC (sub_180046FBC.c)
 *     RtlWakeAllConditionVariable @ 0x1800735E0 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007EBA0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     sub_180086FA0 @ 0x180086FA0 (sub_180086FA0.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 *     sub_1800D09C4 @ 0x1800D09C4 (sub_1800D09C4.c)
 *     sub_1800D0C68 @ 0x1800D0C68 (sub_1800D0C68.c)
 *     sub_1800D1E50 @ 0x1800D1E50 (sub_1800D1E50.c)
 *     sub_1800D1EA8 @ 0x1800D1EA8 (sub_1800D1EA8.c)
 *     sub_1800EB360 @ 0x1800EB360 (sub_1800EB360.c)
 *     sub_1800EBBBC @ 0x1800EBBBC (sub_1800EBBBC.c)
 */

__int64 __fastcall RtlCloneUserProcess(int a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4, char *a5)
{
  __int64 v7; // rbp
  int v9; // esi
  int v10; // r15d
  int v11; // r14d
  int v12; // edi
  int v13; // ebx
  char *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // r8
  __int64 v19; // r9
  char *v20; // rbx
  __int64 v21; // rbp
  unsigned __int64 v22; // rdx
  unsigned __int64 *v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rdx
  unsigned __int64 *v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  unsigned __int64 *v29; // r8
  __int64 v30; // r9
  unsigned int v31; // eax
  unsigned int v32; // ebp
  unsigned int v33; // ebx
  unsigned __int64 v34; // rdx
  unsigned __int64 *v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // rdx
  unsigned __int64 *v38; // r8
  __int64 v39; // r9
  __int64 v40[8]; // [rsp+30h] [rbp-68h] BYREF

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
      sub_1800435B4(0);
      sub_180046FBC();
      RtlEnterCriticalSection((__int64)&unk_18015C240);
      v13 = 0;
    }
    if ( v13 >= 0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D260, a2, a3, a4);
      sub_1800D1E50();
      RtlEnterCriticalSection((__int64)&unk_18015BE80);
      RtlAcquireSRWLockShared(&qword_18015D118, v14, v15, v16);
      v20 = (char *)&unk_18015D128;
      v21 = 16LL;
      do
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)v20, v17, v18, v19);
        v20 += 16;
        --v21;
      }
      while ( v21 );
      RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D2D0, v17, v18, v19);
      sub_1800D0C68(0, v22, v23, v24);
      v13 = sub_1800EB360();
      if ( v13 >= 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D258, v25, v26, v27);
        RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D248, v28, v29, v30);
        v13 = 0;
        byte_18015BEB9 = 1;
      }
      else
      {
        sub_1800D0C68(2, v25, v26, v27);
        RtlReleaseSRWLockExclusive(&qword_18015D2D0);
        sub_1800D09C4(0);
        RtlLeaveCriticalSection((__int64)&unk_18015BE80);
        sub_1800D1EA8(0LL);
        RtlReleaseSRWLockExclusive(&qword_18015D260);
        sub_1800D0858(0);
      }
      v7 = a2;
    }
    if ( v13 < 0 )
      return (unsigned int)v13;
  }
  memset(v40, 0, 0x38uLL);
  v40[1] = v7;
  LOWORD(v40[0]) = 1;
  v40[2] = (__int64)a3;
  v40[4] = a4;
  v31 = sub_180086FA0(0LL, 0LL, v11, v10, (__int64)v40, a5);
  v32 = v31;
  if ( !v12 )
  {
    if ( v31 == 297 )
    {
      qword_18015D258 = 1LL;
      v33 = 1;
      v9 = 1;
      qword_18015BE90 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
      dword_18015BE88 = -2;
      dword_18015BE8C = 1;
      qword_18015BE98 = 0LL;
      qword_18015D260 = 1LL;
    }
    else
    {
      byte_18015BEB9 = 0;
      v33 = 0;
      RtlReleaseSRWLockExclusive(&qword_18015D248);
    }
    RtlReleaseSRWLockExclusive(&qword_18015D258);
    sub_1800D0C68(v9, v34, v35, v36);
    if ( v9 == 1 )
      qword_18015D2D0 = 1LL;
    else
      RtlReleaseSRWLockExclusive(&qword_18015D2D0);
    sub_1800EBBBC(v33);
    sub_1800D09C4(v33);
    RtlLeaveCriticalSection((__int64)&unk_18015BE80);
    sub_1800D1EA8(v33);
    RtlReleaseSRWLockExclusive(&qword_18015D260);
    sub_1800D0858(v33);
    if ( v33 )
    {
      byte_18015BEB9 = 0;
      RtlAcquireReleaseSRWLockExclusive(&qword_18015D248, v37, v38, v39);
      RtlWakeAllConditionVariable(&qword_18015D250);
    }
  }
  return v32;
}
