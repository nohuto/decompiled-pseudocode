/*
 * XREFs of PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140695064
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401F8500 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExEnumHandleTable @ 0x140428630 (ExEnumHandleTable.c)
 *     PsGetNextProcess @ 0x1404995D0 (PsGetNextProcess.c)
 *     ObReferenceProcessHandleTable @ 0x140517F9C (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstDeviceObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *i; // rcx
  unsigned __int64 v8; // rax
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    NextProcess = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(i);
    v10 = NextProcess;
    if ( !NextProcess )
      break;
    v8 = ObReferenceProcessHandleTable(NextProcess);
    if ( v8 )
    {
      v12[0] = a1;
      v12[1] = v10;
      v12[2] = a2;
      v12[3] = a3;
      v3 = (unsigned __int8)ExEnumHandleTable(
                              v8,
                              (__int64 (__fastcall *)(__int64, signed __int64 *, _QWORD, __int64))PnpHandleProcessWalkWorker,
                              (__int64)v12,
                              0LL);
      ExReleaseRundownProtection(v10 + 95);
      if ( v3 )
      {
        ObfDereferenceObjectWithTag(v10, 0x6E457350u);
        return v3;
      }
    }
  }
  return v3;
}
