/*
 * XREFs of xxxArrangeWindow @ 0x1C01DD468
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     xxxHandleNCMouseGuys @ 0x1C0140028 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009690C (IsShellWndManagementBehaviorEnabled.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01D7A48 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01D9AC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01DAB38 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     EvaluateArrangeState @ 0x1C01DCDE8 (EvaluateArrangeState.c)
 *     WindowArrangementAllowed @ 0x1C01F841C (WindowArrangementAllowed.c)
 */

__int64 __fastcall xxxArrangeWindow(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // r9
  struct _MOVESIZEDATA *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v14[44]; // [rsp+50h] [rbp-B0h] BYREF

  result = WindowArrangementAllowed(a1);
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
          v5 = (int)result;
          if ( (_DWORD)result != 6 )
          {
            result = (__int64)dword_1C02EAD30;
            v6 = dword_1C02EAD30[6 * a2 - 90 + v5];
            if ( v6 != 8 )
            {
              result = ArrangeActionCompatibleWithStyle(a1, v6);
              if ( (_DWORD)result )
              {
                memset(v14, 0, 0x158uLL);
                v8 = 0LL;
                if ( v6 - 3 <= 4 )
                {
                  v8 = (struct _MOVESIZEDATA *)v14;
                  if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
                    __fastfail(3u);
                  v14[1] = &gActiveMoveSizeDataList;
                  v14[0] = gActiveMoveSizeDataList;
                  *(_QWORD *)(gActiveMoveSizeDataList + 8) = v14;
                  gActiveMoveSizeDataList = (__int64)v14;
                  PushW32ThreadLock((__int64)v14, v13, (__int64)EditionRemoveFromMsdList, v7);
                  xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v6, v5, 0, (__int64)v14, &v12);
                }
                result = xxxApplyArrangeAction((struct tagWND *)a1, (unsigned int)v5, v6, v12, v8);
                if ( v8 )
                  return PopAndFreeAlwaysW32ThreadLock((__int64)v13, v9, v10, v11);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
