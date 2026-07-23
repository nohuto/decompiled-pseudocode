/*
 * XREFs of PnpLogVetoInformation @ 0x140732698
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14073F108 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x1400C1120 (PsGetProcessImageFileName.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PnpDiagnosticTraceAppVeto @ 0x14023C888 (PnpDiagnosticTraceAppVeto.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14050E958 (PsGetAllocatedFullProcessImageName.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     PsLookupProcessByProcessId @ 0x14059A9C0 (PsLookupProcessByProcessId.c)
 *     PnpTraceDeviceRemoveProcessVeto @ 0x140738BD4 (PnpTraceDeviceRemoveProcessVeto.c)
 */

_QWORD *__fastcall PnpLogVetoInformation(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  bool i; // zf
  char v6; // r15
  int *p_LockNV; // rbp
  __int64 v8; // rcx
  UNICODE_STRING *v9; // rbx
  const CHAR *ProcessImageFileName; // rax
  _QWORD *j; // rax
  __int64 v12; // rdx
  _QWORD *v13; // r14
  _QWORD *v14; // rdi
  _STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING v16; // [rsp+30h] [rbp-48h] BYREF
  PVOID P; // [rsp+88h] [rbp+10h] BYREF
  PEPROCESS Process; // [rsp+90h] [rbp+18h] BYREF

  Process = 0LL;
  result = (_QWORD *)*a2;
  for ( i = a2 == (_QWORD *)*a2; ; i = a2 == result )
  {
    v14 = result - 3;
    if ( i )
      break;
    v6 = 0;
    if ( PsLookupProcessByProcessId((HANDLE)*((unsigned int *)v14 + 4), &Process) >= 0 )
    {
      p_LockNV = &Process->Header.LockNV;
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
      {
        v9 = (UNICODE_STRING *)P;
        if ( !*(_WORD *)P )
        {
          v6 = 1;
          ExFreePoolWithTag(P, 0);
          v9 = &v16;
          P = &v16;
          ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)p_LockNV);
          RtlInitAnsiString(&DestinationString, ProcessImageFileName);
          RtlAnsiStringToUnicodeString(&v16, &DestinationString, 1u);
        }
      }
      else
      {
        v9 = 0LL;
        P = 0LL;
      }
      PnpDiagnosticTraceAppVeto(v8, p_LockNV[184], (__int64)v9, a1);
      for ( j = (_QWORD *)*v14; ; j = (_QWORD *)v13[1] )
      {
        v13 = j - 1;
        if ( v14 == j )
          break;
        if ( *v13 )
          v12 = *(_QWORD *)(*(_QWORD *)(*v13 + 312LL) + 40LL);
        else
          v12 = 0LL;
        PnpTraceDeviceRemoveProcessVeto(a1, v12 + 40, v9);
      }
      if ( v6 )
      {
        RtlFreeAnsiString(v9);
      }
      else if ( v9 )
      {
        ExFreePoolWithTag(v9, 0);
      }
      ObfDereferenceObjectWithTag(p_LockNV, 0x746C6644u);
    }
    result = (_QWORD *)v14[3];
  }
  return result;
}
