/*
 * XREFs of ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18004C1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18000B1F0 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18000B264 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1800203A8 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x18004C8A8 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CBitmapLock@@SAPEAX_K@Z @ 0x180086B3C (--2CBitmapLock@@SAPEAX_K@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180088768 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1801360E0 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 */

__int64 __fastcall CD2DBitmap::LockForRead(__int64 a1, int *a2, _QWORD *a3)
{
  int v3; // eax
  CBitmapLock *v4; // rdi
  __int64 v8; // rdx
  int v9; // ecx
  struct IBitmapUnlock *v10; // rbx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v12; // esi
  __int64 v13; // r12
  unsigned __int64 v14; // rcx
  CBitmapLock *v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  int v19; // r9d
  __int64 v20; // rdi
  int v21; // eax
  int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-39h]
  struct IBitmapDest *v24; // [rsp+60h] [rbp+7h] BYREF
  struct IUnknown *v25; // [rsp+68h] [rbp+Fh] BYREF
  struct IUnknown *v26; // [rsp+70h] [rbp+17h] BYREF
  unsigned __int8 *v27; // [rsp+78h] [rbp+1Fh] BYREF
  int v28; // [rsp+80h] [rbp+27h] BYREF
  int v29; // [rsp+84h] [rbp+2Bh]
  BOOL v30; // [rsp+88h] [rbp+2Fh]
  int v31; // [rsp+8Ch] [rbp+33h]
  unsigned int v32; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v33; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = *(_DWORD *)(a1 + 56);
  v4 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v28 = 0;
  v29 = 0;
  v30 = v3;
  v31 = *(_DWORD *)(a1 + 60);
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(&v28)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v8) )
  {
    v17 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x15Au);
LABEL_23:
    if ( v4 )
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v4 + 16LL))(v4);
    goto LABEL_25;
  }
  v9 = *(_DWORD *)(a1 + 72);
  v29 = *(_DWORD *)(a1 + 108);
  v28 = v9;
  v30 = v9 == 10;
  if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)(a1 - 112), &v27, &v32, &v33, &v25) )
  {
    v10 = (struct IBitmapUnlock *)((a1 + 8) & -(__int64)(a1 != 112));
    PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 72));
    v12 = v32;
    v13 = a2[1] * v32 + *a2 * (PixelFormatSize >> 3);
    v15 = (CBitmapLock *)CBitmapLock::operator new(v14);
    if ( v15 )
      v4 = CBitmapLock::CBitmapLock(v15);
    if ( v4 )
    {
      (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v4 + 8LL))(v4);
      v16 = CBitmapLock::HrInit(
              v4,
              v10,
              a2[2] - *a2,
              a2[3] - a2[1],
              (const struct PixelFormatInfo *)&v28,
              v12,
              v33 - (unsigned int)v13,
              &v27[v13],
              WICBitmapLockRead,
              0,
              v25);
      v17 = v16;
      if ( v16 >= 0 )
      {
        *a3 = (char *)v4 + 16;
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x180u);
      goto LABEL_23;
    }
    v17 = -2147024882;
    v23 = 372;
    v19 = -2147024882;
    goto LABEL_13;
  }
  v20 = *(_QWORD *)(*(_QWORD *)(a1 - 88) + 24LL);
  v21 = HrCreateDestBitmap(a2[2] - *a2, a2[3] - a2[1], (const struct PixelFormatInfo *)&v28, &v24);
  v17 = v21;
  if ( v21 < 0 )
  {
    v23 = 404;
    goto LABEL_11;
  }
  v21 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))(a1 + 24))(
          *(_QWORD *)(a1 + 24),
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          &v26);
  v17 = v21;
  if ( v21 < 0 )
  {
    v23 = 407;
    goto LABEL_11;
  }
  v22 = CD3DDeviceLevel1::CopyTexture(v20, v26, *(unsigned int *)(a1 + 144), a2, (__int64)v24);
  v17 = v22;
  if ( v22 < 0 )
  {
    v23 = 415;
    v19 = v22;
    goto LABEL_13;
  }
  v21 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, _QWORD *))(*(_QWORD *)v24 + 24LL))(
          v24,
          0LL,
          1LL,
          a3);
  v17 = v21;
  if ( v21 < 0 )
  {
    v23 = 422;
LABEL_11:
    v19 = v21;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v23);
  }
LABEL_25:
  if ( v25 )
    ((void (__fastcall *)(struct IUnknown *))v25->lpVtbl->Release)(v25);
LABEL_9:
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v26);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v24);
  return v17;
}
