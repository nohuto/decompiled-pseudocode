/*
 * XREFs of ?InformTargetOfAttachedDevices@DWMInputRouter@@IEAAJPEAUIInputTarget@@@Z @ 0x180019E84
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x1800191F0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::InformTargetOfAttachedDevices(DWMInputRouter *this, struct IInputTarget *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  _QWORD *v8; // r14
  __int64 v9; // r8
  unsigned int i; // edx
  __int64 v11; // r10
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = 0LL;
  v3 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
         a2,
         &GUID_ce017166_b885_4259_a1c9_31032455b8b4,
         &v17);
  if ( v3 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 1139, v3);
    goto LABEL_4;
  }
  if ( !v17 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 0, 1143, 255);
    goto LABEL_4;
  }
  v5 = *((unsigned int *)this + 51);
  v6 = 0;
  if ( (_DWORD)v5 )
  {
    v8 = operator new[](saturated_mul(v5, 8uLL));
    if ( !v8 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 1159, 14);
LABEL_4:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v9 = 0LL;
    for ( i = 0; i < *((_DWORD *)this + 50); ++i )
    {
      v11 = *((_QWORD *)this + 24);
      if ( *(_DWORD *)(v11 + 16LL * i) != *((_DWORD *)this + 52) )
      {
        if ( (_DWORD)v9 == (_DWORD)v5 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 351, 87);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v8[v9] = *(_QWORD *)(v11 + 16LL * i + 8);
        v9 = (unsigned int)(v9 + 1);
      }
    }
    v12 = 0LL;
    while ( 1 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v17 + 24LL))(v17, v8[v12], v9);
      v6 = v13;
      if ( v13 < 0 )
        break;
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= (unsigned int)v5 )
        goto LABEL_31;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 1173, v13);
  }
LABEL_31:
  v15 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v6;
}
