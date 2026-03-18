/*
 * XREFs of ??1CInteractionTracker@@UEAA@XZ @ 0x18016A868
 * Callers:
 *     ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x18016AB90 (--_ECInteractionTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016B54C (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18016D09C (-ReleaseManipulations@CInteractionTracker@@AEAAXXZ.c)
 *     ?RemoveAll@?$CMap@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$ComPtr@VCInteraction@@@23@V?$CMapEqualHelper@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$ComPtr@VCInteraction@@@23@@@@@QEAAXXZ @ 0x18016D170 (-RemoveAll@-$CMap@V-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$ComPtr@VCInteraction@@@23@V-$CMap.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016EAF0 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
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
  __int64 v10; // rcx

  *(_QWORD *)this = &CInteractionTracker::`vftable';
  CInteractionTracker::ReleaseManipulations(this);
  CInteractionTracker::DestroyInteractionAnimations(this);
  CInteractionTracker::StopCustomAnimations(this);
  v2 = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 216LL);
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
  v7 = (void **)((char *)this + 472);
  v8 = 4LL;
  do
  {
    WPF::ProcessHeapImpl::Free(*v7);
    *v7++ = 0LL;
    --v8;
  }
  while ( v8 );
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 70);
  v9 = *((_QWORD *)this + 69);
  if ( v9 )
  {
    *((_QWORD *)this + 69) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v10 = *((_QWORD *)this + 68);
  if ( v10 )
  {
    *((_QWORD *)this + 68) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  CMap<Microsoft::WRL::ComPtr<CManipulation>,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<Microsoft::WRL::ComPtr<CManipulation>,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveAll((char *)this + 520);
  `vector destructor iterator'(
    (char *)this + 440,
    8LL,
    4LL,
    (void (__fastcall *)(CDrawListBitmap *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  `vector destructor iterator'(
    (char *)this + 424,
    8LL,
    2LL,
    (void (__fastcall *)(CDrawListBitmap *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 50);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 49);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 48);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
