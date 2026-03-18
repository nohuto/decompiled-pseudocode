/*
 * XREFs of ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01E6428
 * Callers:
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01E5100 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 * Callees:
 *     _pGetAdditionalTiming @ 0x1C01E65A0 (_pGetAdditionalTiming.c)
 */

__int64 __fastcall DXGMONITOR::_GetAdditionalTiming(
        DXGMONITOR *this,
        unsigned int *a2,
        struct _DXGK_TARGETMODE_DETAIL_TIMING **a3,
        __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int *v9; // rdi
  bool v10; // cf
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  *a2 = 0;
  v9 = (unsigned int *)((char *)this + 432);
  *a3 = 0LL;
  v10 = *((_DWORD *)this + 108) != -1;
  if ( *((_DWORD *)this + 108) != -1 )
    goto LABEL_10;
  if ( *((_DWORD *)this + 8) == -2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  result = pGetAdditionalTiming(*((unsigned int *)this + 8), (char *)this + 432, (char *)this + 440);
  if ( (int)result >= 0 )
  {
    v10 = *v9 != -1;
LABEL_10:
    if ( !v10 )
    {
      v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v13);
    }
    if ( !*((_QWORD *)this + 55) )
    {
      v14 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v14);
    }
    ++*((_DWORD *)this + 112);
    *a2 = *v9;
    *a3 = (struct _DXGK_TARGETMODE_DETAIL_TIMING *)*((_QWORD *)this + 55);
    return 0LL;
  }
  return result;
}
