/*
 * XREFs of Method @ 0x1C001B390
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall Method(__int64 a1, __int64 a2)
{
  __int64 *v2; // r14
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rsi
  KIRQL v12; // r8
  _QWORD *v13; // rax

  v2 = (__int64 *)(a2 + 64);
  result = CreateNameSpaceObject(
             *(_QWORD *)(a1 + 320),
             *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
             *(_QWORD *)(a1 + 80),
             *(struct _EX_RUNDOWN_REF **)(a1 + 88),
             (_QWORD *)(a2 + 64),
             0);
  if ( !(_DWORD)result )
  {
    *(_WORD *)(*v2 + 66) = 8;
    *(_DWORD *)(*v2 + 88) = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 120) + 194;
    v6 = HeapAlloc(*(_QWORD *)(a1 + 320), 1413827912, *(_DWORD *)(*v2 + 88));
    *(_QWORD *)(*v2 + 96) = v6;
    if ( !v6 )
    {
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(104, 0, 0, 0, 0LL);
      return 3221225626LL;
    }
    v7 = *v2;
    v8 = *(_QWORD *)(*v2 + 96);
    v9 = v8 + 194;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x536C6D41u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_12;
    memset(PoolWithTag, 0, 0x20uLL);
    v11[2] = v9;
    v11[3] = v7;
    v12 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v13 = P;
    if ( P )
    {
      if ( v9 >= *((_QWORD *)P + 2) )
      {
        if ( P )
        {
          while ( v9 >= v13[2] )
          {
            if ( !v13[1] )
            {
              *v11 = v13;
              v13[1] = v11;
              goto LABEL_11;
            }
            v13 = (_QWORD *)v13[1];
          }
          v11[1] = v13;
          *v11 = *v13;
          *(_QWORD *)(*v13 + 8LL) = v11;
          *v13 = v11;
        }
        goto LABEL_11;
      }
      v11[1] = P;
      *(_QWORD *)P = v11;
    }
    P = v11;
LABEL_11:
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v12);
LABEL_12:
    memset(*(void **)(*v2 + 96), 0, *(unsigned int *)(*v2 + 88));
    *(_BYTE *)(v8 + 193) = *(_BYTE *)(*(_QWORD *)(a1 + 120) - 1LL);
    memmove((void *)(v8 + 194), *(const void **)(a1 + 120), *(_QWORD *)(a2 + 40) - *(_QWORD *)(a1 + 120));
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
    KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 184));
    *(_QWORD *)(v8 + 24) = v8 + 16;
    *(_QWORD *)(v8 + 16) = v8 + 16;
    return 0LL;
  }
  if ( (_DWORD)result == -1073741771 )
  {
    if ( g_SimulatorCallbackObject )
    {
      result = 0LL;
      *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
    }
  }
  return result;
}
