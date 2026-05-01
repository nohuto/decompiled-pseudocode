/*
 * XREFs of ??$Start@$$V@AppFrameHostStartup@CAppManagerTelemetry@@SA?AV01@XZ @ 0x18004E5C8
 * Callers:
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x18004D1D0 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 * Callees:
 *     ?StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ @ 0x18004EC9C (-StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ.c)
 *     memset @ 0x180194E50 (memset.c)
 */

CAppManagerTelemetry::AppFrameHostStartup *__fastcall CAppManagerTelemetry::AppFrameHostStartup::Start<>(
        CAppManagerTelemetry::AppFrameHostStartup *this)
{
  char *v1; // rbx
  _QWORD *v3; // rcx

  *((_QWORD *)this + 2) = this;
  v1 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  v3 = (_QWORD *)((char *)this + 136);
  *(_DWORD *)v1 = 0;
  v1[4] = 0;
  v1[64] = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_QWORD *)v1 + 6) = "AppFrameHostStartup";
  *((_QWORD *)v1 + 7) = 0LL;
  *((_QWORD *)v1 + 9) = 1LL;
  v3[18] = 0LL;
  v3[19] = 0LL;
  memset(v3, 0, 0x90uLL);
  *((_QWORD *)v1 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &CAppManagerTelemetry::AppFrameHostStartup::`vftable';
  CAppManagerTelemetry::AppFrameHostStartup::StartActivity(this);
  return this;
}
