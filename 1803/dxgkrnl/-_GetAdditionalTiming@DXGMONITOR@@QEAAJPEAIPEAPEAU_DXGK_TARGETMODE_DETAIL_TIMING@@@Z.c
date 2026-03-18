/*
 * XREFs of ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0234570
 * Callers:
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0230990 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 * Callees:
 *     _pGetAdditionalTiming @ 0x1C023475C (_pGetAdditionalTiming.c)
 */

__int64 __fastcall DXGMONITOR::_GetAdditionalTiming(
        DXGMONITOR *this,
        unsigned int *a2,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a3)
{
  unsigned int *v4; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int *v8; // rdi
  bool v9; // cf
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  int v15; // eax
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = a2;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  *v4 = 0;
  v8 = (unsigned int *)((char *)this + 488);
  *a3 = 0LL;
  v9 = *((_DWORD *)this + 122) != -1;
  if ( *((_DWORD *)this + 122) != -1 )
    goto LABEL_19;
  if ( *((_DWORD *)this + 12) == -2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)this + 4);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
    v11 = *((_QWORD *)this + 4);
  }
  v13 = *(_QWORD *)(v11 + 8);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v14);
  }
  LOBYTE(a2) = 0;
  if ( *(int *)(*(_QWORD *)(v13 + 16) + 2104LL) >= 9216 )
  {
    v15 = *((_DWORD *)this + 12);
    if ( v15 < 0 || v15 > 3 && v15 != 14 )
      LOBYTE(a2) = 1;
  }
  result = pGetAdditionalTiming(*((unsigned int *)this + 12), a2, (char *)this + 488, (char *)this + 496);
  if ( (int)result >= 0 )
  {
    v9 = *v8 != -1;
LABEL_19:
    if ( !v9 )
    {
      v17 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v17);
    }
    if ( !*((_QWORD *)this + 62) )
    {
      v18 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v18);
    }
    ++*((_DWORD *)this + 126);
    *v4 = *v8;
    *a3 = (struct _DXGK_TARGETMODE_DETAIL_TIMING *)*((_QWORD *)this + 62);
    return 0LL;
  }
  return result;
}
