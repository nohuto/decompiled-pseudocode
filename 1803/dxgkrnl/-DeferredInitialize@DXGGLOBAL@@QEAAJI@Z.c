/*
 * XREFs of ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C019D9A8
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009910 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C00327F0 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00F8124 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C01A9538 (-Initialize@DXGMMS_EXPORT@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGGLOBAL::DeferredInitialize(DXGGLOBAL *this, unsigned int a2)
{
  __int64 v2; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  DXGMMS_EXPORT *v7; // rbx
  __int64 v8; // rax
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rax
  _QWORD *v14; // rdi
  DXGPROCESS *Current; // rax
  _BYTE v16[16]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  if ( DXGGLOBAL::m_pDxgmmsExport[a2] )
    return 0LL;
  v5 = operator new[](0x50uLL, 0x4B677844u, (POOL_TYPE)512);
  v7 = (DXGMMS_EXPORT *)v5;
  if ( v5 )
  {
    v5[8] = 0LL;
    v5[9] = 0LL;
    *(_BYTE *)v5 = 0;
    memset(v5 + 1, 0, 0x38uLL);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v10 = DXGMMS_EXPORT::Initialize(v7, v2);
    v12 = v10;
    if ( v10 < 0 )
    {
      v13 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v13 + 24) = v2;
      *(_QWORD *)(v13 + 32) = v12;
      WdLogEvent5_WdLowResource(v13);
      return (unsigned int)v12;
    }
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v7 + 9) + 8LL) + 8LL))();
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v16);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    *((_QWORD *)this + v2 + 13) = *((_QWORD *)v7 + 9);
    *((_QWORD *)this + v2 + 15) = *((_QWORD *)v7 + 8);
    v14 = (_QWORD *)*((_QWORD *)this + 31);
    v17[0] = (char *)this + 248;
    DXGGLOBAL::m_pDxgmmsExport[v2] = v7;
    while ( 1 )
    {
      v17[1] = v14;
      Current = (DXGPROCESS *)DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v17);
      if ( !Current )
        break;
      v9 = DXGPROCESS::DeferredInitialize(Current, v2);
      if ( v9 < 0 )
        goto LABEL_16;
      v14 = (_QWORD *)*v14;
    }
    v9 = DXGPROCESS::DeferredInitialize(*((DXGPROCESS **)this + 113), v2);
    if ( v9 >= 0 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
LABEL_16:
    if ( v16[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v6);
    v9 = -1073741801;
    *(_QWORD *)(v8 + 24) = v2;
    *(_QWORD *)(v8 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v8);
  }
  return (unsigned int)v9;
}
