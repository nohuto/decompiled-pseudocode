/*
 * XREFs of ?ProcessDelayedTap@PTPProcessor@@AEAAJXZ @ 0x18006F0B8
 * Callers:
 *     ?ProcessDelayedTapStatic@PTPProcessor@@SAJPEAX@Z @ 0x18006E5C0 (-ProcessDelayedTapStatic@PTPProcessor@@SAJPEAX@Z.c)
 *     ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006E8A0 (-OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z @ 0x18006F1C8 (-DeliverMouseMessage@PTPProcessor@@AEAAJPEAUInputInfo@@G_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPProcessor::ProcessDelayedTap(PTPProcessor *this)
{
  struct InputInfo *v2; // rsi
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 v7; // rcx

  if ( !*((_BYTE *)this + 664) )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 11, 632, 255);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v2 = (PTPProcessor *)((char *)this + 672);
  v3 = PTPProcessor::DeliverMouseMessage(this, (PTPProcessor *)((char *)this + 672), 1u, 1);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v3 = PTPProcessor::DeliverMouseMessage(this, v2, 2u, 0);
    v5 = v3;
    if ( v3 >= 0 )
    {
      v7 = *((_QWORD *)this + 82);
      *((_BYTE *)this + 664) = 0;
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7);
      v5 = v3;
      if ( v3 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v6 = 638;
        goto LABEL_16;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 636;
      goto LABEL_16;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v6 = 635;
LABEL_16:
    McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 11, v6, v3);
  }
  return v5;
}
