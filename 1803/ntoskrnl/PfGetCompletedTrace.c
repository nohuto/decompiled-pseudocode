/*
 * XREFs of PfGetCompletedTrace @ 0x14050FFC4
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1405B0640 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     PfTFreeTraceDump @ 0x14006EFFC (PfTFreeTraceDump.c)
 *     PfFbBufferListFlushStandby @ 0x14007AC44 (PfFbBufferListFlushStandby.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     PfTAccessTracingStart @ 0x140478230 (PfTAccessTracingStart.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 */

__int64 __fastcall PfGetCompletedTrace(_QWORD *a1, unsigned int a2, char a3, unsigned int *a4)
{
  _DWORD *v4; // rbx
  unsigned int v5; // r14d
  int v6; // r13d
  BOOL v7; // edx
  int v8; // eax
  int *v9; // r12
  _QWORD *v10; // rdi
  _DWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // esi

  v4 = 0LL;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    ExAcquireFastMutex(&FastMutex);
    if ( !dword_1403CD3A8 )
      break;
    dword_1403CD3A8 = 0;
    KeReleaseGuardedMutex(&FastMutex);
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_1403CD260);
  }
  v7 = dword_1403CD398 < (unsigned int)dword_1403CD39C;
  v8 = 0;
  while ( 1 )
  {
    v9 = &dword_1403CD3A0;
    if ( v8 )
      v9 = &dword_1403CD398;
    v10 = &unk_1403CD388;
    if ( v8 )
      v10 = &unk_1403CD378;
    v11 = (_DWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
      break;
    if ( (unsigned int)++v8 >= 2 )
      goto LABEL_15;
  }
  v4 = (_DWORD *)*v10;
  v5 = v11[6] + 16;
  if ( v5 > a2 )
  {
    *a4 = v5;
    v13 = -1073741789;
    goto LABEL_20;
  }
  v12 = *(_QWORD *)v11;
  if ( *((_QWORD **)v11 + 1) != v10 || *(_DWORD **)(v12 + 8) != v11 )
    __fastfail(3u);
  *v10 = v12;
  *(_QWORD *)(v12 + 8) = v10;
  --*v9;
LABEL_15:
  if ( !v7 && dword_1403CD398 < (unsigned int)dword_1403CD39C )
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
    a1[1] = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)qword_1403CD7E8) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(qword_1403CD7E8)) << 8);
    memmove(a1 + 2, v4 + 4, (unsigned int)v4[6]);
    *a4 = v5;
    PfTFreeTraceDump(v4);
    v13 = 0;
  }
  else
  {
    v13 = -2147483622;
  }
LABEL_20:
  if ( v6 )
    KeReleaseGuardedMutex(&FastMutex);
  return v13;
}
