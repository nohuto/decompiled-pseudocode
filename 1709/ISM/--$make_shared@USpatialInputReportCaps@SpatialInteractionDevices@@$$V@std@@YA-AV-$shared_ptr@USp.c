/*
 * XREFs of ??$make_shared@USpatialInputReportCaps@SpatialInteractionDevices@@$$V@std@@YA?AV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@0@XZ @ 0x18007A500
 * Callers:
 *     SpatialInteractionDevices::GetReportCaps @ 0x180079290 (SpatialInteractionDevices--GetReportCaps.c)
 * Callees:
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<SpatialInteractionDevices::SpatialInputReportCaps,>(_QWORD *a1)
{
  char *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *result; // rax

  v2 = (char *)operator new(0xC0uLL);
  *((_DWORD *)v2 + 2) = 1;
  v3 = v2 + 16;
  *((_DWORD *)v2 + 3) = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj<SpatialInteractionDevices::SpatialInputReportCaps>::`vftable';
  if ( v2 != (char *)-16LL )
  {
    memset(v3, 0, 0xB0uLL);
    *v3 = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 5) = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
    *((_QWORD *)v2 + 7) = 0LL;
    *((_QWORD *)v2 + 8) = 0LL;
    *((_QWORD *)v2 + 9) = 0LL;
    *((_QWORD *)v2 + 10) = 0LL;
    *((_QWORD *)v2 + 11) = 0LL;
    *((_QWORD *)v2 + 12) = 0LL;
    *((_QWORD *)v2 + 13) = 0LL;
    *((_QWORD *)v2 + 14) = 0LL;
    *((_QWORD *)v2 + 15) = 0LL;
    *((_QWORD *)v2 + 16) = 0LL;
    *((_QWORD *)v2 + 17) = 0LL;
    *((_QWORD *)v2 + 18) = 0LL;
    *((_DWORD *)v2 + 38) = 0;
    *(_QWORD *)(v2 + 156) = 0LL;
    *((_QWORD *)v2 + 21) = 0LL;
    *((_QWORD *)v2 + 22) = 0LL;
    *((_QWORD *)v2 + 23) = 0LL;
  }
  result = a1;
  *a1 = v3;
  a1[1] = v2;
  return result;
}
