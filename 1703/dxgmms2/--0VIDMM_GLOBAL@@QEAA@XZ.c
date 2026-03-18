/*
 * XREFs of ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C0074418
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C0075314 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002358 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0DXGPUSHLOCK@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C000249C (--0DXGPUSHLOCK@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_GLOBAL::VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  int v2; // edx
  __int64 v3; // rcx
  _QWORD *v4; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 464) = 0LL;
  *((_QWORD *)this + 478) = 0LL;
  *((_QWORD *)this + 477) = 0LL;
  *((_QWORD *)this + 575) = 0LL;
  *((_QWORD *)this + 576) = 0LL;
  *((_BYTE *)this + 4616) = 0;
  *((_DWORD *)this + 1605) = 0;
  *((_QWORD *)this + 803) = 0LL;
  *((_QWORD *)this + 804) = 0LL;
  *((_QWORD *)this + 805) = 0LL;
  *((_QWORD *)this + 806) = 0LL;
  *((_WORD *)this + 3248) = 0;
  *((_QWORD *)this + 980) = 0LL;
  *((_DWORD *)this + 1962) = 0;
  DXGPUSHLOCK::DXGPUSHLOCK((__int64)this + 39872, 71);
  DXGPUSHLOCK::DXGPUSHLOCK((__int64)this + 39912, 46);
  DXGPUSHLOCK::DXGPUSHLOCK((__int64)this + 39984, -1);
  *((_DWORD *)this + 10022) = 0;
  *(_WORD *)((char *)this + 40097) = 257;
  DXGPUSHLOCK::DXGPUSHLOCK((__int64)this + 40104, v2);
  *((_DWORD *)this + 10032) = 0;
  *((_DWORD *)this + 10033) = -1;
  *((_QWORD *)this + 5017) = 0LL;
  *((_QWORD *)this + 5018) = 0LL;
  *((_QWORD *)this + 5019) = 0LL;
  *((_QWORD *)this + 5020) = 0LL;
  memset((char *)this + 40320, 0, 0x220uLL);
  *((_BYTE *)this + 40872) &= 0x20u;
  *((_DWORD *)this + 10216) = 0;
  *((_QWORD *)this + 5115) = 0LL;
  *((_DWORD *)this + 10232) = 0;
  *((_QWORD *)this + 5118) = 0LL;
  *((_QWORD *)this + 5117) = 0LL;
  *((_QWORD *)this + 5119) = 0LL;
  *((_DWORD *)this + 10240) = 0;
  DXGPUSHLOCK::DXGPUSHLOCK((__int64)this + 40968, 66);
  *((_QWORD *)this + 5125) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5124);
  *((_QWORD *)this + 5129) = 0LL;
  *((_QWORD *)this + 5128) = 0LL;
  *((_DWORD *)this + 10264) = 0;
  *((_QWORD *)this + 5131) = (char *)this + 41040;
  *((_QWORD *)this + 5130) = (char *)this + 41040;
  *((_QWORD *)this + 5138) = DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback;
  *((_QWORD *)this + 5139) = (char *)this + 41024;
  *((_QWORD *)this + 5136) = 0LL;
  KeInitializeEvent((PRKEVENT)this + 1711, NotificationEvent, 1u);
  *((_QWORD *)this + 5140) = 0LL;
  *((_QWORD *)this + 5145) = 0LL;
  *((_QWORD *)this + 5144) = 0LL;
  *((_DWORD *)this + 10298) = 0;
  KeInitializeEvent((PRKEVENT)((char *)this + 41168), NotificationEvent, 1u);
  *((_QWORD *)this + 5150) = 0LL;
  `vector constructor iterator'(
    (char *)this + 41208,
    280LL,
    1LL,
    (void (__fastcall *)(char *))VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE::VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE);
  *((_DWORD *)this + 10372) = 0;
  *((_QWORD *)this + 5187) = 0LL;
  *((_QWORD *)this + 5188) = 0LL;
  *((_QWORD *)this + 5189) = 0LL;
  *((_QWORD *)this + 5190) = 0LL;
  *((_QWORD *)this + 5191) = 0LL;
  DXGPUSHLOCK::DXGPUSHLOCK((__int64)this + 41536, 60);
  *((_QWORD *)this + 5205) = 0LL;
  *((_QWORD *)this + 5206) = 0LL;
  *((_QWORD *)this + 5207) = 0LL;
  *((_QWORD *)this + 5208) = 0LL;
  *((_QWORD *)this + 5209) = 0LL;
  *((_BYTE *)this + 41680) = 0;
  DXGPUSHLOCK::DXGPUSHLOCK((__int64)this + 41688, -1);
  *((_BYTE *)this + 41712) = 0;
  *((_DWORD *)this + 10429) = -1;
  v3 = 4LL;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  *((_QWORD *)this + 468) = (char *)this + 3736;
  *((_QWORD *)this + 467) = (char *)this + 3736;
  *((_QWORD *)this + 470) = (char *)this + 3752;
  *((_QWORD *)this + 469) = (char *)this + 3752;
  *((_QWORD *)this + 472) = (char *)this + 3768;
  *((_QWORD *)this + 471) = (char *)this + 3768;
  *((_QWORD *)this + 474) = (char *)this + 3784;
  *((_QWORD *)this + 473) = (char *)this + 3784;
  *((_QWORD *)this + 5143) = (char *)this + 41136;
  *((_QWORD *)this + 5142) = (char *)this + 41136;
  *((_QWORD *)this + 5127) = (char *)this + 41008;
  *((_QWORD *)this + 5126) = (char *)this + 41008;
  *((_QWORD *)this + 476) = (char *)this + 3800;
  *((_QWORD *)this + 475) = (char *)this + 3800;
  *((_QWORD *)this + 4997) = (char *)this + 39968;
  *((_QWORD *)this + 4996) = (char *)this + 39968;
  *((_QWORD *)this + 4993) = (char *)this + 39936;
  *((_QWORD *)this + 4992) = (char *)this + 39936;
  *((_QWORD *)this + 4988) = (char *)this + 39896;
  *((_QWORD *)this + 4987) = (char *)this + 39896;
  *((_QWORD *)this + 4995) = (char *)this + 39952;
  *((_QWORD *)this + 4994) = (char *)this + 39952;
  *((_QWORD *)this + 5204) = (char *)this + 41624;
  *((_QWORD *)this + 5203) = (char *)this + 41624;
  v4 = (_QWORD *)((char *)this + 41560);
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v3;
  }
  while ( v3 );
  memset((char *)this + 6504, 0, 0x270uLL);
  *((_QWORD *)this + 813) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5141);
  *((_QWORD *)this + 977) = 0LL;
  *((_QWORD *)this + 978) = 0LL;
  *((_QWORD *)this + 979) = 0LL;
  memset((char *)this + 632, 0, 0x200uLL);
  memset((char *)this + 1144, 0, 0x200uLL);
  memset((char *)this + 3832, 0, 0x100uLL);
  memset((char *)this + 1656, 0, 0x800uLL);
  memset((char *)this + 4088, 0, 0x100uLL);
  memset((char *)this + 4344, 0, 0x100uLL);
  memset((char *)this + 4620, 0, 0x100uLL);
  memset((char *)this + 4880, 0, 0x200uLL);
  memset((char *)this + 5904, 0, 0x200uLL);
  memset((char *)this + 5392, 0, 0x200uLL);
  memset((char *)this + 6464, 0, 0x20uLL);
  *((_DWORD *)this + 1604) = 1;
  memset((char *)this + 7128, 0, 0x2B0uLL);
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)this + 314, 0LL, 0LL, 0, 0x18uLL, 0x61356956u, 0);
  return this;
}
