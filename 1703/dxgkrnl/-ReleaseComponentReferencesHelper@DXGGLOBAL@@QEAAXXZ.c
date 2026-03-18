/*
 * XREFs of ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C01967A8
 * Callers:
 *     ?CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z @ 0x1C0194E90 (-CsExitInitiatedReleaseComponentReferencesPassiveLevel@@YAXPEAX@Z.c)
 *     ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z @ 0x1C0194F88 (-CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAXE_J@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0006884 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseComponentReferencesHelper(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 **v4; // r14
  __int64 v5; // rdx
  signed __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  unsigned int i; // esi
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE v22[16]; // [rsp+20h] [rbp-68h] BYREF
  char v23[8]; // [rsp+30h] [rbp-58h] BYREF
  char v24[32]; // [rsp+38h] [rbp-50h] BYREF
  char v25[40]; // [rsp+58h] [rbp-30h] BYREF

  v4 = (volatile signed __int32 **)((char *)this + 440);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (DXGGLOBAL *)((char *)this + 400), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v9 = *v4;
  while ( v9 != (volatile signed __int32 *)v4 && v9 )
  {
    v10 = v9;
    v9 = *(volatile signed __int32 **)v9;
    if ( *((_DWORD *)v10 + 750) )
    {
      _m_prefetchw((const void *)(v10 + 6));
      v11 = *((_QWORD *)v10 + 3);
      while ( v11 )
      {
        v6 = v11 + 1;
        v12 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 3, v11 + 1, v11);
        if ( v12 == v11 )
        {
          LOBYTE(v11) = 1;
          break;
        }
      }
      if ( (_BYTE)v11 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, (struct DXGADAPTER *const)v10, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v10);
        v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23);
        v18 = v13;
        if ( v13 < 0 )
        {
          v20 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
          *(_QWORD *)(v20 + 24) = v10;
          *(_QWORD *)(v20 + 32) = v18;
          WdLogEvent5_WdWarning(v20);
        }
        else
        {
          for ( i = 0; i < *((_DWORD *)v10 + 616); ++i )
          {
            if ( !*(_DWORD *)(520LL * i + *((_QWORD *)v10 + 290) + 208) )
              DXGADAPTER::SetPowerComponentIdleCBInternal((DXGADAPTER *)v10, i, 0);
          }
          _InterlockedDecrement(v10 + 750);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v25);
        COREACCESS::~COREACCESS((COREACCESS *)v24);
      }
      else
      {
        v21 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
        *(_QWORD *)(v21 + 24) = v10;
        WdLogEvent5_WdWarning(v21);
      }
    }
  }
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22, v5, v7, v8);
}
