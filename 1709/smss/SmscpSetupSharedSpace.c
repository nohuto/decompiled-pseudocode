/*
 * XREFs of SmscpSetupSharedSpace @ 0x140003414
 * Callers:
 *     SmscpParseArgs @ 0x140003174 (SmscpParseArgs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmscpSetupSharedSpace(void *a1, void *a2)
{
  NTSTATUS result; // eax
  union _LARGE_INTEGER SectionOffset; // [rsp+70h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp+20h] BYREF

  SectionOffset.QuadPart = 0LL;
  ViewSize = 0LL;
  result = NtMapViewOfSection(
             a1,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &SmpMappedView,
             0LL,
             0LL,
             &SectionOffset,
             &ViewSize,
             ViewUnmap,
             0,
             2u);
  if ( result >= 0 )
  {
    SectionOffset.QuadPart = 0LL;
    ViewSize = 0LL;
    result = NtMapViewOfSection(
               a2,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &SmscpSharedWindow,
               0LL,
               0LL,
               &SectionOffset,
               &ViewSize,
               ViewUnmap,
               0,
               4u);
    if ( result >= 0 )
    {
      SmpDefaultLibPath.Buffer = (PWSTR)((char *)SmpMappedView + *((_QWORD *)SmpMappedView + 1));
      SmpDefaultLibPath.Length = *((_WORD *)SmpMappedView + 8);
      SmpDefaultLibPath.MaximumLength = SmpDefaultLibPath.Length + 2;
      SmpS0InitCmd.Buffer = (PWSTR)((char *)SmpMappedView + *((_QWORD *)SmpMappedView + 3));
      SmpS0InitCmd.Length = *((_WORD *)SmpMappedView + 16);
      SmpS0InitCmd.MaximumLength = SmpS0InitCmd.Length + 2;
      qword_140020C38 = (__int64)SmpMappedView + *((_QWORD *)SmpMappedView + 5);
      SmscpInitExecuteCmd = *((_WORD *)SmpMappedView + 24);
      word_140020C32 = SmscpInitExecuteCmd + 2;
      SmscpSubsystemRegistered = (HANDLE)*((_QWORD *)SmscpSharedWindow + 1);
    }
  }
  return result;
}
