/*
 * XREFs of ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1801B7320
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x180036CE4 (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180036E30 (-UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800C4A3C (--8@YA_NAEBUtagRECT@@0@Z.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::UpdateAttributes(
        CDxHandleYUVBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  char updated; // si
  int v4; // edx
  __int64 v6; // rax

  updated = 0;
  v4 = *((_DWORD *)a2 + 29) & 1;
  if ( (v4 == (*((_DWORD *)this + 59) & 1) && *((_QWORD *)a2 + 1) == *((_QWORD *)this + 16)
     || (updated = CBitmapRealization::UpdateDisplayRestriction(this, v4, *((HMONITOR *)a2 + 1))) == 0)
    && (*((_DWORD *)a2 + 16) != *((_DWORD *)this + 46)
     || !operator==((_DWORD *)a2 + 12, (_DWORD *)this + 42)
     || *((_DWORD *)a2 + 23) != *((_DWORD *)this + 53)
     || *((_DWORD *)a2 + 24) != *((_DWORD *)this + 54)
     || !operator==((_DWORD *)a2 + 25, (_DWORD *)this + 55)) )
  {
    updated = 1;
  }
  CBitmapRealization::UpdateAttributes(this, a2);
  if ( updated )
  {
    v6 = *((_QWORD *)this + 44);
    if ( v6 )
      *(_BYTE *)(v6 + 229) = 0;
  }
}
