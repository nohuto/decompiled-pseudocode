/*
 * XREFs of PfTTraceListAdd @ 0x140498398
 * Callers:
 *     PfTGenerateTrace @ 0x140420A44 (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x14044DFF0 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     PfTAccessTracingCleanup @ 0x14040E304 (PfTAccessTracingCleanup.c)
 *     PfTTraceListFree @ 0x1404987A8 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x1406C48E8 (PfTTraceListTrim.c)
 */

__int64 __fastcall PfTTraceListAdd(unsigned int *a1)
{
  __int64 v2; // rdx
  BOOL v3; // esi
  int *v4; // rcx
  _QWORD *v5; // rbx
  void **v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = v8;
  v8[0] = v8;
  ExAcquireFastMutex(&FastMutex);
  v2 = (unsigned int)dword_14036DB1C;
  v3 = dword_14036DB18 < (unsigned int)dword_14036DB1C;
  if ( a1[7] == 1 )
  {
    v5 = &unk_14036DB08;
    v2 = (unsigned int)dword_14036DB24;
    v4 = &dword_14036DB20;
    if ( dword_14036DB20 + 1 == dword_14036DB24 )
      ++HIDWORD(xmmword_14036DC10);
  }
  else
  {
    v4 = &dword_14036DB18;
    v5 = &unk_14036DAF8;
    if ( dword_14036DB18 + 1 == dword_14036DB1C )
      ++DWORD2(xmmword_14036DC10);
    dword_14036DB28 = 1;
  }
  v6 = (void **)v5[1];
  if ( *v6 != v5 )
    __fastfail(3u);
  *(_QWORD *)a1 = v5;
  *((_QWORD *)a1 + 1) = v6;
  *v6 = a1;
  v5[1] = a1;
  if ( ++*v4 > (unsigned int)v2 )
    PfTTraceListTrim(a1[7], v2, v8);
  if ( v5 == (_QWORD *)&unk_14036DAF8 && (_QWORD *)*v5 == v5 )
    dword_14036DB28 = 0;
  if ( v3 && dword_14036DB18 >= (unsigned int)dword_14036DB1C )
    PfTAccessTracingCleanup((__int64)&PfTGlobals, v2, 2);
  KeSetEvent(qword_14036DB68, 0, 0);
  KeReleaseGuardedMutex(&FastMutex);
  return PfTTraceListFree(v8);
}
