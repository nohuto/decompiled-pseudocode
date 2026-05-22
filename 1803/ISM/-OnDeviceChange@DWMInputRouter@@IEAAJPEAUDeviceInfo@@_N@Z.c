/*
 * XREFs of ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18007E21C
 * Callers:
 *     ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007E680 (-OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18007E690 (-OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x180081758 (-GetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x1800819C8 (-GetKeys@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::OnDeviceChange(DWMInputRouter *this, struct DeviceInfo *a2, char a3)
{
  int v5; // r9d
  int v6; // r11d
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // r14d
  char v10; // r10
  signed int Keys; // ebx
  unsigned int v12; // edx
  unsigned int v13; // r8d
  __int64 v14; // rbx
  void *v15; // rsi
  unsigned int v16; // ebx
  void *v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  char v22; // r8
  unsigned int v23; // edx
  unsigned int v24; // r9d
  __int64 v25; // r10
  __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  char *v28; // rax
  char *v29; // r12
  int v30; // r14d
  char *v31; // r15
  _QWORD *v32; // rcx
  __int64 (__fastcall **v33)(_QWORD, _QWORD); // rax
  int v34; // eax
  _QWORD *v35; // rcx
  _QWORD *v36; // rcx
  _QWORD *v38; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v39[3]; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v40[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v41; // [rsp+60h] [rbp-10h]
  char v43; // [rsp+C8h] [rbp+58h]

  v39[1] = -2LL;
  v43 = 0;
  if ( a3 )
  {
    v5 = *(_DWORD *)a2;
    v6 = *((_DWORD *)this + 62);
    if ( *(_DWORD *)a2 == v6 || (v7 = 0, (v8 = *((_DWORD *)this + 60)) == 0) )
    {
LABEL_6:
      v9 = 0;
      v10 = 0;
      if ( v5 == v6 )
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
        Keys = -2147024809;
        goto LABEL_32;
      }
      v12 = 0;
      v13 = *((_DWORD *)this + 60);
      if ( v13 )
      {
        v14 = *((_QWORD *)this + 29);
        do
        {
          if ( *(_DWORD *)(v14 + 16LL * v12) == v5 )
          {
            *(_QWORD *)(v14 + 16LL * v12 + 8) = a2;
            goto LABEL_42;
          }
          if ( !v10 && *(_DWORD *)(v14 + 16LL * v12) == v6 )
          {
            v9 = v12;
            v10 = 1;
          }
          ++v12;
        }
        while ( v12 < v13 );
        if ( v10 )
          goto LABEL_30;
      }
      if ( *((_DWORD *)this + 61) != v13 )
      {
        Keys = -2147467259;
LABEL_32:
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
        return (unsigned int)Keys;
      }
      v9 = *((_DWORD *)this + 60);
      v15 = (void *)*((_QWORD *)this + 29);
      v16 = 2 * v13;
      v17 = operator new[](saturated_mul(2 * v13, 0x10uLL));
      *((_QWORD *)this + 29) = v17;
      if ( v17 )
      {
        memcpy_0(v17, v15, 16LL * *((unsigned int *)this + 60));
        v18 = *((_DWORD *)this + 60);
        if ( v18 < v16 )
        {
          v19 = 16LL * v18;
          v20 = v16 - v18;
          do
          {
            *(_DWORD *)(v19 + *((_QWORD *)this + 29)) = *((_DWORD *)this + 62);
            v19 += 16LL;
            --v20;
          }
          while ( v20 );
        }
        *((_DWORD *)this + 60) = v16;
        operator delete(v15);
LABEL_30:
        v21 = 2LL * v9;
        *(_DWORD *)(*((_QWORD *)this + 29) + 8 * v21) = *(_DWORD *)a2;
        *(_QWORD *)(*((_QWORD *)this + 29) + 8 * v21 + 8) = a2;
        ++*((_DWORD *)this + 61);
        Keys = 0;
      }
      else
      {
        Keys = -2147024882;
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
      }
      if ( Keys < 0 )
        goto LABEL_32;
    }
    else
    {
      while ( *(_DWORD *)(*((_QWORD *)this + 29) + 16LL * v7) != v5 )
      {
        if ( ++v7 >= v8 )
          goto LABEL_6;
      }
      v43 = 1;
    }
  }
  else
  {
    v22 = 0;
    v23 = 0;
    v24 = *((_DWORD *)this + 60);
    if ( v24 )
    {
      v25 = *((_QWORD *)this + 29);
      while ( *(_DWORD *)(v25 + 16LL * v23) != *(_DWORD *)a2 )
      {
        if ( ++v23 >= v24 )
          goto LABEL_41;
      }
      v26 = 2LL * v23;
      *(_DWORD *)(v25 + 8 * v26) = *((_DWORD *)this + 62);
      *(_QWORD *)(*((_QWORD *)this + 29) + 8 * v26 + 8) = 0LL;
      v22 = 1;
      --*((_DWORD *)this + 61);
    }
LABEL_41:
    Keys = v22 == 0 ? 0x80004005 : 0;
    if ( !v22 )
      goto LABEL_32;
  }
LABEL_42:
  v27 = *((unsigned int *)this + 25);
  Keys = 0;
  if ( !(_DWORD)v27 )
    return (unsigned int)Keys;
  v28 = (char *)operator new[](saturated_mul(v27, 0x28uLL));
  v29 = v28;
  if ( !v28 )
  {
    Keys = -2147024882;
    goto LABEL_32;
  }
  Keys = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetKeys((char *)this + 88, v28, (unsigned int)v27);
  if ( Keys < 0 )
    goto LABEL_32;
  v30 = 0;
  while ( 1 )
  {
    v39[0] = 0LL;
    v38 = 0LL;
    v31 = &v29[40 * v30];
    Keys = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey((char *)this + 88, v31, v39);
    if ( Keys < 0 )
      goto LABEL_69;
    v32 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
    }
    Keys = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))v39[0])(
             v39[0],
             &GUID_ce017166_b885_4259_a1c9_31032455b8b4,
             &v38);
    if ( Keys < 0 )
      goto LABEL_69;
    if ( !v38 )
      break;
    v33 = (__int64 (__fastcall **)(_QWORD, _QWORD))*v38;
    if ( a3 )
    {
      if ( v43 )
        v34 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v33)[4](v38, a2);
      else
        v34 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v33)[3](v38, a2);
    }
    else
    {
      v34 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v33)[5](v38, a2);
    }
    Keys = v34;
    if ( v34 < 0 )
    {
      v40[0] = *(_OWORD *)v31;
      v40[1] = *((_OWORD *)v31 + 1);
      v41 = *((_QWORD *)v31 + 4);
      Keys = (*(__int64 (__fastcall **)(char *, _OWORD *))(*((_QWORD *)this + 7) + 40LL))((char *)this + 56, v40);
      if ( Keys < 0 )
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
        v36 = v38;
        if ( v38 )
        {
          v38 = 0LL;
LABEL_73:
          (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
          return (unsigned int)Keys;
        }
        return (unsigned int)Keys;
      }
      Keys = 0;
    }
    v35 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
    }
    if ( ++v30 >= (unsigned int)v27 )
      return (unsigned int)Keys;
  }
  Keys = -2147418113;
LABEL_69:
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
  v36 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    goto LABEL_73;
  }
  return (unsigned int)Keys;
}
