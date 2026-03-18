/*
 * XREFs of ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00FA0F4
 * Callers:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0006E24 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DxgkGetSessionTokenManager @ 0x1C000DF40 (DxgkGetSessionTokenManager.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00126F0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C0013670 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0014590 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0015ACC (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGGLOBAL::GetSessionData(DXGGLOBAL *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 CurrentProcessSessionId; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  DXGFASTMUTEX *v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v1 = *((_QWORD *)this + 74);
  v2 = 0LL;
  if ( v1 )
  {
    v11 = 0;
    CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this);
    v10 = (DXGFASTMUTEX *)(v1 + 80);
    if ( v1 == -80 )
    {
      v7 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v7 + 24) = 508LL;
      WdLogEvent5_WdAssertion(v7);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *((struct _KTHREAD **)v10 + 1) == CurrentThread )
    {
      v8 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v8 + 24) = 515LL;
      WdLogEvent5_WdAssertion(v8);
    }
    if ( v11 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
      v9[5] = &v10;
      v9[3] = 275LL;
      v9[4] = 4LL;
      v9[6] = 0LL;
      v9[7] = 0LL;
      WdLogEvent5_WdCriticalError(v9);
    }
    DXGFASTMUTEX::Acquire(v10);
    v11 = 1;
    if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v1 + 72) )
    {
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v10);
    }
    else
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v1 + 40) + 8 * CurrentProcessSessionId);
      v11 = 0;
      DXGFASTMUTEX::Release((struct _KTHREAD **)v10);
      return (struct DXGSESSIONDATA *)v5;
    }
  }
  return (struct DXGSESSIONDATA *)v2;
}
