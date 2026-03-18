/*
 * XREFs of ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C007E224
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C007CF88 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_GLOBAL::VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

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
  memset((char *)this + 4617, 0, 0x40uLL);
  memset((char *)this + 6480, 0, 0x200uLL);
  *((_DWORD *)this + 1749) = 0;
  *((_QWORD *)this + 875) = 0LL;
  *((_QWORD *)this + 876) = 0LL;
  *((_QWORD *)this + 877) = 0LL;
  *((_QWORD *)this + 878) = 0LL;
  *((_WORD *)this + 3536) = 0;
  *((_QWORD *)this + 1052) = 0LL;
  *((_DWORD *)this + 2106) = 0;
  *((_QWORD *)this + 5057) = 0LL;
  *((_QWORD *)this + 5056) = 0LL;
  *((_DWORD *)this + 10116) = 71;
  *((_QWORD *)this + 5062) = 0LL;
  *((_QWORD *)this + 5061) = 0LL;
  *((_DWORD *)this + 10126) = 46;
  *((_DWORD *)this + 10144) = -1;
  *((_QWORD *)this + 5071) = 0LL;
  *((_QWORD *)this + 5070) = 0LL;
  *((_DWORD *)this + 10166) = 0;
  *(_DWORD *)((char *)this + 40673) = 257;
  *((_DWORD *)this + 10170) = -1;
  *((_QWORD *)this + 5086) = 0LL;
  *((_QWORD *)this + 5087) = 0LL;
  *((_QWORD *)this + 5088) = 0LL;
  *((_QWORD *)this + 5089) = 0LL;
  memset((char *)this + 40896, 0, 0x220uLL);
  *((_BYTE *)this + 41448) &= 0x41u;
  *((_BYTE *)this + 41449) &= ~1u;
  *((_DWORD *)this + 10360) = 0;
  *((_QWORD *)this + 5187) = 0LL;
  *((_DWORD *)this + 10376) = 0;
  *((_QWORD *)this + 5190) = 0LL;
  *((_QWORD *)this + 5189) = 0LL;
  *((_QWORD *)this + 5191) = 0LL;
  *((_DWORD *)this + 10384) = 0;
  *((_QWORD *)this + 5194) = 0LL;
  *((_QWORD *)this + 5193) = 0LL;
  *((_DWORD *)this + 10390) = 66;
  *((_QWORD *)this + 5197) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5196);
  *((_QWORD *)this + 5201) = 0LL;
  *((_QWORD *)this + 5200) = 0LL;
  *((_DWORD *)this + 10408) = 0;
  *((_QWORD *)this + 5203) = (char *)this + 41616;
  *((_QWORD *)this + 5202) = (char *)this + 41616;
  *((_QWORD *)this + 5210) = DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback;
  *((_QWORD *)this + 5211) = (char *)this + 41600;
  *((_QWORD *)this + 5208) = 0LL;
  KeInitializeEvent((PRKEVENT)this + 1735, NotificationEvent, 1u);
  *((_QWORD *)this + 5212) = 0LL;
  *((_QWORD *)this + 5217) = 0LL;
  *((_QWORD *)this + 5216) = 0LL;
  *((_DWORD *)this + 10442) = 0;
  KeInitializeEvent((PRKEVENT)((char *)this + 41744), NotificationEvent, 1u);
  *((_QWORD *)this + 5222) = 0LL;
  *((_QWORD *)this + 5223) = 0LL;
  v2 = 4LL;
  *((_QWORD *)this + 5224) = 0LL;
  *((_QWORD *)this + 5225) = 0LL;
  *((_QWORD *)this + 5226) = 0LL;
  *((_QWORD *)this + 5228) = 0LL;
  *((_QWORD *)this + 5227) = 0LL;
  *((_DWORD *)this + 10458) = 60;
  *((_QWORD *)this + 5240) = 0LL;
  *((_QWORD *)this + 5241) = 0LL;
  *((_QWORD *)this + 5242) = 0LL;
  *((_QWORD *)this + 5243) = 0LL;
  *((_QWORD *)this + 5244) = 0LL;
  *((_BYTE *)this + 41960) = 0;
  *((_DWORD *)this + 10496) = -1;
  *((_QWORD *)this + 5247) = 0LL;
  *((_QWORD *)this + 5246) = 0LL;
  *((_BYTE *)this + 41992) = 0;
  *((_DWORD *)this + 10499) = -1;
  *((_BYTE *)this + 42016) = 0;
  *((_QWORD *)this + 5253) = 0LL;
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
  *((_QWORD *)this + 5215) = (char *)this + 41712;
  *((_QWORD *)this + 5214) = (char *)this + 41712;
  *((_QWORD *)this + 5199) = (char *)this + 41584;
  *((_QWORD *)this + 5198) = (char *)this + 41584;
  *((_QWORD *)this + 476) = (char *)this + 3800;
  *((_QWORD *)this + 475) = (char *)this + 3800;
  *((_QWORD *)this + 5069) = (char *)this + 40544;
  *((_QWORD *)this + 5068) = (char *)this + 40544;
  *((_QWORD *)this + 5065) = (char *)this + 40512;
  *((_QWORD *)this + 5064) = (char *)this + 40512;
  *((_QWORD *)this + 5060) = (char *)this + 40472;
  *((_QWORD *)this + 5059) = (char *)this + 40472;
  *((_QWORD *)this + 5067) = (char *)this + 40528;
  *((_QWORD *)this + 5066) = (char *)this + 40528;
  *((_QWORD *)this + 5239) = (char *)this + 41904;
  *((_QWORD *)this + 5238) = (char *)this + 41904;
  *((_QWORD *)this + 5251) = (char *)this + 42000;
  *((_QWORD *)this + 5250) = (char *)this + 42000;
  v3 = (_QWORD *)((char *)this + 41840);
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v2;
  }
  while ( v2 );
  memset((char *)this + 7080, 0, 0x270uLL);
  *((_QWORD *)this + 885) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5213);
  *((_QWORD *)this + 1049) = 0LL;
  *((_QWORD *)this + 1050) = 0LL;
  *((_QWORD *)this + 1051) = 0LL;
  memset((char *)this + 632, 0, 0x200uLL);
  memset((char *)this + 1144, 0, 0x200uLL);
  memset((char *)this + 3832, 0, 0x100uLL);
  memset((char *)this + 1656, 0, 0x800uLL);
  memset((char *)this + 4088, 0, 0x100uLL);
  memset((char *)this + 4344, 0, 0x100uLL);
  memset((char *)this + 4684, 0, 0x100uLL);
  memset((char *)this + 4944, 0, 0x200uLL);
  memset((char *)this + 5968, 0, 0x200uLL);
  memset((char *)this + 5456, 0, 0x200uLL);
  memset((char *)this + 7040, 0, 0x20uLL);
  *((_DWORD *)this + 1748) = 1;
  memset((char *)this + 7704, 0, 0x2B0uLL);
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 40768), 0LL, 0LL, 0, 0x18uLL, 0x61356956u, 0);
  return this;
}
