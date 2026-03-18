/*
 * XREFs of MiObtainSectionForDriver @ 0x1405FA21C
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400E54F0 (MiSectionControlArea.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     MmReleaseLoadLock @ 0x1405BC7A0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1405BC900 (MmAcquireLoadLock.c)
 *     MiCreateSectionForDriver @ 0x1405F98FC (MiCreateSectionForDriver.c)
 */

__int64 __fastcall MiObtainSectionForDriver(PCUNICODE_STRING String1, UNICODE_STRING *a2, int a3, PVOID **a4)
{
  struct _KTHREAD *CurrentThread; // r15
  PVOID v6; // rdi
  PVOID *v10; // rbx
  NTSTATUS v11; // ebx
  __int64 v12; // rax
  __int64 result; // rax
  PVOID *PoolWithTag; // rax
  BOOL v15; // ecx
  bool v16; // zf
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v6 = 0LL;
  *a4 = 0LL;
  while ( 1 )
  {
    v10 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList != &PsLoadedModuleList )
      break;
LABEL_5:
    if ( v6 )
    {
      PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x644C6D4Du);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v11 = -1073741670;
        goto LABEL_11;
      }
      memset(PoolWithTag, 0, 0xA0uLL);
      v10[14] = v6;
      *((_WORD *)v10 + 54) = 1;
      result = 0LL;
      *((_DWORD *)v10 + 26) = 0x1000000;
      v10[17] = (PVOID)-2LL;
      goto LABEL_15;
    }
    MmReleaseLoadLock((__int64)CurrentThread);
    v11 = MiCreateSectionForDriver(a2, a3, &Object);
    MmAcquireLoadLock();
    if ( v11 < 0 )
      return (unsigned int)v11;
    v6 = Object;
    v12 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)Object) + 56LL);
    if ( *(__int16 *)(v12 + 46) < 0 && *(_DWORD *)(v12 + 32) == 1 && (a3 & 1) == 0 )
    {
      v11 = -1073741800;
LABEL_11:
      ObDereferenceObjectDeferDelete(v6);
      return (unsigned int)v11;
    }
  }
  while ( !RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(v10 + 9), 1u) )
  {
    v10 = (PVOID *)*v10;
    if ( v10 == &PsLoadedModuleList )
      goto LABEL_5;
  }
  if ( v6 )
    ObDereferenceObjectDeferDelete(v6);
  v15 = MiGetSystemRegionType((unsigned __int64)v10[6]) == 1;
  if ( (a3 & 1) != 0 )
    v16 = !v15;
  else
    v16 = v15;
  if ( !v16 )
  {
    result = 272LL;
LABEL_15:
    *a4 = v10;
    return result;
  }
  return 3221225496LL;
}
