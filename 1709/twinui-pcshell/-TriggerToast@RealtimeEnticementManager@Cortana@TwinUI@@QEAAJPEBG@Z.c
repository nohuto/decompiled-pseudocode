/*
 * XREFs of ?TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z @ 0x1800DD294
 * Callers:
 *     ?ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800DCAF0 (-ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 * Callees:
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x1800278D0 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 */

__int64 __fastcall TwinUI::Cortana::RealtimeEnticementManager::TriggerToast(
        RTL_SRWLOCK *pv,
        const unsigned __int16 *Src)
{
  LSTATUS ValueW; // eax
  signed int v5; // ecx
  RTL_SRWLOCK *v7; // rcx
  __int64 v8; // r8
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rdx
  RTL_SRWLOCK *v11; // rsi
  __int64 v12; // rbx
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *Ptr; // rsi
  struct _TP_TIMER *v15; // r14
  DWORD LastError; // ebx
  struct _FILETIME pftDueTime; // [rsp+80h] [rbp+40h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+88h] [rbp+48h] BYREF

  SystemTimeAsFileTime.dwLowDateTime = 4;
  pftDueTime.dwLowDateTime = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Enticements",
             Src,
             0x10u,
             0LL,
             &pftDueTime,
             (LPDWORD)&SystemTimeAsFileTime);
  v5 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v5 = ValueW;
  if ( v5 >= 0 && pftDueTime.dwLowDateTime != 0 )
  {
    v7 = (RTL_SRWLOCK *)((unsigned __int64)&pv[1] & -(__int64)(TryAcquireSRWLockExclusive(pv + 1) != 0));
    if ( v7 )
    {
      if ( LOBYTE(pv[2].Ptr) )
      {
        ReleaseSRWLockExclusive(v7);
      }
      else
      {
        LOBYTE(pv[2].Ptr) = 1;
        ReleaseSRWLockExclusive(v7);
        v9 = (unsigned __int64 *)&pv[3];
        v10 = -1LL;
        do
          ++v10;
        while ( Src[v10] );
        if ( (PVOID)v10 > pv[6].Ptr )
        {
          std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
            v9,
            v10,
            v8,
            Src);
        }
        else
        {
          v11 = pv + 3;
          if ( pv[6].Ptr >= (PVOID)8 )
            v11 = (RTL_SRWLOCK *)*v9;
          v12 = 2 * v10;
          pv[5].Ptr = (PVOID)v10;
          memmove(v11, Src, 2 * v10);
          *(_WORD *)((char *)&v11->Ptr + v12) = 0;
        }
        GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
        pftDueTime = (struct _FILETIME)(*(_QWORD *)&SystemTimeAsFileTime + 50000000LL);
        ThreadpoolTimer = CreateThreadpoolTimer(
                            (PTP_TIMER_CALLBACK)TwinUI::Cortana::RealtimeEnticementManager::s_OnExecutionTimerExpired,
                            pv,
                            0LL);
        Ptr = (struct _TP_TIMER *)pv->Ptr;
        v15 = ThreadpoolTimer;
        if ( pv->Ptr )
        {
          LastError = GetLastError();
          SetThreadpoolTimer(Ptr, 0LL, 0, 0);
          WaitForThreadpoolTimerCallbacks(Ptr, 0);
          CloseThreadpoolTimer(Ptr);
          SetLastError(LastError);
        }
        pv->Ptr = v15;
        SetThreadpoolTimer(v15, &pftDueTime, 0, 0);
      }
    }
  }
  return 0LL;
}
