/*
 * XREFs of ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800D0830
 * Callers:
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x18004FD28 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x180053B1C (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800D0650 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 *     ?ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE@@@Z @ 0x18012A9E8 (-ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVIS.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x18012AB4C (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18006F290 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?IsEmpty@CShape@@UEBA_NXZ @ 0x180072960 (-IsEmpty@CShape@@UEBA_NXZ.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180073A20 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?GetWindowDirtyIndex@CDxAccumulationContext@@AEAAIXZ @ 0x1800CB730 (-GetWindowDirtyIndex@CDxAccumulationContext@@AEAAIXZ.c)
 *     ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x1801B0814 (-Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDxAccumulationContext::UpdateDxClipShape(const struct CWindowNode **this, char a2)
{
  const struct CWindowNode *v2; // rax
  unsigned int v3; // ebx
  struct _RGNDATA *v4; // r14
  CRegionShape *v5; // rsi
  unsigned int WindowDirtyIndex; // eax
  int v9; // eax
  int v10; // eax
  CRegionShape *v11; // rcx
  CShape *v12; // rcx
  const struct CWindowNode *v13; // rcx
  unsigned int *v14; // r8
  signed int LastError; // eax
  HGDIOBJ ho; // [rsp+70h] [rbp+30h] BYREF
  struct CRegionShape *v17; // [rsp+80h] [rbp+40h] BYREF
  struct _RGNDATA *v18; // [rsp+88h] [rbp+48h] BYREF

  v2 = *this;
  v3 = 0;
  ho = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  if ( !*((_QWORD *)v2 + 72) )
    return v3;
  if ( a2 )
    WindowDirtyIndex = CDxAccumulationContext::GetWindowDirtyIndex(this) + 32;
  else
    WindowDirtyIndex = CDxAccumulationContext::GetWindowDirtyIndex(this);
  if ( (unsigned int)DwmGetDxRgn(*((_QWORD *)*this + 72), WindowDirtyIndex, &ho) )
  {
    if ( !ho )
      return v3;
    SetLastError(0);
    if ( !OffsetRgn(
            (HRGN)ho,
            *((_DWORD *)*this + 151) - *((_DWORD *)*this + 163),
            *((_DWORD *)*this + 152) - *((_DWORD *)*this + 164)) )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( (v3 & 0x80000000) == 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x73u);
      goto LABEL_18;
    }
    v9 = HrgnToRgnData((HRGN)ho, &v18, v14);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x78u);
      v4 = v18;
    }
    else
    {
      v4 = v18;
      v10 = CRegionShape::Create(v18, &v17);
      v3 = v10;
      if ( v10 >= 0 )
      {
        v5 = v17;
        goto LABEL_11;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x7Du);
      v5 = v17;
    }
LABEL_18:
    if ( ho )
      DeleteObject(ho);
    goto LABEL_20;
  }
LABEL_11:
  if ( ho )
  {
    v11 = this[1];
    if ( v5 != v11 )
    {
      if ( v11 )
        CRegionShape::`vector deleting destructor'(v11, 1);
      this[1] = v5;
      v5 = 0LL;
      v12 = this[1];
      if ( !v12 || CShape::IsEmpty(v12) )
        *((_BYTE *)this + 16) = 0;
      v13 = *this;
      *((_BYTE *)v13 + 984) = 0;
      CVisual::PropagateFlags(v13, 1, 1, 0, 0, 0, 0, 0);
    }
    goto LABEL_18;
  }
LABEL_20:
  if ( v5 )
    CRegionShape::`vector deleting destructor'(v5, 1);
  if ( v4 )
    WPF::ProcessHeapImpl::Free(v4);
  return v3;
}
