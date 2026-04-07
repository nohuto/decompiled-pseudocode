/*
 * XREFs of ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x18009B8B0
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18000CBC0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18007AB50 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E32C (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x18009B660 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopThumbnail::GetPerMonitorDesktopThumbnail(
        CDesktopThumbnail *this,
        struct tagRECT *a2,
        struct CPerMonitorDesktopThumbnail **a3)
{
  HMONITOR v5; // rax
  int v6; // ebx
  HMONITOR v7; // rbp
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // eax
  int v16; // eax
  struct CPerMonitorDesktopThumbnail *v17; // rcx
  CBaseObject *v19; // [rsp+30h] [rbp-28h] BYREF

  v19 = 0LL;
  *a3 = 0LL;
  v5 = MonitorFromRect(a2, 0);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    v8 = *((_DWORD *)this + 76);
    v9 = 0LL;
    if ( v8 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(*((_QWORD *)this + 35) + 8 * v9);
        if ( *(HMONITOR *)(v10 + 64) == v5 )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= v8 )
          goto LABEL_8;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      *a3 = (struct CPerMonitorDesktopThumbnail *)v10;
    }
LABEL_8:
    if ( !*a3 )
    {
      v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              80LL);
      if ( v12 )
      {
        *(_QWORD *)(v12 + 32) = 0LL;
        *(_QWORD *)(v12 + 64) = 0LL;
        *(_QWORD *)v12 = &CPerMonitorDesktopThumbnail::`vftable';
        *(_DWORD *)(v12 + 8) = 1;
        *(_QWORD *)(v12 + 16) = v11;
        v19 = (CBaseObject *)v12;
        *(_QWORD *)(v12 + 24) = this;
        _InterlockedIncrement((volatile signed __int32 *)this + 2);
        *(_QWORD *)(v12 + 72) = this;
        _InterlockedIncrement((volatile signed __int32 *)this + 2);
        *((_QWORD *)v19 + 8) = v7;
        v13 = *((unsigned int *)this + 76);
        v14 = (unsigned int)v19;
        v15 = v13 + 1;
        if ( (int)v13 + 1 >= (unsigned int)v13 )
          v14 = v13 + 1;
        v6 = v15 < (unsigned int)v13 ? 0x80070216 : 0;
        if ( v15 >= (unsigned int)v13 )
        {
          if ( v14 > *((_DWORD *)this + 75) )
          {
            v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 280, 8u, 1, &v19);
            v6 = v16;
            if ( v16 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 35) + 8 * v13) = v19;
            *((_DWORD *)this + 76) = v14;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
        }
        if ( v6 >= 0 )
        {
          v17 = v19;
          v19 = 0LL;
          *a3 = v17;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x10Au);
        }
      }
      else
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x73u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x107u);
      }
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xF7u);
  }
  if ( v19 )
    CBaseObject::Release(v19);
  return (unsigned int)v6;
}
