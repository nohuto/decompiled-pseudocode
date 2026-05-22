/*
 * XREFs of ?Initialize@MouseProcessor@@IEAAJPEBGJ@Z @ 0x18006BB64
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006BA60 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18006E330 (-Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009738 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800365C0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?Initialize@MouseAccelerator@@QEAAJPEBGJ@Z @ 0x18006CEEC (-Initialize@MouseAccelerator@@QEAAJPEBGJ@Z.c)
 *     ?BuildAccelerationCurve@MouseAccelerator@@QEAAJPEAUIInputDisplay@@@Z @ 0x18006D1B8 (-BuildAccelerationCurve@MouseAccelerator@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     ?Initialize@PointerProcessor@@IEAAJXZ @ 0x180070D68 (-Initialize@PointerProcessor@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::Initialize(struct IInputDisplay **this, const unsigned __int16 *a2, int a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // r9d
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v12; // rcx
  struct IInputDisplay *v13; // rbx
  _QWORD *v14; // rsi
  struct IInputDisplay *v15; // rcx
  __int64 v16; // rax
  void (__fastcall ***v17)(_QWORD, GUID *, struct IInputDisplay **); // rsi
  struct IInputDisplay *v18; // rcx
  struct IInputDisplay *v19; // rcx
  __int64 v20; // rcx
  __int128 v22; // [rsp+38h] [rbp-28h] BYREF
  __int128 v23; // [rsp+48h] [rbp-18h]
  int v24; // [rsp+58h] [rbp-8h]
  char v25; // [rsp+5Ch] [rbp-4h]
  __int64 v26; // [rsp+98h] [rbp+38h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  v24 = -1;
  v25 = 1;
  v26 = 0LL;
  v6 = PointerProcessor::Initialize((PointerProcessor *)this);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_39;
    v9 = 171;
    goto LABEL_38;
  }
  v10 = (__int64)this[29];
  if ( v10 )
  {
    this[29] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( (int)RegistryWatcher::Create(
              v10,
              L"SYSTEM\\MOUSE",
              this,
              (void (*)(void *, HKEY))MouseProcessor::OnMouseRegistryKeyChangeStatic,
              this + 29) < 0 )
    *((_BYTE *)this + 264) = 0;
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)this[3] + 64LL))(this[3]);
  v12 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v6 = (**v11)(v11, &GUID_fb9e888a_e52b_424f_8fab_f05676d1b357, &v26);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_39;
    v9 = 186;
    goto LABEL_38;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v26 + 56LL))(v26, 2LL, (char *)this + 200);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_39;
    v9 = 189;
    goto LABEL_38;
  }
  v13 = this[6];
  v14 = this + 30;
  v15 = this[30];
  if ( v15 )
  {
    *v14 = 0LL;
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v6 = (*(__int64 (__fastcall **)(struct IInputDisplay *, struct IInputDisplay *, struct IInputDisplay *, _QWORD, char *))(*(_QWORD *)v13 + 24LL))(
         v13,
         this[4],
         this[5],
         0LL,
         (char *)this + 240);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_39;
    v9 = 192;
    goto LABEL_38;
  }
  if ( (gdwMitConfig & 1) != 0 )
  {
    v16 = (*(__int64 (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)this[3] + 64LL))(this[3]);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 104LL))(v16);
  }
  v17 = (void (__fastcall ***)(_QWORD, GUID *, struct IInputDisplay **))*v14;
  v18 = this[31];
  if ( v18 )
  {
    this[31] = 0LL;
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  (**v17)(v17, &GUID_925481d1_82a9_4761_95ea_d779b9de7e6b, this + 31);
  if ( (gdwMitConfig & 1) == 0 && *((_BYTE *)this + 560) )
  {
    v6 = MouseAccelerator::Initialize((MouseAccelerator *)(this + 35), a2, a3);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_39;
      v9 = 219;
      goto LABEL_38;
    }
    v6 = MouseAccelerator::BuildAccelerationCurve((MouseAccelerator *)(this + 35), this[5]);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_39;
      v9 = 220;
      goto LABEL_38;
    }
  }
  *((_DWORD *)this[4] + 1) |= 4u;
  *(_QWORD *)&v22 = this[4];
  *(_QWORD *)&v23 = this;
  *((_QWORD *)&v22 + 1) = this[3];
  v19 = this[71];
  if ( v19 )
  {
    this[71] = 0LL;
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v6 = CreateChildInputProcessor(4, &v22, (__int64)(this + 71));
  v8 = v6;
  if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 238;
LABEL_38:
    McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, v9, v6);
  }
LABEL_39:
  v20 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v8;
}
