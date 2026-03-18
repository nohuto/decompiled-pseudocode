/*
 * XREFs of ??1CInteractionTracker@@UEAA@XZ @ 0x18016BD60
 * Callers:
 *     ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x18016BF50 (--_ECInteractionTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2D0C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016C7BC (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D244 (-InternalRelease@-$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18016D548 (-ReleaseManipulations@CInteractionTracker@@AEAAXXZ.c)
 *     ?RemoveAll@?$CMap@PEAVCManipulation@@PEAVCInteraction@@V?$CMapEqualHelper@PEAVCManipulation@@PEAVCInteraction@@@@@@QEAAXXZ @ 0x18016D644 (-RemoveAll@-$CMap@PEAVCManipulation@@PEAVCInteraction@@V-$CMapEqualHelper@PEAVCManipulation@@PEA.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016E97C (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::~CInteractionTracker(CInteractionTracker *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rdx
  void **v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx

  *(_QWORD *)this = &CInteractionTracker::`vftable';
  CInteractionTracker::ReleaseManipulations(this);
  CInteractionTracker::DestroyInteractionAnimations(this);
  CInteractionTracker::StopCustomAnimations(this);
  v2 = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 240LL);
  v4 = *(_DWORD *)(v3 + 296);
  v5 = *(_QWORD *)(v3 + 272);
  if ( v4 )
  {
    do
    {
      if ( this == *(CInteractionTracker **)(v5 + 8 * v2) )
        break;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
  }
  if ( (unsigned int)v2 < v4 )
  {
    if ( (unsigned int)v2 < v4 - 1 )
    {
      do
      {
        v6 = (unsigned int)(v2 + 1);
        *(_QWORD *)(v5 + 8 * v2) = *(_QWORD *)(v5 + 8 * v6);
        v2 = v6;
      }
      while ( (unsigned int)v6 < *(_DWORD *)(v3 + 296) - 1 );
    }
    --*(_DWORD *)(v3 + 296);
  }
  v7 = (void **)((char *)this + 448);
  v8 = 3LL;
  do
  {
    WPF::ProcessHeapImpl::Free(*v7);
    *v7++ = 0LL;
    --v8;
  }
  while ( v8 );
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 66);
  v9 = *((_QWORD *)this + 65);
  if ( v9 )
  {
    *((_QWORD *)this + 65) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  Microsoft::WRL::ComPtr<CManipulation>::InternalRelease((char *)this + 512);
  CMap<CManipulation *,CInteraction *,CMapEqualHelper<CManipulation *,CInteraction *>>::RemoveAll((char *)this + 488);
  `vector destructor iterator'(
    (char *)this + 424,
    8LL,
    3LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  `vector destructor iterator'(
    (char *)this + 408,
    8LL,
    2LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 48);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 47);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 46);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
