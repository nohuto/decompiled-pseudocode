/*
 * XREFs of ?Initialize@CWorkFifo@@AEAAJXZ @ 0x1800F3374
 * Callers:
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x1800F27B8 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800F468C (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180058AD0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009B080 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InitializeTheadpool@CWorkFifo@@AEAAJXZ @ 0x1800F34A8 (-InitializeTheadpool@CWorkFifo@@AEAAJXZ.c)
 *     ?ReleaseThreadpool@CWorkFifo@@AEAAXXZ @ 0x1800F4190 (-ReleaseThreadpool@CWorkFifo@@AEAAXXZ.c)
 */

__int64 __fastcall CWorkFifo::Initialize(wil::details **this)
{
  int LastError; // ebx
  wil::details *Event; // rbx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LastError = 0;
  if ( !*this )
  {
    LastError = CWorkFifo::InitializeTheadpool(this);
    if ( LastError < 0
      || ((Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u)) == 0LL
        ? (LastError = wil::details::in1diag3::Return_GetLastError(
                         retaddr,
                         (void *)0x1621,
                         (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
                         v4))
        : (GetLastError(),
           wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
             this + 28,
             Event),
           LastError = 0),
          LastError < 0) )
    {
      CWorkFifo::ReleaseThreadpool((CWorkFifo *)this);
    }
  }
  return (unsigned int)LastError;
}
