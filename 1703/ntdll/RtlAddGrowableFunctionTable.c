/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x180074B10
 * Callers:
 *     <none>
 * Callees:
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180074D74 @ 0x180074D74 (sub_180074D74.c)
 *     RtlAvlInsertNodeEx @ 0x180074D90 (RtlAvlInsertNodeEx.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 *     ZwSetInformationProcess @ 0x1800A5680 (ZwSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x1800A5E40 (ZwQuerySystemTime.c)
 */

__int64 __fastcall RtlAddGrowableFunctionTable(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax
  int v10; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  __int64 v15; // r8
  __int64 *i; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  unsigned __int64 *v19; // rax
  int v20; // ecx
  void *v21; // rcx
  void *v22; // rcx
  int v23; // ecx
  int v24; // ecx
  unsigned __int64 v25; // [rsp+20h] [rbp-28h] BYREF
  char v26; // [rsp+28h] [rbp-20h]

  if ( a3 > a4 || a5 >= a6 )
    __fastfail(5u);
  result = sub_180083738();
  if ( (int)result >= 0 )
  {
    if ( !qword_18016B370 )
      goto LABEL_29;
    RtlAcquireSRWLockExclusive(&qword_18015AF70);
    v10 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
      RtlProtectHeap(qword_18016B260, 0);
    if ( v10 == -1 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v10 + 1;
    RtlReleaseSRWLockExclusive(&qword_18015AF70);
    if ( qword_18016B370 )
      ProcessHeap = (void *)qword_18016B260;
    else
LABEL_29:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 112LL);
    v13 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 16) = a2;
      *(_DWORD *)(Heap + 84) = a3;
      ZwQuerySystemTime(Heap + 24);
      *(_QWORD *)(v13 + 32) = a5;
      *(_QWORD *)(v13 + 40) = a6;
      *(_QWORD *)(v13 + 48) = a5;
      *(_DWORD *)(v13 + 80) = 3;
      v25 = v13;
      v26 = 0;
      v14 = ZwSetInformationProcess(-1LL, 53LL, &v25, 16LL);
      if ( (v14 & 0x80000000) != 0 )
      {
        if ( qword_18016B370 )
          v21 = (void *)qword_18016B260;
        else
          v21 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)v21, 0, v13);
        if ( !qword_18016B370 )
          return v14;
        RtlAcquireSRWLockExclusive(&qword_18015AF70);
        v20 = *(_DWORD *)qword_18016B270;
        if ( !*(_DWORD *)qword_18016B270 )
        {
          RtlReleaseSRWLockExclusive(&qword_18015AF70);
          __fastfail(0xEu);
        }
        goto LABEL_31;
      }
      sub_18001DEA8(0);
      RtlAcquireSRWLockExclusive(&qword_18015A2B0);
      for ( i = (__int64 *)qword_18016B298; ; i = (__int64 *)*i )
      {
        if ( i == &qword_18016B298 )
          goto LABEL_18;
        if ( a5 < i[5] && a6 > i[4] )
          break;
      }
      if ( i[4] == a5 && i[5] == a6 )
      {
LABEL_18:
        v17 = (_QWORD *)qword_18016B290;
        LOBYTE(v15) = 0;
        if ( !qword_18016B290 )
          goto LABEL_25;
        while ( 1 )
        {
          if ( (int)sub_180074D74(*(_QWORD *)(v13 + 32), v17, v15) < 0 )
          {
            v18 = (_QWORD *)*v17;
            if ( !*v17 )
            {
              LOBYTE(v15) = 0;
              goto LABEL_25;
            }
          }
          else
          {
            v18 = (_QWORD *)v17[1];
            if ( !v18 )
            {
              LOBYTE(v15) = 1;
LABEL_25:
              RtlAvlInsertNodeEx(&qword_18016B290, v17, v15, v13 + 88);
              v19 = (unsigned __int64 *)qword_18016B2A0;
              if ( *(__int64 **)qword_18016B2A0 != &qword_18016B298 )
                __fastfail(3u);
              *(_QWORD *)v13 = &qword_18016B298;
              *(_QWORD *)(v13 + 8) = v19;
              *v19 = v13;
              qword_18016B2A0 = v13;
              RtlReleaseSRWLockExclusive(&qword_18015A2B0);
              sub_18001DEA8(1);
              *a1 = v13;
              if ( !qword_18016B370 )
                return v14;
              RtlAcquireSRWLockExclusive(&qword_18015AF70);
              v20 = *(_DWORD *)qword_18016B270;
              if ( !*(_DWORD *)qword_18016B270 )
              {
                RtlReleaseSRWLockExclusive(&qword_18015AF70);
                __fastfail(0xEu);
              }
LABEL_31:
              *(_DWORD *)qword_18016B270 = v20 - 1;
              if ( v20 == 1 )
                RtlProtectHeap(qword_18016B260, 1);
              RtlReleaseSRWLockExclusive(&qword_18015AF70);
              return v14;
            }
          }
          v17 = v18;
        }
      }
      RtlReleaseSRWLockExclusive(&qword_18015A2B0);
      sub_18001DEA8(1);
      v26 = 1;
      ZwSetInformationProcess(-1LL, 53LL, &v25, 16LL);
      if ( qword_18016B370 )
        v22 = (void *)qword_18016B260;
      else
        v22 = NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v22, 0, v13);
      if ( qword_18016B370 )
      {
        RtlAcquireSRWLockExclusive(&qword_18015AF70);
        v23 = *(_DWORD *)qword_18016B270;
        if ( !*(_DWORD *)qword_18016B270 )
        {
          RtlReleaseSRWLockExclusive(&qword_18015AF70);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016B270 = v23 - 1;
        if ( v23 == 1 )
          RtlProtectHeap(qword_18016B260, 1);
        RtlReleaseSRWLockExclusive(&qword_18015AF70);
      }
      return 3221225496LL;
    }
    else
    {
      if ( qword_18016B370 )
      {
        RtlAcquireSRWLockExclusive(&qword_18015AF70);
        v24 = *(_DWORD *)qword_18016B270;
        if ( !*(_DWORD *)qword_18016B270 )
        {
          RtlReleaseSRWLockExclusive(&qword_18015AF70);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016B270 = v24 - 1;
        if ( v24 == 1 )
          RtlProtectHeap(qword_18016B260, 1);
        RtlReleaseSRWLockExclusive(&qword_18015AF70);
      }
      return 3221225626LL;
    }
  }
  return result;
}
