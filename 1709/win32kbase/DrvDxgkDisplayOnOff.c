/*
 * XREFs of DrvDxgkDisplayOnOff @ 0x1C0094F90
 * Callers:
 *     DrvEnableMDEV @ 0x1C0060B04 (DrvEnableMDEV.c)
 *     GreSuspendDirectDraw @ 0x1C0067770 (GreSuspendDirectDraw.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0094ED4 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkDisplayOnOff(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int8 v5; // di
  __int64 v7; // rbx
  __int64 result; // rax
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax

  v4 = (unsigned int)a3;
  v5 = a2;
  if ( !a1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  v7 = *(_QWORD *)(a1 + 2592);
  result = v7 + 4;
  if ( ((v7 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v7 + 160) & 0x800000) != 0 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
    v9[3] = *(_QWORD *)(v7 + 256);
    v9[4] = v5;
    v9[5] = v4;
    WdLogEvent5_WdEvent(v9);
    result = (unsigned int)(v4 - 1);
    if ( (unsigned int)result <= 1 )
    {
      v11 = 0LL;
      goto LABEL_9;
    }
    if ( (_DWORD)v4 == 3 && v5 )
    {
      LOBYTE(v11) = 1;
LABEL_9:
      LOBYTE(v10) = v5;
      return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))qword_1C0190A38)(
               v7 + 264,
               *(unsigned int *)(v7 + 272),
               v10,
               v11);
    }
  }
  return result;
}
