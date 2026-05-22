/*
 * XREFs of ?GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z @ 0x18007F9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x1800177BC (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::GetDisplayForDevice(
        DWMInputRouter *this,
        struct DeviceInfo *a2,
        struct IInputDisplay **a3)
{
  HMONITOR v3; // rbx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int *v10; // r15
  int *i; // rbx
  __int64 v12; // r14
  int v13; // r12d
  int v14; // ebp
  struct IInputDisplay *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HMONITOR v18; // [rsp+58h] [rbp+10h] BYREF

  v3 = (HMONITOR)*((_QWORD *)a2 + 2);
  if ( !v3 )
  {
    v10 = (int *)*((_QWORD *)this + 25);
    for ( i = (int *)*((_QWORD *)this + 24); i != v10; i += 4 )
    {
      v12 = *((_QWORD *)i + 1);
      v13 = *i;
      if ( v12 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*((_QWORD *)i + 1));
      v14 = v13 & *((_DWORD *)a2 + 1);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v14 )
        break;
    }
    if ( i != *((int **)this + 25) )
    {
      v15 = (struct IInputDisplay *)*((_QWORD *)i + 1);
      if ( v15 )
      {
        (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v15 + 8LL))(v15);
        v15 = (struct IInputDisplay *)*((_QWORD *)i + 1);
      }
      goto LABEL_19;
    }
LABEL_17:
    v15 = (struct IInputDisplay *)*((_QWORD *)this + 27);
    if ( v15 )
    {
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v15 + 8LL))(v15);
      v15 = (struct IInputDisplay *)*((_QWORD *)this + 27);
    }
LABEL_19:
    *a3 = v15;
    return 0LL;
  }
  v7 = *((_QWORD *)this + 27);
  v18 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v7 + 24LL))(v7, &v18);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6C0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  if ( v3 == v18 )
    goto LABEL_17;
  v9 = DWMInputDisplay::Create(v3, a3);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6C8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v9);
    JUMPOUT(0x18007FB35LL);
  }
  return 0LL;
}
