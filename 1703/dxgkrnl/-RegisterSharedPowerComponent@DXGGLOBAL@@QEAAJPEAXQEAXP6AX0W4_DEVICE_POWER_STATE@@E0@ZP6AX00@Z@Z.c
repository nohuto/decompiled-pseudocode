/*
 * XREFs of ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@Z@Z @ 0x1C0196520
 * Callers:
 *     DxgRegisterSharedPowerComponent @ 0x1C0184D2C (DxgRegisterSharedPowerComponent.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C003837C (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C0194C9C (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C019737C (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::RegisterSharedPowerComponent(
        DXGGLOBAL *this,
        struct DXGADAPTER *a2,
        __int64 *a3,
        void (*a4)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *),
        void (*a5)(void *, void *))
{
  __int64 **v6; // rdi
  __int64 **v7; // r14
  __int64 *v8; // rbx
  int v11; // ebp
  void **v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // r14
  __int64 v18; // rax
  void **v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  void *v32; // rcx
  __int64 v33; // rax
  struct _KTHREAD **v35; // [rsp+20h] [rbp-48h]

  v6 = (__int64 **)((char *)this + 1192);
  v35 = (struct _KTHREAD **)((char *)this + 400);
  v7 = (__int64 **)*((_QWORD *)this + 149);
  v8 = 0LL;
  v11 = 0;
  v12 = 0LL;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 400));
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 1152));
  if ( !DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v11 = -1073741130;
LABEL_3:
    v17 = 0;
    goto LABEL_23;
  }
  while ( v7 != v6 && v7 )
  {
    if ( v7[3] == a3 && v7[4] == (__int64 *)a2 )
    {
      v11 = -1073740008;
      v18 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      *(_QWORD *)(v18 + 24) = -1073740008LL;
      WdLogEvent5_WdWarning(v18);
      goto LABEL_3;
    }
    v7 = (__int64 **)*v7;
  }
  v17 = 1;
  v19 = (void **)operator new(0x10uLL, 0x4B677844u, PagedPool);
  v12 = v19;
  if ( v19 )
  {
    v19[1] = v19;
    *v19 = v19;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v21 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v21 + 24) = 4199LL;
    WdLogEvent5_WdLowResource(v21);
    v11 = -1073741801;
    goto LABEL_3;
  }
  v22 = (__int64 *)operator new(0x40uLL, 0x4B677844u, PagedPool);
  v8 = v22;
  if ( v22 )
  {
    v22[2] = (__int64)this;
    *v22 = 0LL;
    v22[1] = 0LL;
    v22[5] = (__int64)a4;
    v22[6] = (__int64)a5;
    v22[3] = (__int64)a3;
    v22[4] = (__int64)a2;
    v22[7] = (__int64)v12;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v25 = *v6;
    if ( (__int64 **)(*v6)[1] != v6 )
      __fastfail(3u);
    *v8 = (__int64)v25;
    v8[1] = (__int64)v6;
    v25[1] = (__int64)v8;
    *v6 = v8;
  }
  else
  {
    v24 = WdLogNewEntry5_WdLowResource(v23);
    *(_QWORD *)(v24 + 24) = 4208LL;
    WdLogEvent5_WdLowResource(v24);
    v17 = 0;
    v11 = -1073741801;
  }
LABEL_23:
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 144, v13, v15, v16);
  DXGFASTMUTEX::Release(v35, v26, v27, v28);
  if ( v11 < 0 )
  {
    if ( v12 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v12, v29, v30, v31);
    if ( v8 )
    {
      DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT((DXGSHAREDPOWERINUSELISTOBJECT *)v8);
      operator delete(v32);
    }
    if ( v17 )
    {
      v33 = **v6;
      if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v33 + 8) != *v6 )
        __fastfail(3u);
      *v6 = (__int64 *)v33;
      *(_QWORD *)(v33 + 8) = v6;
    }
  }
  return (unsigned int)v11;
}
