/*
 * XREFs of ?TaskSwitcherInvokedCallbackStatic@ControllerProcessor@@CAJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x18003DD50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180040938 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180041748 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?RemoveKey@?$FixedSizeMap@G_N$0BI@@@QEAAJAEBG@Z @ 0x180041FE0 (-RemoveKey@-$FixedSizeMap@G_N$0BI@@@QEAAJAEBG@Z.c)
 */

__int64 __fastcall ControllerProcessor::TaskSwitcherInvokedCallbackStatic(
        ControllerProcessor *this,
        __int64 *a2,
        char a3)
{
  int v3; // edi
  __int64 v6; // rbx
  int updated; // eax
  int v8; // r9d
  __int16 v10; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  if ( !*((_QWORD *)this + 513) )
    return (unsigned int)v3;
  v6 = *a2;
  if ( !a3 )
    goto LABEL_14;
  v10 = 208;
  updated = FixedSizeMap<unsigned short,bool,24>::RemoveKey((char *)this + 64, &v10);
  v3 = updated;
  if ( updated >= 0 )
  {
    updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
    v3 = updated;
    if ( updated >= 0 )
    {
      updated = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, 0xD0u, 0);
      v3 = updated;
      if ( updated >= 0 )
      {
LABEL_14:
        while ( v6 != a2[1] )
        {
          updated = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, *(_WORD *)v6, *(_BYTE *)(v6 + 2));
          v3 = updated;
          if ( updated < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
              goto LABEL_19;
            v8 = 394;
            goto LABEL_18;
          }
          v6 += 4LL;
        }
        goto LABEL_19;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 383;
        goto LABEL_18;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 382;
      goto LABEL_18;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 381;
LABEL_18:
    McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 12, v8, updated);
  }
LABEL_19:
  if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 12, 361, v3);
  return (unsigned int)v3;
}
