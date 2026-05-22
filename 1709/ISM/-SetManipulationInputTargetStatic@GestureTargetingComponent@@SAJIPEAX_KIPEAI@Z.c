/*
 * XREFs of ?SetManipulationInputTargetStatic@GestureTargetingComponent@@SAJIPEAX_KIPEAI@Z @ 0x180013470
 * Callers:
 *     SetManipulationInputTarget @ 0x1800059C0 (SetManipulationInputTarget.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     McTemplateU0qqqqq @ 0x180012DA8 (McTemplateU0qqqqq.c)
 *     McTemplateU0qq @ 0x180012EF8 (McTemplateU0qq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

int __fastcall GestureTargetingComponent::SetManipulationInputTargetStatic(
        int a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  int *v5; // rdi
  int v6; // r12d
  unsigned __int64 v9; // rbx
  __int64 v11; // rcx
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int *v16; // rdi
  unsigned __int64 v17; // rax
  void *v18; // rax
  void *v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // ebx
  int result; // eax
  unsigned __int64 v24; // [rsp+40h] [rbp-88h]
  __int64 v25; // [rsp+48h] [rbp-80h] BYREF
  void *Src; // [rsp+50h] [rbp-78h]
  _BYTE v27[40]; // [rsp+58h] [rbp-70h] BYREF

  v5 = (int *)a5;
  v6 = 0;
  v25 = 0LL;
  v9 = a4;
  Src = a5;
  memset(v27, 0, sizeof(v27));
  if ( !GestureTargetingComponent::s_pMessageSession )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 4, 211, 255);
    goto LABEL_25;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
  {
    McTemplateU0qqqqq(v11, &MinInput_Log_PointerFrameRouting, 4, a1, (char)a2, a3, v9);
    v12 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    {
      if ( (_DWORD)v9 )
      {
        v13 = v9;
        v24 = v9;
        do
        {
          if ( (v12 & 4) != 0 )
          {
            McTemplateU0qq(v13, &MinInput_Log_PointerFrameRouting_PointerId, 4, *v5);
            v12 = Microsoft_OneCore_MinInputEnableBits;
            v13 = v24;
          }
          ++v5;
          v24 = --v13;
        }
        while ( v13 );
      }
    }
  }
  if ( a3
    && (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)GestureTargetingComponent::s_pMessageSession + 112LL))(
         GestureTargetingComponent::s_pMessageSession,
         a3,
         v27) < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      McTemplateU0qqqqq(v14, &MinInput_Log_PointerFrameRouting_InvalidEndpoint, 4, a1, (char)a2, a3, v9);
    v6 = -1073741816;
  }
  else if ( a2 )
  {
    v6 = NtDuplicateCompositionInputSink(a2, &v25);
    if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
      McTemplateU0qqqqq(v15, &MinInput_Log_PointerFrameRouting_InvalidInputSink, 4, a1, (char)a2, a3, v9);
  }
  v16 = (int *)operator new(0x58uLL);
  memset(v16, 0, 0x58uLL);
  *v16 = a1;
  *((_QWORD *)v16 + 1) = a2;
  *((_QWORD *)v16 + 2) = v25;
  *((_QWORD *)v16 + 3) = a3;
  v17 = 4 * v9;
  *((_OWORD *)v16 + 2) = *(_OWORD *)v27;
  *((_OWORD *)v16 + 3) = *(_OWORD *)&v27[16];
  if ( !is_mul_ok(v9, 4uLL) )
    v17 = -1LL;
  *((_QWORD *)v16 + 8) = *(_QWORD *)&v27[32];
  v16[18] = v9;
  v18 = operator new[](v17);
  v19 = Src;
  *((_QWORD *)v16 + 10) = v18;
  memcpy_0(v18, v19, 4 * v9);
  v20 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), int *, __int64))(*(_QWORD *)GestureTargetingComponent::s_pMessageSession
                                                                                           + 128LL))(
          GestureTargetingComponent::s_pMessageSession,
          GestureTargetingComponent::RouteInputToTargetStatic,
          v16,
          4LL);
  v22 = v20;
  if ( v20 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v21, &MinInput_Warning_CheckResult, 4, 284, v20);
LABEL_25:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  result = v6 | 0x10000000;
  if ( v6 >= 0 )
    return v22;
  return result;
}
