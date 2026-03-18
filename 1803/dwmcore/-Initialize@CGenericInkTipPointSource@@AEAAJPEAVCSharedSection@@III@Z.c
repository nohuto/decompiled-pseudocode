/*
 * XREFs of ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z @ 0x18018F548
 * Callers:
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z @ 0x18018ED70 (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x18002BC88 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x18018EE70 (-Create@CSharedCircularQueue@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@_N@Z.c)
 */

__int64 __fastcall CGenericInkTipPointSource::Initialize(
        CGenericInkTipPointSource *this,
        struct CSharedSection *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned __int64 v6; // rsi
  CMILCOMBase *v7; // rcx
  unsigned __int64 v9; // r14
  unsigned int v10; // ebx
  void *v11; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  void **v14; // [rsp+30h] [rbp-20h]
  void *v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]

  v6 = a4;
  v7 = (CMILCOMBase *)*((_QWORD *)this + 2);
  v9 = a3;
  if ( v7 != a2 )
  {
    if ( a2 )
    {
      CMILCOMBase::InternalAddRef(a2);
      v7 = (CMILCOMBase *)*((_QWORD *)this + 2);
    }
    *((_QWORD *)this + 2) = a2;
    if ( v7 )
      CMILCOMBase::InternalRelease(v7);
  }
  v13[0] = v6;
  v15 = 0LL;
  v13[1] = CSharedSection::ResolveAllocation(a2, v9, v6);
  v14 = (void **)((char *)this + 24);
  v16 = 1;
  v10 = CSharedCircularQueue::Create((unsigned int *)v13, a5, &v15);
  if ( v16 )
  {
    v11 = *v14;
    *v14 = v15;
    if ( v11 )
      operator delete(v11);
  }
  return v10;
}
