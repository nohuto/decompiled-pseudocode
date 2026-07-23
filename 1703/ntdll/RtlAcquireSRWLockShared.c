/*
 * XREFs of RtlAcquireSRWLockShared @ 0x180020280
 * Callers:
 *     sub_180006420 @ 0x180006420 (sub_180006420.c)
 *     sub_180006F80 @ 0x180006F80 (sub_180006F80.c)
 *     sub_180007C18 @ 0x180007C18 (sub_180007C18.c)
 *     sub_180008F44 @ 0x180008F44 (sub_180008F44.c)
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_18000EF18 @ 0x18000EF18 (sub_18000EF18.c)
 *     sub_180013664 @ 0x180013664 (sub_180013664.c)
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 *     sub_180019B90 @ 0x180019B90 (sub_180019B90.c)
 *     sub_18001B710 @ 0x18001B710 (sub_18001B710.c)
 *     sub_18001EF1C @ 0x18001EF1C (sub_18001EF1C.c)
 *     sub_18001FD40 @ 0x18001FD40 (sub_18001FD40.c)
 *     sub_1800215C8 @ 0x1800215C8 (sub_1800215C8.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_18002FF94 @ 0x18002FF94 (sub_18002FF94.c)
 *     sub_18004CFC0 @ 0x18004CFC0 (sub_18004CFC0.c)
 *     sub_18004FA70 @ 0x18004FA70 (sub_18004FA70.c)
 *     sub_180058A00 @ 0x180058A00 (sub_180058A00.c)
 *     sub_18005905C @ 0x18005905C (sub_18005905C.c)
 *     sub_18006FF7C @ 0x18006FF7C (sub_18006FF7C.c)
 *     RtlProcessFlsData @ 0x180070090 (RtlProcessFlsData.c)
 *     TpTrimPools @ 0x180070D30 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180071060 (RtlSleepConditionVariableSRW.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     sub_1800749F4 @ 0x1800749F4 (sub_1800749F4.c)
 *     sub_1800755BC @ 0x1800755BC (sub_1800755BC.c)
 *     sub_180076A44 @ 0x180076A44 (sub_180076A44.c)
 *     RtlQueryProtectedPolicy @ 0x180077890 (RtlQueryProtectedPolicy.c)
 *     sub_180079B6C @ 0x180079B6C (sub_180079B6C.c)
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 *     sub_18008275C @ 0x18008275C (sub_18008275C.c)
 *     sub_1800857E8 @ 0x1800857E8 (sub_1800857E8.c)
 *     RtlCloneUserProcess @ 0x1800D86D0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8C40 (RtlPrepareForProcessCloning.c)
 *     RtlQueryProcessLockInformation @ 0x1800D97B0 (RtlQueryProcessLockInformation.c)
 *     sub_1800DF250 @ 0x1800DF250 (sub_1800DF250.c)
 *     sub_1800DF6E0 @ 0x1800DF6E0 (sub_1800DF6E0.c)
 *     sub_1800E1AD8 @ 0x1800E1AD8 (sub_1800E1AD8.c)
 *     RtlBarrier_0 @ 0x1800EB020 (RtlBarrier_0.c)
 *     sub_1800FE3D0 @ 0x1800FE3D0 (sub_1800FE3D0.c)
 *     sub_1800FECE0 @ 0x1800FECE0 (sub_1800FECE0.c)
 *     sub_1800FEEB8 @ 0x1800FEEB8 (sub_1800FEEB8.c)
 *     sub_1800FEF2C @ 0x1800FEF2C (sub_1800FEF2C.c)
 *     sub_18010A41C @ 0x18010A41C (sub_18010A41C.c)
 *     sub_18010AE38 @ 0x18010AE38 (sub_18010AE38.c)
 * Callees:
 *     sub_18000BFBC @ 0x18000BFBC (sub_18000BFBC.c)
 *     sub_1800662B0 @ 0x1800662B0 (sub_1800662B0.c)
 *     sub_1800774C8 @ 0x1800774C8 (sub_1800774C8.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A8B30 (ZwWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  signed __int64 Ptr; // rbx
  signed __int64 v3; // rcx
  bool v4; // cl
  char *v5; // rdx
  bool v6; // zf
  signed __int64 v7; // rax
  int i; // ecx
  unsigned __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+30h] [rbp-38h]
  HANDLE UniqueThread; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+40h] [rbp-28h]
  signed __int32 v15[9]; // [rsp+44h] [rbp-24h] BYREF
  int v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = 0;
  Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( Ptr )
  {
    while ( 1 )
    {
      if ( (Ptr & 1) != 0 && ((Ptr & 2) != 0 || (Ptr & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( sub_18000BFBC() )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
        v4 = 0;
        v15[0] = 2;
        v12 = 0LL;
        if ( (Ptr & 2) != 0 )
        {
          v11 = 0LL;
          v14 = -1;
          v10 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
          v5 = (char *)((unsigned __int64)&v10 | Ptr & 8 | 7);
          v4 = (Ptr & 4) == 0;
        }
        else
        {
          v14 = -2;
          v11 = &v10;
          v5 = (char *)&v10 + 3;
        }
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, (signed __int64)v5, Ptr);
        v6 = Ptr == v7;
        Ptr = v7;
        if ( !v6 )
          goto LABEL_23;
        if ( v4 )
          sub_1800774C8(SRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          for ( i = dword_180159D60; i; --i )
          {
            if ( (v15[0] & 2) == 0 )
              break;
            _mm_pause();
          }
        }
        if ( _interlockedbittestandreset(v15, 1u) )
        {
          do
            ZwWaitForAlertByThreadId(SRWLock, 0LL);
          while ( (v15[0] & 4) == 0 );
        }
      }
      else
      {
        v3 = Ptr | 1;
        if ( (Ptr & 2) == 0 )
          v3 += 16LL;
        if ( Ptr == _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v3, Ptr) )
          return;
LABEL_23:
        sub_1800662B0(&v16);
        _m_prefetchw(SRWLock);
        Ptr = (signed __int64)SRWLock->Ptr;
      }
    }
  }
}
