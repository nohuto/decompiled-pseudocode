/*
 * XREFs of ?Create@KeyboardProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180049100
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x1800489D0 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     ??0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18006D560 (--0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardProcessor::Create(struct DeviceInfo **a1, struct KeyboardModifierState ***a2)
{
  struct KeyboardModifierState **v4; // rax
  __int64 v5; // rcx
  struct KeyboardModifierState **v6; // rbx
  int v7; // edi
  int v8; // r9d
  struct KeyboardModifierState *v9; // rcx
  char v10; // al

  v4 = (struct KeyboardModifierState **)malloc(0x48uLL);
  v6 = v4;
  if ( v4 )
    memset(v4, 0, 0x48uLL);
  if ( v6 )
  {
    NonPointerProcessor::NonPointerProcessor((NonPointerProcessor *)v6, *a1, a1[1]);
    *v6 = (struct KeyboardModifierState *)&KeyboardProcessor::`vftable'{for `IInputProcessor'};
    v6[1] = (struct KeyboardModifierState *)&KeyboardProcessor::`vftable'{for `RefCountedObject'};
    *((_DWORD *)v6 + 13) = 300;
    *((_DWORD *)v6 + 12) = 0;
    v6[7] = 0LL;
    *((_DWORD *)v6 + 16) = 0;
    v9 = v6[7];
    if ( v9 )
    {
      v6[7] = 0LL;
      (*(void (__fastcall **)(struct KeyboardModifierState *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v7 = KeyboardModifierState::Create(v6 + 7);
    if ( v7 < 0 )
    {
      v10 = Microsoft_OneCore_MinInputEnableBits;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_14;
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 50, v7);
    }
    v10 = Microsoft_OneCore_MinInputEnableBits;
LABEL_14:
    if ( v7 >= 0 )
    {
      *a2 = v6;
      return (unsigned int)v7;
    }
    if ( (v10 & 2) != 0 )
    {
      v8 = 71;
      goto LABEL_7;
    }
    return (unsigned int)v7;
  }
  v7 = -2147024882;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 68;
LABEL_7:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v8, v7);
  }
  return (unsigned int)v7;
}
