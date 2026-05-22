/*
 * XREFs of ?Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18006E330
 * Callers:
 *     ?Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006E1B0 (-Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z @ 0x1800438DC (-GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z.c)
 *     ?Initialize@MouseProcessor@@IEAAJPEBGJ@Z @ 0x18006BB64 (-Initialize@MouseProcessor@@IEAAJPEBGJ@Z.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x18007203C (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PTPProcessor::Initialize(PTPProcessor *this, struct DeviceInfo *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  TouchInfoAdapter *v8; // rax
  __int64 v9; // rcx
  bool v10; // r8
  TouchInfoAdapter *v11; // rbx
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v18; // [rsp+70h] [rbp+18h] BYREF
  __int16 v19; // [rsp+74h] [rbp+1Ch]
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  v20 = 0LL;
  v4 = CoreUICreate(&v20);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_36;
    v7 = 118;
    goto LABEL_35;
  }
  *((_QWORD *)this + 440) = a2;
  v8 = (TouchInfoAdapter *)malloc(0x2D0uLL);
  v11 = v8;
  if ( v8 )
    memset(v8, 0, 0x2D0uLL);
  if ( v11 )
    v11 = TouchInfoAdapter::TouchInfoAdapter(v11, this, v10);
  if ( *((TouchInfoAdapter **)this + 80) != v11 )
  {
    if ( v11 )
      (*(void (__fastcall **)(TouchInfoAdapter *))(*(_QWORD *)v11 + 8LL))(v11);
    v9 = *((_QWORD *)this + 80);
    *((_QWORD *)this + 80) = v11;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( *((_QWORD *)this + 80) )
  {
    v12 = (_QWORD *)((char *)this + 648);
    v13 = *((_QWORD *)this + 81);
    if ( v13 )
    {
      *v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v4 = GestureRecognizerCreate((struct IGestureRecognizer **)this + 81);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_36;
      v7 = 129;
      goto LABEL_35;
    }
    v14 = v20;
    v15 = *((_QWORD *)this + 82);
    if ( v15 )
    {
      *((_QWORD *)this + 82) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), PTPProcessor *, char *))(*(_QWORD *)v14 + 120LL))(
           v14,
           PTPProcessor::ProcessDelayedTapStatic,
           this,
           (char *)this + 656);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_36;
      v7 = 134;
      goto LABEL_35;
    }
    v18 = 19;
    v19 = 500;
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v12 + 112LL))(*v12, &v18);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_36;
      v7 = 144;
      goto LABEL_35;
    }
    v18 = 20;
    v19 = 300;
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v12 + 112LL))(*v12, &v18);
    v6 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_36;
      v7 = 154;
      goto LABEL_35;
    }
    v4 = MouseProcessor::Initialize((struct IInputDisplay **)this + 1, L"PTPSensitivity", 6);
    v6 = v4;
    if ( v4 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 156;
LABEL_35:
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 11, v7, v4);
    }
  }
  else
  {
    v6 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 11, 126, 14);
  }
LABEL_36:
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v6;
}
