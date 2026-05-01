/*
 * XREFs of ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x1802F1F60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0 @ 0x18000ABDC (McTemplateU0.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802766CC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18027674C (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802F3BD0 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1802F3EB8 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 */

void __fastcall CDragVisual::SetMode(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int128 v10; // xmm0
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12[2]; // [rsp+38h] [rbp-40h] BYREF
  GUID v13; // [rsp+48h] [rbp-30h] BYREF

  v3 = *(unsigned int *)(a1 + 124);
  if ( a2 != (_DWORD)v3 )
  {
    v5 = 4;
    if ( (_DWORD)v3 != 6 )
      v5 = 0;
    v13 = GUID_NULL;
    if ( (_DWORD)v3 == 4
      && (v6 = *(_QWORD *)(a1 + 88)) != 0
      && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6) )
    {
      v5 |= 8u;
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 88);
      if ( v7 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v7 + 40LL))(v7, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(a1 + 124) == 1 || *(_DWORD *)(a1 + 124) == 4 )
    {
      *(_DWORD *)(a1 + 308) = MulDiv(
                                *(_DWORD *)(a1 + 152) - *(_DWORD *)(a1 + 200),
                                100,
                                *(_DWORD *)(a1 + 208) - *(_DWORD *)(a1 + 200));
      v13 = (GUID)xmmword_1803B4CB0;
    }
    v8 = *(unsigned int *)(a1 + 124);
    if ( !a2 )
    {
      *(_BYTE *)(a1 + 254) = 0;
      if ( (unsigned int)(v8 - 5) <= 1 )
      {
        *(_DWORD *)(a1 + 308) = MulDiv(
                                  *(_DWORD *)(a1 + 152) - *(_DWORD *)(a1 + 216),
                                  100,
                                  *(_DWORD *)(a1 + 224) - *(_DWORD *)(a1 + 216));
      }
      else if ( (_DWORD)v8 == 2 )
      {
        v5 |= 2u;
      }
      if ( (unsigned __int8)CDragVisual::_UpdateThumbnailRect(a1 - 24, 0LL) )
        v5 |= 1u;
      goto LABEL_34;
    }
    if ( a2 == 6 )
    {
      v9 = v5 | 2;
      if ( (_DWORD)v8 != 2 )
        v9 = v5;
      v5 = v9;
      goto LABEL_34;
    }
    if ( (v8 & 0xFFFFFFF9) == 0 && (_DWORD)v8 != 2 && a2 - 2 <= 1 )
    {
      if ( (unsigned __int8)CDragVisual::_UpdateThumbnailRect(a1 - 24, a2) )
        v5 |= 1u;
      if ( a2 == 2 )
      {
        v10 = xmmword_1803B4CC0;
        v5 |= 2u;
LABEL_33:
        v13 = (GUID)v10;
        goto LABEL_34;
      }
      if ( a2 == 3 )
      {
        v10 = xmmword_1803B4CA0;
        goto LABEL_33;
      }
    }
LABEL_34:
    *(_DWORD *)(a1 + 124) = a2;
    if ( v5 )
    {
      v11 = *(_QWORD *)(a1 + 48);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v11);
      DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v12, &v11, (__int64)&v13, 0LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      CDragVisual::_UpdateThumbnail(a1 - 24, 1LL, v5);
      DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v12);
    }
    if ( *(_BYTE *)(a1 + 248) )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0(v8, (__int64)&DragVisual_ModeChange_Info);
    }
    return;
  }
  if ( *(_BYTE *)(a1 + 253) && (unsigned __int8)CDragVisual::_UpdateThumbnailRect(a1 - 24, v3) )
    CDragVisual::_UpdateThumbnail(a1 - 24, 4 - (unsigned int)(*(_DWORD *)(a1 + 124) != 6), 1LL);
}
