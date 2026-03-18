/*
 * XREFs of ParseAcquire @ 0x1C0054260
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     AcquireGL @ 0x1C004616C (AcquireGL.c)
 *     IsCompatableDSDTRevision @ 0x1C0046E34 (IsCompatableDSDTRevision.c)
 *     PerformMutexDriverCallbacks @ 0x1C00478C8 (PerformMutexDriverCallbacks.c)
 *     PerformMutexResourceBindings @ 0x1C0047A6C (PerformMutexResourceBindings.c)
 *     ReleaseGL @ 0x1C0047D28 (ReleaseGL.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     AcquireASLMutex @ 0x1C004E924 (AcquireASLMutex.c)
 *     ReleaseASLMutex @ 0x1C004EF98 (ReleaseASLMutex.c)
 */

__int64 __fastcall ParseAcquire(__int64 a1, __int64 a2, int a3)
{
  int v5; // edx
  const void *v6; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r14d
  __int64 v19; // rcx

  v5 = *(_DWORD *)(a2 + 16);
  LODWORD(v6) = a3;
  if ( (v5 & 0xF) == 3 )
  {
    v7 = 3;
  }
  else
  {
    v7 = 5;
    if ( !a3 )
      v7 = v5 & 0xF;
  }
  if ( !v7 )
  {
    v13 = *(_QWORD *)(a2 + 56);
    v14 = v5 + 1;
    v15 = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 16) = v14;
    LODWORD(v6) = PerformMutexResourceBindings(a1, v15, v13);
    if ( (_DWORD)v6 )
      return (unsigned int)v6;
    goto LABEL_15;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_15:
    if ( (++*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
    {
      LODWORD(v6) = AcquireGL(a1);
      if ( (_DWORD)v6 )
        return (unsigned int)v6;
    }
    v5 = *(_DWORD *)(a2 + 16);
    goto LABEL_18;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_18:
    if ( (v5 & 0x10000) != 0 )
      *(_DWORD *)(a2 + 16) = v5 | 0x20000;
    LODWORD(v6) = AcquireASLMutex(a1, *(KSPIN_LOCK **)(a2 + 32), *(_WORD *)(a2 + 40));
    v16 = *(_DWORD *)(a2 + 16);
    if ( (_DWORD)v6 == 32772 )
    {
      if ( (v16 & 0x20000) != 0 )
      {
        *(_DWORD *)(a2 + 16) = v16 & 0xFFFDFFFF;
        v6 = (const void *)(int)ReleaseGL();
        v17 = *(_DWORD *)(a2 + 16);
        if ( (_DWORD)v6 )
        {
          *(_DWORD *)(a2 + 16) = v17 + 3;
          LogError(-1072431101);
          AcpiDiagTraceAmlError(a1, -1072431101);
          PrintDebugMessage(119, v6, 0LL, 0LL, 0LL);
          LODWORD(v6) = -1072431101;
        }
        else
        {
          *(_DWORD *)(a2 + 16) = v17 - 1;
        }
      }
      return (unsigned int)v6;
    }
    if ( !(_DWORD)v6 )
    {
      v16 |= 0x80000u;
      *(_DWORD *)(a2 + 16) = v16;
    }
    *(_DWORD *)(a2 + 16) = v16 + 1;
    goto LABEL_28;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_28:
    if ( (_DWORD)v6 != 32773 && *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) == 3 )
    {
      LODWORD(v6) = PerformMutexDriverCallbacks(2, *(_QWORD *)(a2 + 32), a1, *(_QWORD *)(a1 + 80), *(_WORD *)(a2 + 40));
      if ( (_DWORD)v6 == 32772 )
        return (unsigned int)v6;
    }
    v5 = ++*(_DWORD *)(a2 + 16);
    goto LABEL_32;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return (unsigned int)v6;
      goto LABEL_48;
    }
LABEL_42:
    if ( (v5 & 0x40000) != 0 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
      if ( (_DWORD)v6 )
      {
        LODWORD(v6) = 0;
        *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = (-(__int64)IsCompatableDSDTRevision() & 0xFFFFFFFF00000000uLL)
                                                 + 0xFFFFFFFF;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
      }
    }
    ++*(_DWORD *)(a2 + 16);
LABEL_48:
    v19 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v19 + 8);
    HeapFree(v19);
    return (unsigned int)v6;
  }
LABEL_32:
  if ( !(_DWORD)v6 )
    goto LABEL_41;
  if ( (v5 & 0x80000) != 0 )
  {
    *(_DWORD *)(a2 + 16) = v5 & 0xFFF7FFFF;
    ReleaseASLMutex(a1, *(_QWORD *)(a2 + 32), 0);
    v5 = *(_DWORD *)(a2 + 16);
  }
  if ( (v5 & 0x20000) != 0 )
  {
    *(_DWORD *)(a2 + 16) = v5 & 0xFFFDFFFF;
    v18 = ReleaseGL();
    if ( v18 )
    {
      LogError(-1072431101);
      AcpiDiagTraceAmlError(a1, -1072431101);
      PrintDebugMessage(172, (const void *)v18, 0LL, 0LL, 0LL);
      LODWORD(v6) = -1072431101;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) != 3 )
    goto LABEL_41;
  if ( *(_WORD *)(a2 + 40) != 0xFFFF )
  {
    LODWORD(v6) = 32773;
LABEL_41:
    v5 = ++*(_DWORD *)(a2 + 16);
    goto LABEL_42;
  }
  *(_DWORD *)(a2 + 16) = 1;
  return (unsigned int)v6;
}
