/*
 * XREFs of AudioServerGetEndpointVpoContext @ 0x1800A2880
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x18009FC98 (--$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@@std@@YA-AV-$unique_pt.c)
 *     ?reset@?$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800A1B70 (-reset@-$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AudioServerGetEndpointVpoContext(__int64 a1, __int64 a2, __int64 a3, __int64 **a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 *v15; // rbx
  int v16; // eax
  unsigned int v17; // edi
  struct ISaDeviceProxy *v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+28h] [rbp-40h] BYREF
  struct IVpoContext *v20; // [rsp+30h] [rbp-38h] BYREF
  struct IVpoContext *v21; // [rsp+38h] [rbp-30h] BYREF
  struct ISaDeviceProxy *v22; // [rsp+40h] [rbp-28h] BYREF
  struct ISubmixProxy *v23; // [rsp+48h] [rbp-20h] BYREF
  void *v24[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v24[1] = (void *)-2LL;
  try
  {
    v19 = 0LL;
    v6 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
           g_DeviceGraphStore,
           a2,
           &v19);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v18 = 0LL;
      v10 = v19;
      wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::reset((__int64 *)&v18);
      v11 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v10 + 96LL))(v10, &v18);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v20 = 0LL;
        v13 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct IVpoContext **))(*(_QWORD *)v18 + 96LL))(
                v18,
                &v20);
        v14 = v13;
        if ( v13 >= 0 )
        {
          v21 = v20;
          v22 = v18;
          v23 = 0LL;
          std::make_unique<CVpoContextProxy,std::nullptr_t,ISaDeviceProxy *,IVpoContext *>(
            (CVpoContextProxy **)v24,
            &v23,
            &v22,
            &v21);
          v15 = (__int64 *)v24[0];
          if ( v24[0] )
          {
            v16 = (*(__int64 (__fastcall **)(struct IVpoContext *, __int64))(*(_QWORD *)v20 + 32LL))(v20, a3);
            v17 = v16;
            if ( v16 >= 0 )
            {
              *a4 = v15;
              wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v20);
              wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v18);
              wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v19);
              result = 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0xB5C,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v16);
              wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(v15 + 2);
              wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(v15 + 1);
              wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(v15);
              operator delete(v15, (const struct std::nothrow_t *)0x18);
              wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v20);
              wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v18);
              wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v19);
              result = v17;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB59,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)0x8007000ELL);
            wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v20);
            wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v18);
            wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v19);
            result = 2147942414LL;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xB56,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v13);
          wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v20);
          wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v18);
          wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v19);
          result = v14;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xB53,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v11);
        wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)&v18);
        wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v19);
        result = v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xB50,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v19);
      result = v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB61,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                           v8);
  }
  return result;
}
