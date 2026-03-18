/*
 * XREFs of MmCreateSpecialImageSection @ 0x14053A36C
 * Callers:
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x1405BF580 (PspLocateSystemDll.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x1400675C8 (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MiCreateSection @ 0x14049B390 (MiCreateSection.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 */

__int64 __fastcall MmCreateSpecialImageSection(__int64 *a1, int a2, __int64 a3, char a4, __int64 a5, char a6)
{
  _KPROCESS *Process; // rcx
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
  SessionId = MmGetSessionIdEx((__int64)Process);
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
  result = ObInsertObjectEx(Object, 0LL, 0xF001Fu, 0, 0, 0LL, (unsigned __int64 *)&v18);
  if ( (int)result >= 0 )
    *a1 = v18;
  return result;
}
