/*
 * XREFs of PsReferenceProcessFilePointer @ 0x1405770C0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140019E94 (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x14025E74C (SepVerifyDesktopAppxImage.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x1404D265C (PspCallProcessNotifyRoutines.c)
 *     DbgkCreateThread @ 0x14053F718 (DbgkCreateThread.c)
 *     CmpCheckWrpKeyAccess @ 0x140576EB0 (CmpCheckWrpKeyAccess.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, ULONG_PTR *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 Count; // rcx
  unsigned __int64 v6; // rax
  ULONG_PTR v7; // rbx
  __int64 result; // rax

  v2 = a1 + 95;
  if ( ExAcquireRundownProtection_0(a1 + 95) )
  {
    Count = a1[119].Count;
    if ( Count )
    {
      v6 = MiSectionControlArea(Count);
      v7 = MiReferenceControlAreaFile(v6);
      ExReleaseRundownProtection_0(v2);
      result = 0LL;
      *a2 = v7;
      return result;
    }
    ExReleaseRundownProtection_0(v2);
  }
  return 3221225473LL;
}
