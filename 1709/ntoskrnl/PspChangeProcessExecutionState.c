/*
 * XREFs of PspChangeProcessExecutionState @ 0x14050DC70
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x1400D4270 (PspExecuteJobFreezeThawCallback.c)
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x14050CBD0 (PspImplicitAssignProcessToJob.c)
 *     PspRemoveProcessFromJobChain @ 0x14050E398 (PspRemoveProcessFromJobChain.c)
 *     PsSwapProcessWorkingSet @ 0x14071648C (PsSwapProcessWorkingSet.c)
 * Callees:
 *     MmInSwapWorkingSet @ 0x140003E0C (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x140014900 (MmOutSwapWorkingSet.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     ExReleaseExtensionTable @ 0x14011BED8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14011BEF0 (ExGetExtensionTable.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PsThawProcess @ 0x14057CE6C (PsThawProcess.c)
 *     PsFreezeProcess @ 0x14057D084 (PsFreezeProcess.c)
 */

__int64 __fastcall PspChangeProcessExecutionState(_KPROCESS *BugCheckParameter1)
{
  char v1; // r13
  unsigned int v2; // r14d
  char v3; // r15
  unsigned __int32 DirectoryTableBase; // eax
  _KPROCESS *v6; // rbp
  __int64 DirectoryTableBase_low; // rdx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  unsigned __int32 v11; // ett
  char v12; // r12
  char v13; // di
  int SessionId; // eax
  _KPROCESS *SessionById; // rax
  unsigned int v16; // r8d
  bool v17; // zf
  unsigned __int32 v18; // eax
  void (__fastcall **ExtensionTable)(_KPROCESS *); // rax
  int v20; // eax
  _BYTE v21[48]; // [rsp+28h] [rbp-90h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v22; // [rsp+58h] [rbp-60h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = 0;
  _m_prefetchw(&BugCheckParameter1[1].DirectoryTableBase);
  DirectoryTableBase = BugCheckParameter1[1].DirectoryTableBase;
  v6 = 0LL;
  DirectoryTableBase_low = 0x40000000LL;
  while ( (DirectoryTableBase & 0x40000000) == 0 )
  {
    v8 = (DirectoryTableBase >> 28) & 3;
    v9 = (DirectoryTableBase >> 22) & 3;
    if ( v8 == v9 )
      break;
    v11 = DirectoryTableBase;
    DirectoryTableBase = _InterlockedCompareExchange(
                           (volatile signed __int32 *)&BugCheckParameter1[1].DirectoryTableBase,
                           DirectoryTableBase | 0x40000000,
                           DirectoryTableBase);
    if ( v11 == DirectoryTableBase )
    {
LABEL_6:
      v12 = 0;
      v13 = v8 ^ v9;
      if ( !v3 )
      {
        KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v22);
        SessionId = MmGetSessionIdEx((__int64)BugCheckParameter1);
        if ( SessionId != -1 )
        {
          SessionById = (_KPROCESS *)MmGetSessionById(SessionId);
          v6 = SessionById;
          if ( SessionById )
          {
            if ( (int)MmAttachSession(SessionById, (__int64)v21) < 0 )
            {
              ObfDereferenceObject(v6);
              v6 = 0LL;
            }
          }
        }
        v3 = 1;
      }
      if ( (v13 & 2) != 0 )
      {
        if ( (v8 & 2) != 0 )
          v12 = 1;
        else
          MmInSwapWorkingSet(BugCheckParameter1);
      }
      if ( (v13 & 1) != 0 )
      {
        v1 = 1;
        LOBYTE(DirectoryTableBase_low) = 1;
        if ( (v8 & 1) != 0 )
          PsFreezeProcess(BugCheckParameter1, DirectoryTableBase_low);
        else
          PsThawProcess(BugCheckParameter1, DirectoryTableBase_low);
      }
      v9 = v8;
      if ( v12 )
      {
        v20 = MmOutSwapWorkingSet(BugCheckParameter1, PspOutSwapSharedPages != 0);
        if ( v20 < 0 )
        {
          if ( v20 == -1073741671 )
            v2 = -1073741671;
          v9 = v8 & 0xFFFFFFFD;
        }
      }
      _m_prefetchw(&BugCheckParameter1[1].DirectoryTableBase);
      DirectoryTableBase_low = LODWORD(BugCheckParameter1[1].DirectoryTableBase);
      v16 = v8;
      do
      {
        v8 = ((unsigned int)DirectoryTableBase_low >> 28) & 3;
        if ( v8 != v16 && v8 != v9 )
          goto LABEL_6;
        v18 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&BugCheckParameter1[1].DirectoryTableBase,
                DirectoryTableBase_low & 0x8F3FFFFF | ((v9 | (v9 << 6)) << 22),
                DirectoryTableBase_low);
        v17 = (_DWORD)DirectoryTableBase_low == v18;
        DirectoryTableBase_low = v18;
      }
      while ( !v17 );
      if ( v6 )
      {
        MmDetachSession((__int64)v6, (__int64)v21);
        ObfDereferenceObject(v6);
      }
      KiUnstackDetachProcess(&v22, 0LL);
      if ( v1 )
      {
        ExtensionTable = (void (__fastcall **)(_KPROCESS *))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        if ( ExtensionTable )
        {
          (*ExtensionTable)(BugCheckParameter1);
          ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspMmcssExtensionHost);
        }
      }
      return v2;
    }
  }
  return v2;
}
