/*
 * XREFs of ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C0195BE4
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C003837C (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C0194C9C (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsRemoving(DXGGLOBAL *this, void *const a2)
{
  struct _KTHREAD **v2; // rsi
  DXGSHAREDPOWERINUSELISTOBJECT **v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  DXGSHAREDPOWERINUSELISTOBJECT *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  DXGSHAREDPOWERINUSELISTOBJECT **v12; // r15
  DXGSHAREDPOWERINUSELISTOBJECT *v13; // rdi
  DXGSHAREDPOWERINUSELISTOBJECT *v14; // rcx
  DXGSHAREDPOWERINUSELISTOBJECT *v15; // rdx
  DXGSHAREDPOWERINUSELISTOBJECT **v16; // rax
  void *v17; // rcx
  void **v18; // rcx
  DXGSHAREDPOWERINUSELISTOBJECT *v19; // rcx
  DXGSHAREDPOWERINUSELISTOBJECT *v20; // rdx
  DXGSHAREDPOWERINUSELISTOBJECT **v21; // rax
  void *v22; // rcx

  v2 = (struct _KTHREAD **)((char *)this + 1152);
  v4 = (DXGSHAREDPOWERINUSELISTOBJECT **)((char *)this + 1192);
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 1152));
  v8 = *v4;
  while ( v8 != (DXGSHAREDPOWERINUSELISTOBJECT *)v4 && v8 )
  {
    if ( *((void *const *)v8 + 4) == a2 )
    {
      (*((void (__fastcall **)(void *const, _QWORD))v8 + 6))(a2, *((_QWORD *)v8 + 3));
      v12 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v8 + 7);
      v13 = *v12;
      while ( v13 != (DXGSHAREDPOWERINUSELISTOBJECT *)v12 && v13 )
      {
        v14 = v13;
        v13 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v13;
        v15 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v14;
        v16 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v14 + 1);
        if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
          __fastfail(3u);
        *v16 = v15;
        *((_QWORD *)v15 + 1) = v16;
        DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v14);
        operator delete(v17);
      }
      v18 = (void **)*((_QWORD *)v8 + 7);
      if ( v18 )
        DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v18, v9, v10, v11);
      v19 = v8;
      v8 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v8;
      v20 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v19;
      v21 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v19 + 1);
      if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)v19 + 8LL) != v19 || *v21 != v19 )
        __fastfail(3u);
      *v21 = v20;
      *((_QWORD *)v20 + 1) = v21;
      DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v19);
      operator delete(v22);
    }
    else
    {
      v8 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v8;
    }
  }
  DXGFASTMUTEX::Release(v2, v5, v6, v7);
}
