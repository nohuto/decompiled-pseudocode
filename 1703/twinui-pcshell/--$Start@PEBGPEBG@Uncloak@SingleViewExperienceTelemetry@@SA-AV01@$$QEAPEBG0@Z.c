/*
 * XREFs of ??$Start@PEBGPEBG@Uncloak@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x180184F1C
 * Callers:
 *     ?Uncloak@CSingleViewShellExperience@@QEAAJXZ @ 0x180183300 (-Uncloak@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?StartActivity@Uncloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180185D7C (-StartActivity@Uncloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

SingleViewExperienceTelemetry::Uncloak *__fastcall SingleViewExperienceTelemetry::Uncloak::Start<unsigned short const *,unsigned short const *>(
        SingleViewExperienceTelemetry::Uncloak *this,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3)
{
  char *v3; // rbx
  _QWORD *v7; // rcx

  *((_QWORD *)this + 2) = this;
  v3 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v7 = (_QWORD *)((char *)this + 136);
  v3[4] = 0;
  v3[64] = 0;
  *((_DWORD *)v3 + 10) = 0;
  *((_QWORD *)v3 + 6) = "Uncloak";
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = 1LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  memset(v7, 0, 0x90uLL);
  *((_QWORD *)v3 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Uncloak::`vftable';
  SingleViewExperienceTelemetry::Uncloak::StartActivity(this, *a2, *a3);
  return this;
}
