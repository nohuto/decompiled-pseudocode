/*
 * XREFs of ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180074E7C
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18006C364 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180070E20 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800727E4 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800731A8 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z @ 0x180073B30 (-DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180073D74 (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@CameraControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800742BC (-Create@CameraControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEA.c)
 * Callees:
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18006D864 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18006E058 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18006E10C (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall HIDDeviceCollection::Initialize(
        HIDDeviceCollection *this,
        __int64 a2,
        struct _RIM_USAGE_ANDPAGE *const a3,
        __int64 a4,
        unsigned int a5,
        void **lpTargetHandle)
{
  _DWORD *v8; // rax
  signed int v9; // edi
  _DWORD *v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // edi
  _QWORD v15[3]; // [rsp+50h] [rbp-18h] BYREF

  v15[0] = 0LL;
  v8 = operator new[](4uLL);
  *((_QWORD *)this + 343) = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_9:
    RIMDeviceCollection::Close(this);
    return (unsigned int)v9;
  }
  *v8 = 0;
  v10 = (_DWORD *)*((_QWORD *)this + 343);
  *((_DWORD *)this + 688) = 1;
  *v10 = *(_DWORD *)a3;
  v9 = RIMDeviceCollection::InitializeSyncObjects(this);
  if ( v9 < 0 )
    goto LABEL_9;
  v11 = *((_QWORD *)this + 343);
  v12 = *((unsigned int *)this + 688);
  *((_DWORD *)this + 8) = 32;
  v13 = RIMRegisterForInput(
          32LL,
          0LL,
          v12,
          v11,
          *((_QWORD *)this + 6),
          *((_QWORD *)this + 8),
          *((_QWORD *)this + 9),
          this,
          RIMDeviceCollection::OnDeviceChangeCallbackStatic,
          v15);
  if ( v13 < 0 )
  {
    v9 = v13 | 0x10000000;
    if ( v9 < 0 )
      goto LABEL_9;
  }
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = v15[0];
  v9 = RIMDeviceCollection::InitializeRIM(this, a5, lpTargetHandle);
  if ( v9 < 0 )
    goto LABEL_9;
  return (unsigned int)v9;
}
