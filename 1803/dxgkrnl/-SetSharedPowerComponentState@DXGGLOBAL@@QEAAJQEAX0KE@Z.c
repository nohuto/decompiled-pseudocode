/*
 * XREFs of ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C01A1098
 * Callers:
 *     DxgSetSharedPowerComponentStateCB @ 0x1C0187A50 (DxgSetSharedPowerComponentStateCB.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C00268D8 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0026DB8 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C019CAF8 (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C01A1864 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SetSharedPowerComponentState(
        DXGGLOBAL *this,
        DXGADAPTER *a2,
        __int64 *a3,
        int a4,
        unsigned __int8 a5)
{
  unsigned int v9; // ebx
  __int64 **v10; // r14
  unsigned int v11; // ecx
  DXGSHAREDPOWERINUSELISTOBJECT **v12; // r8
  char v13; // dl
  DXGSHAREDPOWERINUSELISTOBJECT *i; // rax
  DXGSHAREDPOWERINUSELISTOBJECT *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdx
  DXGSHAREDPOWERINUSELISTOBJECT *v21; // rax
  DXGSHAREDPOWERINUSELISTOBJECT **v22; // rdx
  void *v23; // rcx
  struct _KTHREAD **v25; // [rsp+68h] [rbp+10h]
  unsigned __int16 v26; // [rsp+7Ah] [rbp+22h]

  v26 = HIWORD(a4);
  v25 = (struct _KTHREAD **)((char *)this + 408);
  v9 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 408));
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1280));
  v10 = (__int64 **)*((_QWORD *)this + 163);
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v11 = (unsigned __int16)a4 + *((unsigned __int16 *)a2 + v26 + 1256);
    if ( v11 < *((_DWORD *)a2 + 660) && *(_DWORD *)(520LL * v11 + *((_QWORD *)a2 + 312) + 208) == 7 )
    {
      while ( v10 != (__int64 **)((char *)this + 1304) && v10 )
      {
        if ( v10[4] == (__int64 *)a2 && v10[3] == a3 )
        {
          v12 = (DXGSHAREDPOWERINUSELISTOBJECT **)v10[8];
          v13 = 0;
          for ( i = *v12; ; i = *(DXGSHAREDPOWERINUSELISTOBJECT **)i )
          {
            v15 = 0LL;
            if ( i != (DXGSHAREDPOWERINUSELISTOBJECT *)v12 )
              v15 = i;
            if ( !v15 )
              break;
            if ( *((_DWORD *)v15 + 6) == a4 )
            {
              v13 = 1;
              break;
            }
          }
          if ( a5 )
          {
            if ( !v13 )
            {
              v16 = operator new[](0x20uLL, 0x4B677844u, PagedPool);
              if ( v16 )
              {
                v17 = 0LL;
                v16[2] = this;
                *v16 = 0LL;
                v16[1] = 0LL;
                *((_DWORD *)v16 + 6) = a4;
              }
              else
              {
                v16 = 0LL;
              }
              if ( v16 )
              {
                v19 = v10[8];
                v20 = *v19;
                if ( *(__int64 **)(*v19 + 8) != v19 )
                  __fastfail(3u);
                *v16 = v20;
                v16[1] = v19;
                *(_QWORD *)(v20 + 8) = v16;
                *v19 = (__int64)v16;
                DXGADAPTER::SetPowerComponentActiveCB(a2, a4);
              }
              else
              {
                v18 = WdLogNewEntry5_WdLowResource(v17);
                *(_QWORD *)(v18 + 24) = 5590LL;
                WdLogEvent5_WdLowResource(v18);
                v9 = -1073741801;
              }
            }
          }
          else if ( v13 )
          {
            v21 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v15;
            if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)v15 + 8LL) != v15
              || (v22 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v15 + 1), *v22 != v15) )
            {
              __fastfail(3u);
            }
            *v22 = v21;
            *((_QWORD *)v21 + 1) = v22;
            if ( v15 )
            {
              DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v15);
              operator delete(v23);
            }
            DXGADAPTER::SetPowerComponentIdleCB(a2, a4);
          }
          goto LABEL_35;
        }
        v10 = (__int64 **)*v10;
      }
    }
    v9 = -1073741811;
  }
  else
  {
    v9 = -1073741130;
  }
LABEL_35:
  ExReleasePushLockSharedEx((char *)this + 1280, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v25);
  return v9;
}
