/*
 * XREFs of ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800915B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18006B0D0 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z @ 0x180091864 (-ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z.c)
 *     ?QueueWorkItem@ButtonProcessor@@AEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800919F8 (-QueueWorkItem@ButtonProcessor@@AEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonProcessor::OnInputReport(int **this, struct InputInfo *a2)
{
  int v4; // edi
  unsigned int v5; // r10d
  bool v6; // zf
  int *v7; // rax
  int v8; // ecx
  int *v9; // rcx
  unsigned __int16 v12; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+28h] [rbp-D8h]
  ButtonProcessor *v14; // [rsp+38h] [rbp-C8h]
  void **v15; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+48h] [rbp-B8h]
  ButtonProcessor *v17; // [rsp+58h] [rbp-A8h]
  void ***v18; // [rsp+78h] [rbp-88h]
  _DWORD v19[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h]
  char v22; // [rsp+280h] [rbp+180h]
  unsigned __int16 v23; // [rsp+28Ah] [rbp+18Ah]
  __int16 v24; // [rsp+28Ch] [rbp+18Ch]

  if ( (*(_DWORD *)a2 & 0x80) != 0 )
  {
    v5 = *((_DWORD *)a2 + 130);
    if ( v5 <= 0xD && !*((_BYTE *)this + 57)
      || !*((_BYTE *)this + 56)
      || (int)ButtonProcessor::ButtonToVKeyMapping((ButtonProcessor *)this, v5, &v12) < 0 )
    {
      if ( v5 == 239 )
      {
        v4 = 0;
        if ( !*((_BYTE *)a2 + 524) )
          return (unsigned int)v4;
        DWORD2(v13) = 0;
        *(_QWORD *)&v13 = ButtonProcessor::OnCameraAccessToggle;
        v14 = (ButtonProcessor *)this;
        v15 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (ButtonProcessor::*)(void),ButtonProcessor *>,void,>::`vftable';
        v16 = v13;
        v17 = (ButtonProcessor *)this;
        v18 = &v15;
        return (unsigned int)ButtonProcessor::QueueWorkItem(this, &v15);
      }
      else
      {
        return (unsigned int)NonPointerProcessor::OnInputReport((NonPointerProcessor *)this, a2);
      }
    }
    memset_0(v19, 0, 0x6C8uLL);
    v6 = *((_BYTE *)a2 + 524) == 0;
    v7 = this[4];
    v21 = 1736;
    v8 = *v7;
    v19[2] = *((_DWORD *)a2 + 2);
    v20 = *((_QWORD *)a2 + 2);
    v23 = v12;
    v24 = 64;
    v19[1] = v8;
    v19[0] = 4;
    if ( v6 )
      v24 = 65;
    v9 = this[8];
    v22 = *((_BYTE *)a2 + 512);
    v4 = (*(__int64 (__fastcall **)(int *, _DWORD *))(*(_QWORD *)v9 + 48LL))(v9, v19);
    if ( v4 < 0 )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v4;
}
