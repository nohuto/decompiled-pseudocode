/*
 * XREFs of ?TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x180032AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180035304 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180035CCC (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?RemoveKey@?$FixedSizeMap@GUActiveKeyProperties@ControllerProcessor@@$0BI@@@QEAAJAEBG@Z @ 0x1800366D8 (-RemoveKey@-$FixedSizeMap@GUActiveKeyProperties@ControllerProcessor@@$0BI@@@QEAAJAEBG@Z.c)
 */

__int64 __fastcall ControllerProcessor::TaskSwitcherInvokedCallbackStatic(
        ControllerProcessor *this,
        __int64 *a2,
        char a3)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int16 v7; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  if ( *((_QWORD *)this + 894) )
  {
    v6 = *a2;
    if ( !a3
      || (v7 = 208,
          result = FixedSizeMap<unsigned short,ControllerProcessor::ActiveKeyProperties,24>::RemoveKey(
                     (char *)this + 56,
                     &v7),
          (int)result >= 0)
      && (result = ControllerProcessor::UpdateAutoRepeatTimer(this), (int)result >= 0)
      && (result = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, 0xD0u, 0), (int)result >= 0) )
    {
      while ( v6 != a2[1] )
      {
        result = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, *(_WORD *)v6, *(_BYTE *)(v6 + 2));
        if ( (int)result < 0 )
          break;
        v6 += 4LL;
      }
    }
  }
  return result;
}
