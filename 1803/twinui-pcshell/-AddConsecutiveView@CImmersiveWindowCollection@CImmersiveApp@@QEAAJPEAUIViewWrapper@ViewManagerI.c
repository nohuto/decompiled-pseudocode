/*
 * XREFs of ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18012CEA8
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x1800F1D88 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x1800F9254 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     WPP_SF_qd @ 0x180112400 (WPP_SF_qd.c)
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x1801342B8 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddConsecutiveView(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // r9d
  int v10; // edx
  __int128 v11; // xmm2
  __int128 v12; // xmm1
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  int inserted; // esi
  __int64 v17; // rax
  struct ITaskWindow *v19; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, struct ITaskWindow **); // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *v22; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v23[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-98h]
  _OWORD *v25; // [rsp+78h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-88h]
  _OWORD v27[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-60h]
  _QWORD v29[2]; // [rsp+B8h] [rbp-50h] BYREF
  int v30; // [rsp+C8h] [rbp-40h]
  int v31; // [rsp+CCh] [rbp-3Ch]
  __int128 v32; // [rsp+D0h] [rbp-38h]
  __int128 v33; // [rsp+E0h] [rbp-28h]
  __int128 v34; // [rsp+F0h] [rbp-18h]
  int v35; // [rsp+100h] [rbp-8h]
  __int64 v36; // [rsp+108h] [rbp+0h]
  int v37; // [rsp+110h] [rbp+8h]
  int v38; // [rsp+114h] [rbp+Ch]

  v26 = -2LL;
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8LL * *(_QWORD *)(a1 + 160) - 8);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v21);
  v8 = 0;
  v9 = 4;
  if ( (unsigned int)(a3 - 1) > 2 )
    v9 = 0;
  if ( (*(_BYTE *)(a1 + 196) & 2) != 0
    || *(_DWORD *)(a1 + 16) > *(_DWORD *)(a1 + 24)
    || (v10 = 0, *(_DWORD *)(a1 + 20) > *(_DWORD *)(a1 + 28)) )
  {
    v10 = 8;
  }
  v11 = *(_OWORD *)(a1 + 68);
  v27[0] = v11;
  v12 = *(_OWORD *)(a1 + 84);
  v27[1] = v12;
  v28 = *(_QWORD *)(a1 + 100);
  v19 = 0LL;
  v13 = *(_QWORD *)(a1 + 144);
  if ( a4 )
  {
    LODWORD(v23[0]) = v9 | (v10 == 0);
    v23[1] = a1 + 16;
    v14 = v13 + 112;
    v15 = -v13;
    v23[2] = v14 & -(__int64)(v15 != 0);
    LODWORD(v24) = v10;
    v25 = v27;
    inserted = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a4 + 200LL))(a4, v23, v15);
    if ( inserted < 0 )
      goto LABEL_20;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v19, a4);
  }
  else
  {
    v29[0] = 0LL;
    v29[1] = a2;
    v30 = 1;
    v31 = 1;
    v32 = *(_OWORD *)(a1 + 16);
    v33 = v11;
    v34 = v12;
    v35 = v28;
    v36 = (v13 + 112) & -(__int64)(v13 != 0);
    v37 = 0;
    v38 = v10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    v22 = v29;
    v19 = 0LL;
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    inserted = Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
                 &v20,
                 &v22);
    if ( inserted >= 0 )
      inserted = (**v20)(v20, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  }
  if ( inserted >= 0 )
  {
    inserted = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(
                 (CImmersiveApp::CImmersiveWindowCollection *)a1,
                 v19,
                 *(_QWORD *)(a1 + 160));
    if ( inserted >= 0 && ((a3 - 1) & 0xFFFFFFFD) == 0 )
    {
      if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
      {
        LOBYTE(v8) = a3 != 1;
        (*(void (__fastcall **)(struct ITaskWindow *, _QWORD))(*(_QWORD *)v19 + 160LL))(v19, v8);
        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v17 = (*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v19 + 32LL))(v19);
          WPP_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x12u,
            &WPP_ace03dded3743996b6b4d2e4c589bf4a_Traceguids,
            v17,
            v8);
        }
      }
    }
  }
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return (unsigned int)inserted;
}
