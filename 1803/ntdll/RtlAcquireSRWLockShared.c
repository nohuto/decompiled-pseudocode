/*
 * XREFs of RtlAcquireSRWLockShared @ 0x180010A60
 * Callers:
 *     sub_1800031BC @ 0x1800031BC (sub_1800031BC.c)
 *     sub_1800107D4 @ 0x1800107D4 (sub_1800107D4.c)
 *     sub_180011148 @ 0x180011148 (sub_180011148.c)
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_18001E320 @ 0x18001E320 (sub_18001E320.c)
 *     RtlSleepConditionVariableSRW @ 0x180025E20 (RtlSleepConditionVariableSRW.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_1800299E8 @ 0x1800299E8 (sub_1800299E8.c)
 *     sub_18003B5F8 @ 0x18003B5F8 (sub_18003B5F8.c)
 *     RtlProcessFlsData @ 0x180048090 (RtlProcessFlsData.c)
 *     sub_18004865C @ 0x18004865C (sub_18004865C.c)
 *     sub_180049998 @ 0x180049998 (sub_180049998.c)
 *     sub_180049C00 @ 0x180049C00 (sub_180049C00.c)
 *     sub_18004A0A0 @ 0x18004A0A0 (sub_18004A0A0.c)
 *     sub_18005088C @ 0x18005088C (sub_18005088C.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 *     sub_18005E47C @ 0x18005E47C (sub_18005E47C.c)
 *     sub_18005EF2C @ 0x18005EF2C (sub_18005EF2C.c)
 *     sub_18006008C @ 0x18006008C (sub_18006008C.c)
 *     sub_18006073C @ 0x18006073C (sub_18006073C.c)
 *     sub_1800607D4 @ 0x1800607D4 (sub_1800607D4.c)
 *     sub_180060EC8 @ 0x180060EC8 (sub_180060EC8.c)
 *     sub_1800633D4 @ 0x1800633D4 (sub_1800633D4.c)
 *     sub_180063438 @ 0x180063438 (sub_180063438.c)
 *     sub_18006AC08 @ 0x18006AC08 (sub_18006AC08.c)
 *     sub_18006DD40 @ 0x18006DD40 (sub_18006DD40.c)
 *     sub_18006DE80 @ 0x18006DE80 (sub_18006DE80.c)
 *     sub_180070F60 @ 0x180070F60 (sub_180070F60.c)
 *     RtlQueryProtectedPolicy @ 0x1800712C0 (RtlQueryProtectedPolicy.c)
 *     sub_180072114 @ 0x180072114 (sub_180072114.c)
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 *     sub_18007D27C @ 0x18007D27C (sub_18007D27C.c)
 *     TpTrimPools @ 0x18007F020 (TpTrimPools.c)
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D1BD0 (RtlPrepareForProcessCloning.c)
 *     RtlQueryProcessLockInformation @ 0x1800D2B90 (RtlQueryProcessLockInformation.c)
 *     sub_1800D8AD0 @ 0x1800D8AD0 (sub_1800D8AD0.c)
 *     Callback @ 0x1800D8F60 (Callback.c)
 *     sub_1800DB794 @ 0x1800DB794 (sub_1800DB794.c)
 *     RtlBarrier_0 @ 0x1800E65E0 (RtlBarrier_0.c)
 *     sub_1800FCA5C @ 0x1800FCA5C (sub_1800FCA5C.c)
 *     sub_1800FD510 @ 0x1800FD510 (sub_1800FD510.c)
 *     sub_1800FD70C @ 0x1800FD70C (sub_1800FD70C.c)
 *     sub_1800FD780 @ 0x1800FD780 (sub_1800FD780.c)
 *     sub_18010D1CC @ 0x18010D1CC (sub_18010D1CC.c)
 *     sub_18010DCE8 @ 0x18010DCE8 (sub_18010DCE8.c)
 * Callees:
 *     sub_1800286DC @ 0x1800286DC (sub_1800286DC.c)
 *     sub_1800289C0 @ 0x1800289C0 (sub_1800289C0.c)
 *     sub_180070A54 @ 0x180070A54 (sub_180070A54.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     ZwWaitForAlertByThreadId @ 0x18009E3B0 (ZwWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  char *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 UniqueThread; // rcx
  unsigned __int64 Ptr; // rbx
  __int64 v7; // rsi
  signed __int64 v8; // rcx
  bool v9; // zf
  signed __int64 v10; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 *v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]
  signed __int32 v17[5]; // [rsp+44h] [rbp-14h] BYREF
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0;
  UniqueThread = 17LL;
  Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( Ptr )
  {
    while ( 1 )
    {
      v7 = (Ptr >> 1) & 1;
      if ( (Ptr & 1) != 0 && (v7 || (Ptr & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)sub_1800286DC(UniqueThread, v1, v2, v3, v12) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
        v15 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v17[0] = 2;
        v14 = 0LL;
        if ( v7 )
        {
          v13 = 0LL;
          v16 = -1;
          UniqueThread = (unsigned __int8)Ptr;
          v12 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
          v1 = (char *)((unsigned __int64)&v12 | Ptr & 8 | 7);
          LOBYTE(UniqueThread) = (Ptr & 4) == 0;
        }
        else
        {
          v16 = -2;
          v13 = &v12;
          v1 = (char *)&v12 + 3;
        }
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, (signed __int64)v1, Ptr);
        v9 = Ptr == v10;
        Ptr = v10;
        if ( !v9 )
          goto LABEL_23;
        if ( (_BYTE)UniqueThread )
          sub_180070A54(SRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          UniqueThread = (unsigned int)dword_18015ADA0;
          if ( dword_18015ADA0 )
          {
            do
            {
              if ( (v17[0] & 2) == 0 )
                break;
              _mm_pause();
              v9 = (_DWORD)UniqueThread == 1;
              UniqueThread = (unsigned int)(UniqueThread - 1);
            }
            while ( !v9 );
          }
        }
        if ( _interlockedbittestandreset(v17, 1u) )
        {
          do
            ZwWaitForAlertByThreadId(SRWLock, 0LL);
          while ( (v17[0] & 4) == 0 );
        }
      }
      else
      {
        v8 = (Ptr | 1) + 16;
        if ( v7 )
          v8 = Ptr | 1;
        if ( Ptr == _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v8, Ptr) )
          return;
LABEL_23:
        sub_1800289C0(&v18);
        _m_prefetchw(SRWLock);
        Ptr = (unsigned __int64)SRWLock->Ptr;
      }
    }
  }
}
