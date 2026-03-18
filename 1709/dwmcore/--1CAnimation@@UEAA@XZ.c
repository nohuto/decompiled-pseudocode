/*
 * XREFs of ??1CAnimation@@UEAA@XZ @ 0x18002D6C0
 * Callers:
 *     ??_GCAnimation@@UEAAPEAXI@Z @ 0x18002D7A0 (--_GCAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CHolographicInteropTaskQueue@@UEAAKXZ @ 0x18002AF40 (-Release@CHolographicInteropTaskQueue@@UEAAKXZ.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x18002CFB0 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18002D090 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimation::~CAnimation(CAnimation *this)
{
  CAnimation *v2; // rcx
  bool v3; // zf
  CMILRefCountBase *v4; // rcx
  void (*v5)(void); // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 i; // r9
  __int64 v14; // rcx

  *(_QWORD *)this = &CAnimation::`vftable'{for `CResource'};
  v2 = (CAnimation *)((char *)this + 56);
  v3 = (*((_BYTE *)this + 112) & 2) == 0;
  *(_QWORD *)v2 = &CAnimation::`vftable'{for `IAnimationResource'};
  *((_QWORD *)this + 13) = &CAnimation::`vftable';
  if ( v3 && *((_QWORD *)this + 15) && *((_DWORD *)this + 22) )
    CAnimation::UpdateAnimateValues(v2);
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 15);
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
    v9 = 0;
    do
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 8) + 16LL * v9);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      ++v9;
    }
    while ( v9 < *((_DWORD *)this + 22) );
    *((_DWORD *)this + 22) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 64, 16LL);
  }
  v7 = *((_QWORD *)this + 18);
  if ( v7 )
  {
    v11 = *(unsigned int *)(v7 + 80);
    v12 = 0LL;
    for ( i = *(_QWORD *)(v7 + 56); (unsigned int)v12 < (unsigned int)v11; v12 = (unsigned int)(v12 + 1) )
    {
      if ( this == *(CAnimation **)(i + 8 * v12) )
        break;
    }
    if ( (unsigned int)v12 < (unsigned int)v11 )
    {
      if ( (unsigned int)v12 < (int)v11 - 1 )
      {
        do
        {
          v11 = (unsigned int)(v12 + 1);
          *(_QWORD *)(i + 8 * v12) = *(_QWORD *)(i + 8 * v11);
          v12 = v11;
        }
        while ( (unsigned int)v11 < *(_DWORD *)(v7 + 80) - 1 );
      }
      --*(_DWORD *)(v7 + 80);
    }
    v14 = *((_QWORD *)this + 18);
    if ( v14 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v14 + 16LL))(v14, v11, v7, i);
  }
  v8 = (void *)*((_QWORD *)this + 16);
  if ( v8 )
    WPF::ProcessHeapImpl::Free(v8);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 152);
  CBaseAnimation::~CBaseAnimation(this);
}
