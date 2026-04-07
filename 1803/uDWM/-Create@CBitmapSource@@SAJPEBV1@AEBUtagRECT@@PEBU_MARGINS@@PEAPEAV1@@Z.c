/*
 * XREFs of ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180041178
 * Callers:
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18004052C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x180040F18 (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(
        const struct CBitmapSource *a1,
        const struct tagRECT *a2,
        const struct _MARGINS *a3,
        struct CBitmapSource **a4)
{
  unsigned int v8; // ebx
  void *(__fastcall *v9)(WPF::ProcessHeapImpl *, size_t); // rax
  _DWORD *v10; // rax
  _DWORD *v11; // r8
  __int64 v12; // rax
  int v13; // eax
  int v14; // ecx

  v8 = 0;
  v9 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v9 == WPF::ProcessHeapImpl::AllocClear )
    v10 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL);
  else
    v10 = (_DWORD *)v9(WPF::g_pProcessHeap, 104LL);
  v11 = v10;
  if ( v10 )
  {
    v10[2] = 1;
    *(_QWORD *)v10 = &CBitmapSource::`vftable';
    v10[20] = 0x80000000;
    v10[22] = 0x80000000;
    v10[21] = 0x80000000;
    v10[23] = 0x80000000;
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 12) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    *((_QWORD *)v11 + 2) = *((_QWORD *)a1 + 2);
    v12 = *((_QWORD *)a1 + 2);
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v13 = 0;
    *((struct tagRECT *)v11 + 5) = *a2;
    if ( v11[22] - v11[20] >= 0 )
      v13 = v11[22] - v11[20];
    v14 = 0;
    v11[6] = v13;
    if ( v11[23] - v11[21] >= 0 )
      v14 = v11[23] - v11[21];
    v11[7] = v14;
    if ( a3 )
      *((struct _MARGINS *)v11 + 2) = *a3;
    *a4 = (struct CBitmapSource *)v11;
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB1u);
  }
  return v8;
}
