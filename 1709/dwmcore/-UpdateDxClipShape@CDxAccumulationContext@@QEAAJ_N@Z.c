/*
 * XREFs of ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x18018B8C4
 * Callers:
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x180096874 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x18009C838 (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x180179058 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180179234 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 *     ?ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE@@@Z @ 0x180179504 (-ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVIS.c)
 * Callees:
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180034E90 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?IsEmpty@CShape@@UEBA_NXZ @ 0x1800481B0 (-IsEmpty@CShape@@UEBA_NXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180089E8C (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?GetWindowDirtyIndex@CDxAccumulationContext@@AEAAIXZ @ 0x18018B800 (-GetWindowDirtyIndex@CDxAccumulationContext@@AEAAIXZ.c)
 *     ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x1801CBC04 (-Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDxAccumulationContext::UpdateDxClipShape(const struct CWindowNode **this, char a2)
{
  const struct CWindowNode *v2; // rax
  DWORD v3; // ebx
  struct _RGNDATA *v4; // r14
  CRegionShape *v5; // rsi
  unsigned int WindowDirtyIndex; // eax
  unsigned int *v8; // r8
  signed int LastError; // eax
  signed int v10; // eax
  signed int v11; // eax
  CRegionShape *v12; // rcx
  CShape *v13; // rcx
  const struct CWindowNode *v14; // rcx
  HRGN hrgn; // [rsp+60h] [rbp+30h] BYREF
  struct CRegionShape *v17; // [rsp+70h] [rbp+40h] BYREF
  struct _RGNDATA *v18; // [rsp+78h] [rbp+48h] BYREF

  v2 = *this;
  v3 = 0;
  hrgn = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  if ( !*((_QWORD *)v2 + 74) )
    return v3;
  if ( a2 )
    WindowDirtyIndex = CDxAccumulationContext::GetWindowDirtyIndex(this) + 32;
  else
    WindowDirtyIndex = CDxAccumulationContext::GetWindowDirtyIndex(this);
  if ( (unsigned int)DwmGetDxRgn(*((_QWORD *)*this + 74), WindowDirtyIndex, &hrgn) )
  {
    if ( !hrgn )
      return v3;
    SetLastError(0);
    if ( !OffsetRgn(
            hrgn,
            *((_DWORD *)*this + 158) - *((_DWORD *)*this + 170),
            *((_DWORD *)*this + 159) - *((_DWORD *)*this + 171)) )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( (v3 & 0x80000000) == 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x73u);
      goto LABEL_25;
    }
    v10 = HrgnToRgnData(hrgn, &v18, v8);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x78u);
      v4 = v18;
LABEL_25:
      if ( hrgn )
        DeleteObject(hrgn);
      goto LABEL_27;
    }
    v4 = v18;
    v11 = CRegionShape::Create(v18, &v17);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x7Du);
      v5 = v17;
      goto LABEL_25;
    }
    v5 = v17;
  }
  if ( hrgn )
  {
    v12 = this[1];
    if ( v5 != v12 )
    {
      if ( v12 )
        CRegionShape::`vector deleting destructor'(v12, 1);
      this[1] = v5;
      v5 = 0LL;
      v13 = this[1];
      if ( !v13 || CShape::IsEmpty(v13) )
        *((_BYTE *)this + 16) = 0;
      v14 = *this;
      *((_BYTE *)v14 + 1008) = 0;
      CVisual::PropagateFlags((__int64)v14, 5u, 0);
    }
    goto LABEL_25;
  }
LABEL_27:
  if ( v5 )
    CRegionShape::`vector deleting destructor'(v5, 1);
  if ( v4 )
    WPF::ProcessHeapImpl::Free(v4);
  return v3;
}
