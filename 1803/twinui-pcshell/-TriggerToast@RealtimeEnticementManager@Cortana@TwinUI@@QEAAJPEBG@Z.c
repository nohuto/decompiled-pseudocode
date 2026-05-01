/*
 * XREFs of ?TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z @ 0x180189CE4
 * Callers:
 *     ?ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180085DD0 (-ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180085EE0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18008C784 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$00@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1801885D8 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$00@details@wil@@SAXPEAU.c)
 */

__int64 __fastcall TwinUI::Cortana::RealtimeEnticementManager::TriggerToast(RTL_SRWLOCK *pv, unsigned __int16 *Src)
{
  RTL_SRWLOCK *v4; // rcx
  unsigned __int64 v5; // r8
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *Ptr; // rbp
  struct _TP_TIMER *v8; // rsi
  DWORD LastError; // ebx
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+18h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+58h] [rbp+20h] BYREF

  pftDueTime.dwLowDateTime = 0;
  if ( SHRegGetDWORD(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Enticements",
         Src,
         (unsigned int *)&pftDueTime) >= 0 )
  {
    if ( pftDueTime.dwLowDateTime )
    {
      v4 = (RTL_SRWLOCK *)((unsigned __int64)&pv[1] & -(__int64)(TryAcquireSRWLockExclusive(pv + 1) != 0));
      if ( v4 )
      {
        if ( LOBYTE(pv[2].Ptr) )
        {
          ReleaseSRWLockExclusive(v4);
        }
        else
        {
          LOBYTE(pv[2].Ptr) = 1;
          ReleaseSRWLockExclusive(v4);
          v5 = -1LL;
          do
            ++v5;
          while ( Src[v5] );
          std::wstring::assign(&pv[3].Ptr, Src, v5);
          GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
          pftDueTime = (struct _FILETIME)(*(_QWORD *)&SystemTimeAsFileTime + 50000000LL);
          ThreadpoolTimer = CreateThreadpoolTimer(
                              TwinUI::Cortana::RealtimeEnticementManager::s_OnExecutionTimerExpired,
                              pv,
                              0LL);
          Ptr = (struct _TP_TIMER *)pv->Ptr;
          v8 = ThreadpoolTimer;
          if ( pv->Ptr )
          {
            LastError = GetLastError();
            wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,1>::Destroy(Ptr);
            SetLastError(LastError);
          }
          pv->Ptr = v8;
          SetThreadpoolTimer(v8, &pftDueTime, 0, 0);
        }
      }
    }
  }
  return 0LL;
}
