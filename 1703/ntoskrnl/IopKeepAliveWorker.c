/*
 * XREFs of IopKeepAliveWorker @ 0x1401F4F90
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1406E00DC (PspAdjustKeepAliveCountProcess.c)
 */

__int64 IopKeepAliveWorker()
{
  KIRQL v0; // al
  KIRQL v1; // si
  PVOID v2; // rbx
  int v3; // edi
  PVOID v4; // rcx
  PVOID *v5; // rax
  bool v6; // zf
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  KIRQL v12; // si
  __int64 result; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1403690F0);
  qword_140369120 = (__int64)KeGetCurrentThread();
LABEL_2:
  v1 = v0;
  while ( 1 )
  {
    v2 = qword_1403690E0;
    if ( qword_1403690E0 == &qword_1403690E0 )
      break;
    v3 = *((_DWORD *)qword_1403690E0 + 8);
    *((_DWORD *)qword_1403690E0 + 8) = 0;
    if ( v3 )
    {
      KxReleaseSpinLock(&qword_1403690F0);
      __writecr8(v1);
      if ( v3 > 0 )
      {
        do
        {
          ObfReferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
          LOBYTE(v8) = *((_BYTE *)v2 + 18);
          PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 1LL, *((_QWORD *)v2 + 5), v8);
          --v3;
        }
        while ( v3 );
        goto LABEL_23;
      }
      if ( v3 != -1 )
      {
        v9 = (unsigned int)(-1 - v3);
        do
        {
          LOBYTE(v7) = *((_BYTE *)v2 + 18);
          PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v7);
          ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
          --v9;
        }
        while ( v9 );
      }
      LOBYTE(v7) = *((_BYTE *)v2 + 18);
      v10 = *((_QWORD *)v2 + 3);
      if ( (_BYTE)v7 )
        v11 = *(_DWORD *)(v10 + 2028);
      else
        v11 = *(_DWORD *)(v10 + 2060);
      if ( (v11 & 0x7FFFFFFF) == 1 )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(&qword_1403690F0);
        if ( MEMORY[0xFFFFF78000000014] >= *((_QWORD *)v2 + 6) )
        {
          KxReleaseSpinLock(&qword_1403690F0);
          __writecr8(v12);
          LOBYTE(v7) = *((_BYTE *)v2 + 18);
          v10 = *((_QWORD *)v2 + 3);
          goto LABEL_21;
        }
        --*((_DWORD *)v2 + 8);
        KxReleaseSpinLock(&qword_1403690F0);
        __writecr8(v12);
        KeDelayExecutionThread(0, 1u, (PLARGE_INTEGER)v2 + 6);
      }
      else
      {
LABEL_21:
        PspAdjustKeepAliveCountProcess(v10, 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v7);
        ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
      }
LABEL_23:
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_1403690F0);
      goto LABEL_2;
    }
    v4 = *(PVOID *)v2;
    v5 = (PVOID *)*((_QWORD *)v2 + 1);
    if ( *(PVOID *)(*(_QWORD *)v2 + 8LL) != v2 || *v5 != v2 )
      __fastfail(3u);
    *v5 = v4;
    *((_QWORD *)v4 + 1) = v5;
    v6 = *((_BYTE *)v2 + 17) == 1;
    *((_BYTE *)v2 + 16) = 0;
    if ( v6 )
      ExFreePoolWithTag(v2, 0);
  }
  qword_140369120 = 0LL;
  byte_140369118 = 0;
  KxReleaseSpinLock(&qword_1403690F0);
  result = v1;
  __writecr8(v1);
  return result;
}
