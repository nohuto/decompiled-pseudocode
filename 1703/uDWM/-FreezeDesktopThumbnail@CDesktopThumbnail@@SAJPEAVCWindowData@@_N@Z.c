/*
 * XREFs of ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x18009D5C8
 * Callers:
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800062D0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x18009D6C0 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x18009D7A8 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x18009D818 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18009DF38 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnail::FreezeDesktopThumbnail(struct CWindowData *a1, bool a2)
{
  int DesktopThumbnail; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  CDesktopThumbnail *v7; // rdi
  CDesktopThumbnailBase *v8; // rcx
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  CBaseObject *v11; // rdi
  int v12; // eax
  struct tagRECT v14; // [rsp+30h] [rbp-18h] BYREF
  CDesktopThumbnail *v15; // [rsp+60h] [rbp+18h] BYREF
  CBaseObject *v16; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  *(_QWORD *)&v14.left = 0LL;
  *(_QWORD *)&v14.right = 0LL;
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v15);
  v5 = DesktopThumbnail;
  if ( DesktopThumbnail >= 0 )
  {
    v6 = *((_QWORD *)a1 + 15);
    v7 = v15;
    v8 = v15;
    *((_QWORD *)v15 + 34) = v6;
    updated = CDesktopThumbnailBase::UpdateWindowClones(v8);
    v5 = updated;
    if ( updated >= 0 )
    {
      PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v7, &v14, &v16);
      v11 = v16;
      v5 = PerMonitorDesktopThumbnail;
      if ( PerMonitorDesktopThumbnail >= 0 )
      {
        v12 = CPerMonitorDesktopThumbnail::FreezeDesktopThumbnail(v16, a2);
        v5 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xE8u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, PerMonitorDesktopThumbnail, 0xE7u);
      }
      if ( v11 )
        CBaseObject::Release(v11);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xE5u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, DesktopThumbnail, 0xE4u);
  }
  return v5;
}
