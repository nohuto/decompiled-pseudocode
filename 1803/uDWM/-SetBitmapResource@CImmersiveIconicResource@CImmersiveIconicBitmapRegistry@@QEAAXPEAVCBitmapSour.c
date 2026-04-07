/*
 * XREFs of ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x180077E7C
 * Callers:
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180077FA4 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x180077AA0 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSo.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x1800A85A8 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::SetBitmapResource(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *this,
        struct CBitmapSource *a2)
{
  char *v3; // r10
  __int64 v4; // rax
  unsigned int v5; // edx
  int v6; // ebx
  int v7; // eax
  struct CBitmapSource *BitmapSourceNoRef; // [rsp+40h] [rbp+8h] BYREF
  struct CBitmapSource *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                        this,
                        *((_DWORD *)a2 + 6));
  if ( BitmapSourceNoRef )
    DynArray<CBitmapSource *,0>::Remove((char *)this + 8, &BitmapSourceNoRef);
  v3 = (char *)this + 8;
  v4 = *((unsigned int *)this + 8);
  v5 = v4 + 1;
  v6 = (int)v4 + 1 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( (int)v4 + 1 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xB5u);
    goto LABEL_9;
  }
  if ( v5 <= *((_DWORD *)v3 + 5) )
  {
    *(_QWORD *)(*(_QWORD *)v3 + 8 * v4) = v9;
    *((_DWORD *)v3 + 6) = v5;
    goto LABEL_9;
  }
  v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3, 8, 1, &v9);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC0u);
LABEL_9:
    if ( v6 < 0 )
      return;
  }
  _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
}
