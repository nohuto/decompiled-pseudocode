/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x180092EB8
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x18008F7F0 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x18001F744 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x180090308 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x1800C23DC (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowNode::~CWindowNode(CMILRefCountBase **this)
{
  CMILRefCountBase *v2; // rcx
  unsigned int i; // ebp
  struct CResource *v4; // rdx
  unsigned int j; // ebp
  CMILRefCountBase *v6; // rcx
  CMILRefCountBase *v7; // rcx
  CMILRefCountBase *v8; // rcx
  CMILRefCountBase *v9; // rcx
  struct CResource *v10; // rbx
  __int64 v11; // rcx
  struct CResource *v12; // rbx
  __int64 v13; // rcx
  CMILRefCountBase *v14; // rbx
  __int64 v15; // rdi

  *this = (CMILRefCountBase *)&CWindowNode::`vftable';
  CWindowNode::Detach((CWindowNode *)this);
  v2 = this[90];
  if ( v2 )
  {
    v10 = (struct CResource *)(*(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v2 + 152LL))(v2);
    (*(void (__fastcall **)(CMILRefCountBase *, CMILRefCountBase **))(*(_QWORD *)this[90] + 168LL))(this[90], this);
    CResource::UnRegisterNotifierInternal((CResource *)this, v10);
  }
  for ( i = 0; i < *((_DWORD *)this + 188); ++i )
  {
    v11 = *((_QWORD *)this[91] + i);
    v12 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 152LL))(v11);
    v13 = *((_QWORD *)this[91] + i);
    (*(void (__fastcall **)(__int64, CMILRefCountBase **))(*(_QWORD *)v13 + 168LL))(v13, this);
    CResource::UnRegisterNotifierInternal((CResource *)this, v12);
  }
  *((_DWORD *)this + 188) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 91), 8u);
  v4 = this[108];
  if ( v4 )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, v4);
    this[108] = 0LL;
  }
  for ( j = 0; j < *((_DWORD *)this + 224); *((_QWORD *)v14 + v15) = 0LL )
  {
    v14 = this[109];
    v15 = j;
    CResource::UnRegisterNotifierInternal((CResource *)this, *((struct CResource **)v14 + j++));
  }
  *((_DWORD *)this + 224) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 109), 8u);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[97]);
  this[97] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[107]);
  this[107] = 0LL;
  v6 = this[113];
  if ( v6 )
    (**(void (__fastcall ***)(CMILRefCountBase *, __int64))v6)(v6, 1LL);
  if ( *((_BYTE *)this + 917) )
    --*((_DWORD *)this[2] + 70);
  v7 = this[116];
  if ( v7 )
  {
    DeleteObject(v7);
    this[116] = 0LL;
  }
  ReleaseInterface<CConnection>(this + 79);
  v8 = this[117];
  if ( v8 )
  {
    DeleteObject(v8);
    this[117] = 0LL;
  }
  v9 = this[118];
  if ( v9 )
  {
    DeleteObject(v9);
    this[118] = 0LL;
  }
  CDwmMetaRegion::ClearMoveData((CDwmMetaRegion *)(this + 117));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 109));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 91));
  CVisual::~CVisual((CVisual *)this);
}
