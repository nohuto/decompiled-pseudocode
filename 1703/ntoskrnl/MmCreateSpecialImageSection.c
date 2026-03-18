/*
 * XREFs of MmCreateSpecialImageSection @ 0x140546050
 * Callers:
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x1405B8A80 (PspLocateSystemDll.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x140096990 (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiCreateSection @ 0x14050C860 (MiCreateSection.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

__int64 __fastcall MmCreateSpecialImageSection(__int64 *a1, int a2, __int64 a3, char a4, __int64 a5, char a6)
{
  struct _KPROCESS *Process; // rcx
  int v11; // edi
  int SessionId; // r12d
  __int64 result; // rax
  unsigned __int64 v14; // rdi
  struct _FILE_OBJECT *v15; // rbx
  PVOID Object; // [rsp+60h] [rbp-48h] BYREF
  __int64 v17; // [rsp+68h] [rbp-40h] BYREF
  __int64 v18; // [rsp+70h] [rbp-38h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = a6 & 1 | 0x10;
  if ( (a6 & 4) == 0 )
    v11 = a6 & 1;
  SessionId = MmGetSessionIdEx(Process);
  while ( 1 )
  {
    v17 = 0LL;
    result = MiCreateSection(
               &Object,
               a2,
               v11,
               (int)&v17,
               16,
               (a6 & 1) != 0 ? 0x1000000 : 37748736,
               a3,
               a4,
               a5,
               0LL,
               0,
               SessionId);
    if ( (int)result >= 0 )
      break;
    if ( (_DWORD)result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  v14 = MiSectionControlArea((__int64)Object);
  v15 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v14);
  CcZeroEndOfLastPage(v15);
  MiDereferenceControlAreaFile(v14, (unsigned __int64)v15);
  result = ObInsertObjectEx(Object, 0LL, 983071LL, 0, 0, 0LL, &v18);
  if ( (int)result >= 0 )
    *a1 = v18;
  return result;
}
