/*
 * XREFs of PnpLogVetoInformation @ 0x14055BDB8
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14055BC8C (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x140124270 (PsGetProcessImageFileName.c)
 *     PnpDiagnosticTraceAppVeto @ 0x1401FFB3C (PnpDiagnosticTraceAppVeto.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PsLookupProcessByProcessId @ 0x140575060 (PsLookupProcessByProcessId.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14057D3A8 (PsGetAllocatedFullProcessImageName.c)
 *     PnpTraceDeviceRemoveProcessVeto @ 0x1406D1224 (PnpTraceDeviceRemoveProcessVeto.c)
 */

int __fastcall PnpLogVetoInformation(unsigned __int16 *a1, _QWORD *a2)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rbx
  _QWORD *i; // rsi
  char v7; // r12
  int *p_LockNV; // rbp
  __int64 v9; // rcx
  UNICODE_STRING *v10; // rdi
  const CHAR *ProcessImageFileName; // rax
  __int64 j; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 *v16; // r15
  _STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING v19; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  PVOID P; // [rsp+88h] [rbp+10h] BYREF
  PEPROCESS Process; // [rsp+90h] [rbp+18h] BYREF

  v2 = &retaddr;
  v3 = *a2 - 24LL;
  Process = 0LL;
  for ( i = (_QWORD *)(v3 + 24); a2 != i; i = (_QWORD *)*i )
  {
    v7 = 0;
    LODWORD(v2) = PsLookupProcessByProcessId((HANDLE)*(unsigned int *)(v3 + 16), &Process);
    if ( (int)v2 >= 0 )
    {
      p_LockNV = &Process->Header.LockNV;
      if ( (int)PsGetAllocatedFullProcessImageName(Process, &P) >= 0 )
      {
        v10 = (UNICODE_STRING *)P;
        if ( !*(_WORD *)P )
        {
          v7 = 1;
          ExFreePoolWithTag(P, 0);
          v10 = &v19;
          P = &v19;
          ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)p_LockNV);
          RtlInitAnsiString(&DestinationString, ProcessImageFileName);
          RtlAnsiStringToUnicodeString(&v19, &DestinationString, 1u);
        }
      }
      else
      {
        v10 = 0LL;
        P = 0LL;
      }
      PnpDiagnosticTraceAppVeto(v9, p_LockNV[184], (__int64)v10, a1);
      for ( j = *(_QWORD *)v3; ; j = *v16 )
      {
        v15 = (__int64 *)(j - 8);
        v16 = v15 + 1;
        if ( (__int64 *)v3 == v15 + 1 )
          break;
        v13 = *v15;
        if ( v13 )
          v14 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
        else
          v14 = 0LL;
        PnpTraceDeviceRemoveProcessVeto(a1, v14 + 40, v10);
      }
      if ( v7 )
      {
        RtlFreeUnicodeString(v10);
      }
      else if ( v10 )
      {
        ExFreePoolWithTag(v10, 0);
      }
      LODWORD(v2) = ObfDereferenceObjectWithTag(p_LockNV, 0x746C6644u);
    }
    v3 = *i - 24LL;
  }
  return (int)v2;
}
