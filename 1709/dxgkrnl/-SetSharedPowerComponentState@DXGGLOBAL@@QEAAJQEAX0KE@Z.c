/*
 * XREFs of ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C01ABE80
 * Callers:
 *     DxgSetSharedPowerComponentStateCB @ 0x1C019A940 (DxgSetSharedPowerComponentStateCB.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C001F87C (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C001FD5C (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C01A97F8 (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C01AC45C (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SetSharedPowerComponentState(
        DXGGLOBAL *this,
        DXGADAPTER *a2,
        void *const a3,
        int a4,
        unsigned __int8 a5)
{
  char *v5; // r14
  char *v7; // rdi
  struct _KTHREAD **v8; // r12
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  DXGSHAREDPOWERINUSELISTOBJECT **v14; // rdx
  char v15; // al
  DXGSHAREDPOWERINUSELISTOBJECT *i; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rdx
  DXGSHAREDPOWERINUSELISTOBJECT *v22; // rax
  DXGSHAREDPOWERINUSELISTOBJECT **v23; // rdx
  void *v24; // rcx
  unsigned __int16 v26; // [rsp+7Ah] [rbp+22h]

  v26 = HIWORD(a4);
  v5 = (char *)this + 1176;
  v7 = (char *)*((_QWORD *)this + 147);
  v8 = (struct _KTHREAD **)((char *)this + 400);
  v12 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 400));
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1152));
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v13 = (unsigned __int16)a4 + *((unsigned __int16 *)a2 + v26 + 1180);
    if ( v13 < *((_DWORD *)a2 + 622) && *(_DWORD *)(520LL * v13 + *((_QWORD *)a2 + 293) + 208) == 7 )
    {
      while ( v7 != v5 && v7 )
      {
        if ( *((DXGADAPTER **)v7 + 4) == a2 && *((void *const *)v7 + 3) == a3 )
        {
          v14 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v7 + 8);
          v15 = 0;
          for ( i = *v14; i != (DXGSHAREDPOWERINUSELISTOBJECT *)v14; i = *(DXGSHAREDPOWERINUSELISTOBJECT **)i )
          {
            if ( !i )
              goto LABEL_17;
            if ( *((_DWORD *)i + 6) == a4 )
            {
              v15 = 1;
              goto LABEL_17;
            }
          }
          i = 0LL;
LABEL_17:
          if ( a5 )
          {
            if ( !v15 )
            {
              v17 = operator new(0x20uLL, 0x4B677844u, PagedPool);
              if ( v17 )
              {
                v18 = 0LL;
                v17[2] = this;
                *v17 = 0LL;
                v17[1] = 0LL;
                *((_DWORD *)v17 + 6) = a4;
              }
              else
              {
                v17 = 0LL;
              }
              if ( v17 )
              {
                v20 = (__int64 *)*((_QWORD *)v7 + 8);
                v21 = *v20;
                if ( *(__int64 **)(*v20 + 8) != v20 )
                  __fastfail(3u);
                *v17 = v21;
                v17[1] = v20;
                *(_QWORD *)(v21 + 8) = v17;
                *v20 = (__int64)v17;
                DXGADAPTER::SetPowerComponentActiveCB(a2, a4);
              }
              else
              {
                v19 = WdLogNewEntry5_WdLowResource(v18);
                *(_QWORD *)(v19 + 24) = 5125LL;
                WdLogEvent5_WdLowResource(v19);
                v12 = -1073741801;
              }
            }
          }
          else if ( v15 )
          {
            v22 = *(DXGSHAREDPOWERINUSELISTOBJECT **)i;
            if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)i + 8LL) != i
              || (v23 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)i + 1), *v23 != i) )
            {
              __fastfail(3u);
            }
            *v23 = v22;
            *((_QWORD *)v22 + 1) = v23;
            DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(i);
            operator delete(v24);
            DXGADAPTER::SetPowerComponentIdleCB(a2, a4);
          }
          goto LABEL_33;
        }
        v7 = *(char **)v7;
      }
    }
    v12 = -1073741811;
  }
  else
  {
    v12 = -1073741130;
  }
LABEL_33:
  ExReleasePushLockSharedEx((char *)this + 1152, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v8);
  return v12;
}
