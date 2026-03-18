/*
 * XREFs of ??1CAnimation@@UEAA@XZ @ 0x1800BD358
 * Callers:
 *     ??_GCAnimation@@UEAAPEAXI@Z @ 0x1800BD4A0 (--_GCAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CHolographicInteropTaskQueue@@UEAAKXZ @ 0x180035060 (-Release@CHolographicInteropTaskQueue@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800BC7A4 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800BC890 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimation::~CAnimation(CAnimation *this)
{
  CAnimation *v2; // rcx
  bool v3; // zf
  CHolographicInteropTaskQueue *v4; // rcx
  void (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 i; // r9
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rcx

  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  v2 = (CAnimation *)((char *)this + 56);
  v3 = (*((_BYTE *)this + 112) & 2) == 0;
  *(_QWORD *)v2 = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 13) = &CAnimation::`vftable';
  if ( v3 && *((_QWORD *)this + 15) && *((_DWORD *)this + 22) )
    CAnimation::UpdateAnimateValues(v2);
  v4 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
    if ( (char *)v5 == (char *)CHolographicInteropTaskQueue::Release )
      CHolographicInteropTaskQueue::Release(v4);
    else
      v5();
  }
  v6 = *((_QWORD *)this + 29);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  CAnimation::EndAnimation(this);
  if ( (*((_BYTE *)this + 112) & 2) != 0 && *((_DWORD *)this + 22) )
  {
    v13 = 0;
    do
    {
      v14 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL * v13);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      ++v13;
    }
    while ( v13 < *((_DWORD *)this + 22) );
    *((_DWORD *)this + 22) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 64, 0x10u);
  }
  v7 = *((_QWORD *)this + 18);
  if ( v7 )
  {
    v9 = *(unsigned int *)(v7 + 80);
    v10 = 0LL;
    for ( i = *(_QWORD *)(v7 + 56); (unsigned int)v10 < (unsigned int)v9; v10 = (unsigned int)(v10 + 1) )
    {
      if ( this == *(CAnimation **)(i + 8 * v10) )
        break;
    }
    if ( (unsigned int)v10 < (unsigned int)v9 )
    {
      if ( (unsigned int)v10 < (int)v9 - 1 )
      {
        do
        {
          v9 = (unsigned int)(v10 + 1);
          *(_QWORD *)(i + 8 * v10) = *(_QWORD *)(i + 8 * v9);
          v10 = v9;
        }
        while ( (unsigned int)v9 < *(_DWORD *)(v7 + 80) - 1 );
      }
      --*(_DWORD *)(v7 + 80);
    }
    v12 = *((_QWORD *)this + 18);
    if ( v12 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, v9, v7, i);
  }
  v8 = (void *)*((_QWORD *)this + 16);
  if ( v8 )
    WPF::ProcessHeapImpl::Free(v8);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 19);
  CBaseAnimation::~CBaseAnimation(this);
}
