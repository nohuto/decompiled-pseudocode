/*
 * XREFs of ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030A10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180034C00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180035A54 (--0CWindowData@@QEAA@XZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180038390 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003D6A8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ceilf_0 @ 0x18004DE66 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
  int v16; // eax
  CVisual *v18; // rcx
  CWindowIconic *v19; // rcx
  unsigned int i; // ebx
  CWindowData *v21; // rax
  CWindowData *v22; // rax
  int v23; // eax
  CThumbnailVisual *v24; // rcx
  __int64 v25; // rax
  CThumbnailVisual *v26; // rcx
  __int128 v27; // [rsp+30h] [rbp-58h]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v21 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v21 || (v22 = CWindowData::CWindowData(v21), (v7 = v22) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x57Cu);
    goto LABEL_25;
  }
  *((_QWORD *)v22 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v22);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v23 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v23;
  if ( v23 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x580u);
  if ( v6 < 0 )
  {
LABEL_25:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x8BFu);
    goto LABEL_10;
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)a2 + 120LL))(a2, (__int64)v5 + 252);
    v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 128LL))(a2);
    v9 = *((float *)v5 + 43);
    v10 = (float)*((int *)v5 + 63);
    *((_DWORD *)v5 + 71) = v8;
    LODWORD(v27) = (int)ceilf_0(v10 * v9);
    v11 = ceilf_0((float)*((int *)v5 + 64) * v9);
    v12 = *((float *)v5 + 44);
    v13 = (int)v11;
    DWORD1(v27) = (int)v11;
    v14 = (int)ceilf_0((float)*((int *)v5 + 65) * v12);
    DWORD2(v27) = v14;
    v15 = (int)ceilf_0((float)*((int *)v5 + 66) * v12);
    HIDWORD(v27) = v15;
    v16 = (int)ceilf_0((float)v8 * v9);
    if ( *((_DWORD *)v5 + 16) != (_DWORD)v27
      || *((_DWORD *)v5 + 17) != v13
      || *((_DWORD *)v5 + 18) != v14
      || *((_DWORD *)v5 + 19) != v15
      || *((_DWORD *)v5 + 24) != v16 )
    {
      v18 = (CVisual *)*((_QWORD *)v5 + 50);
      *((_DWORD *)v5 + 24) = v16;
      *((_OWORD *)v5 + 4) = v27;
      if ( v18 )
        CVisual::SetDirtyFlags(v18, 0x2000);
      v19 = (CWindowIconic *)*((_QWORD *)v5 + 54);
      if ( v19 )
        CWindowIconic::UpdateSizeOrMargins(v19, 0);
      for ( i = 0; i < *((_DWORD *)v5 + 134); ++i )
      {
        v24 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)v5 + 64) + 8LL * i) + 88LL);
        if ( v24 )
        {
          v25 = *((_QWORD *)v24 + 46);
          if ( v25 )
          {
            if ( *(_DWORD *)(v25 + 77) )
              CThumbnailVisual::SetDirtyFlags(v24, 0x4000u);
          }
        }
      }
      if ( *((_DWORD *)v5 + 126) )
      {
        do
        {
          v26 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)v5 + 60) + 8LL * v4) + 88LL);
          if ( v26 )
            CThumbnailVisual::SetDirtyFlags(v26, 0x1000u);
          ++v4;
        }
        while ( v4 < *((_DWORD *)v5 + 126) );
      }
    }
  }
LABEL_10:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v6;
}
