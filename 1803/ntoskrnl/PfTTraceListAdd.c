/*
 * XREFs of PfTTraceListAdd @ 0x140510250
 * Callers:
 *     PfpSectInfoHandleFullBuffer @ 0x14052A050 (PfpSectInfoHandleFullBuffer.c)
 *     PfTGenerateTrace @ 0x14053B120 (PfTGenerateTrace.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PfTAccessTracingCleanup @ 0x1404780E0 (PfTAccessTracingCleanup.c)
 *     PfTTraceListFree @ 0x14051039C (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x14075C7B4 (PfTTraceListTrim.c)
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
  v2 = (unsigned int)dword_1403CD39C;
  v3 = dword_1403CD398 < (unsigned int)dword_1403CD39C;
  if ( a1[7] == 1 )
  {
    v5 = &unk_1403CD388;
    v2 = (unsigned int)dword_1403CD3A4;
    v4 = &dword_1403CD3A0;
    if ( dword_1403CD3A0 + 1 == dword_1403CD3A4 )
      ++HIDWORD(xmmword_1403CD490);
  }
  else
  {
    v4 = &dword_1403CD398;
    v5 = &unk_1403CD378;
    if ( dword_1403CD398 + 1 == dword_1403CD39C )
      ++DWORD2(xmmword_1403CD490);
    dword_1403CD3A8 = 1;
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
  if ( v5 == (_QWORD *)&unk_1403CD378 && (_QWORD *)*v5 == v5 )
    dword_1403CD3A8 = 0;
  if ( v3 && dword_1403CD398 >= (unsigned int)dword_1403CD39C )
    PfTAccessTracingCleanup((__int64)&PfTGlobals, v2, 2);
  KeSetEvent(qword_1403CD3E8, 0, 0);
  KeReleaseGuardedMutex(&FastMutex);
  return PfTTraceListFree(v8);
}
