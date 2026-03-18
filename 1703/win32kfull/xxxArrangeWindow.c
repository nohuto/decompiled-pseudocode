/*
 * XREFs of xxxArrangeWindow @ 0x1C01F62C4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     xxxHandleNCMouseGuys @ 0x1C01394E4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D58 (IsShellWndManagementBehaviorEnabled.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     WindowArrangementAllowed @ 0x1C01EDF7C (WindowArrangementAllowed.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01EFBD8 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F20A8 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01F31C8 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     EvaluateArrangeState @ 0x1C01F5AB8 (EvaluateArrangeState.c)
 */

__int64 __fastcall xxxArrangeWindow(__int64 a1, int a2)
{
  __int64 result; // rax
  struct _MOVESIZEDATA *v5; // rbp
  __int64 v6; // rsi
  int v7; // edi
  int v8[4]; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v9[336]; // [rsp+40h] [rbp-178h] BYREF

  result = WindowArrangementAllowed((struct tagWND *)a1);
  v5 = 0LL;
  if ( (_DWORD)result )
  {
    result = (unsigned int)(a2 - 15);
    if ( (unsigned int)result <= 7 )
    {
      if ( *(_DWORD *)*gpDispInfo > 1u || (result = (unsigned int)(a2 - 21), (unsigned int)result > 1) )
      {
        if ( a2 != 17 || (result = IsShellWndManagementBehaviorEnabled(*(_QWORD *)(a1 + 24), 2), !(_DWORD)result) )
        {
          result = EvaluateArrangeState(a1);
          v6 = (int)result;
          if ( (_DWORD)result != 6 )
          {
            result = (__int64)L"\b";
            v7 = *(_DWORD *)&asc_1C02EE5C0[24 * a2 - 360 + 4 * v6];
            if ( v7 != 8 )
            {
              result = ArrangeActionCompatibleWithStyle(a1, v7);
              if ( (_DWORD)result )
              {
                memset(v9, 0, 0x148uLL);
                if ( (unsigned int)(v7 - 3) <= 4 )
                {
                  v5 = (struct _MOVESIZEDATA *)v9;
                  xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v7, v6, 0, (__int64)v9, v8);
                }
                return xxxApplyArrangeAction(a1, v6, v7, v8[0], v5);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
