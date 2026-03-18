/*
 * XREFs of EtwpGetPrivateSessionTraceHandle @ 0x1407B00D8
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     RtlRandomEx @ 0x140071930 (RtlRandomEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PsLookupProcessByProcessId @ 0x14059A9C0 (PsLookupProcessByProcessId.c)
 *     PidNodeCompare @ 0x1407B08DC (PidNodeCompare.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1407B28DC (EtwpCheckCurrentUserProcessAccess.c)
 */

__int64 __fastcall EtwpGetPrivateSessionTraceHandle(_DWORD *a1, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // rsi
  unsigned int v5; // ebx
  __int64 v6; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // r13
  _DWORD *v9; // rdi
  unsigned __int16 v10; // bp
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int i; // r14d
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  int v16; // esi
  int v17; // eax
  unsigned __int64 v18; // rax
  __int64 **v19; // rdi
  __int64 *j; // rcx
  int v22; // [rsp+20h] [rbp-58h] BYREF
  ULONG Seed; // [rsp+28h] [rbp-50h] BYREF
  PEPROCESS Process; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h]
  char v28; // [rsp+98h] [rbp+20h]

  v3 = a2;
  v5 = 0;
  v28 = 0;
  v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  CurrentThread = KeGetCurrentThread();
  v8 = (unsigned __int64 *)(v6 + 4056);
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = (ULONG_PTR)(v8 + 2);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 2), 0LL);
  if ( (_DWORD)v3 )
  {
    v9 = a1;
    do
    {
      if ( PsLookupProcessByProcessId((HANDLE)(unsigned int)*v9, &Process) )
      {
        *v9 = 0;
      }
      else
      {
        if ( (unsigned int)EtwpCheckCurrentUserProcessAccess(Process) )
          *v9 = 0;
        ObfDereferenceObjectWithTag(Process, 0x746C6644u);
      }
      v9 += 2;
      --v3;
    }
    while ( v3 );
LABEL_9:
    LODWORD(v3) = a2;
  }
  do
    v10 = RtlRandomEx(&Seed) & 0x7FFF;
  while ( v10 < 0x40u );
  for ( i = 0; i < (unsigned int)v3; ++i )
  {
    if ( a1[2 * i] )
    {
      v14 = *v8;
      v22 = a1[2 * i];
      v15 = v8[1];
      if ( (v15 & 1) != 0 )
      {
        if ( v14 )
          v14 ^= (unsigned __int64)v8;
        else
          v14 = 0LL;
      }
      v16 = v15 & 1;
      if ( v14 )
      {
        do
        {
          v17 = PidNodeCompare(&v22, v14);
          if ( v17 >= 0 )
          {
            if ( v17 <= 0 )
              break;
            v18 = *(_QWORD *)(v14 + 8);
          }
          else
          {
            v18 = *(_QWORD *)v14;
          }
          if ( v16 && v18 )
            v14 ^= v18;
          else
            v14 = v18;
        }
        while ( v14 );
        if ( v14 )
        {
          v19 = (__int64 **)(v14 + 32);
          for ( j = *v19; j != (__int64 *)v19; j = (__int64 *)*j )
          {
            if ( *((_WORD *)j + 9) == v10 )
              goto LABEL_9;
            if ( *((_WORD *)j + 8) == LOWORD(a1[2 * i + 1]) )
            {
              if ( *((_WORD *)j + 10) != HIWORD(a1[2 * i + 1]) )
                break;
              *((_WORD *)j + 9) = v10;
              v28 = 1;
            }
          }
        }
      }
      LODWORD(v3) = a2;
    }
  }
  ExReleasePushLockEx(BugCheckParameter2, 0LL, v11, v12);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v28 )
    *a3 = v10;
  else
    return (unsigned int)-1073741275;
  return v5;
}
