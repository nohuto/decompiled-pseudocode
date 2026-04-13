/*
 * XREFs of ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x180029F60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800294F4 (-ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180029584 (-ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 */

__int64 __fastcall CreativeFramework::Health::details::BaseEventsWithEvaluation<1>::EvaluateStateFlags(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  char v6; // al
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 250) )
    CreativeFramework::Health::details::BaseScenarioEvents::ReadTrackingInfo(this);
  if ( !*((_BYTE *)this + 252) )
    CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(this);
  v2 = *((_BYTE *)this + 98) != 0 ? 4LL : 2LL;
  if ( *((_BYTE *)this + 98) )
  {
    v3 = v2 | 8;
    if ( *((_QWORD *)this + 3) )
      v3 = *((_BYTE *)this + 98) != 0 ? 4LL : 2LL;
    v2 = v3 | 0x10;
    if ( *((_QWORD *)this + 2) )
    {
      v2 = v3;
      if ( !*((_DWORD *)this + 20) )
        v2 = v3 | 0x20;
    }
    v4 = *((_QWORD *)this + 6);
    if ( !v4 )
      goto LABEL_15;
    if ( *((_BYTE *)this + 97) )
      v2 |= 0x40uLL;
    if ( !*((_BYTE *)this + 96) )
LABEL_15:
      v2 |= 0x80uLL;
    if ( v4 && !*((_DWORD *)this + 21) )
      v2 |= 0x100uLL;
    if ( *((_BYTE *)this + 98) )
    {
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      v5 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
      v6 = 0;
      if ( *((_BYTE *)this + 97) || (v2 & 0x10) != 0 )
      {
        if ( (v2 & 0x130) != 0 )
        {
          v2 |= 2uLL;
          if ( (v2 & 0x130) != 0 )
            return v2;
        }
        v2 |= 1uLL;
        goto LABEL_41;
      }
      if ( !*((_QWORD *)this + 6) )
      {
        if ( *((_QWORD *)this + 3) + 600000000LL > v5 || *((_QWORD *)this + 4) + 600000000LL > v5 )
        {
          v2 |= 2uLL;
          v6 = 0;
        }
        else
        {
          v6 = 1;
        }
LABEL_41:
        if ( !v6 )
          return v2;
        goto LABEL_42;
      }
      if ( (v2 & 0x80u) != 0LL )
      {
LABEL_42:
        v12 = *((_QWORD *)this + 19);
        if ( v12 && !*((_WORD *)this + 80) && v5 >= v12 + 36000000000LL )
          return v2 | 1;
        return v2;
      }
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      v7 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
      v8 = *((_QWORD *)this + 4) + 600000000LL;
      v9 = *((_QWORD *)this + 6);
      if ( v9 < v8 && v8 < v7 )
      {
        v2 |= 0x200uLL;
        goto LABEL_42;
      }
      if ( v9 >= *((_QWORD *)this + 15) )
        return v2 | 2;
      v10 = *((_QWORD *)this + 16);
      if ( !v10 )
        v10 = *((_QWORD *)this + 15) + 10000000LL * *((unsigned int *)this + 34);
      v11 = v10 + 6000000000LL;
      if ( *((_QWORD *)this + 14) <= v11 || v7 <= v11 )
        return v2 | 2;
    }
  }
  return v2;
}
