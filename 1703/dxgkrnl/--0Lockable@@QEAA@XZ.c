/*
 * XREFs of ??0Lockable@@QEAA@XZ @ 0x1C0122994
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0114098 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C000BA00 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

Lockable *__fastcall Lockable::Lockable(Lockable *this)
{
  DXGFASTMUTEX *v2; // rax
  DXGFASTMUTEX *v3; // rdi
  DXGFASTMUTEX *v4; // rcx
  __int64 v6; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 4) = 1;
  v2 = (DXGFASTMUTEX *)operator new(0x28uLL, 0x4E506456u, (POOL_TYPE)512);
  v3 = v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_DWORD *)v2 + 6) = 0;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_DWORD *)v2 + 7) = 17;
    *((_DWORD *)v2 + 8) = 13;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = (DXGFASTMUTEX *)*((_QWORD *)this + 3);
  if ( v3 != v4 && v4 )
    DXGFASTMUTEX::`scalar deleting destructor'(v4);
  *((_QWORD *)this + 3) = v3;
  if ( v3 )
  {
    *((_DWORD *)this + 4) = 2;
  }
  else
  {
    v6 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v6 + 24) = this;
    WdLogEvent5_WdLowResource(v6);
    *((_DWORD *)this + 2) = -1073741801;
  }
  return this;
}
