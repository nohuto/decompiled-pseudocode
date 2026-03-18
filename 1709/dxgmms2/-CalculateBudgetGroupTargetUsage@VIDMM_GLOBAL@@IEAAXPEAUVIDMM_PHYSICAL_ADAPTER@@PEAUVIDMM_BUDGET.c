/*
 * XREFs of ?CalculateBudgetGroupTargetUsage@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_BUDGET_STATE@@PEAUVIDMM_SEGMENT_GROUP_STATE@@@Z @ 0x1C00ADB84
 * Callers:
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C00ADD58 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
        VIDMM_GLOBAL *this,
        struct VIDMM_PHYSICAL_ADAPTER *a2,
        struct VIDMM_BUDGET_STATE *a3,
        struct VIDMM_SEGMENT_GROUP_STATE *a4)
{
  __int64 v6; // rdi
  unsigned int v7; // eax
  unsigned int v8; // r8d
  _QWORD *v9; // rax
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned int v12; // [rsp+40h] [rbp+18h]

  v12 = (unsigned int)a3;
  if ( *((char *)a2 + 437) >= 0 )
  {
    v7 = dword_1C0040450;
    v8 = dword_1C0040454;
  }
  else
  {
    v6 = *(int *)a4;
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 == 1 )
      {
        v7 = dword_1C0040460;
        v8 = dword_1C0040464;
      }
      else
      {
        v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
        v9[7] = 0LL;
        v9[3] = 270LL;
        v9[4] = 61LL;
        v9[5] = this;
        v9[6] = v6;
        WdLogEvent5_WdCriticalError(v9);
        v7 = v12;
        v8 = v12;
      }
    }
    else
    {
      v7 = dword_1C0040458;
      v8 = dword_1C004045C;
    }
  }
  *((_QWORD *)a4 + 31) = *((_QWORD *)a4 + 1) * (unsigned __int64)v7 / 0x64;
  v10 = *((_DWORD *)a4 + 78);
  v11 = *((_QWORD *)a4 + 1) * (unsigned __int64)v8 / 0x64;
  *((_QWORD *)a4 + 32) = v11;
  if ( v10 && *((_DWORD *)a4 + 75) == v10 )
  {
    if ( *((_QWORD *)a4 + 35) < v11 )
      v11 = *((_QWORD *)a4 + 35);
    *((_QWORD *)a4 + 32) = v11;
  }
  *((_QWORD *)a4 + 33) = *((_QWORD *)a4 + 1) - *((_QWORD *)a4 + 32) - *((_QWORD *)a4 + 31);
}
