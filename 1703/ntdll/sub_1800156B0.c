/*
 * XREFs of sub_1800156B0 @ 0x1800156B0
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 * Callees:
 *     LdrUnloadDll @ 0x180011CF0 (LdrUnloadDll.c)
 *     sub_180015A40 @ 0x180015A40 (sub_180015A40.c)
 *     sub_1800160F0 @ 0x1800160F0 (sub_1800160F0.c)
 *     sub_180016530 @ 0x180016530 (sub_180016530.c)
 *     sub_1800167F0 @ 0x1800167F0 (sub_1800167F0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     sub_180073700 @ 0x180073700 (sub_180073700.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwReleaseSemaphore @ 0x1800A5440 (ZwReleaseSemaphore.c)
 *     ZwSetEvent @ 0x1800A54C0 (ZwSetEvent.c)
 *     ZwReleaseMutant @ 0x1800A5700 (ZwReleaseMutant.c)
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __fastcall sub_1800156B0(__int64 *a1)
{
  unsigned int v2; // eax
  int v3; // ecx
  __int64 v4; // r14
  char v5; // r15
  signed __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  signed __int64 v8; // rbx
  __int64 v9; // rcx
  void (__fastcall *v10)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v11; // r9
  int v12; // r10d
  __int64 v13; // r8
  __int64 v14; // r9
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  __int64 v20; // rbx
  int v21; // eax
  ULONG_PTR v22; // rbx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  ULONG_PTR v26; // rbx
  ULONG_PTR v27; // rax
  signed __int64 v28; // [rsp+20h] [rbp-89h]
  signed __int64 v29; // [rsp+20h] [rbp-89h]
  _DWORD v30[2]; // [rsp+28h] [rbp-81h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+30h] [rbp-79h] BYREF

  sub_180015A40(a1);
  if ( !*((_DWORD *)a1 + 36) )
  {
LABEL_13:
    memset(a1, 0, 0x90uLL);
    return;
  }
  while ( 2 )
  {
    v2 = *((_DWORD *)a1 + 36);
    _BitScanForward((unsigned int *)&v3, v2);
    v30[1] = v3;
    *((_DWORD *)a1 + 36) = v2 ^ (1 << v3);
    switch ( v3 )
    {
      case 9:
        v9 = a1[23];
        a1[23] = 0LL;
        v10 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v9 + 8) + 8LL);
        if ( (char *)v10 == (char *)sub_1800160F0 )
        {
          sub_1800160F0(v9, 0xFFFFFFFFFFFFFFFLL, sub_180016530, sub_1800167F0);
        }
        else if ( (char *)v10 == (char *)sub_180016530 )
        {
          sub_180016530(v9, 0xFFFFFFFFFFFFFFFLL, sub_180016530, sub_1800167F0);
        }
        else if ( (char *)v10 == (char *)sub_1800167F0 )
        {
          sub_1800167F0(v9, 0xFFFFFFFFFFFFFFFLL, sub_180016530, sub_1800167F0);
        }
        else
        {
          v10(v9, 0xFFFFFFFFFFFFFFFLL, sub_180016530, sub_1800167F0);
        }
        goto LABEL_12;
      case 6:
        v4 = a1[23];
        v5 = 0;
        _m_prefetchw((const void *)(v4 + 56));
        v6 = *(_QWORD *)(v4 + 56);
        do
        {
          if ( v5 )
          {
            RtlReleaseSRWLockExclusive(v4 + 64);
            v5 = 0;
          }
          v7 = v6;
          v8 = (v6 ^ (v6 - 1)) & 0xFFFFFFFFFFFFFFFLL ^ v6;
          if ( (v8 & 0xFFFFFFFFFFFFFFFLL) == 0 && ((v7 >> 60) & 8) != 0 )
          {
            v8 &= ~0x8000000000000000uLL;
            v5 = 1;
            RtlAcquireSRWLockExclusive(v4 + 64);
          }
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 56), v8, v7);
        }
        while ( v7 != v6 );
        if ( v5 )
        {
          v20 = *(_QWORD *)(v4 + 72);
          *(_QWORD *)(v4 + 72) = 0LL;
          RtlReleaseSRWLockExclusive(v4 + 64);
          sub_180073700(v20);
        }
        goto LABEL_12;
      case 4:
        v11 = a1[16];
        v12 = *((_DWORD *)a1 + 18);
        v13 = a1[23];
        if ( v11 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 416));
          _InterlockedDecrement((volatile signed __int32 *)(v11 + 420));
          _m_prefetchw((const void *)(v11 + 8));
          v18 = *(_QWORD *)(v11 + 8);
          v29 = v18;
          do
          {
            LODWORD(v29) = (unsigned __int16)(v29 ^ (v29 - 1)) ^ (unsigned int)v29;
            v19 = v18;
            v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8), v29, v18);
            v29 = v18;
          }
          while ( v19 != v18 );
          v17 = *(_QWORD *)(v11 + 56);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 144) + 416LL));
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 144) + 420LL));
          v14 = *(_QWORD *)(v13 + 144);
          _m_prefetchw((const void *)(v14 + 8));
          v15 = *(_QWORD *)(v14 + 8);
          v28 = v15;
          do
          {
            LODWORD(v28) = (unsigned __int16)(v28 ^ (v28 - 1)) ^ (unsigned int)v28;
            v16 = v15;
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), v28, v15);
            v28 = v15;
          }
          while ( v16 != v15 );
          v17 = *(_QWORD *)(*(_QWORD *)(v13 + 144) + 56LL);
        }
        if ( v12 == 2 )
        {
          v30[0] = 0;
          ZwSetInformationWorkerFactory(v17, 9LL, v30);
        }
        goto LABEL_12;
    }
    switch ( v3 )
    {
      case 0:
        RtlLeaveCriticalSection(a1[24]);
        a1[24] = 0LL;
        goto LABEL_12;
      case 1:
        v24 = ZwReleaseMutant(*((unsigned int *)a1 + 38), 0LL, sub_180016530, sub_1800167F0);
        v22 = v24;
        if ( v24 >= 0 )
        {
          *((_DWORD *)a1 + 38) = 0;
LABEL_12:
          if ( !*((_DWORD *)a1 + 36) )
            goto LABEL_13;
          continue;
        }
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        v27 = *((unsigned int *)a1 + 38);
        ExceptionRecord.ExceptionCode = -1073740019;
LABEL_47:
        ExceptionRecord.NumberParameters = 4;
        ExceptionRecord.ExceptionInformation[2] = v27;
        ExceptionRecord.ExceptionInformation[3] = v22;
LABEL_48:
        ExceptionRecord.ExceptionInformation[0] = a1[11];
        ExceptionRecord.ExceptionInformation[1] = a1[12];
        memset(a1, 0, 0xF8uLL);
        RtlRaiseException(&ExceptionRecord);
        return;
      case 2:
        v23 = ZwSetEvent(*((unsigned int *)a1 + 37), 0LL);
        v22 = v23;
        if ( v23 < 0 )
        {
          memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
          v27 = *((unsigned int *)a1 + 37);
          ExceptionRecord.ExceptionCode = -1073740021;
          goto LABEL_47;
        }
        *((_DWORD *)a1 + 37) = 0;
        goto LABEL_12;
      case 3:
        v25 = ZwReleaseSemaphore(*((unsigned int *)a1 + 39), *((unsigned int *)a1 + 40), 0LL, sub_1800167F0);
        v26 = v25;
        if ( v25 < 0 )
        {
          memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
          ExceptionRecord.ExceptionInformation[2] = *((unsigned int *)a1 + 39);
          ExceptionRecord.ExceptionInformation[3] = *((unsigned int *)a1 + 40);
          ExceptionRecord.ExceptionCode = -1073740020;
          ExceptionRecord.NumberParameters = 5;
          ExceptionRecord.ExceptionInformation[4] = v26;
          goto LABEL_48;
        }
        *(__int64 *)((char *)a1 + 156) = 0LL;
        goto LABEL_12;
      case 5:
        sub_18007358C(a1[22] + 32, 0xFFFFFFFFLL, 0LL);
        a1[22] = 0LL;
        goto LABEL_12;
      case 7:
        v21 = LdrUnloadDll(a1[25]);
        v22 = v21;
        if ( v21 < 0 )
        {
          memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
          v27 = a1[25];
          ExceptionRecord.ExceptionCode = -1073740018;
          goto LABEL_47;
        }
        a1[25] = 0LL;
        goto LABEL_12;
      case 8:
        LdrUnloadDll(a1[21]);
        a1[21] = 0LL;
        goto LABEL_12;
      default:
        goto LABEL_12;
    }
  }
}
