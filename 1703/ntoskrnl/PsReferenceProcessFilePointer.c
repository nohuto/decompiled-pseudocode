/*
 * XREFs of PsReferenceProcessFilePointer @ 0x1404A1CC0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1400662F4 (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x140247014 (SepVerifyDesktopAppxImage.c)
 *     CmpCheckWrpKeyAccess @ 0x1404A1A64 (CmpCheckWrpKeyAccess.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     DbgkCreateThread @ 0x1404F8500 (DbgkCreateThread.c)
 *     PspCallProcessNotifyRoutines @ 0x1404FA068 (PspCallProcessNotifyRoutines.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, unsigned __int64 *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 Count; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
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
