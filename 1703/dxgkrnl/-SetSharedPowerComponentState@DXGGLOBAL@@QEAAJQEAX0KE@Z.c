/*
 * XREFs of ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C0196D24
 * Callers:
 *     DxgSetSharedPowerComponentStateCB @ 0x1C0184E80 (DxgSetSharedPowerComponentStateCB.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C002219C (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0022664 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C0194C9C (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C019737C (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
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
  DXGSHAREDPOWERINUSELISTOBJECT **v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ecx
  char v17; // al
  DXGSHAREDPOWERINUSELISTOBJECT *i; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rdx
  DXGSHAREDPOWERINUSELISTOBJECT *v24; // rdx
  DXGSHAREDPOWERINUSELISTOBJECT **v25; // rax
  void *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int16 v31; // [rsp+7Ah] [rbp+22h]

  v31 = HIWORD(a4);
  v5 = (char *)this + 1192;
  v7 = (char *)*((_QWORD *)this + 149);
  v8 = (struct _KTHREAD **)((char *)this + 400);
  v12 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 400));
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 1152));
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v16 = (unsigned __int16)a4 + *((unsigned __int16 *)a2 + v31 + 1168);
    if ( v16 < *((_DWORD *)a2 + 616) && *(_DWORD *)(520LL * v16 + *((_QWORD *)a2 + 290) + 208) == 7 )
    {
      while ( v7 != v5 && v7 )
      {
        if ( *((DXGADAPTER **)v7 + 4) == a2 && *((void *const *)v7 + 3) == a3 )
        {
          v13 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v7 + 7);
          v17 = 0;
          for ( i = *v13; i != (DXGSHAREDPOWERINUSELISTOBJECT *)v13; i = *(DXGSHAREDPOWERINUSELISTOBJECT **)i )
          {
            if ( !i )
              goto LABEL_17;
            if ( *((_DWORD *)i + 6) == a4 )
            {
              v17 = 1;
              goto LABEL_17;
            }
          }
          i = 0LL;
LABEL_17:
          if ( a5 )
          {
            if ( !v17 )
            {
              v19 = operator new(0x20uLL, 0x4B677844u, PagedPool);
              if ( v19 )
              {
                v20 = 0LL;
                v19[2] = this;
                *v19 = 0LL;
                v19[1] = 0LL;
                *((_DWORD *)v19 + 6) = a4;
              }
              else
              {
                v19 = 0LL;
              }
              if ( v19 )
              {
                v22 = (__int64 *)*((_QWORD *)v7 + 7);
                v23 = *v22;
                if ( *(__int64 **)(*v22 + 8) != v22 )
                  __fastfail(3u);
                *v19 = v23;
                v19[1] = v22;
                *(_QWORD *)(v23 + 8) = v19;
                *v22 = (__int64)v19;
                DXGADAPTER::SetPowerComponentActiveCB(a2, a4);
              }
              else
              {
                v21 = WdLogNewEntry5_WdLowResource(v20);
                *(_QWORD *)(v21 + 24) = 4309LL;
                WdLogEvent5_WdLowResource(v21);
                v12 = -1073741801;
              }
            }
          }
          else if ( v17 )
          {
            v24 = *(DXGSHAREDPOWERINUSELISTOBJECT **)i;
            v25 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)i + 1);
            if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)i + 8LL) != i || *v25 != i )
              __fastfail(3u);
            *v25 = v24;
            *((_QWORD *)v24 + 1) = v25;
            DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(i);
            operator delete(v26);
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
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 144, (__int64)v13, v14, v15);
  DXGFASTMUTEX::Release(v8, v27, v28, v29);
  return v12;
}
