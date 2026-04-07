/*
 * XREFs of ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x180077CE0
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800785F0 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z @ 0x1800789D8 (-OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18006C8BC (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x180078124 (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
        CImmersiveIconicBitmapRegistry *this,
        struct CImmersiveWindowIconic *a2,
        int a3,
        enum DEVICE_SCALE_FACTOR a4,
        bool a5,
        enum IconicRepresentationType *a6,
        enum IconicRepresentationType *a7)
{
  __int64 v7; // rsi
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v11; // rdx
  __int64 v12; // rax
  int v13; // ebx
  int v14; // r9d
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  int v18; // eax
  enum DEVICE_SCALE_FACTOR v20; // [rsp+20h] [rbp-38h]
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+68h] [rbp+10h] BYREF

  v7 = *((_QWORD *)a2 + 35);
  IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(this, *(HWND *)(v7 + 40));
  v11 = IconicResourceNoRef;
  if ( IconicResourceNoRef )
    goto LABEL_16;
  v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          48LL);
  if ( v12 )
  {
    *(_QWORD *)v12 = *(_QWORD *)(v7 + 40);
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_DWORD *)(v12 + 24) = 0;
    *(_DWORD *)(v12 + 28) = 0;
    *(_DWORD *)(v12 + 32) = 0;
    *(_BYTE *)(v12 + 40) = 0;
    *(_DWORD *)(v12 + 44) = 1;
  }
  IconicResourceNoRef = (struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v12;
  if ( !v12 )
  {
    v13 = -2147024882;
    v20 = 92;
LABEL_6:
    v14 = v13;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, v20);
    return (unsigned int)v13;
  }
  v15 = *((_DWORD *)this + 10);
  v16 = v15 + 1;
  v13 = v15 + 1 < v15 ? 0x80070216 : 0;
  if ( v15 + 1 >= v15 )
  {
    if ( v16 > *((_DWORD *)this + 9) )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 16, 8, 1, &IconicResourceNoRef);
      v13 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * *((unsigned int *)this + 10)) = IconicResourceNoRef;
      *((_DWORD *)this + 10) = v16;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xB5u);
  }
  if ( v13 < 0 )
  {
    v20 = 93;
    goto LABEL_6;
  }
  v11 = IconicResourceNoRef;
  if ( IconicResourceNoRef )
  {
LABEL_16:
    v18 = CImmersiveIconicBitmapRegistry::_RegisterIconicRepresentation(
            this,
            v11,
            *(HWND *)(v7 + 40),
            a3,
            a4,
            a5,
            a6,
            a7);
    v13 = v18;
    if ( v18 < 0 )
    {
      v20 = 98;
      v14 = v18;
      goto LABEL_18;
    }
  }
  return (unsigned int)v13;
}
