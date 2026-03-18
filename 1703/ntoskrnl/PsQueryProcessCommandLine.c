/*
 * XREFs of PsQueryProcessCommandLine @ 0x140039BE0
 * Callers:
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     SeAuditProcessCreation @ 0x1405AC188 (SeAuditProcessCreation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MmCopyVirtualMemory @ 0x1405181F0 (MmCopyVirtualMemory.c)
 */

__int64 __fastcall PsQueryProcessCommandLine(
        struct _EX_RUNDOWN_REF *BugCheckParameter1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned __int64 Count; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // ebx
  unsigned __int16 v13; // r12
  unsigned __int16 v14; // r15
  __int16 v15; // dx
  unsigned int v16; // eax
  BOOLEAN v18; // [rsp+40h] [rbp-B8h]
  int v19; // [rsp+48h] [rbp-B0h]
  __int64 v20; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v21[48]; // [rsp+88h] [rbp-70h] BYREF

  v18 = ExAcquireRundownProtection(BugCheckParameter1 + 95);
  if ( v18 )
  {
    v7 = 0LL;
    v19 = 0;
    KiStackAttachProcess((ULONG_PTR)BugCheckParameter1);
    v8 = 0LL;
    Count = BugCheckParameter1[133].Count;
    if ( Count )
    {
      v15 = *(_WORD *)(Count + 8);
      if ( v15 == 332 || v15 == 452 )
        v8 = *(_QWORD *)Count;
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
      v10 = BugCheckParameter1[127].Count;
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
    KiUnstackDetachProcess(v21, 0LL);
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
          v12 = MmCopyVirtualMemory((ULONG_PTR)BugCheckParameter1, HIWORD(v19), a4, (__int64)&v20);
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
    ExReleaseRundownProtection(BugCheckParameter1 + 95);
  return (unsigned int)v12;
}
