/*
 * XREFs of PspSetBackgroundJobTree @ 0x140458E30
 * Callers:
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetBackgroundJobTree(char *Object, char a2)
{
  struct _ERESOURCE *v2; // rdi
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v5) = a2;
  v2 = (struct _ERESOURCE *)(Object + 56);
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  if ( (_BYTE)v5 )
  {
    if ( (*((_DWORD *)Object + 326) & 0x400) == 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)Object + 326, 0xAu);
      goto LABEL_4;
    }
LABEL_9:
    ExReleaseResourceLite(v2);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)Object + 326) & 0x400) == 0 )
    goto LABEL_9;
  _interlockedbittestandreset((volatile signed __int32 *)Object + 326, 0xAu);
LABEL_4:
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)&v5, 5);
  ExReleaseResourceLite(v2);
  if ( !(_BYTE)v5 )
    PspEnumJobsAndProcessesInJobHierarchy(Object, 0LL, 0);
  return 0LL;
}
