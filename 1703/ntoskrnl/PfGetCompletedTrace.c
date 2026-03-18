/*
 * XREFs of PfGetCompletedTrace @ 0x140498110
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14052B3F0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PfFbBufferListFlushStandby @ 0x14005F298 (PfFbBufferListFlushStandby.c)
 *     PfTFreeTraceDump @ 0x140061B90 (PfTFreeTraceDump.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     PfTAccessTracingStart @ 0x140404D3C (PfTAccessTracingStart.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 */

__int64 __fastcall PfGetCompletedTrace(_QWORD *a1, unsigned int a2, char a3, unsigned int *a4)
{
  void **v4; // rbx
  unsigned int v5; // r14d
  int v6; // r13d
  unsigned int v7; // ecx
  unsigned int v8; // edx
  BOOL v9; // r8d
  int v10; // eax
  int *v11; // r15
  void ***v12; // rdi
  void ***v13; // rax
  unsigned int v14; // esi

  v4 = 0LL;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    ExAcquireFastMutex(&FastMutex);
    if ( !dword_14036DB28 )
      break;
    dword_14036DB28 = 0;
    KeReleaseGuardedMutex(&FastMutex);
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_14036D9E0);
  }
  v7 = dword_14036DB18;
  v8 = dword_14036DB1C;
  v9 = dword_14036DB18 < (unsigned int)dword_14036DB1C;
  v10 = 0;
  while ( 1 )
  {
    v11 = &dword_14036DB20;
    if ( v10 )
      v11 = &dword_14036DB18;
    v12 = (void ***)&unk_14036DB08;
    if ( v10 )
      v12 = (void ***)&unk_14036DAF8;
    if ( *v12 != (void **)v12 )
      break;
    if ( (unsigned int)++v10 >= 2 )
      goto LABEL_15;
  }
  v4 = *v12;
  v5 = *((_DWORD *)*v12 + 6) + 16;
  if ( v5 > a2 )
  {
    *a4 = v5;
    v14 = -1073741789;
    goto LABEL_20;
  }
  v13 = (void ***)*v4;
  if ( v4[1] != v12 || v13[1] != v4 )
    __fastfail(3u);
  *v12 = (void **)v13;
  v13[1] = (void **)v12;
  --*v11;
  v8 = dword_14036DB1C;
  v7 = dword_14036DB18;
LABEL_15:
  if ( !v9 && v7 < v8 )
  {
    PfTAccessTracingStart((__int64)&PfTGlobals, (__int64)&PfKernelGlobals, 2);
    KeSetEvent(&stru_140382BD0, 0, 0);
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
    a1[1] = ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)(unsigned int)qword_14036DF68) >> 24)
          + ((MEMORY[0xFFFFF78000000004] * HIDWORD(qword_14036DF68)) << 8);
    memmove(a1 + 2, v4 + 2, *((unsigned int *)v4 + 6));
    *a4 = v5;
    PfTFreeTraceDump(v4);
    v14 = 0;
  }
  else
  {
    v14 = -2147483622;
  }
LABEL_20:
  if ( v6 )
    KeReleaseGuardedMutex(&FastMutex);
  return v14;
}
