/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x18006AD20
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     sub_18006AFAC @ 0x18006AFAC (sub_18006AFAC.c)
 *     RtlAvlInsertNodeEx @ 0x18006AFD0 (RtlAvlInsertNodeEx.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     ZwSetInformationProcess @ 0x18009AE40 (ZwSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x18009B600 (ZwQuerySystemTime.c)
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
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rbx
  int v19; // ebp
  unsigned __int64 v20; // rdx
  unsigned __int64 *v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 *i; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rdi
  _QWORD *v28; // rax
  unsigned __int64 *v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 *v31; // r8
  __int64 v32; // r9
  int v33; // ebx
  int v34; // ecx
  void *v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 *v37; // r8
  __int64 v38; // r9
  void *v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 *v41; // r8
  __int64 v42; // r9
  int v43; // ecx
  int v44; // ecx
  unsigned __int64 v45; // [rsp+20h] [rbp-28h] BYREF
  char v46; // [rsp+28h] [rbp-20h]

  if ( a3 > a4 || a5 >= a6 )
    __fastfail(5u);
  result = sub_18007CFD4();
  if ( (int)result >= 0 )
  {
    if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v10, v11, v12);
      v33 = *(_DWORD *)qword_18016F280;
      if ( !*(_DWORD *)qword_18016F280 )
        RtlProtectHeap((_DWORD *)qword_18016F270, 0);
      if ( v33 == -1 )
      {
        RtlReleaseSRWLockExclusive(&qword_18015BF98);
        __fastfail(0xEu);
      }
      *(_DWORD *)qword_18016F280 = v33 + 1;
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
    }
    if ( LdrControlFlowGuardEnforced() )
      ProcessHeap = (void *)qword_18016F270;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 112LL);
    v18 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 16) = a2;
      *(_DWORD *)(Heap + 84) = a3;
      ZwQuerySystemTime(Heap + 24);
      *(_QWORD *)(v18 + 32) = a5;
      *(_QWORD *)(v18 + 40) = a6;
      *(_QWORD *)(v18 + 48) = a5;
      *(_DWORD *)(v18 + 80) = 3;
      v45 = v18;
      v46 = 0;
      v19 = ZwSetInformationProcess(-1LL, 53LL, &v45, 16LL);
      if ( v19 < 0 )
      {
        if ( LdrControlFlowGuardEnforced() )
          v35 = (void *)qword_18016F270;
        else
          v35 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)v35, 0, v18);
        if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v36, v37, v38);
          v34 = *(_DWORD *)qword_18016F280;
          if ( !*(_DWORD *)qword_18016F280 )
          {
            RtlReleaseSRWLockExclusive(&qword_18015BF98);
            __fastfail(0xEu);
          }
LABEL_34:
          *(_DWORD *)qword_18016F280 = v34 - 1;
          if ( v34 == 1 )
            RtlProtectHeap((_DWORD *)qword_18016F270, 1);
          RtlReleaseSRWLockExclusive(&qword_18015BF98);
        }
        return (unsigned int)v19;
      }
      else
      {
        sub_1800259B4(0);
        RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015B2B0, v20, v21, v22);
        for ( i = (__int64 *)qword_18016F2A8; ; i = (__int64 *)*i )
        {
          if ( i == &qword_18016F2A8 )
            goto LABEL_15;
          v25 = i[5];
          if ( a5 < v25 )
          {
            v26 = i[4];
            if ( a6 > v26 )
              break;
          }
        }
        if ( v26 == a5 && v25 == a6 )
        {
LABEL_15:
          v27 = (_QWORD *)qword_18016F2A0;
          LOBYTE(v23) = 0;
          if ( !qword_18016F2A0 )
            goto LABEL_22;
          while ( 1 )
          {
            if ( (int)sub_18006AFAC(*(_QWORD *)(v18 + 32), v27) < 0 )
            {
              v28 = (_QWORD *)*v27;
              if ( !*v27 )
              {
                LOBYTE(v23) = 0;
                goto LABEL_22;
              }
            }
            else
            {
              v28 = (_QWORD *)v27[1];
              if ( !v28 )
              {
                LOBYTE(v23) = 1;
LABEL_22:
                RtlAvlInsertNodeEx(&qword_18016F2A0, v27, v23, v18 + 88);
                v29 = (unsigned __int64 *)qword_18016F2B0;
                if ( *(__int64 **)qword_18016F2B0 != &qword_18016F2A8 )
                  __fastfail(3u);
                *(_QWORD *)v18 = &qword_18016F2A8;
                *(_QWORD *)(v18 + 8) = v29;
                *v29 = v18;
                qword_18016F2B0 = v18;
                RtlReleaseSRWLockExclusive(&qword_18015B2B0);
                sub_1800259B4(1);
                *a1 = v18;
                if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
                {
                  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v30, v31, v32);
                  v34 = *(_DWORD *)qword_18016F280;
                  if ( !*(_DWORD *)qword_18016F280 )
                  {
                    RtlReleaseSRWLockExclusive(&qword_18015BF98);
                    __fastfail(0xEu);
                  }
                  goto LABEL_34;
                }
                return (unsigned int)v19;
              }
            }
            v27 = v28;
          }
        }
        RtlReleaseSRWLockExclusive(&qword_18015B2B0);
        sub_1800259B4(1);
        v46 = 1;
        ZwSetInformationProcess(-1LL, 53LL, &v45, 16LL);
        if ( LdrControlFlowGuardEnforced() )
          v39 = (void *)qword_18016F270;
        else
          v39 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)v39, 0, v18);
        if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v40, v41, v42);
          v43 = *(_DWORD *)qword_18016F280;
          if ( !*(_DWORD *)qword_18016F280 )
          {
            RtlReleaseSRWLockExclusive(&qword_18015BF98);
            __fastfail(0xEu);
          }
          *(_DWORD *)qword_18016F280 = v43 - 1;
          if ( v43 == 1 )
            RtlProtectHeap((_DWORD *)qword_18016F270, 1);
          RtlReleaseSRWLockExclusive(&qword_18015BF98);
        }
        return 3221225496LL;
      }
    }
    else
    {
      if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v15, v16, v17);
        v44 = *(_DWORD *)qword_18016F280;
        if ( !*(_DWORD *)qword_18016F280 )
        {
          RtlReleaseSRWLockExclusive(&qword_18015BF98);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016F280 = v44 - 1;
        if ( v44 == 1 )
          RtlProtectHeap((_DWORD *)qword_18016F270, 1);
        RtlReleaseSRWLockExclusive(&qword_18015BF98);
      }
      return 3221225626LL;
    }
  }
  return result;
}
