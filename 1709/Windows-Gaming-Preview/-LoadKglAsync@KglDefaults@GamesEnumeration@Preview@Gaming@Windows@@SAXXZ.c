/*
 * XREFs of ?LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x180039F78
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x180018E30 (-RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180014338 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$_Resetp@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@?$shared_ptr@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@AEAAXPEAVSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18003AAAC (--$_Resetp@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@-$shared_ptr@VSystemDefault.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKglAsync(void)
{
  RTL_SRWLOCK *v0; // rbx
  HANDLE EventW; // rdi
  HANDLE v2; // rcx
  signed int LastError; // eax
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  struct _TP_WORK *v9; // rbx
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF

  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
  if ( !Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance )
  {
    v0 = (RTL_SRWLOCK *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v0 )
    {
      v0->Ptr = &Windows::Gaming::Preview::GamesEnumeration::KglDefaults::`vftable';
      v0[1].Ptr = 0LL;
      InitializeSRWLock(v0 + 2);
    }
    else
    {
      v0 = 0LL;
    }
    if ( !v0 )
      goto LABEL_21;
    EventW = CreateEventW(0LL, 1, 0, L"KglReady");
    v2 = hHandle;
    if ( EventW != hHandle )
    {
      if ( hHandle && !CloseHandle(hHandle) )
      {
        LastError = GetLastError();
        v4 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v4 = (unsigned int)LastError;
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v4);
        __debugbreak();
      }
      v2 = EventW;
      hHandle = EventW;
    }
    if ( v2 )
    {
      v10 = 0LL;
      std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>::_Resetp<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>(
        &v10,
        v0);
      v5 = *((_QWORD *)&v10 + 1);
      v6 = qword_18005BE90;
      *((_QWORD *)&v10 + 1) = qword_18005BE90;
      qword_18005BE90 = v5;
      Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance = (Windows::Gaming::Preview::GamesEnumeration::KglDefaults *)v10;
      if ( *((_QWORD *)&v10 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
        {
          v7 = *((_QWORD *)&v10 + 1);
          (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
        }
      }
    }
  }
  if ( !Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_loadKglThread )
  {
    ThreadpoolWork = CreateThreadpoolWork(
                       Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKglThreadProc,
                       0LL,
                       0LL);
    v9 = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      SubmitThreadpoolWork(ThreadpoolWork);
      Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_loadKglThread = v9;
    }
  }
LABEL_21:
  LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
}
