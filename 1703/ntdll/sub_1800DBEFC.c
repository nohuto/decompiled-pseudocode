/*
 * XREFs of sub_1800DBEFC @ 0x1800DBEFC
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlCommitDebugInfo_0 @ 0x1800682D4 (RtlCommitDebugInfo_0.c)
 *     RtlDeCommitDebugInfo_0 @ 0x1800906CC (RtlDeCommitDebugInfo_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DBEFC(PRTL_DEBUG_INFORMATION Buffer)
{
  int v3; // r10d
  _RTL_PROCESS_VERIFIER_OPTIONS *v4; // rax
  _RTL_PROCESS_VERIFIER_OPTIONS *v5; // rbx
  ULONG v6; // ecx
  SIZE_T Size; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(Size) = 0;
  v8 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x2000100) == 0 )
    return 0LL;
  v3 = ((__int64 (__fastcall *)(_QWORD, SIZE_T *, _QWORD))qword_1801554A8)(0LL, &Size, 0LL);
  if ( v3 == -1073741820 )
  {
    v4 = (_RTL_PROCESS_VERIFIER_OPTIONS *)RtlCommitDebugInfo_0(Buffer, (unsigned int)Size);
    v5 = v4;
    if ( v4 )
    {
      v6 = Size;
      v8 = Size;
      v4->Option = 0;
      v4->SizeStruct = v6;
      v3 = ((__int64 (__fastcall *)(_QWORD, int *, _RTL_PROCESS_VERIFIER_OPTIONS *))qword_1801554A8)(0LL, &v8, v4);
      if ( v3 >= 0 )
        Buffer->VerifierOptions = v5;
      else
        RtlDeCommitDebugInfo_0(Buffer, v5, (unsigned int)Size);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v3;
}
