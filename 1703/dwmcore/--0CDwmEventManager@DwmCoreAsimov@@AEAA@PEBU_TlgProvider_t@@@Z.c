/*
 * XREFs of ??0CDwmEventManager@DwmCoreAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x1800C9CE4
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18003E0C0 (-PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ??0CDwmEventManager_Private@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z @ 0x1800C9DC4 (--0CDwmEventManager_Private@DwmCoreAsimov@@QEAA@PEBU_TlgProvider_t@@@Z.c)
 */

DwmCoreAsimov::CDwmEventManager_Private **__fastcall DwmCoreAsimov::CDwmEventManager::CDwmEventManager(
        DwmCoreAsimov::CDwmEventManager *this,
        const struct _TlgProvider_t *a2)
{
  DwmCoreAsimov::CDwmEventManager_Private *v2; // rbx
  DWORD CurrentThreadId; // eax
  time_t v4; // rax
  DwmCoreAsimov::CDwmEventManager_Private *v5; // rax
  const struct _TlgProvider_t *v6; // rdx

  v2 = 0LL;
  dword_180241340 = 8;
  qword_180241348 = 0LL;
  qword_180241338 = (__int64)&DwmCoreAsimov::HighErrorRateEventData::`vftable';
  qword_180241350 = 0LL;
  qword_180241358 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  unk_18024132C = 0LL;
  dword_180241328 = CurrentThreadId;
  v4 = time(0LL);
  qword_180241358 = 0LL;
  qword_180241350 = v4;
  qword_180241348 = 0LL;
  v5 = (DwmCoreAsimov::CDwmEventManager_Private *)operator new(0xF0uLL);
  if ( v5 )
    v2 = (DwmCoreAsimov::CDwmEventManager_Private *)DwmCoreAsimov::CDwmEventManager_Private::CDwmEventManager_Private(
                                                      v5,
                                                      v6);
  qword_180241320 = v2;
  return &qword_180241320;
}
