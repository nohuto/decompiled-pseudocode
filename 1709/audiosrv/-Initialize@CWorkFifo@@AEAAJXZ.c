/*
 * XREFs of ?Initialize@CWorkFifo@@AEAAJXZ @ 0x1800C0B44
 * Callers:
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x1800BFFC4 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C1F24 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800317C0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18005E7E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InitializeTheadpool@CWorkFifo@@AEAAJXZ @ 0x1800C0D2C (-InitializeTheadpool@CWorkFifo@@AEAAJXZ.c)
 *     ?ReleaseThreadpool@CWorkFifo@@AEAAXXZ @ 0x1800C1A00 (-ReleaseThreadpool@CWorkFifo@@AEAAXXZ.c)
 */

__int64 __fastcall CWorkFifo::Initialize(wil::details **this)
{
  int v1; // ebx
  wil::details *Event; // rbp
  const char *v4; // r9
  wil::details *v5; // rsi
  DWORD LastError; // ebx
  void *v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 0;
  if ( !*this )
  {
    v1 = CWorkFifo::InitializeTheadpool(this);
    if ( v1 < 0 )
      goto LABEL_9;
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      v5 = this[28];
      if ( v5 )
      {
        LastError = GetLastError();
        wil::details::CloseHandle(v5, v7);
        SetLastError(LastError);
      }
      this[28] = Event;
      v1 = 0;
    }
    else
    {
      v1 = wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x15E3,
             (__int64)"internal\\sdk\\inc\\wil/resultmacros.h",
             v4);
    }
    if ( v1 < 0 )
LABEL_9:
      CWorkFifo::ReleaseThreadpool((CWorkFifo *)this);
  }
  return (unsigned int)v1;
}
