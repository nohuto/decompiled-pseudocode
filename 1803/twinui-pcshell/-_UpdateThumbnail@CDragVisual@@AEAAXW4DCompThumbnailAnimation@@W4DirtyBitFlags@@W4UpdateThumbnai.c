/*
 * XREFs of ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802F3BD0
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1802F1760 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z @ 0x1802F1DE0 (-SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z.c)
 *     ?SetGrowFeedback@CDragVisual@@UEAAXW4DragVisualSizeFeedback@@W4GrowFeedbackFlags@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802F1F20 (-SetGrowFeedback@CDragVisual@@UEAAXW4DragVisualSizeFeedback@@W4GrowFeedbackFlags@@PEAUIDCompBatc.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x1802F1F60 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1802F21D0 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?ShowPlaceModeEntryAnimation@CDragVisual@@UEAAXXZ @ 0x1802F2510 (-ShowPlaceModeEntryAnimation@CDragVisual@@UEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??_9IVirtualDesktopNotification@@$BBI@AA @ 0x1800A3D80 (--_9IVirtualDesktopNotification@@$BBI@AA.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802766CC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18027674C (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___ @ 0x1802EFF68 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___ @ 0x1802EFFC4 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d0.c)
 */

void __fastcall CDragVisual::_UpdateThumbnail(__int64 a1, unsigned int a2, char a3, char a4, __int64 a5)
{
  int v9; // ecx
  int v10; // ebx
  float v11; // xmm1_4
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21[2]; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-20h] BYREF

  if ( !*(_QWORD *)(a1 + 112) )
    return;
  v19 = *(_QWORD *)(a1 + 72);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v19);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v21, &v19, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  if ( (a3 & 5) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 288);
    rc = *(struct tagRECT *)(a1 + 240);
    if ( v9 )
    {
      v10 = (int)(float)((float)(*(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192)) * 0.052000001);
      if ( v9 == 3 )
      {
        v11 = FLOAT_N0_025000006;
      }
      else if ( v9 == 4 )
      {
        v11 = FLOAT_N0_050000012;
      }
      else
      {
        v11 = FLOAT_0_050000001;
      }
      InflateRect(
        &rc,
        (int)(float)((float)(*(_DWORD *)(a1 + 248) - *(_DWORD *)(a1 + 240)) * v11),
        (int)(float)((float)(*(_DWORD *)(a1 + 252) - *(_DWORD *)(a1 + 244)) * v11));
      v12 = *(_DWORD *)(a1 + 288);
      if ( v12 == 1 )
      {
        v10 = -v10;
LABEL_12:
        rc.left += v10;
        rc.right += v10;
        goto LABEL_13;
      }
      if ( v12 == 2 )
        goto LABEL_12;
    }
LABEL_13:
    v13 = *(_QWORD *)(a1 + 112);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_bbeb76a51bfb926050d075f4007d064b___lambda_ce3300e2c568934d15624d64d17a11bc___(
                v15,
                v14,
                a5,
                &v19) >= 0 )
       IVirtualDesktopNotification::`vcall'{24,{flat}}(v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
  v20 = 0LL;
  if ( (a4 & 1) != 0 )
  {
    *(_QWORD *)&rc.left = *(_QWORD *)(a1 + 112);
    v16 = *(_QWORD *)&rc.left;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&rc.left);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v19 = v16;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v19);
    if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6322593fd6617ded31d0a35e6b081f9a___(
                &v19,
                v17,
                &v20) < 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v16 + 40LL))(v16, 0LL, 0LL, 0LL);
      a3 &= ~8u;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&rc.left);
  }
  if ( (a3 & 8) != 0
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 48LL))(*(_QWORD *)(a1 + 112))
    && *(_DWORD *)(a1 + 148) != 4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 112) + 40LL))(
      *(_QWORD *)(a1 + 112),
      a1 + 240,
      a2,
      v20);
  }
  if ( (a3 & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 112) + 32LL))(
      *(_QWORD *)(a1 + 112),
      v18,
      a2,
      0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v21);
}
