/*
 * XREFs of ??0DXGDISPLAYMANAGERSOURCEOBJECT@@QEAA@PEAVDXGDISPLAYMANAGEROBJECT@@U_LUID@@I@Z @ 0x1C01D9258
 * Callers:
 *     ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1C01D964C (-CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@VDXGFASTMUTEX@@@@QEAAXPEAVDXGFASTMUTEX@@@Z @ 0x1C0013E30 (-reset@-$auto_ptr@VDXGFASTMUTEX@@@@QEAAXPEAVDXGFASTMUTEX@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DXGDISPLAYMANAGERSOURCEOBJECT *__fastcall DXGDISPLAYMANAGERSOURCEOBJECT::DXGDISPLAYMANAGERSOURCEOBJECT(
        DXGDISPLAYMANAGERSOURCEOBJECT *this,
        struct DXGDISPLAYMANAGEROBJECT *a2,
        struct _LUID a3,
        int a4)
{
  _QWORD *v5; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &DXGDISPLAYMANAGERSOURCEOBJECT::`vftable';
  *((struct _LUID *)this + 4) = a3;
  *((_DWORD *)this + 10) = a4;
  *((_QWORD *)this + 6) = a2;
  *((_BYTE *)this + 56) = 1;
  *((_QWORD *)this + 8) = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v5 = operator new(0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    *((_DWORD *)v5 + 6) = 0;
    v5[2] = 0LL;
    *((_DWORD *)v5 + 7) = 80;
    *((_DWORD *)v5 + 8) = 1;
  }
  auto_ptr<DXGFASTMUTEX>::reset((DXGFASTMUTEX **)this + 8, (DXGFASTMUTEX *)v5);
  return this;
}
