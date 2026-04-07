/*
 * XREFs of ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x18009D818
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18003C3E0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x180083060 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180092210 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x18009D5C8 (-FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CPerMonitorDesktopThumbnail@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18009D218 (-Create@CPerMonitorDesktopThumbnail@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
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
  int v11; // eax
  struct CPerMonitorDesktopThumbnail *v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // eax
  int v16; // eax
  struct CPerMonitorDesktopThumbnail *v17; // rax
  unsigned int v19; // [rsp+20h] [rbp-38h]
  struct CPerMonitorDesktopThumbnail *v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v20[0] = 0LL;
  *a3 = 0LL;
  v5 = MonitorFromRect(a2, 0);
  v6 = 0;
  v7 = v5;
  if ( !v5 )
  {
    v6 = -2147024809;
    v19 = 247;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, v19);
    goto LABEL_23;
  }
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
        goto LABEL_9;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    *a3 = (struct CPerMonitorDesktopThumbnail *)v10;
  }
LABEL_9:
  if ( !*a3 )
  {
    v11 = CPerMonitorDesktopThumbnail::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), v20);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v12 = v20[0];
      *((_QWORD *)v20[0] + 3) = this;
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
      *((_QWORD *)v12 + 9) = this;
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
      *((_QWORD *)v20[0] + 8) = v7;
      v13 = *((unsigned int *)this + 76);
      v14 = (unsigned int)v20[0];
      v15 = v13 + 1;
      if ( (int)v13 + 1 >= (unsigned int)v13 )
        v14 = v13 + 1;
      v6 = v15 < (unsigned int)v13 ? 0x80070216 : 0;
      if ( v15 >= (unsigned int)v13 )
      {
        if ( v14 > *((_DWORD *)this + 75) )
        {
          v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 280, 8u, 1, v20);
          v6 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0xC0u);
        }
        else
        {
          *(struct CPerMonitorDesktopThumbnail **)(*((_QWORD *)this + 35) + 8 * v13) = v20[0];
          *((_DWORD *)this + 76) = v14;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xB5u);
      }
      if ( v6 < 0 )
      {
        v19 = 266;
        goto LABEL_3;
      }
      v17 = v20[0];
      v20[0] = 0LL;
      *a3 = v17;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x107u);
    }
  }
LABEL_23:
  if ( v20[0] )
    CBaseObject::Release(v20[0]);
  return (unsigned int)v6;
}
