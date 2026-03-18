/*
 * XREFs of PsReferenceProcessFilePointer @ 0x140562A40
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14006B9C8 (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x1402A01E0 (SepVerifyDesktopAppxImage.c)
 *     PspCallProcessNotifyRoutines @ 0x1404B655C (PspCallProcessNotifyRoutines.c)
 *     DbgkCreateThread @ 0x1404B87D4 (DbgkCreateThread.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     CmpCheckWrpKeyAccess @ 0x140562828 (CmpCheckWrpKeyAccess.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, ULONG_PTR *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 Count; // rcx
  unsigned __int64 v6; // rax
  ULONG_PTR v7; // rbx
  __int64 result; // rax

  v2 = a1 + 95;
  if ( ExAcquireRundownProtection(a1 + 95) )
  {
    Count = a1[119].Count;
    if ( Count )
    {
      v6 = MiSectionControlArea(Count);
      v7 = MiReferenceControlAreaFile(v6);
      ExReleaseRundownProtection(v2);
      result = 0LL;
      *a2 = v7;
      return result;
    }
    ExReleaseRundownProtection(v2);
  }
  return 3221225473LL;
}
