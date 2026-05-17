/*
 * XREFs of RtlPrepareForProcessCloning @ 0x1800D1BD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180046FBC @ 0x180046FBC (sub_180046FBC.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 *     sub_1800D09C4 @ 0x1800D09C4 (sub_1800D09C4.c)
 *     sub_1800D0C68 @ 0x1800D0C68 (sub_1800D0C68.c)
 *     sub_1800D1E50 @ 0x1800D1E50 (sub_1800D1E50.c)
 *     sub_1800D1EA8 @ 0x1800D1EA8 (sub_1800D1EA8.c)
 *     sub_1800EB360 @ 0x1800EB360 (sub_1800EB360.c)
 */

__int64 __fastcall RtlPrepareForProcessCloning(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  char *v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  int v17; // ebx
  unsigned __int64 *v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // r8
  __int64 v22; // r9

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    result = 3221225876LL;
  }
  else
  {
    sub_1800435B4(0);
    sub_180046FBC();
    RtlEnterCriticalSection((__int64)&unk_18015C240);
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D260, a2, a3, a4);
    sub_1800D1E50();
    RtlEnterCriticalSection((__int64)&unk_18015BE80);
    RtlAcquireSRWLockShared(&qword_18015D118, v5, v6, v7);
    v11 = (char *)&unk_18015D128;
    v12 = 16LL;
    do
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)v11, v8, v9, v10);
      v11 += 16;
      --v12;
    }
    while ( v12 );
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D2D0, v8, v9, v10);
    sub_1800D0C68(0, v13, v14, v15);
    v17 = sub_1800EB360();
    if ( v17 >= 0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D258, v16, v18, v19);
      RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D248, v20, v21, v22);
      result = 0LL;
      byte_18015BEB9 = 1;
    }
    else
    {
      sub_1800D0C68(2, v16, v18, v19);
      RtlReleaseSRWLockExclusive(&qword_18015D2D0);
      sub_1800D09C4(0);
      RtlLeaveCriticalSection((__int64)&unk_18015BE80);
      sub_1800D1EA8(0LL);
      RtlReleaseSRWLockExclusive(&qword_18015D260);
      sub_1800D0858(0);
      return (unsigned int)v17;
    }
  }
  return result;
}
