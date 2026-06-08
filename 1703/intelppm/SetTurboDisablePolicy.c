/*
 * XREFs of SetTurboDisablePolicy @ 0x1C0007150
 * Callers:
 *     <none>
 * Callees:
 *     IsTurboModeSupported @ 0x1C0001B64 (IsTurboModeSupported.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C0007714 (ProcLibTraceUnexpectedTurboDisable.c)
 */

__int64 __fastcall SetTurboDisablePolicy(__int64 a1, int a2)
{
  bool v2; // r8
  __int64 result; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+8h]
  unsigned __int64 v6; // [rsp+40h] [rbp+8h]

  v2 = (unsigned int)(a2 - 1) > 1;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 78LL) )
  {
    LODWORD(v5) = 0;
    HIDWORD(v5) = v2;
    return ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64))qword_1C0016070)(
             *(unsigned int *)(*(_QWORD *)a1 + 80LL),
             409LL,
             0xFFFFFFFEFFFFFFFFuLL,
             v5);
  }
  else
  {
    v4 = __readmsr(0x199u);
    LODWORD(v6) = v4;
    HIDWORD(v6) = v2 | HIDWORD(v4) & 0xFFFFFFFE;
    result = v6;
    __writemsr(0x199u, v6);
  }
  return result;
}
