/*
 * XREFs of DrvDxgkDisplayOnOff @ 0x1C0091950
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C005AC10 (GreSuspendDirectDraw.c)
 *     DrvEnableMDEV @ 0x1C005B3E4 (DrvEnableMDEV.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00988E0 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkDisplayOnOff(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned __int8 v4; // di
  __int64 v6; // rbx
  __int64 result; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax

  v3 = a3;
  v4 = a2;
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = *(_QWORD *)(a1 + 2592);
  result = v6 + 4;
  if ( ((v6 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v6 + 160) & 0x800000) != 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
    v8[3] = *(_QWORD *)(v6 + 256);
    v8[4] = v4;
    v8[5] = v3;
    WdLogEvent5_WdEvent(v8);
    result = (unsigned int)(v3 - 1);
    if ( (unsigned int)result <= 1 )
    {
      v10 = 0LL;
      goto LABEL_9;
    }
    if ( (_DWORD)v3 == 3 && v4 )
    {
      LOBYTE(v10) = 1;
LABEL_9:
      LOBYTE(v9) = v4;
      return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))qword_1C018BDB8)(
               v6 + 264,
               *(unsigned int *)(v6 + 272),
               v9,
               v10);
    }
  }
  return result;
}
