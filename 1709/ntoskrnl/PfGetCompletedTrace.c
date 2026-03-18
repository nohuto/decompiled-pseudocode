/*
 * XREFs of PfGetCompletedTrace @ 0x140455130
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1404C4070 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     PfTFreeTraceDump @ 0x140010B04 (PfTFreeTraceDump.c)
 *     PfFbBufferListFlushStandby @ 0x140011DE4 (PfFbBufferListFlushStandby.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     PfTAccessTracingStart @ 0x140431394 (PfTAccessTracingStart.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 */

__int64 __fastcall PfGetCompletedTrace(_QWORD *a1, unsigned int a2, char a3, unsigned int *a4)
{
  void **v4; // rbx
  unsigned int v5; // r14d
  int v6; // r13d
  BOOL v7; // ecx
  int v8; // eax
  int *v9; // r12
  void ***v10; // rdi
  void ***v11; // rax
  unsigned int v12; // esi

  v4 = 0LL;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    ExAcquireFastMutex(&FastMutex);
    if ( !dword_140387AA8 )
      break;
    dword_140387AA8 = 0;
    KeReleaseGuardedMutex(&FastMutex);
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140387960);
  }
  v7 = dword_140387A98 < (unsigned int)dword_140387A9C;
  v8 = 0;
  while ( 1 )
  {
    v9 = &dword_140387AA0;
    if ( v8 )
      v9 = &dword_140387A98;
    v10 = (void ***)&unk_140387A88;
    if ( v8 )
      v10 = (void ***)&unk_140387A78;
    if ( *v10 != (void **)v10 )
      break;
    if ( (unsigned int)++v8 >= 2 )
      goto LABEL_15;
  }
  v4 = *v10;
  v5 = *((_DWORD *)*v10 + 6) + 16;
  if ( v5 > a2 )
  {
    *a4 = v5;
    v12 = -1073741789;
    goto LABEL_20;
  }
  v11 = (void ***)*v4;
  if ( v4[1] != v10 || v11[1] != v4 )
    __fastfail(3u);
  *v10 = (void **)v11;
  v11[1] = (void **)v10;
  --*v9;
LABEL_15:
  if ( !v7 && dword_140387A98 < (unsigned int)dword_140387A9C )
  {
    PfTAccessTracingStart((__int64)&PfTGlobals, (__int64)&PfKernelGlobals, 2);
    KeSetEvent(&Event, 0, 0);
  }
  KeReleaseGuardedMutex(&FastMutex);
  v6 = 0;
  if ( v4 )
  {
    if ( a3 )
      ProbeForWrite(a1, a2, 8u);
    *a1 = 0LL;
    a1[1] = 0LL;
    *(_DWORD *)a1 = 1048577;
    a1[1] = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)qword_14038D3C8) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(qword_14038D3C8)) << 8);
    memmove(a1 + 2, v4 + 2, *((unsigned int *)v4 + 6));
    *a4 = v5;
    PfTFreeTraceDump(v4);
    v12 = 0;
  }
  else
  {
    v12 = -2147483622;
  }
LABEL_20:
  if ( v6 )
    KeReleaseGuardedMutex(&FastMutex);
  return v12;
}
