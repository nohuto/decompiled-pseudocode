/*
 * XREFs of ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180127CF0
 * Callers:
 *     _lambda_60cdd79d6ef93393eeddedcffed22f52_::operator() @ 0x18011DF60 (_lambda_60cdd79d6ef93393eeddedcffed22f52_--operator().c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180126888 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x180127C28 (-_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::_TransferAllWindowsToNextGlomWorker(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        int a4)
{
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v16; // [rsp+80h] [rbp+30h] BYREF

  v13[1] = -2LL;
  v13[0] = 0LL;
  if ( a3 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    v8 = (**a3)(a3, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v13);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 120);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 112LL))(v9, a2, v13);
  }
  if ( v8 < 0
    || (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v13[0] + 232LL))(v13[0], &v16) < 0
    || (v16 & 1) != 0
    || (v14[0] = 0LL,
        v14[1] = a4 == 1,
        v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *))(**(_QWORD **)(a1 + 120) + 104LL))(
                *(_QWORD *)(a1 + 120),
                a2,
                v13[0],
                v14),
        v11 = v10,
        v10 >= 0) )
  {
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAEA,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  return v11;
}
