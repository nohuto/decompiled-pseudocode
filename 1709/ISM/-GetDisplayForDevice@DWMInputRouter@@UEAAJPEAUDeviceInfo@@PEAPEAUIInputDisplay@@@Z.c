/*
 * XREFs of ?GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z @ 0x18001AD50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??$MakeAndInitialize@VDisplayBinding@@V1@IAEBU_GUID@@W4Dimension@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayBinding@@@WRL@Microsoft@@@012@$$QEAIAEBU_GUID@@$$QEAW4Dimension@@@Z @ 0x18001F2F4 (--$MakeAndInitialize@VDisplayBinding@@V1@IAEBU_GUID@@W4Dimension@@@Details@WRL@Microsoft@@YAJV-$.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x1800208BC (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     ?SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z @ 0x1800237E4 (-SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMInputRouter::GetDisplayForDevice(
        DWMInputRouter *this,
        struct DeviceInfo *a2,
        struct IInputDisplay **a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // r8
  signed __int32 v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // rax
  DisplayBinding *v18; // rcx
  __int64 v19; // rax
  DisplayBinding *v20; // rdx
  struct IInputDisplay *v21; // rcx
  struct IInputDisplay *v22; // rbx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r9d
  struct IInputDisplay *v26; // rcx
  DisplayBinding *v27; // rcx
  struct IInputDisplay *v28; // rax
  struct IInputDisplay *v29; // rcx
  DisplayBinding *v31; // [rsp+30h] [rbp-40h] BYREF
  struct IInputDisplay *v32; // [rsp+38h] [rbp-38h] BYREF
  struct IInputDisplay *v33; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v34[5]; // [rsp+48h] [rbp-28h] BYREF
  int v35; // [rsp+A0h] [rbp+30h] BYREF
  struct DeviceInfo *v36; // [rsp+A8h] [rbp+38h]
  signed __int32 v37; // [rsp+B8h] [rbp+48h] BYREF

  v36 = a2;
  v34[1] = -2LL;
  v32 = 0LL;
  v5 = *((_QWORD *)this + 33);
  v34[2] = v5;
  v6 = *((_QWORD *)this + 32);
  v34[3] = v6;
  if ( v6 != v5 )
  {
    do
    {
      if ( (*((_DWORD *)a2 + 1) & *(_DWORD *)v6) != 0 )
        break;
      v6 += 16LL;
    }
    while ( v6 != v5 );
    if ( v6 != v5 )
    {
      v7 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputDisplay **))(v6 + 8))(
             *(_QWORD *)(v6 + 8),
             &GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754,
             &v32);
      v9 = v7;
      if ( v7 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_63;
        v10 = 1638;
        goto LABEL_8;
      }
      goto LABEL_62;
    }
  }
  v11 = *((_QWORD *)this + 54);
  if ( !*((_QWORD *)a2 + 2) )
  {
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IInputDisplay **))v11)(
           v11,
           &GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754,
           &v32);
    v9 = v7;
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_63;
      v10 = 1683;
LABEL_8:
      McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, v10, v7);
      goto LABEL_63;
    }
LABEL_62:
    v28 = v32;
    v32 = 0LL;
    *a3 = v28;
    goto LABEL_63;
  }
  v34[0] = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v11 + 8) + 24LL))(v11 + 8, v34);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_63;
    v10 = 1645;
    goto LABEL_8;
  }
  if ( *((_QWORD *)v36 + 2) == v34[0] )
  {
    v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputDisplay **))this + 54))(
           *((_QWORD *)this + 54),
           &GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754,
           &v32);
    v9 = v7;
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_63;
      v10 = 1649;
      goto LABEL_8;
    }
    goto LABEL_62;
  }
  v31 = 0LL;
  v33 = 0LL;
  v35 = 0;
  v13 = _InterlockedIncrement(&DisplayBinding::s_currentId);
  if ( v13 == -1 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v37 = v13;
  v14 = Microsoft::WRL::Details::MakeAndInitialize<DisplayBinding,DisplayBinding,unsigned int,_GUID const &,enum Dimension>(
          &v31,
          &v37,
          v12,
          &v35);
  v9 = v14;
  if ( v14 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_25:
      if ( !v33 )
      {
LABEL_28:
        v18 = v31;
        if ( !v31 )
          goto LABEL_63;
        v31 = 0LL;
        v19 = *(_QWORD *)v18;
        goto LABEL_30;
      }
      v17 = *(_QWORD *)v33;
LABEL_27:
      (*(void (**)(void))(v17 + 16))();
      goto LABEL_28;
    }
    v16 = 1660;
LABEL_24:
    McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, v16, v14);
    goto LABEL_25;
  }
  v20 = v31;
  if ( v31 )
  {
    v21 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v14 = DWMInputDisplay::Create(*((HMONITOR *)v36 + 2), &v33);
    v9 = v14;
    if ( v14 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_25;
      v16 = 1670;
      goto LABEL_24;
    }
    v22 = v33;
    if ( !v33 )
    {
      v9 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 1674, 14);
      goto LABEL_28;
    }
    v23 = DisplayBinding::SetInputDisplay(v31, v33);
    v9 = v23;
    if ( v23 >= 0 )
    {
      v26 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v23 = (**(__int64 (__fastcall ***)(DisplayBinding *, GUID *, struct IInputDisplay **))v31)(
              v31,
              &GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754,
              &v32);
      v9 = v23;
      if ( v23 >= 0 )
      {
        (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v22 + 16LL))(v22);
        v27 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(DisplayBinding *))(*(_QWORD *)v27 + 16LL))(v27);
        }
        goto LABEL_62;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_51;
      v25 = 1678;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_51:
        v17 = *(_QWORD *)v22;
        goto LABEL_27;
      }
      v25 = 1677;
    }
    McTemplateU0qqq(v24, &MinInput_Warning_CheckResult, 0, v25, v23);
    goto LABEL_51;
  }
  v9 = -2147024882;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 1664, 14);
    v20 = v31;
  }
  if ( v33 )
  {
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v33 + 16LL))(v33);
    v20 = v31;
  }
  if ( v20 )
  {
    v31 = 0LL;
    v19 = *(_QWORD *)v20;
LABEL_30:
    (*(void (**)(void))(v19 + 16))();
  }
LABEL_63:
  v29 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v29 + 16LL))(v29);
  }
  return v9;
}
