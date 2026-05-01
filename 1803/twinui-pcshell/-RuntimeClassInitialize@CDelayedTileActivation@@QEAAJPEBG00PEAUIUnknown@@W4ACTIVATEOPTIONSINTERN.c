/*
 * XREFs of ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1802B5018
 * Callers:
 *     ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEBG11AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1802B42B0 (--$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTI.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1802B4F48 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18001CF60 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180096048 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??$AsAgile@UIUnknown@@@WRL@Microsoft@@YAJPEAUIUnknown@@PEAVAgileRef@01@@Z @ 0x1802B411C (--$AsAgile@UIUnknown@@@WRL@Microsoft@@YAJPEAUIUnknown@@PEAVAgileRef@01@@Z.c)
 */

__int64 __fastcall CDelayedTileActivation::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        IUnknown *punk,
        int a6)
{
  int v9; // ebx
  __int64 v10; // rdx
  void *v11; // rbx
  __int64 *v12; // rax
  int v13; // eax
  int v15[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *ppvOut; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 48) = a6;
  v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         a1 + 56,
         a2,
         0xFFFFFFFFFFFFFFFFuLL);
  if ( v9 < 0 )
  {
    v10 = 65LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         a1 + 104,
         a4,
         0xFFFFFFFFFFFFFFFFuLL);
  if ( v9 < 0 )
  {
    v10 = 66LL;
    goto LABEL_3;
  }
  v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         a1 + 80,
         a3,
         0xFFFFFFFFFFFFFFFFuLL);
  if ( v9 < 0 )
  {
    v10 = 67LL;
    goto LABEL_3;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&ppvOut);
  if ( IUnknown_QueryService(punk, &stru_1803B3AA0, &GUID_00000000_0000_0000_c000_000000000046, &ppvOut) < 0
    || (v11 = ppvOut,
        *(_QWORD *)v15 = a1 + 128,
        v12 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *((__int64 **)v15),
        v13 = Microsoft::WRL::AsAgile<IUnknown>((__int64)v11, v12),
        v9 = v13,
        v13 >= 0) )
  {
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
      (const char *)(unsigned int)v13);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&ppvOut);
  return (unsigned int)v9;
}
