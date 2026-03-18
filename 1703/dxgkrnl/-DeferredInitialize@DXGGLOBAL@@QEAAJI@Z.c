/*
 * XREFs of ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C01104D0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C010C924 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0012D78 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00D6DB8 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C0121CCC (-Initialize@DXGMMS_EXPORT@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGGLOBAL::DeferredInitialize(DXGGLOBAL *this, unsigned int a2)
{
  __int64 v2; // rsi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  DXGMMS_EXPORT *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  DXGPROCESS *i; // rbx
  __int64 v14; // rdx
  int v15; // edi
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  if ( DXGGLOBAL::m_pDxgmmsExport[a2] )
    return 0LL;
  v4 = operator new(0x50uLL, 0x4B677844u, (POOL_TYPE)512);
  v6 = (DXGMMS_EXPORT *)v4;
  if ( v4 )
  {
    v4[8] = 0LL;
    v4[9] = 0LL;
    *(_BYTE *)v4 = 0;
    memset(v4 + 1, 0, 0x38uLL);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = DXGMMS_EXPORT::Initialize(v6, v2);
    v9 = v7;
    if ( v7 < 0 )
    {
      v18 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v18 + 24) = v2;
      *(_QWORD *)(v18 + 32) = v9;
      WdLogEvent5_WdLowResource(v18);
      return (unsigned int)v9;
    }
    else
    {
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v6 + 9) + 8LL) + 8LL))();
      DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v19);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      *((_QWORD *)this + v2 + 13) = *((_QWORD *)v6 + 9);
      v12 = *((_QWORD *)v6 + 8);
      DXGGLOBAL::m_pDxgmmsExport[v2] = v6;
      *((_QWORD *)this + v2 + 15) = v12;
      for ( i = (DXGPROCESS *)*((_QWORD *)this + 30); i != (DXGGLOBAL *)((char *)this + 240) && i; i = *(DXGPROCESS **)i )
      {
        v15 = DXGPROCESS::DeferredInitialize(i, (unsigned int)v2, v10, v11);
        if ( v15 < 0 )
          goto LABEL_14;
      }
      v15 = DXGPROCESS::DeferredInitialize(*((DXGPROCESS **)this + 103), (unsigned int)v2, v10, v11);
      if ( v15 >= 0 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v14, v10, v11);
LABEL_14:
      if ( v19[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v14, v10, v11);
      return (unsigned int)v15;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v17 + 24) = v2;
    *(_QWORD *)(v17 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
}
