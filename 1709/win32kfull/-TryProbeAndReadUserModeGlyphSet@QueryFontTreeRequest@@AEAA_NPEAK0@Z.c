/*
 * XREFs of ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x1C0040154
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00401B0 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 * Callees:
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C0040114 (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 */

char __fastcall QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(
        QueryFontTreeRequest *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 v5; // rbx

  v5 = *((_QWORD *)this + 11);
  Win32ProbeForRead((char *)v5, 32LL, 8);
  *a2 = *(_DWORD *)v5;
  *a3 = *(_DWORD *)(v5 + 12);
  return 1;
}
