/*
 * XREFs of ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180015DE4
 * Callers:
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180015DE4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027930 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029FD0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A940 (-WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800154F4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015990 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180015DE4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180015F8C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x1800161E0 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18002FE90 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800304B8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x1800380D4 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x1800391F4 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowData::SnapshotWindow(CWindowData *this, __int64 a2, bool a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // esi
  CWindowData *v6; // rdi
  int IdealWindowRepresentationType; // eax
  struct CTopLevelWindow *v8; // rcx
  int v9; // eax
  char v10; // dl
  unsigned int v11; // edi
  CWindowData *v12; // rbp
  CWindowSnapshot *v14; // r8
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-18h]
  CWindowData *v17; // [rsp+40h] [rbp+8h]

  v3 = 0;
  v5 = 0;
  if ( (*((_BYTE *)this + 592) & 0x40) != 0 )
    return v5;
  CWindowData::ClearSnapshot(this, 0, a3, 0);
  v6 = 0LL;
  IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(this);
  if ( IdealWindowRepresentationType == 1 )
  {
    v6 = this;
  }
  else
  {
    if ( IdealWindowRepresentationType || (*((_BYTE *)this + 596) & 4) != 0 || !*((_DWORD *)this + 144) )
      goto LABEL_12;
    while ( 1 )
    {
      v17 = *(CWindowData **)(*((_QWORD *)this + 69) + 8LL * v3);
      if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v17) == 1 )
        break;
      if ( ++v3 >= *((_DWORD *)this + 144) )
        goto LABEL_12;
    }
    v6 = v17;
  }
  if ( v6 )
  {
    if ( !CWindowData::IsImmersiveWindow(v6) && CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
      v6 = 0LL;
    if ( v6 )
    {
      v8 = (struct CTopLevelWindow *)*((_QWORD *)v6 + 49);
      if ( v8 )
      {
        v9 = CWindowSnapshot::Create(v8, (struct CWindowSnapshot **)this + 53);
        v5 = v9;
        if ( v9 < 0 )
        {
          v16 = 7406;
          goto LABEL_33;
        }
        *((_BYTE *)this + 596) &= ~8u;
      }
    }
  }
LABEL_12:
  CWindowData::NotifyRepresentationChanged(this);
  v10 = *((_BYTE *)this + 596);
  if ( (v10 & 4) != 0 )
  {
    if ( !*((_QWORD *)this + 53)
      || CAccent::s_IsPolicyActive((CWindowData *)((char *)v6 + 152))
      || (*((_DWORD *)v6 + 39) & 0x400) != 0 )
    {
      *((_BYTE *)this + 596) = v10 | 8;
      return v5;
    }
    v9 = CWindowSnapshot::ProcessFreezeSnapshotAndRelease(v14, v6);
    v5 = v9;
    if ( v9 >= 0 )
      return v5;
    v16 = 7416;
LABEL_33:
    v15 = v9;
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v16);
    return v5;
  }
  v11 = 0;
  if ( *((_DWORD *)this + 144) )
  {
    while ( 1 )
    {
      v12 = *(CWindowData **)(*((_QWORD *)this + 69) + 8LL * v11);
      if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v12) == 1 )
      {
        v5 = CWindowData::SnapshotWindow(v12);
        if ( (v5 & 0x80000000) != 0 )
          break;
      }
      if ( ++v11 >= *((_DWORD *)this + 144) )
        return v5;
    }
    v16 = 7432;
    v15 = v5;
    goto LABEL_34;
  }
  return v5;
}
