/*
 * XREFs of ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800715AC
 * Callers:
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800716CC (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x180071164 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSo.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x18009F850 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::SetBitmapResource(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *this,
        struct CBitmapSource *a2)
{
  unsigned int v3; // edx
  char *v4; // r10
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v7; // ebx
  int v8; // eax
  struct CBitmapSource *BitmapSourceNoRef; // [rsp+40h] [rbp+8h] BYREF
  struct CBitmapSource *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                        this,
                        *((_DWORD *)a2 + 6));
  if ( BitmapSourceNoRef )
    DynArray<CBitmapSource *,0>::Remove((char *)this + 8, &BitmapSourceNoRef);
  v3 = (unsigned int)v10;
  v4 = (char *)this + 8;
  v5 = *((unsigned int *)this + 8);
  v6 = v5 + 1;
  if ( (int)v5 + 1 >= (unsigned int)v5 )
    v3 = v5 + 1;
  v7 = v6 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( v6 < (unsigned int)v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
    goto LABEL_11;
  }
  if ( v3 <= *((_DWORD *)v4 + 5) )
  {
    *(_QWORD *)(*(_QWORD *)v4 + 8 * v5) = v10;
    *((_DWORD *)v4 + 6) = v3;
    goto LABEL_11;
  }
  v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8u, 1, &v10);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
LABEL_11:
    if ( v7 < 0 )
      return;
  }
  _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
}
