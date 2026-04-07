/*
 * XREFs of ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180036060
 * Callers:
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800062D0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F490 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030490 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003461C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x18003504C (-ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180035EBC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180036060 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180083720 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180036060 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180036750 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x18003692C (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 */

void __fastcall CWindowData::ClearSnapshot(CWindowData *this, bool a2, __int64 a3, bool a4)
{
  CBaseObject *v7; // rcx
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 i; // rdi
  CWindowData *v12; // rcx

  if ( *((int *)this + 28) >= 8 && *((int *)this + 28) <= 11 || CWindowData::IsShellManaged(this) )
  {
    v8 = *((_BYTE *)this + 596);
    if ( (v8 & 1) != 0 && a4 )
    {
      v9 = 0LL;
      for ( *((_BYTE *)this + 596) = v8 | 0x10; (unsigned int)v9 < *((_DWORD *)this + 144); *(_BYTE *)(v10 + 596) |= 0x10u )
      {
        v10 = *(_QWORD *)(*((_QWORD *)this + 69) + 8 * v9);
        v9 = (unsigned int)(v9 + 1);
      }
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 53);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 53) = 0LL;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 144); i = (unsigned int)(i + 1) )
    {
      v12 = *(CWindowData **)(*((_QWORD *)this + 69) + 8 * i);
      if ( (*((_DWORD *)v12 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v12, a2, 0, a4);
    }
    if ( a2 )
      CWindowData::NotifyRepresentationChanged(this);
  }
}
