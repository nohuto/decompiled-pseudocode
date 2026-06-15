/*
 * XREFs of AudioServerGetEndpointVpoContext @ 0x18008EF70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@X@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x18008A0E0 (--$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@X@std@@YA-AV-$unique_p.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall AudioServerGetEndpointVpoContext(__int64 a1, __int64 a2, __int64 a3, __int64 **a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  __int64 result; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 *v14; // rbx
  int v15; // eax
  unsigned int v16; // edi
  struct ISaDeviceProxy *v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h] BYREF
  struct IVpoContext *v19; // [rsp+30h] [rbp-38h] BYREF
  struct IVpoContext *v20; // [rsp+38h] [rbp-30h] BYREF
  struct ISaDeviceProxy *v21; // [rsp+40h] [rbp-28h] BYREF
  struct ISubmixProxy *v22; // [rsp+48h] [rbp-20h] BYREF
  void *v23[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v23[1] = (void *)-2LL;
  try
  {
    v18 = 0LL;
    v6 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
           g_DeviceGraphStore,
           a2,
           &v18);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v17 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v18 + 104LL))(v18, &v17);
      v11 = v10;
      if ( v10 >= 0 )
      {
        v19 = 0LL;
        v12 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct IVpoContext **))(*(_QWORD *)v17 + 96LL))(
                v17,
                &v19);
        v13 = v12;
        if ( v12 >= 0 )
        {
          v20 = v19;
          v21 = v17;
          v22 = 0LL;
          std::make_unique<CVpoContextProxy,std::nullptr_t,ISaDeviceProxy *,IVpoContext *,void>(
            (CVpoContextProxy **)v23,
            &v22,
            &v21,
            &v20);
          v14 = (__int64 *)v23[0];
          if ( v23[0] )
          {
            v15 = (*(__int64 (__fastcall **)(struct IVpoContext *, __int64))(*(_QWORD *)v19 + 32LL))(v19, a3);
            v16 = v15;
            if ( v15 >= 0 )
            {
              *a4 = v14;
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
              result = 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0xB24,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v15);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v14 + 2);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v14 + 1);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v14);
              operator delete(v14, (const struct std::nothrow_t *)0x18);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
              result = v16;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB21,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)0x8007000ELL);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
            result = 2147942414LL;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xB1E,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v12);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
          result = v13;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xB1B,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v10);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
        result = v11;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xB18,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
      result = v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB29,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                           v8);
  }
  return result;
}
