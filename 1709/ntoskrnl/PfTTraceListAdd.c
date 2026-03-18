/*
 * XREFs of PfTTraceListAdd @ 0x140457178
 * Callers:
 *     PfTGenerateTrace @ 0x14045692C (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x1404572E0 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PfTAccessTracingCleanup @ 0x1404312A0 (PfTAccessTracingCleanup.c)
 *     PfTTraceListFree @ 0x1404572B8 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x1406F426C (PfTTraceListTrim.c)
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
  v2 = (unsigned int)dword_140387A9C;
  v3 = dword_140387A98 < (unsigned int)dword_140387A9C;
  if ( a1[7] == 1 )
  {
    v5 = &unk_140387A88;
    v2 = (unsigned int)dword_140387AA4;
    v4 = &dword_140387AA0;
    if ( dword_140387AA0 + 1 == dword_140387AA4 )
      ++HIDWORD(xmmword_140387B90);
  }
  else
  {
    v4 = &dword_140387A98;
    v5 = &unk_140387A78;
    if ( dword_140387A98 + 1 == dword_140387A9C )
      ++DWORD2(xmmword_140387B90);
    dword_140387AA8 = 1;
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
  if ( v5 == (_QWORD *)&unk_140387A78 && (_QWORD *)*v5 == v5 )
    dword_140387AA8 = 0;
  if ( v3 && dword_140387A98 >= (unsigned int)dword_140387A9C )
    PfTAccessTracingCleanup((__int64)&PfTGlobals, v2, 2);
  KeSetEvent(qword_140387AE8, 0, 0);
  KeReleaseGuardedMutex(&FastMutex);
  return PfTTraceListFree(v8);
}
