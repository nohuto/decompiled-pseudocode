/*
 * XREFs of ??$Start@AEAPEBG@LoadIconW@ImmersiveIconsLoggingTelemetry@@SA?AV01@AEAPEBG@Z @ 0x1801CCD38
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x1801CBB90 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@XZ @ 0x18001DEDC (--0StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1801CA8A4 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 */

ImmersiveIconsLoggingTelemetry::LoadIconW *__fastcall ImmersiveIconsLoggingTelemetry::LoadIconW::Start<unsigned short const * &>(
        ImmersiveIconsLoggingTelemetry::LoadIconW *this,
        const unsigned __int16 **a2)
{
  char *v2; // rbx

  *((_QWORD *)this + 1) = 0LL;
  v2 = (char *)this + 56;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 2) = this;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 0;
  *((_QWORD *)this + 13) = "LoadIconW";
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 32) = 1;
  wil::StoredFailureInfo::StoredFailureInfo((ImmersiveIconsLoggingTelemetry::LoadIconW *)((char *)this + 136));
  *((_QWORD *)v2 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ImmersiveIconsLoggingTelemetry::LoadIconW::`vftable';
  ImmersiveIconsLoggingTelemetry::LoadIconW::StartActivity(this, *a2);
  return this;
}
