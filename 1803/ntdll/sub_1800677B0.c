/*
 * XREFs of sub_1800677B0 @ 0x1800677B0
 * Callers:
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800F655C @ 0x1800F655C (sub_1800F655C.c)
 */

char __fastcall sub_1800677B0(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  struct _PEB *v3; // r13
  __int64 v4; // rax
  char v5; // si
  unsigned __int64 *v6; // r8
  __int64 v7; // r12
  void **v8; // rbx
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  char *v14; // r14
  __int64 v15; // rsi
  _QWORD *v16; // r15
  _DWORD *v17; // rbp
  __int64 v18; // rbx
  int v19; // eax
  __int64 (__fastcall *v20)(_QWORD *); // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // r8
  __int64 v23; // r9
  int v24; // r13d
  unsigned __int64 v26; // rdx
  unsigned __int64 *v27; // r8
  __int64 v28; // r9
  int v30; // ebx
  int v31; // ecx
  int v32; // ebx
  int v33; // ecx
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  int v36; // ebx
  unsigned __int64 v37; // rbx
  void *ProcessHeap; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 *v40; // r8
  __int64 v41; // r9
  int v42; // edx
  unsigned int v43; // [rsp+30h] [rbp-68h]
  struct _PEB *v44; // [rsp+38h] [rbp-60h]
  _QWORD v45[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v48; // [rsp+B8h] [rbp+20h] BYREF

  v3 = NtCurrentPeb();
  v4 = a3;
  v5 = 0;
  v44 = v3;
  v6 = (unsigned __int64 *)(a3 + 2);
  v43 = (unsigned int)v6;
  v7 = 3 * v4;
  LODWORD(v4) = v3->CrossProcessFlags;
  v8 = (void **)(&off_18016F3B8 + v7 + 1);
  if ( _bittest((const int *)&v4, (unsigned int)v6) )
  {
    v45[0] = a1;
    v9 = 0LL;
    v10 = (unsigned __int64)*(&off_18016F3B8 + v7);
    v45[1] = a2;
    RtlAcquireSRWLockExclusive(v10, a2, v6, (__int64)&off_18016F3B8);
    v14 = (char *)*v8;
    if ( *v8 != v8 )
    {
      while ( 1 )
      {
        v15 = 0LL;
        v16 = v14;
        if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v11, v12, v13);
          v30 = *(_DWORD *)qword_18016F280;
          if ( !*(_DWORD *)qword_18016F280 )
            RtlProtectHeap((_DWORD *)qword_18016F270, 0);
          if ( v30 == -1 )
          {
            RtlReleaseSRWLockExclusive(&qword_18015BF98);
            __fastfail(0xEu);
          }
          *(_DWORD *)qword_18016F280 = v30 + 1;
          RtlReleaseSRWLockExclusive(&qword_18015BF98);
        }
        v17 = v14 + 16;
        ++*((_DWORD *)v14 + 4);
        if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v11, v12, v13);
          v31 = *(_DWORD *)qword_18016F280;
          if ( !*(_DWORD *)qword_18016F280 )
          {
            RtlReleaseSRWLockExclusive(&qword_18015BF98);
            __fastfail(0xEu);
          }
          *(_DWORD *)qword_18016F280 = v31 - 1;
          if ( v31 == 1 )
            RtlProtectHeap((_DWORD *)qword_18016F270, 1);
          RtlReleaseSRWLockExclusive(&qword_18015BF98);
        }
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&off_18016F3B8 + v7));
        v18 = *((_QWORD *)v14 + 3);
        v19 = ZwQueryInformationProcess(-1LL, 36LL, &v48);
        if ( v19 < 0 )
          RtlRaiseStatus((unsigned int)v19);
        v20 = (__int64 (__fastcall *)(_QWORD *))(v48 ^ __ROR8__(v18, 64 - (v48 & 0x3F)));
        if ( (v3->NtGlobalFlag & 0x800000) != 0 )
          v15 = sub_1800F655C(a1, a2, 0LL, v20);
        v24 = v20(v45);
        if ( v15 )
          *(_DWORD *)(v15 + 1396) = v24 != -1;
        RtlAcquireSRWLockExclusive((unsigned __int64)*(&off_18016F3B8 + v7), v21, v22, v23);
        v14 = *(char **)v14;
        if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v11, v12, v13);
          v32 = *(_DWORD *)qword_18016F280;
          if ( !*(_DWORD *)qword_18016F280 )
            RtlProtectHeap((_DWORD *)qword_18016F270, 0);
          if ( v32 == -1 )
          {
            RtlReleaseSRWLockExclusive(&qword_18015BF98);
            __fastfail(0xEu);
          }
          *(_DWORD *)qword_18016F280 = v32 + 1;
          RtlReleaseSRWLockExclusive(&qword_18015BF98);
        }
        if ( (*v17)-- == 1 )
        {
          sub_1800259B4(0);
          v34 = (_QWORD *)*v16;
          v35 = (_QWORD *)v16[1];
          if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v35 != v16 )
            __fastfail(3u);
          *v35 = v34;
          v34[1] = v35;
          if ( v35 == v34 )
            _interlockedbittestandreset((volatile signed __int32 *)&v44->CrossProcessFlags, v43);
          sub_1800259B4(1);
          *v16 = v9;
          v9 = v16;
        }
        if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v11, v12, v13);
          v33 = *(_DWORD *)qword_18016F280;
          if ( !*(_DWORD *)qword_18016F280 )
          {
            RtlReleaseSRWLockExclusive(&qword_18015BF98);
            __fastfail(0xEu);
          }
          *(_DWORD *)qword_18016F280 = v33 - 1;
          if ( v33 == 1 )
            RtlProtectHeap((_DWORD *)qword_18016F270, 1);
          RtlReleaseSRWLockExclusive(&qword_18015BF98);
        }
        if ( v24 == -1 )
          break;
        if ( v14 == (char *)(&off_18016F3B8 + v7 + 1) )
        {
          v5 = 0;
          goto LABEL_16;
        }
        v3 = v44;
      }
      v5 = 1;
    }
LABEL_16:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&off_18016F3B8 + v7));
    if ( v9 )
    {
      if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v26, v27, v28);
        v36 = *(_DWORD *)qword_18016F280;
        if ( !*(_DWORD *)qword_18016F280 )
          RtlProtectHeap((_DWORD *)qword_18016F270, 0);
        if ( v36 == -1 )
        {
          RtlReleaseSRWLockExclusive(&qword_18015BF98);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016F280 = v36 + 1;
        RtlReleaseSRWLockExclusive(&qword_18015BF98);
      }
      do
      {
        v37 = (unsigned __int64)v9;
        v9 = (_QWORD *)*v9;
        if ( LdrControlFlowGuardEnforced() )
          ProcessHeap = (void *)qword_18016F270;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)ProcessHeap, 0, v37);
      }
      while ( v9 );
      if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v39, v40, v41);
        v42 = *(_DWORD *)qword_18016F280;
        if ( !*(_DWORD *)qword_18016F280 )
        {
          RtlReleaseSRWLockExclusive(&qword_18015BF98);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016F280 = v42 - 1;
        if ( v42 == 1 )
          RtlProtectHeap((_DWORD *)qword_18016F270, 1);
        RtlReleaseSRWLockExclusive(&qword_18015BF98);
      }
    }
  }
  return v5;
}
