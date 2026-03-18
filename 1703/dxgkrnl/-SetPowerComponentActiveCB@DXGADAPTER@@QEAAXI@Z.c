/*
 * XREFs of ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C002219C
 * Callers:
 *     DxgSetPowerComponentActiveCB @ 0x1C0184D90 (DxgSetPowerComponentActiveCB.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C0196D24 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 * Callees:
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C00222E4 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCB(DXGADAPTER *this, int a2)
{
  unsigned int v3; // edi
  _QWORD *v4; // rax
  _QWORD *v5; // rax

  v3 = (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1168);
  if ( v3 >= *((_DWORD *)this + 616) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v4[3] = 275LL;
    v4[4] = 23LL;
    v4[5] = this;
    v4[6] = 0LL;
    v4[7] = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  if ( *((_BYTE *)this + 2761) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(520LL * v3 + *((_QWORD *)this + 290) + 348));
    DXGADAPTER::SetPowerComponentActiveCBWorker(this, v3, 1u, 0);
  }
  else
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v5[3] = 275LL;
    v5[4] = 23LL;
    v5[5] = this;
    v5[6] = 0LL;
    v5[7] = 0LL;
    WdLogEvent5_WdCriticalError(v5);
  }
}
