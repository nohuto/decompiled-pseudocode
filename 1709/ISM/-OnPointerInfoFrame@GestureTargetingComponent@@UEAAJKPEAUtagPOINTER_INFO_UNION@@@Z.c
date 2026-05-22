/*
 * XREFs of ?OnPointerInfoFrame@GestureTargetingComponent@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x180013D90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     McTemplateU0qqqq @ 0x180005A78 (McTemplateU0qqqq.c)
 *     McTemplateU0qqqqqq @ 0x180012E48 (McTemplateU0qqqqqq.c)
 *     ?SetValueForKey@?$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInputFrame@GestureTargetingComponent@@@Z @ 0x18001471C (-SetValueForKey@-$DynamicSizeMap@IUInputFrame@GestureTargetingComponent@@$04@@QEAAJAEBIAEBUInput.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GestureTargetingComponent::OnPointerInfoFrame(
        GestureTargetingComponent *this,
        unsigned int a2,
        struct tagPOINTER_INFO_UNION *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  int v11; // eax
  char v12; // al
  __int64 v13; // rcx
  _DWORD *v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r15
  unsigned __int64 v18; // rbx
  _DWORD *v19; // rsi
  _DWORD *v20; // rdx
  __int64 v21; // r8
  _OWORD *v22; // rcx
  __int64 v23; // rcx
  char v25; // [rsp+20h] [rbp-A8h]
  __int64 v26; // [rsp+50h] [rbp-78h] BYREF
  int v27; // [rsp+58h] [rbp-70h]
  int v28; // [rsp+5Ch] [rbp-6Ch]
  __int64 v29; // [rsp+60h] [rbp-68h]
  __int64 v30; // [rsp+90h] [rbp-38h]
  __int64 v31; // [rsp+98h] [rbp-30h]
  int v32; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v33; // [rsp+E8h] [rbp+20h] BYREF

  v4 = a2;
  v32 = 0;
  v33 = 0LL;
  v6 = *((_QWORD *)this + 6);
  if ( !v6 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_6;
    v7 = 607;
    goto LABEL_4;
  }
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v6)(
         v6,
         &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
         &v33);
  if ( v8 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v25 = v8;
      v7 = 616;
      goto LABEL_5;
    }
    goto LABEL_6;
  }
  v6 = v33;
  if ( !v33 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 620;
LABEL_4:
      v25 = -1;
LABEL_5:
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 4, v7, v25);
    }
LABEL_6:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  if ( (_DWORD)v4 )
  {
    v9 = (_QWORD *)((char *)a3 + 24);
    v10 = v4;
    while ( 1 )
    {
      *v9 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 88LL))(v6);
      v9 += 18;
      if ( !--v10 )
        break;
      v6 = v33;
    }
  }
  v32 = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
  v26 = *((_QWORD *)this + 6);
  v27 = v4;
  v28 = v4;
  v30 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v11 = DynamicSizeMap<unsigned int,GestureTargetingComponent::InputFrame,5>::SetValueForKey(
          (char *)this + 72,
          &v32,
          &v26);
  if ( v11 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v25 = v11;
      v7 = 651;
      goto LABEL_5;
    }
    goto LABEL_6;
  }
  v12 = Microsoft_OneCore_MinInputEnableBits;
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
  {
    McTemplateU0qqqq(v6, &MinInput_Log_PointerInfoFrame, 4, *((_DWORD *)a3 + 16), *((_DWORD *)a3 + 2), v4);
    v12 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    {
      if ( (_DWORD)v4 )
      {
        v14 = (_DWORD *)((char *)a3 + 36);
        v15 = v4;
        do
        {
          if ( (v12 & 4) != 0 )
          {
            McTemplateU0qqqqqq(
              v13,
              &MinInput_Log_PointerInfoFrame_PointerInfo,
              4,
              *(v14 - 8),
              *(v14 - 6),
              *(v14 - 1),
              *v14,
              *(v14 - 3));
            v12 = Microsoft_OneCore_MinInputEnableBits;
          }
          v14 += 36;
          --v15;
        }
        while ( v15 );
      }
    }
  }
  v16 = *((_QWORD *)this + 7);
  v17 = *(_QWORD *)(v16 + 24);
  if ( !GestureTargetingComponent::s_pfnMTCallback )
  {
    if ( (v12 & 2) != 0 )
      McTemplateU0qqq(v16, &MinInput_Warning_CheckResult, 4, 156, 255);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v18 = (unsigned int)(208 * (v4 - 1) + 232);
  v19 = operator new[](v18);
  memset(v19, 0, (unsigned int)v18);
  *v19 = 0;
  v19[4] = v4;
  *((_QWORD *)v19 + 1) = v17;
  if ( (_DWORD)v4 )
  {
    v20 = v19 + 54;
    v21 = v4;
    do
    {
      v22 = v20 - 48;
      *v22 = *(_OWORD *)a3;
      v22[1] = *((_OWORD *)a3 + 1);
      v22[2] = *((_OWORD *)a3 + 2);
      v22[3] = *((_OWORD *)a3 + 3);
      v22[4] = *((_OWORD *)a3 + 4);
      v22[5] = *((_OWORD *)a3 + 5);
      v22[6] = *((_OWORD *)a3 + 6);
      v22[7] = *((_OWORD *)a3 + 7);
      v22[8] = *((_OWORD *)a3 + 8);
      *v20 = *((_DWORD *)a3 + 6);
      a3 = (struct tagPOINTER_INFO_UNION *)((char *)a3 + 144);
      v20 += 52;
      --v21;
    }
    while ( v21 );
  }
  ((void (__fastcall *)(_DWORD *, _QWORD))GestureTargetingComponent::s_pfnMTCallback)(v19, 0LL);
  operator delete(v19);
  v23 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return 0LL;
}
