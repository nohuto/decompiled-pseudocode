/*
 * XREFs of EtwpGetPrivateSessionTraceHandle @ 0x14074F27C
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     PsLookupProcessByProcessId @ 0x140575060 (PsLookupProcessByProcessId.c)
 *     PidNodeCompare @ 0x14074FA5C (PidNodeCompare.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140751B88 (EtwpCheckCurrentUserProcessAccess.c)
 */

__int64 __fastcall EtwpGetPrivateSessionTraceHandle(_DWORD *a1, unsigned int a2, unsigned __int16 *a3)
{
  char v5; // r14
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v8; // rbx
  __int64 v9; // rdi
  unsigned __int16 v10; // di
  __int64 i; // rbp
  char v12; // si
  unsigned __int64 v13; // rbx
  int v14; // esi
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 **v17; // rbx
  __int64 *j; // rcx
  PEPROCESS Process; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+28h] [rbp-40h]
  int v22; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int16 *v23; // [rsp+80h] [rbp+18h]
  __int64 v24; // [rsp+88h] [rbp+20h]

  v23 = a3;
  v5 = 0;
  v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  CurrentThread = KeGetCurrentThread();
  v24 = v6;
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v6 + 4064;
  ExAcquirePushLockExclusiveEx(v6 + 4064, 0LL);
  if ( a2 )
  {
    v8 = a1;
    v9 = a2;
    do
    {
      if ( PsLookupProcessByProcessId((HANDLE)(unsigned int)*v8, &Process) )
      {
        *v8 = 0;
      }
      else
      {
        if ( (unsigned int)EtwpCheckCurrentUserProcessAccess(Process) )
          *v8 = 0;
        ObfDereferenceObjectWithTag(Process, 0x746C6644u);
      }
      v8 += 2;
      --v9;
    }
    while ( v9 );
LABEL_9:
    v6 = v24;
  }
  do
    v10 = ExGenRandom(1) & 0x7FFF;
  while ( v10 < 0x40u );
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    if ( a1[2 * i] )
    {
      v12 = *(_BYTE *)(v6 + 4056);
      v13 = *(_QWORD *)(v6 + 4048);
      v14 = v12 & 1;
      v22 = a1[2 * i];
      if ( v13 )
      {
        do
        {
          v15 = PidNodeCompare(&v22, v13);
          if ( v15 >= 0 )
          {
            if ( v15 <= 0 )
              break;
            v16 = *(_QWORD *)(v13 + 8);
          }
          else
          {
            v16 = *(_QWORD *)v13;
          }
          if ( v14 && v16 )
            v13 ^= v16;
          else
            v13 = v16;
        }
        while ( v13 );
        if ( v13 )
        {
          v17 = (__int64 **)(v13 + 32);
          for ( j = *v17; j != (__int64 *)v17; j = (__int64 *)*j )
          {
            if ( *((_WORD *)j + 9) == v10 )
              goto LABEL_9;
            if ( *((_WORD *)j + 8) == LOWORD(a1[2 * i + 1]) )
            {
              if ( *((_WORD *)j + 10) != HIWORD(a1[2 * i + 1]) )
                break;
              *((_WORD *)j + 9) = v10;
              v5 = 1;
            }
          }
        }
      }
    }
    v6 = v24;
  }
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 )
    *v23 = v10;
  return v5 == 0 ? 0xC0000225 : 0;
}
