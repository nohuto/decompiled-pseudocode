/*
 * XREFs of IopQueryProcessIdsUsingFile @ 0x14071E3A8
 * Callers:
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ObReferenceProcessHandleTable @ 0x1404B7304 (ObReferenceProcessHandleTable.c)
 *     PsGetNextProcess @ 0x140538C80 (PsGetNextProcess.c)
 *     ExEnumHandleTable @ 0x14054B830 (ExEnumHandleTable.c)
 *     MmIsFileMapped @ 0x14074F26C (MmIsFileMapped.c)
 */

__int64 __fastcall IopQueryProcessIdsUsingFile(__int64 a1, _DWORD *a2, int a3, _DWORD *a4)
{
  unsigned __int64 *v6; // r12
  unsigned int v7; // r14d
  unsigned int v8; // edi
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v11; // rbx
  unsigned __int64 v12; // rax
  char v13; // r15
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  bool v16; // [rsp+28h] [rbp-40h]

  v6 = (unsigned __int64 *)(a2 + 2);
  v7 = (unsigned int)(a3 - 8) >> 3;
  v8 = 0;
  *a2 = 0;
  v15 = a1;
  for ( i = 0LL; ; i = v11 )
  {
    NextProcess = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(i);
    v11 = NextProcess;
    if ( !NextProcess )
      break;
    v12 = ObReferenceProcessHandleTable(NextProcess);
    if ( v12 )
    {
      v16 = v11 == (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process;
      v13 = ExEnumHandleTable(
              v12,
              (__int64 (__fastcall *)(__int64, signed __int64 *, _QWORD, __int64))IopIsFileOpenOrSection,
              (__int64)&v15,
              0LL);
      ExReleaseRundownProtection(v11 + 95);
    }
    else
    {
      v13 = 0;
    }
    if ( v13 || (unsigned int)MmIsFileMapped(v11, a1) )
    {
      if ( v8 < v7 )
      {
        *v6 = v11[92].Count;
        ++*a2;
        ++v6;
      }
      ++v8;
    }
  }
  *a4 = 8 * v8 + 8;
  return v7 < v8 ? 0xC0000004 : 0;
}
