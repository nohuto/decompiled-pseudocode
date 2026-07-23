/*
 * XREFs of sub_180027040 @ 0x180027040
 * Callers:
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     sub_180027A50 @ 0x180027A50 (sub_180027A50.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180028870 @ 0x180028870 (sub_180028870.c)
 *     LdrUnloadDll @ 0x180046DB0 (LdrUnloadDll.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_1800556F8 @ 0x1800556F8 (sub_1800556F8.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwReleaseSemaphore @ 0x18009AC00 (ZwReleaseSemaphore.c)
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 *     ZwReleaseMutant @ 0x18009AEC0 (ZwReleaseMutant.c)
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __fastcall sub_180027040(unsigned int *a1)
{
  unsigned int *v1; // rsi
  unsigned int v2; // eax
  int v3; // ecx
  _RTL_SRWLOCK *v4; // r14
  char v5; // r15
  unsigned __int64 Ptr; // rdi
  __int64 v7; // rbx
  bool v8; // r12
  signed __int64 v9; // rdx
  bool v10; // zf
  signed __int64 v11; // rax
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v14; // r9
  unsigned int v15; // r10d
  __int64 v16; // r8
  __int64 v17; // r9
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  void *v20; // rcx
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  NTSTATUS v23; // eax
  ULONG_PTR v24; // rbx
  PVOID v25; // rbx
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  ULONG_PTR v29; // rbx
  ULONG_PTR v30; // rax
  signed __int64 v31; // [rsp+20h] [rbp-99h]
  _DWORD WorkerFactoryInformation[2]; // [rsp+28h] [rbp-91h] BYREF
  unsigned int *v33; // [rsp+30h] [rbp-89h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-79h] BYREF

  v1 = a1;
  v33 = a1;
  sub_1800273D0(a1);
  v2 = v1[36];
  if ( !v2 )
  {
LABEL_15:
    memset(v1, 0, 0x90uLL);
    return;
  }
  while ( 2 )
  {
    _BitScanForward((unsigned int *)&v3, v2);
    WorkerFactoryInformation[1] = v3;
    v1[36] = v2 ^ (1 << v3);
    switch ( v3 )
    {
      case 9:
        v12 = *((_QWORD *)v1 + 23);
        *((_QWORD *)v1 + 23) = 0LL;
        v13 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v12 + 8) + 8LL);
        if ( v13 == sub_180027A50 )
        {
          sub_180027A50(v12, sub_180027A50, sub_180027DD0, sub_180028870);
        }
        else if ( v13 == sub_180027DD0 )
        {
          sub_180027DD0(v12, sub_180027A50, sub_180027DD0, sub_180028870);
        }
        else if ( v13 == sub_180028870 )
        {
          sub_180028870(v12, sub_180027A50, sub_180027DD0, sub_180028870);
        }
        else
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v13)(
            v12,
            sub_180027A50,
            sub_180027DD0,
            sub_180028870,
            v31);
        }
        goto LABEL_14;
      case 6:
        v4 = (_RTL_SRWLOCK *)*((_QWORD *)v1 + 23);
        v5 = 0;
        _m_prefetchw(&v4[7]);
        Ptr = (unsigned __int64)v4[7].Ptr;
        do
        {
          if ( v5 )
          {
            RtlReleaseSRWLockExclusive(v4 + 8);
            v5 = 0;
          }
          v7 = Ptr ^ (Ptr ^ (Ptr - 1)) & 0xFFFFFFFFFFFFFFFLL;
          v8 = ((Ptr >> 60) & 8) != 0 && (v7 & 0xFFFFFFFFFFFFFFFLL) == 0;
          if ( v8 )
          {
            v5 = 1;
            RtlAcquireSRWLockExclusive(v4 + 8);
          }
          v9 = v7 & 0x7FFFFFFFFFFFFFFFLL;
          if ( !v8 )
            v9 = Ptr ^ (Ptr ^ (Ptr - 1)) & 0xFFFFFFFFFFFFFFFLL;
          v11 = _InterlockedCompareExchange64((volatile signed __int64 *)&v4[7], v9, Ptr);
          v10 = Ptr == v11;
          Ptr = v11;
        }
        while ( !v10 );
        v1 = v33;
        if ( v5 )
        {
          v25 = v4[9].Ptr;
          v4[9].Ptr = 0LL;
          RtlReleaseSRWLockExclusive(v4 + 8);
          sub_1800556F8(v25);
        }
        goto LABEL_14;
      case 4:
        v14 = *((_QWORD *)v1 + 16);
        v15 = v1[18];
        v16 = *((_QWORD *)v1 + 23);
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 416));
          _InterlockedDecrement((volatile signed __int32 *)(v14 + 420));
          _m_prefetchw((const void *)(v14 + 8));
          v21 = *(_QWORD *)(v14 + 8);
          HIDWORD(v31) = HIDWORD(v21);
          do
          {
            LODWORD(v31) = v21 ^ (unsigned __int16)(v21 ^ (v21 - 1));
            v22 = v21;
            v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), v31, v21);
            v31 = v21;
          }
          while ( v22 != v21 );
          v20 = *(void **)(v14 + 56);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 144) + 416LL));
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 144) + 420LL));
          v17 = *(_QWORD *)(v16 + 144);
          _m_prefetchw((const void *)(v17 + 8));
          v18 = *(_QWORD *)(v17 + 8);
          HIDWORD(v31) = HIDWORD(v18);
          do
          {
            LODWORD(v31) = v18 ^ (unsigned __int16)(v18 ^ (v18 - 1));
            v19 = v18;
            v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 8), v31, v18);
            v31 = v18;
          }
          while ( v19 != v18 );
          v20 = *(void **)(*(_QWORD *)(v16 + 144) + 56LL);
        }
        if ( v15 == 2 )
        {
          WorkerFactoryInformation[0] = 0;
          ZwSetInformationWorkerFactory(v20, WorkerFactoryCallbackType, WorkerFactoryInformation, 4u);
        }
        goto LABEL_14;
    }
    switch ( v3 )
    {
      case 0:
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)v1 + 24));
        *((_QWORD *)v1 + 24) = 0LL;
        goto LABEL_14;
      case 1:
        v27 = ZwReleaseMutant((HANDLE)v1[38], 0LL);
        v24 = v27;
        if ( v27 >= 0 )
        {
          v1[38] = 0;
LABEL_14:
          v2 = v1[36];
          if ( !v2 )
            goto LABEL_15;
          continue;
        }
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        v30 = v1[38];
        ExceptionRecord.ExceptionCode = -1073740019;
LABEL_49:
        ExceptionRecord.NumberParameters = 4;
        ExceptionRecord.ExceptionInformation[2] = v30;
        ExceptionRecord.ExceptionInformation[3] = v24;
LABEL_50:
        ExceptionRecord.ExceptionInformation[0] = *((_QWORD *)v1 + 11);
        ExceptionRecord.ExceptionInformation[1] = *((_QWORD *)v1 + 12);
        memset(v1, 0, 0xF8uLL);
        RtlRaiseException(&ExceptionRecord);
        return;
      case 2:
        v26 = ZwSetEvent((HANDLE)v1[37], 0LL);
        v24 = v26;
        if ( v26 < 0 )
        {
          memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
          v30 = v1[37];
          ExceptionRecord.ExceptionCode = -1073740021;
          goto LABEL_49;
        }
        v1[37] = 0;
        goto LABEL_14;
      case 3:
        v28 = ZwReleaseSemaphore((HANDLE)v1[39], v1[40], 0LL);
        v29 = v28;
        if ( v28 < 0 )
        {
          memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
          ExceptionRecord.ExceptionInformation[2] = v1[39];
          ExceptionRecord.ExceptionInformation[3] = v1[40];
          ExceptionRecord.ExceptionCode = -1073740020;
          ExceptionRecord.NumberParameters = 5;
          ExceptionRecord.ExceptionInformation[4] = v29;
          goto LABEL_50;
        }
        *(_QWORD *)(v1 + 39) = 0LL;
        goto LABEL_14;
      case 5:
        sub_180055584(*((_QWORD *)v1 + 22) + 32LL, 0xFFFFFFFFLL);
        *((_QWORD *)v1 + 22) = 0LL;
        goto LABEL_14;
      case 7:
        v23 = LdrUnloadDll(*((PVOID *)v1 + 25));
        v24 = v23;
        if ( v23 < 0 )
        {
          memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
          v30 = *((_QWORD *)v1 + 25);
          ExceptionRecord.ExceptionCode = -1073740018;
          goto LABEL_49;
        }
        *((_QWORD *)v1 + 25) = 0LL;
        goto LABEL_14;
      case 8:
        LdrUnloadDll(*((PVOID *)v1 + 21));
        *((_QWORD *)v1 + 21) = 0LL;
        goto LABEL_14;
      default:
        goto LABEL_14;
    }
  }
}
