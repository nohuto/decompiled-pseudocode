/*
 * XREFs of MiFlushStrongCodeDriverLoadFailures @ 0x1408039CC
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401F8C50 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmReleaseLoadLock @ 0x1404B2930 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404B2970 (MmAcquireLoadLock.c)
 */

__int64 MiFlushStrongCodeDriverLoadFailures()
{
  struct _KTHREAD *Lock; // rdi
  unsigned __int16 *v1; // rbx
  __int64 v3; // rcx
  const CHAR *v4; // rdx
  __int64 v5; // rax
  ULONG64 v6; // r8
  TraceLoggingHProvider v7; // r9
  const GUID *v8; // [rsp+28h] [rbp-69h]
  const GUID *v9; // [rsp+30h] [rbp-61h]
  int v10; // [rsp+48h] [rbp-49h] BYREF
  int v11; // [rsp+4Ch] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-19h] BYREF
  _DWORD *v14; // [rsp+88h] [rbp-9h]
  int v15; // [rsp+90h] [rbp-1h]
  int v16; // [rsp+94h] [rbp+3h]
  __int64 v17; // [rsp+98h] [rbp+7h]
  _DWORD v18[2]; // [rsp+A0h] [rbp+Fh] BYREF
  int *v19; // [rsp+A8h] [rbp+17h]
  int v20; // [rsp+B0h] [rbp+1Fh]
  int v21; // [rsp+B4h] [rbp+23h]
  int *v22; // [rsp+B8h] [rbp+27h]
  int v23; // [rsp+C0h] [rbp+2Fh]
  int v24; // [rsp+C4h] [rbp+33h]

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (unsigned __int16 *)qword_14036C0A8;
    if ( qword_14036C0A8 == &qword_14036C0A8 )
      break;
    v3 = *(_QWORD *)qword_14036C0A8;
    if ( *((PVOID **)qword_14036C0A8 + 1) != &qword_14036C0A8 || *(PVOID *)(v3 + 8) != qword_14036C0A8 )
      __fastfail(3u);
    qword_14036C0A8 = *(PVOID *)qword_14036C0A8;
    *(_QWORD *)(v3 + 8) = &qword_14036C0A8;
    if ( qword_14036CFD8->LevelPlus1 > 5 && TlgKeywordOn(qword_14036CFD8, 0x400000000000uLL) )
    {
      v4 = (const CHAR *)*((_QWORD *)v1 + 2);
      v10 = *((_DWORD *)v1 + 10);
      v11 = *((_DWORD *)v1 + 11);
      TlgCreateSz(&pDesc, v4);
      v5 = *((_QWORD *)v1 + 4);
      v16 = 0;
      v18[1] = 0;
      v21 = 0;
      v24 = 0;
      v17 = v5;
      v18[0] = v1[12];
      v19 = &v10;
      v22 = &v11;
      v14 = v18;
      v15 = 2;
      v20 = 4;
      v23 = 4;
      TlgWriteEx(v7, &unk_1402AC6C0, v6, (ULONG)v7, v8, v9, 7u, &pData);
    }
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock((__int64)Lock);
}
