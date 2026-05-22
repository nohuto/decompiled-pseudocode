/*
 * XREFs of ?ForwardInputReport@MouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18006C5D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x18006C8E0 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180070F70 (-OnInputReport@PointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MouseProcessor::ForwardInputReport(
        MouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r9d
  __int16 v8; // ax
  char *v9; // r14
  __int16 v10; // r15
  __int16 v11; // di
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  int SystemMetrics; // edi
  int v17; // r8d
  int v18; // ecx
  unsigned int v19; // eax
  struct tagINPUT pInputs; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[356]; // [rsp+58h] [rbp-A8h] BYREF

  v4 = 0;
  if ( (gdwMitConfig & 1) != 0 )
  {
    if ( *((_DWORD *)a3 + 691) )
    {
      if ( *((_BYTE *)a3 + 2769) )
      {
        *((_DWORD *)a3 + 691) = 1;
      }
      else
      {
        *((_DWORD *)a3 + 691) = 2;
        *((_DWORD *)a3 + 177) = *((_DWORD *)a3 + 17);
        *((_DWORD *)a3 + 178) = *((_DWORD *)a3 + 18);
      }
      return v4;
    }
    v5 = MouseProcessor::SynthesizeMouseInput(a3);
    v4 = v5;
    if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 522;
LABEL_40:
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, v7, v5);
      return v4;
    }
    return v4;
  }
  v8 = *((_WORD *)a3 + 350);
  v9 = (char *)this - 176;
  v10 = 0;
  if ( (v8 & 3) != 0 )
  {
    v11 = 1;
    if ( !v9[576] )
      goto LABEL_15;
LABEL_14:
    v11 = 2;
    goto LABEL_15;
  }
  if ( (v8 & 0xC) == 0 )
    goto LABEL_26;
  if ( !v9[576] )
    goto LABEL_14;
  v11 = 1;
LABEL_15:
  if ( (v8 & 5) != 0 )
  {
    v10 = 0;
  }
  else if ( (v8 & 2) != 0 || (v8 & 8) != 0 )
  {
    v10 = 1;
  }
  memset(v22, 0, sizeof(v22));
  v12 = **((_DWORD **)v9 + 4);
  LODWORD(v22[1]) = *((_DWORD *)a3 + 2);
  v13 = *((_QWORD *)a3 + 2);
  HIDWORD(v22[0]) = v12;
  v14 = *((_QWORD *)v9 + 71);
  v22[2] = v13;
  LODWORD(v22[0]) = 4;
  LODWORD(v22[5]) = 2848;
  WORD1(v22[87]) = v11;
  WORD2(v22[87]) = v10 | 0x40;
  v15 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 48LL))(v14, v22);
  v4 = v15;
  if ( v15 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 854, v15);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
LABEL_26:
  if ( (v4 & 0x80000000) != 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 532, v4);
    return v4;
  }
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    memset(&pInputs, 0, sizeof(pInputs));
    SystemMetrics = GetSystemMetrics(0);
    v17 = GetSystemMetrics(1);
    v18 = *((_DWORD *)a3 + 136);
    pInputs.mi.dwFlags = 0x8000;
    if ( v9[577] )
    {
      if ( (v18 & 0x10) == 0 )
      {
        pInputs.mi.dwFlags = 32772;
        v9[577] = 0;
LABEL_36:
        v19 = 0xFFFF * *((_DWORD *)a3 + 17);
        pInputs.type = 0;
        pInputs.mi.dx = v19 / (SystemMetrics - 1);
        pInputs.mi.dy = 0xFFFF * *((_DWORD *)a3 + 18) / (unsigned int)(v17 - 1);
        SendInput(1u, &pInputs, 40);
        return 0;
      }
    }
    else if ( (v18 & 0x10) != 0 )
    {
      pInputs.mi.dwFlags = 32770;
      v9[577] = 1;
      goto LABEL_36;
    }
    pInputs.mi.dwFlags = 32769;
    goto LABEL_36;
  }
  v5 = PointerProcessor::OnInputReport((PointerProcessor *)v9, a3);
  v4 = v5;
  if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 540;
    goto LABEL_40;
  }
  return v4;
}
