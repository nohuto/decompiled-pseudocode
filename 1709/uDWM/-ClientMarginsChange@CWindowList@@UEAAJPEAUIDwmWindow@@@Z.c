/*
 * XREFs of ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029900
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18000F570 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180010BB0 (--0CWindowData@@QEAA@XZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800272C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180037414 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ceilf_0 @ 0x180046736 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClientMarginsChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // r14d
  struct CWindowData *v5; // rsi
  int v6; // ebp
  struct CWindowData *v7; // rbx
  int v8; // edi
  float v9; // xmm7_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm6_4
  int v13; // r15d
  int v14; // r12d
  int v15; // r13d
  int v16; // ecx
  char v17; // al
  CVisual *v19; // rcx
  CWindowIconic *v20; // rcx
  unsigned int i; // ebx
  CWindowData *v22; // rax
  CWindowData *v23; // rax
  int v24; // eax
  CThumbnailVisual *v25; // rcx
  __int64 v26; // rax
  CThumbnailVisual *v27; // rcx
  __int128 v28; // [rsp+30h] [rbp-58h]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v22 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v22 || (v23 = CWindowData::CWindowData(v22), (v7 = v23) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5BAu);
    goto LABEL_28;
  }
  *((_QWORD *)v23 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v23);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v24 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v24;
  if ( v24 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x5BEu);
  if ( v6 < 0 )
  {
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x8F8u);
    goto LABEL_12;
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)a2 + 120LL))(a2, (__int64)v5 + 252);
    v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 128LL))(a2);
    v9 = *((float *)v5 + 43);
    v10 = (float)*((int *)v5 + 63);
    *((_DWORD *)v5 + 71) = v8;
    LODWORD(v28) = (int)ceilf_0(v10 * v9);
    v11 = ceilf_0((float)*((int *)v5 + 64) * v9);
    v12 = *((float *)v5 + 44);
    v13 = (int)v11;
    DWORD1(v28) = (int)v11;
    v14 = (int)ceilf_0((float)*((int *)v5 + 65) * v12);
    DWORD2(v28) = v14;
    v15 = (int)ceilf_0((float)*((int *)v5 + 66) * v12);
    HIDWORD(v28) = v15;
    v16 = (int)ceilf_0((float)v8 * v9);
    if ( *((_DWORD *)v5 + 16) != (_DWORD)v28 )
      goto LABEL_22;
    if ( *((_DWORD *)v5 + 17) == v13 && *((_DWORD *)v5 + 18) == v14 && *((_DWORD *)v5 + 19) == v15 )
      v17 = 0;
    else
LABEL_22:
      v17 = 1;
    if ( v17 || *((_DWORD *)v5 + 24) != v16 )
    {
      *((_DWORD *)v5 + 24) = v16;
      v19 = (CVisual *)*((_QWORD *)v5 + 50);
      *((_OWORD *)v5 + 4) = v28;
      if ( v19 )
        CVisual::SetDirtyFlags(v19, 0x2000);
      v20 = (CWindowIconic *)*((_QWORD *)v5 + 54);
      if ( v20 )
        CWindowIconic::UpdateSizeOrMargins(v20, 0);
      for ( i = 0; i < *((_DWORD *)v5 + 134); ++i )
      {
        v25 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)v5 + 64) + 8LL * i) + 88LL);
        if ( v25 )
        {
          v26 = *((_QWORD *)v25 + 46);
          if ( v26 )
          {
            if ( *(_DWORD *)(v26 + 77) )
              CThumbnailVisual::SetDirtyFlags(v25, 0x4000);
          }
        }
      }
      if ( *((_DWORD *)v5 + 126) )
      {
        do
        {
          v27 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)v5 + 60) + 8LL * v4) + 88LL);
          if ( v27 )
            CThumbnailVisual::SetDirtyFlags(v27, 4096);
          ++v4;
        }
        while ( v4 < *((_DWORD *)v5 + 126) );
      }
    }
  }
LABEL_12:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v6;
}
