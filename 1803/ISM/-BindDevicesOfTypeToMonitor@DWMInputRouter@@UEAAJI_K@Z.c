/*
 * XREFs of ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x18007F6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x1800177BC (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     ??$emplace_back@UDeviceDisplayMapping@DWMInputRouter@@@?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@QEAAAEAUDeviceDisplayMapping@DWMInputRouter@@$$QEAU23@@Z @ 0x180081380 (--$emplace_back@UDeviceDisplayMapping@DWMInputRouter@@@-$vector@UDeviceDisplayMapping@DWMInputRo.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::BindDevicesOfTypeToMonitor(
        DWMInputRouter *this,
        unsigned int a2,
        struct IInputDisplay *a3)
{
  struct IInputDisplay *v3; // r14
  int *v5; // rdi
  char *v6; // r12
  int *i; // rbx
  int v8; // ebp
  __int64 v9; // rsi
  int *v10; // rsi
  char *v11; // r14
  int v12; // r13d
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rcx
  int *v16; // rbp
  struct IInputDisplay **v17; // rsi
  struct IInputDisplay *v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  struct IInputDisplay *v23; // rbx
  __int64 v24; // rcx
  const char *v25; // r9
  unsigned int v27; // [rsp+28h] [rbp-50h] BYREF
  struct IInputDisplay *v28; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IInputDisplay *v30; // [rsp+80h] [rbp+8h] BYREF
  struct IInputDisplay *v31; // [rsp+90h] [rbp+18h] BYREF
  char v32; // [rsp+98h] [rbp+20h] BYREF

  v31 = a3;
  v3 = a3;
  v5 = (int *)*((_QWORD *)this + 23);
  v6 = (char *)this + 176;
  for ( i = (int *)*((_QWORD *)this + 22); i != v5; i += 4 )
  {
    v8 = *i;
    v9 = *((_QWORD *)i + 1);
    if ( v9 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)i + 1));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v8 == a2 )
      break;
  }
  if ( i != v5 )
  {
    v10 = i + 4;
    if ( i + 4 != v5 )
    {
      v11 = (char *)(i + 6);
      do
      {
        v12 = *v10;
        v13 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)v11);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        if ( v12 != a2 )
        {
          *i = *v10;
          if ( &v32 == v11 )
          {
            v14 = 0LL;
          }
          else
          {
            v14 = *(_QWORD *)v11;
            *(_QWORD *)v11 = 0LL;
          }
          v15 = *((_QWORD *)i + 1);
          *((_QWORD *)i + 1) = v14;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          i += 4;
        }
        v10 += 4;
        v11 += 16;
      }
      while ( v10 != v5 );
      v3 = v31;
    }
    if ( i != v5 )
    {
      v16 = (int *)*((_QWORD *)v6 + 1);
      if ( v5 != v16 )
      {
        v17 = (struct IInputDisplay **)(v5 + 2);
        do
        {
          *i = *v5;
          v18 = 0LL;
          if ( &v31 != v17 )
          {
            v18 = *v17;
            *v17 = 0LL;
          }
          v19 = *((_QWORD *)i + 1);
          *((_QWORD *)i + 1) = v18;
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          i += 4;
          v5 += 4;
          v17 += 2;
        }
        while ( v5 != v16 );
        v16 = (int *)*((_QWORD *)v6 + 1);
      }
      if ( i != v16 )
      {
        v20 = (__int64 *)(i + 2);
        do
        {
          v21 = *v20;
          if ( *v20 )
          {
            *v20 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          }
          v20 += 2;
        }
        while ( v20 - 1 != (__int64 *)v16 );
      }
      *((_QWORD *)v6 + 1) = i;
    }
  }
  v30 = v3;
  v31 = 0LL;
  v22 = DWMInputDisplay::Create((HMONITOR)v3, &v31);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x691,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v22);
    __debugbreak();
  }
  v27 = a2;
  v23 = v31;
  v28 = v31;
  if ( v31 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v31 + 8LL))(v31);
  std::vector<DWMInputRouter::DeviceDisplayMapping>::emplace_back<DWMInputRouter::DeviceDisplayMapping>(v6, &v27);
  if ( v28 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v28 + 16LL))(v28);
  if ( ((1LL << gdwDeviceFamily) & 0xDDB5) != 0 )
  {
    v24 = (a2 >> 1) & 1 | 8;
    if ( (a2 & 0x20) == 0 )
      v24 = (a2 >> 1) & 1;
    if ( (_DWORD)v24 && !(unsigned int)MITBindInputTypeToMonitors(v24, 1LL, &v30) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x6A8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        v25);
      JUMPOUT(0x18007F990LL);
    }
  }
  if ( v23 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v23 + 16LL))(v23);
  return 0LL;
}
