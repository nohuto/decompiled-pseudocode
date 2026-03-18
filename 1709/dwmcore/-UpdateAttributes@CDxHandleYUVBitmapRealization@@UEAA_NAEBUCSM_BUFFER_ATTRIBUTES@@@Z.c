/*
 * XREFs of ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1801D4050
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcDisplayRestriction@CBitmapRealization@@IEBA?AVDisplayId@@HPEAUHMONITOR__@@@Z @ 0x18002AF94 (-CalcDisplayRestriction@CBitmapRealization@@IEBA-AVDisplayId@@HPEAUHMONITOR__@@@Z.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x180097070 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18011B0A4 (-UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::UpdateAttributes(
        CDxHandleYUVBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  char v4; // si
  CDisplaySet *v5; // rcx
  int v6; // r8d
  _DWORD *v7; // rax
  __int64 v8; // rax
  bool updated; // al
  char v10; // cl
  int v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *, int *))(*(_QWORD *)this + 48LL))(this, &v12);
  v6 = *((_DWORD *)a2 + 29) & 1;
  if ( v6 != (*((_DWORD *)this + 67) & 1) || *((_QWORD *)a2 + 1) != *((_QWORD *)this + 20) )
    *((_DWORD *)this + 102) = *(_DWORD *)CBitmapRealization::CalcDisplayRestriction(
                                           v5,
                                           (struct DisplayId *)&v13,
                                           v6,
                                           *((HMONITOR *)a2 + 1));
  v7 = (_DWORD *)(*(__int64 (__fastcall **)(CDxHandleYUVBitmapRealization *, char *))(*(_QWORD *)this + 48LL))(
                   this,
                   &v13);
  if ( v12 != *v7
    || *((_DWORD *)a2 + 16) != *((_DWORD *)this + 54)
    || !operator==((_DWORD *)a2 + 12, (_DWORD *)this + 50)
    || *((_DWORD *)a2 + 23) != *((_DWORD *)this + 61)
    || *((_DWORD *)a2 + 24) != *((_DWORD *)this + 62)
    || !operator==((_DWORD *)a2 + 25, (_DWORD *)this + 63) )
  {
    v8 = *((_QWORD *)this + 48);
    v4 = 1;
    if ( v8 )
      *(_BYTE *)(v8 + 205) = 0;
  }
  updated = CBitmapRealization::UpdateAttributes(this, a2);
  v10 = v4;
  if ( updated )
    return 1;
  return v10;
}
