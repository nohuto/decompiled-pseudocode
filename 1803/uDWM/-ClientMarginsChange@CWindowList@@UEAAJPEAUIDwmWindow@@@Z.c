/*
 * XREFs of ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029320
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800159D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002D790 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003A078 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ceilf_0 @ 0x18004B336 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClientMarginsChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // r14d
  struct CWindowData *v5; // rsi
  int v6; // ebp
  struct CWindowData *v7; // rbx
  int v8; // edi
  float v9; // xmm6_4
  float v10; // xmm0_4
  int v11; // r15d
  int v12; // r12d
  int v13; // r13d
  int v14; // ecx
  char v15; // al
  CVisual *v17; // rcx
  CWindowIconic *v18; // rcx
  unsigned int i; // ebx
  CThumbnailVisual *v20; // rcx
  __int64 v21; // rax
  CThumbnailVisual *v22; // rcx
  CWindowData *v23; // rax
  CWindowData *v24; // rax
  int v25; // eax
  __int128 v26; // [rsp+30h] [rbp-48h]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v23 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v23 || (v24 = CWindowData::CWindowData(v23), (v7 = v24) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6DEu);
    goto LABEL_39;
  }
  *((_QWORD *)v24 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v24);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v25 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v25;
  if ( v25 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x6E2u);
  if ( v6 < 0 )
  {
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x9F4u);
    goto LABEL_12;
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)a2 + 120LL))(a2, (__int64)v5 + 244);
    v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 128LL))(a2);
    v9 = *((float *)v5 + 76);
    v10 = (float)*((int *)v5 + 61);
    *((_DWORD *)v5 + 69) = v8;
    LODWORD(v26) = (int)ceilf_0(v10 * v9);
    v11 = (int)ceilf_0((float)*((int *)v5 + 62) * v9);
    DWORD1(v26) = v11;
    v12 = (int)ceilf_0((float)*((int *)v5 + 63) * v9);
    DWORD2(v26) = v12;
    v13 = (int)ceilf_0((float)*((int *)v5 + 64) * v9);
    HIDWORD(v26) = v13;
    v14 = (int)ceilf_0((float)v8 * v9);
    if ( *((_DWORD *)v5 + 16) != (_DWORD)v26 )
      goto LABEL_23;
    if ( *((_DWORD *)v5 + 17) == v11 && *((_DWORD *)v5 + 18) == v12 && *((_DWORD *)v5 + 19) == v13 )
      v15 = 0;
    else
LABEL_23:
      v15 = 1;
    if ( v15 || *((_DWORD *)v5 + 24) != v14 )
    {
      *((_DWORD *)v5 + 24) = v14;
      v17 = (CVisual *)*((_QWORD *)v5 + 49);
      *((_OWORD *)v5 + 4) = v26;
      if ( v17 )
        CVisual::SetDirtyFlags(v17, 0x2000);
      v18 = (CWindowIconic *)*((_QWORD *)v5 + 54);
      if ( v18 )
        CWindowIconic::UpdateSizeOrMargins(v18, 0);
      for ( i = 0; i < *((_DWORD *)v5 + 134); ++i )
      {
        v20 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)v5 + 64) + 8LL * i) + 88LL);
        if ( v20 )
        {
          v21 = *((_QWORD *)v20 + 46);
          if ( v21 )
          {
            if ( *(_DWORD *)(v21 + 77) )
              CThumbnailVisual::SetDirtyFlags(v20, 0x4000);
          }
        }
      }
      if ( *((_DWORD *)v5 + 126) )
      {
        do
        {
          v22 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)v5 + 60) + 8LL * v4) + 88LL);
          if ( v22 )
            CThumbnailVisual::SetDirtyFlags(v22, 4096);
          ++v4;
        }
        while ( v4 < *((_DWORD *)v5 + 126) );
      }
      if ( *((_QWORD *)v5 + 51) )
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 60) + 56LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60),
          *((_QWORD *)v5 + 5));
    }
  }
LABEL_12:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v6;
}
