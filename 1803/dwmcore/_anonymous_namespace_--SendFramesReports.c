/*
 * XREFs of _anonymous_namespace_::SendFramesReports @ 0x1800CFD60
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x18002282C (_anonymous_namespace_--FramesReport--_FramesReport.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x1800D1C28 (_anonymous_namespace_--SendFramesReport.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall anonymous_namespace_::SendFramesReports(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WORK Work)
{
  _QWORD *v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  void *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  void *v13; // rdi
  DWORD CurrentThreadId; // eax
  void *v16; // rbx
  void *v17; // [rsp+48h] [rbp+20h] BYREF

  AcquireSRWLockExclusive(&SRWLock);
  dword_1802D5F48 = GetCurrentThreadId();
  while ( 1 )
  {
    v3 = qword_1802D6148;
    if ( !*((_QWORD *)qword_1802D6148 + 10) )
      break;
    v4 = (__int64 *)*((_QWORD *)qword_1802D6148 + 6);
    if ( v4 )
      v5 = *v4;
    else
      v5 = 0LL;
    v6 = *((_QWORD *)qword_1802D6148 + 9) & 1LL;
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * ((*(_QWORD *)(v5 + 16) - 1LL) & (*((_QWORD *)qword_1802D6148 + 9) >> 1)));
    v8 = *(void **)(v7 + 8 * v6);
    *(_QWORD *)(v7 + 8 * v6) = 0LL;
    v9 = v3[9];
    v17 = v8;
    v10 = v9;
    v11 = v9 & 1;
    v12 = *(_QWORD *)(v3[7] + 8 * ((v3[8] - 1LL) & (v10 >> 1)));
    v13 = *(void **)(v12 + 8 * v11);
    if ( v13 )
    {
      anonymous_namespace_::FramesReport::_FramesReport(*(char ***)(v12 + 8 * v11));
      operator delete(v13, 0xB0uLL);
    }
    if ( v3[10]-- == 1LL )
      v3[9] = 0LL;
    else
      ++v3[9];
    dword_1802D5F48 = 0;
    ReleaseSRWLockExclusive(&SRWLock);
    anonymous_namespace_::SendFramesReport(&v17);
    AcquireSRWLockExclusive(&SRWLock);
    CurrentThreadId = GetCurrentThreadId();
    v16 = v17;
    dword_1802D5F48 = CurrentThreadId;
    if ( v17 )
    {
      anonymous_namespace_::FramesReport::_FramesReport((char **)v17);
      operator delete(v16, 0xB0uLL);
    }
  }
  dword_1802D5F48 = 0;
  byte_1802D6100 = 0;
  ReleaseSRWLockExclusive(&SRWLock);
}
