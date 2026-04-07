/*
 * XREFs of ??1CWindowList@@UEAA@XZ @ 0x1800820EC
 * Callers:
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x180078390 (--_ECWindowList@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180034A28 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x1800703C8 (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800823D8 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 *     ??_GCWindowArrangementTransition@@QEAAPEAXI@Z @ 0x180082500 (--_GCWindowArrangementTransition@@QEAAPEAXI@Z.c)
 */

void __fastcall CWindowList::~CWindowList(CWindowList *this)
{
  unsigned int v2; // edx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CLoginTransition *v6; // rcx
  struct CWindowData **v7; // rax
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  PVOID v13; // rax
  unsigned int v14; // edx
  _QWORD *v15; // rdi
  CBaseObject *v16; // rcx
  CWindowArrangementTransition *v17; // rcx
  PVOID v18; // rax
  PVOID v19; // rax
  PVOID v20; // rax
  PVOID v21; // [rsp+40h] [rbp+20h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp+28h] BYREF

  v21 = 0LL;
  *(_QWORD *)this = &CWindowList::`vftable';
  CWindowList::CommitAndCloseResizeCompSyncObject(this);
  v3 = (CBaseObject *)*((_QWORD *)this + 63);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 64);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 67);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CLoginTransition *)*((_QWORD *)this + 66);
  if ( v6 )
  {
    CLoginTransition::`scalar deleting destructor'(v6, v2);
    *((_QWORD *)this + 66) = 0LL;
  }
  while ( !RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 280)) )
  {
    RestartKey = 0LL;
    v7 = (struct CWindowData **)RtlEnumerateGenericTableWithoutSplaying(
                                  (PRTL_GENERIC_TABLE)((char *)this + 280),
                                  &RestartKey);
    CWindowList::ImmediateDestroySprite(this, *v7);
  }
  while ( 1 )
  {
    v13 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &v21);
    v15 = v13;
    if ( !v13 )
      break;
    v8 = (CBaseObject *)*((_QWORD *)v13 + 1);
    if ( v8 )
      CBaseObject::Release(v8);
    v9 = (CBaseObject *)v15[2];
    if ( v9 )
      CBaseObject::Release(v9);
    v10 = (CBaseObject *)v15[3];
    if ( v10 )
      CBaseObject::Release(v10);
    v11 = (CBaseObject *)v15[4];
    if ( v11 )
      CBaseObject::Release(v11);
    v12 = (CBaseObject *)v15[5];
    if ( v12 )
      CBaseObject::Release(v12);
  }
  v16 = (CBaseObject *)*((_QWORD *)this + 10);
  if ( v16 )
    CBaseObject::Release(v16);
  v17 = (CWindowArrangementTransition *)*((_QWORD *)this + 65);
  if ( v17 )
  {
    CWindowArrangementTransition::`scalar deleting destructor'(v17, v14);
    *((_QWORD *)this + 65) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 544);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 472);
  while ( 1 )
  {
    v21 = 0LL;
    v18 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 400), &v21);
    if ( !v18 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 400), v18);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 352);
  while ( 1 )
  {
    v21 = 0LL;
    v19 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 280), &v21);
    if ( !v19 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 280), v19);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 248);
  while ( 1 )
  {
    v21 = 0LL;
    v20 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 8), &v21);
    if ( !v20 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), v20);
  }
}
