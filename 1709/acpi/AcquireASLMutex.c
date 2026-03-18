/*
 * XREFs of AcquireASLMutex @ 0x1C0019D00
 * Callers:
 *     ParseAcquire @ 0x1C0019550 (ParseAcquire.c)
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     QueueContext @ 0x1C0060594 (QueueContext.c)
 */

__int64 __fastcall AcquireASLMutex(__int64 a1, KSPIN_LOCK *a2, unsigned __int16 a3)
{
  int v3; // eax
  unsigned int v4; // esi
  KSPIN_LOCK *v8; // rbp
  KIRQL v9; // r15
  int v10; // ecx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  int v17; // edi
  int v18; // ecx

  v3 = *(_DWORD *)(a1 + 64);
  v4 = 0;
  if ( (v3 & 4) != 0 )
  {
    v4 = 32773;
    *(_DWORD *)(a1 + 64) = v3 & 0xFFFFFFFB;
    return v4;
  }
  v8 = a2 + 23;
  v9 = KeAcquireSpinLockRaiseToDpc(a2 + 23);
  if ( *(_DWORD *)a2 < *(_DWORD *)(a1 + 112) )
  {
    v17 = -1072431083;
    LogError(3222536213LL);
    AcpiDiagTraceAmlError(a1, 3222536213LL);
    v18 = 5;
  }
  else
  {
    v10 = *((_DWORD *)a2 + 1);
    if ( v10 )
    {
      if ( *(_QWORD *)(a2[1] + 8) == a1 )
      {
        *((_DWORD *)a2 + 1) = v10 + 1;
      }
      else
      {
        QueueContext(a1, a3, a2 + 2);
        v4 = 32772;
      }
      goto LABEL_7;
    }
    v11 = HeapAlloc(*(_QWORD *)(a1 + 320), 1380865871, 0x28u);
    if ( v11 )
    {
      v12 = (_QWORD *)(a1 + 48);
      *(_QWORD *)(v11 + 8) = a1;
      *(_QWORD *)(v11 + 16) = a2;
      *(_DWORD *)v11 = 1;
      v13 = (_QWORD *)(v11 + 24);
      v14 = *(_QWORD *)(a1 + 48);
      if ( *(_QWORD *)(v14 + 8) != a1 + 48 )
        __fastfail(3u);
      *v13 = v14;
      *(_QWORD *)(v11 + 32) = v12;
      *(_QWORD *)(v14 + 8) = v13;
      *v12 = v13;
      a2[1] = v11;
      v15 = *(_DWORD *)a2;
      *((_DWORD *)a2 + 1) = 1;
      *(_DWORD *)(a1 + 112) = v15;
      goto LABEL_7;
    }
    v17 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    v18 = 4;
  }
  PrintDebugMessage(v18, 0, 0, 0, 0LL);
  v4 = v17;
LABEL_7:
  KeReleaseSpinLock(v8, v9);
  return v4;
}
