/*
 * XREFs of VfDriverEnableVerifier @ 0x1407A8C08
 * Callers:
 *     MmEnableVerifierForDriver @ 0x1407A59C4 (MmEnableVerifierForDriver.c)
 *     VfDriverEnableVerifierForAll @ 0x1407A8D88 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     VfDriverLoadImage @ 0x1407A2174 (VfDriverLoadImage.c)
 *     VfDriverLock @ 0x1407A2530 (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x1407A6EBC (VfUtilIsProtectedDriver.c)
 *     ViSuspectDriversLookupEntry @ 0x1407BDC10 (ViSuspectDriversLookupEntry.c)
 */

__int64 __fastcall VfDriverEnableVerifier(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // r12d
  int v6; // ebp
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  PVOID *v9; // rsi
  __int64 *v10; // rax

  *a3 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  VfDriverLock();
  if ( ViSuspectDriversLookupEntry((PCUNICODE_STRING)(a1 + 24)) )
    goto LABEL_22;
  if ( !a2 )
  {
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    v9 = (PVOID *)PsLoadedModuleList;
    v6 = 1;
    if ( PsLoadedModuleList == &PsLoadedModuleList )
      goto LABEL_7;
    do
    {
      a2 = (__int64)v9;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 24), (PCUNICODE_STRING)(v9 + 11), 1u) )
        break;
      v9 = (PVOID *)*v9;
      ++v7;
    }
    while ( v9 != &PsLoadedModuleList );
    v8 = 0;
    if ( v9 == &PsLoadedModuleList )
LABEL_7:
      a2 = 0LL;
    if ( !a2 )
      goto LABEL_15;
  }
  if ( (~VerifierModifyableOptions & MmVerifierData) == 0
    && (!v6 || v7 > 1 && !(unsigned int)VfUtilIsProtectedDriver((PCUNICODE_STRING)(a2 + 88))) )
  {
    v5 = 1;
LABEL_15:
    v10 = (__int64 *)qword_140362068;
    if ( *(__int64 **)qword_140362068 != &VfSuspectDriversList )
      __fastfail(3u);
    *(_QWORD *)(a1 + 8) = qword_140362068;
    *(_QWORD *)a1 = &VfSuspectDriversList;
    *v10 = a1;
    qword_140362068 = a1;
    *a3 = 1;
    if ( v5 )
      VfDriverLoadImage(a2, a1, 0, 1u);
    ++dword_14036A138;
    goto LABEL_20;
  }
  v8 = -1073741554;
LABEL_20:
  if ( v6 )
    ExReleaseResourceLite(&PsLoadedModuleResource);
LABEL_22:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v8;
}
