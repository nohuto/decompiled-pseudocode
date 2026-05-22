/*
 * XREFs of ?Initialize@PointerProcessor@@IEAAJXZ @ 0x180070D68
 * Callers:
 *     ?Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z @ 0x18006ABE8 (-Initialize@MobileTouchProcessor@@IEAAJPEAUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize@MouseProcessor@@IEAAJPEBGJ@Z @ 0x18006BB64 (-Initialize@MouseProcessor@@IEAAJPEBGJ@Z.c)
 *     ?Create@PointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180070CB0 (-Create@PointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180072ED0 (-Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x1800489D0 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PointerProcessor::Initialize(PointerProcessor *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx

  v2 = (__int64 *)((char *)this + 40);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
  v4 = *v2;
  if ( *v2 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v3 + 88LL))(
         v3,
         *((_QWORD *)this + 4),
         (char *)this + 40);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( *v2 )
    {
      v9 = *((_QWORD *)this + 9);
      if ( v9 )
      {
        *((_QWORD *)this + 9) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v5 = KeyboardModifierState::Create((struct KeyboardModifierState **)this + 9);
      v7 = v5;
      if ( v5 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
        v11 = *((_QWORD *)this + 6);
        v12 = v10;
        if ( v11 )
        {
          *((_QWORD *)this + 6) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 80LL))(v12, (char *)this + 48);
        v7 = v5;
        if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v8 = 78;
          goto LABEL_19;
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 76;
        goto LABEL_19;
      }
    }
    else
    {
      v7 = -2147418113;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 73, 255);
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 69;
LABEL_19:
    McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, v8, v5);
  }
  return v7;
}
