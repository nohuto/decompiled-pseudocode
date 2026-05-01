/*
 * XREFs of ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x1802F1010
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0 @ 0x18000ABDC (McTemplateU0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_ @ 0x18027BA6C (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x1802F0224 (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__&___ptr64_ @ 0x1802F03E4 (Windows--Internal--ComTaskPool--QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__-___ptr64_.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0 @ 0x1802F0474 (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0.c)
 *     _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator() @ 0x1802F07DC (_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_--operator().c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x1802F3B70 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
 */

void __fastcall CDragVisual::Hide(__int64 a1, char a2, __int64 a3)
{
  CDragVisual *v5; // rbx
  __int64 v6; // rcx
  HWND v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 pvAttribute; // [rsp+70h] [rbp+20h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v19 = a3;
  if ( *(_BYTE *)(a1 + 255) )
    return;
  v5 = (CDragVisual *)(a1 - 24);
  pvAttribute = a1 - 24;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&pvAttribute);
  lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0(v16, &pvAttribute, &v19);
  if ( !*(_QWORD *)(a1 + 88) && (a2 & 2) != 0 )
    a2 = a2 & 0xF9 | 4;
  if ( (a2 & 1) != 0 )
  {
    v7 = *(HWND *)(a1 + 128);
    LODWORD(pvAttribute) = 1;
    DwmSetWindowAttribute(v7, 0xDu, &pvAttribute, 4u);
    *(_DWORD *)(a1 + 124) = -1;
    *(_BYTE *)(a1 + 254) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 80));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 88));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
  }
  else
  {
    if ( (a2 & 2) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 80);
      *(_BYTE *)(a1 + 255) = 1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 160LL))(v8);
      v9 = *(_QWORD *)(a1 + 88);
      v10 = lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_(&v17, v16);
      v13 = DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithCallback__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___(
              v9,
              v11,
              v12,
              v10);
    }
    else
    {
      if ( (a2 & 4) == 0 )
      {
        if ( IsWindowVisible(*(HWND *)(a1 + 128)) )
        {
          CDragVisual::_TrackMouseLeave(v5, 0);
          ShowWindow(*(HWND *)(a1 + 128), 0);
          v15 = *(_QWORD *)(a1 + 72);
          if ( v15 )
          {
            LOBYTE(v14) = 1;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 56LL))(v15, v14);
          }
          if ( *(_BYTE *)(a1 + 248) && (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
            McTemplateU0(v15, (__int64)&DragVisual_Hide_Info);
        }
        goto LABEL_19;
      }
      v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e______ptr64_(v6, v16);
    }
    if ( v13 < 0 )
      lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::operator()(v16);
  }
LABEL_19:
  if ( v16[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
  if ( v5 )
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)v5 + 16LL))(v5);
}
