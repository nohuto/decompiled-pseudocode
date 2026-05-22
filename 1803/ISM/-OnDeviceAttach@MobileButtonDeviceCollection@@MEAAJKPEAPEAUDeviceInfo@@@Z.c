/*
 * XREFs of ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180072970
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074F90 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18007548C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::OnDeviceAttach(
        MobileButtonDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  int v3; // edi
  int DeviceId; // ebx
  struct _HIDP_PREPARSED_DATA *v6; // rax
  int v7; // r10d
  char *v8; // r8
  unsigned int v9; // r11d
  unsigned int *v10; // r9
  char v11; // dl
  __int64 v12; // rax
  _DWORD *v13; // rcx
  __int128 v14; // xmm1
  __int64 v15; // rcx
  unsigned int v16; // r14d
  struct _HIDP_PREPARSED_DATA *v17; // rax
  struct _HIDP_CAPS *v18; // rsi
  int HIDCapabilities; // eax
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // r12
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rdi
  USAGE *v22; // r15
  __int64 v23; // r13
  char v24; // di
  USHORT ButtonCapsLength; // [rsp+40h] [rbp-29h] BYREF
  struct RIMDevice *v27; // [rsp+48h] [rbp-21h] BYREF
  int v28; // [rsp+50h] [rbp-19h]
  struct _HIDP_CAPS *v29; // [rsp+58h] [rbp-11h] BYREF
  PHIDP_PREPARSED_DATA v30[2]; // [rsp+60h] [rbp-9h]
  struct DeviceInfo **v31; // [rsp+70h] [rbp+7h]
  __int64 v32; // [rsp+78h] [rbp+Fh] BYREF

  v31 = a3;
  v27 = 0LL;
  v3 = a2;
  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( DeviceId < 0 )
    return (unsigned int)DeviceId;
  v6 = (struct _HIDP_PREPARSED_DATA *)operator new[](0x28uLL);
  v30[0] = v6;
  if ( !v6 )
    return (unsigned int)-2147024882;
  memset_0(v6, 0, 0x28uLL);
  v7 = *((_DWORD *)this + 2226);
  v8 = (char *)this + 2760;
  LODWORD(v30[1]) = 20;
  v9 = 0;
  LOBYTE(v10) = 0;
  v11 = 0;
  if ( v3 == v7 )
    return (unsigned int)-2147024809;
  v12 = 0LL;
  v13 = (_DWORD *)((char *)this + 2760);
  while ( 1 )
  {
    v14 = *(_OWORD *)v30;
    if ( *v13 == v3 )
      break;
    if ( !v11 && *v13 == v7 )
    {
      v9 = v12;
      v11 = 1;
    }
    v12 = (unsigned int)(v12 + 1);
    v13 += 6;
    if ( (unsigned int)v12 >= 0x100 )
      goto LABEL_14;
  }
  LOBYTE(v10) = 1;
  *(_OWORD *)((char *)this + 24 * v12 + 2768) = *(_OWORD *)v30;
LABEL_14:
  DeviceId = 0;
  if ( !(_BYTE)v10 )
  {
    if ( v11 )
    {
      v15 = 3LL * v9;
      *(_DWORD *)&v8[8 * v15] = v3;
      *(_OWORD *)&v8[8 * v15 + 8] = v14;
      goto LABEL_19;
    }
    DeviceId = -2147467259;
  }
  if ( DeviceId < 0 )
    return (unsigned int)DeviceId;
LABEL_19:
  DeviceId = RIMDeviceCollection::FindDeviceId(this, v3, &v27, v10);
  if ( DeviceId >= 0 )
  {
    v32 = 0LL;
    LOBYTE(v3) = 0;
    v29 = 0LL;
    v16 = 0;
    v28 = v3;
    v17 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)v27 + 6);
    v18 = (struct _HIDP_CAPS *)((char *)v27 + 60);
    ButtonCapsLength = 0;
    v30[0] = v17;
    if ( *((_WORD *)v27 + 30) )
    {
      DeviceId = 0;
    }
    else
    {
      HIDCapabilities = HIDDevice::GetHIDCapabilities(v27, &v29);
      v18 = v29;
      DeviceId = HIDCapabilities;
    }
    LODWORD(v27) = DeviceId;
    if ( DeviceId >= 0 )
    {
      ButtonCapsLength = v18->NumberInputButtonCaps;
      ButtonCaps = (struct _HIDP_BUTTON_CAPS *)operator new[](saturated_mul(ButtonCapsLength, 0x48uLL));
      if ( !ButtonCaps )
        return (unsigned int)-2147024882;
      PreparsedData = v30[0];
      v22 = (USAGE *)&v32;
      LODWORD(v32) = 3866665;
      WORD2(v32) = 60;
      v23 = 3LL;
      do
      {
        ButtonCapsLength = v18->NumberInputButtonCaps;
        memset_0(ButtonCaps, 0, 72LL * ButtonCapsLength);
        if ( HidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *v22, ButtonCaps, &ButtonCapsLength, PreparsedData) >= 0 )
          ++v16;
        ++v22;
        --v23;
      }
      while ( v23 );
      v24 = v28;
      DeviceId = (int)v27;
      if ( (unsigned __int16)(v18->NumberInputButtonCaps - 1) <= 3u && v16 >= 2 )
        v24 = 1;
      operator delete(ButtonCaps);
      if ( DeviceId >= 0 )
        *((_BYTE *)*v31 + 48) = v24;
    }
  }
  return (unsigned int)DeviceId;
}
