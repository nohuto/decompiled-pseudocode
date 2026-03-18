/*
 * XREFs of ??1CInteractionTracker@@UEAA@XZ @ 0x180193288
 * Callers:
 *     ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x1801934F0 (--_ECInteractionTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x180193FB0 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x180196CC8 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x1801C96F8 (--1InteractionSourceManager@@QEAA@XZ.c)
 */

void __fastcall CInteractionTracker::~CInteractionTracker(CInteractionTracker *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ecx
  __int64 v5; // r10
  __int64 v6; // rcx
  void **v7; // rdi
  __int64 v8; // rsi

  *(_QWORD *)this = &CInteractionTracker::`vftable';
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
    for ( ; (unsigned int)v2 < v4 - 1; v4 = *(_DWORD *)(v3 + 296) )
    {
      v6 = (unsigned int)v2;
      LODWORD(v2) = v2 + 1;
      *(_QWORD *)(v5 + 8 * v6) = *(_QWORD *)(v5 + 8LL * (unsigned int)v2);
    }
    *(_DWORD *)(v3 + 296) = v4 - 1;
  }
  v7 = (void **)((char *)this + 568);
  v8 = 4LL;
  do
  {
    operator delete(*v7);
    *v7++ = 0LL;
    --v8;
  }
  while ( v8 );
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 616);
  `vector destructor iterator'(
    (char *)this + 536,
    8LL,
    4LL,
    (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  `vector destructor iterator'(
    (char *)this + 520,
    8LL,
    2LL,
    (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 62);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 61);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 60);
  InteractionSourceManager::~InteractionSourceManager((CInteractionTracker *)((char *)this + 352));
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
