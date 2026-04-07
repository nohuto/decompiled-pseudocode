/*
 * XREFs of ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180015F8C
 * Callers:
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180002700 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180015DE4 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180015F8C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800277B0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028CE0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029FD0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002D200 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x18003E7C0 (-ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800154F4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180015940 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180015F8C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 */

void __fastcall CWindowData::ClearSnapshot(CWindowData *this, bool a2, __int64 a3, bool a4)
{
  unsigned int v4; // edi
  CBaseObject *v8; // rcx
  unsigned int i; // r8d
  __int64 v10; // rcx
  CWindowData *v11; // rcx

  v4 = 0;
  if ( (*((int *)this + 28) >= 8 && *((int *)this + 28) <= 11 || CWindowData::IsShellManaged(this))
    && *((char *)this + 595) < 0
    && a4 )
  {
    *((_BYTE *)this + 596) |= 8u;
    for ( i = 0; i < *((_DWORD *)this + 144); *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 69) + 8 * v10) + 596LL) |= 8u )
      v10 = i++;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 53);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 53) = 0LL;
    if ( *((_DWORD *)this + 144) )
    {
      do
      {
        v11 = *(CWindowData **)(*((_QWORD *)this + 69) + 8LL * v4);
        if ( (*((_DWORD *)v11 + 25) & 0x20000000) == 0 )
          CWindowData::ClearSnapshot(v11, a2, 0, a4);
        ++v4;
      }
      while ( v4 < *((_DWORD *)this + 144) );
    }
    if ( a2 )
      CWindowData::NotifyRepresentationChanged(this);
  }
}
