/*
 * XREFs of ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18001A7E0
 * Callers:
 *     ?GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800A8E40 (-GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PE.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::GetTargetWithFocus(
        DWMInputRouter *this,
        struct IInputDisplay *a2,
        struct DeviceInfo *a3,
        struct IInputTarget *a4,
        struct IInputTarget **a5)
{
  struct IInputTarget **v7; // rsi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  struct IInputTarget *v13; // rax
  __int64 v14; // rcx
  struct IInputTarget *v15; // rcx
  int v17; // [rsp+38h] [rbp-20h] BYREF
  struct IInputTarget *v18; // [rsp+40h] [rbp-18h]
  struct IInputDisplay *v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = a2;
  v18 = 0LL;
  v7 = a5;
  if ( !a5 )
  {
    v8 = -2147467261;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 1431, 3);
    goto LABEL_21;
  }
  if ( !a2 )
  {
    v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputDisplay **, struct IInputTarget *))this + 54))(
           *((_QWORD *)this + 54),
           &GUID_3a9285d1_c1ae_4ebb_9422_bf3257847754,
           &v19,
           a4);
    v8 = v9;
    if ( v9 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 1446, v9);
      goto LABEL_21;
    }
    a2 = v19;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct IInputDisplay *, struct DeviceInfo *, _QWORD, int *))(**((_QWORD **)this + 27) + 32LL))(
          *((_QWORD *)this + 27),
          a2,
          a3,
          *((_QWORD *)this + 30),
          &v17);
  v8 = v11;
  if ( v11 >= 0 )
  {
    if ( v17 )
    {
      if ( v18 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 8LL))(v18);
      v13 = v18;
    }
    else
    {
      v14 = *((_QWORD *)this + 30);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v13 = (struct IInputTarget *)*((_QWORD *)this + 30);
    }
    *v7 = v13;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, 1453, v11);
  }
LABEL_21:
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *, struct IInputDisplay *, struct DeviceInfo *, struct IInputTarget *))(*(_QWORD *)v15 + 16LL))(
      v15,
      a2,
      a3,
      a4);
  }
  return v8;
}
