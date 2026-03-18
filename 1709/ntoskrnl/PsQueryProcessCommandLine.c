/*
 * XREFs of PsQueryProcessCommandLine @ 0x14012E460
 * Callers:
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     SeAuditProcessCreation @ 0x1405A71B4 (SeAuditProcessCreation.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MmCopyVirtualMemory @ 0x1405084C0 (MmCopyVirtualMemory.c)
 */

__int64 __fastcall PsQueryProcessCommandLine(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // ebx
  unsigned __int16 v13; // r15
  unsigned __int16 v14; // r14
  __int16 v15; // dx
  unsigned int v16; // eax
  BOOLEAN v18; // [rsp+40h] [rbp-C8h]
  int v19; // [rsp+48h] [rbp-C0h]
  struct _EX_RUNDOWN_REF *RunRef; // [rsp+80h] [rbp-88h]
  __int64 v21; // [rsp+88h] [rbp-80h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v22; // [rsp+90h] [rbp-78h] BYREF

  RunRef = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
  v18 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
  if ( v18 )
  {
    v7 = 0LL;
    v19 = 0;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v22);
    v8 = 0LL;
    v9 = *(__int64 **)(BugCheckParameter1 + 1064);
    if ( v9 )
    {
      v15 = *((_WORD *)v9 + 4);
      if ( v15 == 332 || v15 == 452 )
        v8 = *v9;
    }
    if ( v8 )
    {
      v13 = *(_QWORD *)(*(unsigned int *)(v8 + 16) + 0x40LL);
      v19 = *(_QWORD *)(*(unsigned int *)(v8 + 16) + 0x40LL);
      v14 = HIWORD(v19);
      v7 = (unsigned int)HIDWORD(*(_QWORD *)(*(unsigned int *)(v8 + 16) + 0x40LL));
      v12 = 0;
    }
    else
    {
      v10 = *(_QWORD *)(BugCheckParameter1 + 1016);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 32) + 112LL;
        if ( v11 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v19 = *(_DWORD *)v11;
        v7 = *(_QWORD *)(v11 + 8);
        v12 = 0;
      }
      else
      {
        v12 = -1073741275;
      }
      v13 = v19;
      v14 = HIWORD(v19);
    }
    KiUnstackDetachProcess(&v22, 0LL);
    if ( v12 >= 0 )
    {
      if ( !v13 || v13 > v14 || (v19 & 1) != 0 || (v19 & 0x10000) != 0 || !v7 )
      {
        v12 = -1073741275;
      }
      else
      {
        v16 = v14 + 16;
        if ( a5 )
          *a5 = v16;
        if ( a3 < v16 )
        {
          v12 = -1073741820;
        }
        else
        {
          *(_WORD *)a2 = v13;
          *(_WORD *)(a2 + 2) = v14;
          if ( v14 )
            *(_QWORD *)(a2 + 8) = a2 + 16;
          else
            *(_QWORD *)(a2 + 8) = 0LL;
          v12 = MmCopyVirtualMemory(BugCheckParameter1, HIWORD(v19), a4, (__int64)&v21);
          if ( v12 >= 0 )
            v12 = 0;
        }
      }
    }
  }
  else
  {
    v12 = -1073741558;
  }
  if ( v18 )
    ExReleaseRundownProtection_0(RunRef);
  return (unsigned int)v12;
}
