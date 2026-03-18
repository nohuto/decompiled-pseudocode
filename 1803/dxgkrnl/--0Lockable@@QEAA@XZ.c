/*
 * XREFs of ??0Lockable@@QEAA@XZ @ 0x1C0220CF4
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C020F214 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_ptr@VDXGFASTMUTEX@@@@QEAAXPEAVDXGFASTMUTEX@@@Z @ 0x1C001A0E0 (-reset@-$auto_ptr@VDXGFASTMUTEX@@@@QEAAXPEAVDXGFASTMUTEX@@@Z.c)
 */

Lockable *__fastcall Lockable::Lockable(Lockable *this)
{
  DXGFASTMUTEX **v1; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax

  *((_DWORD *)this + 2) = 0;
  v1 = (DXGFASTMUTEX **)((char *)this + 24);
  *(_QWORD *)this = &Lockable::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 4) = 1;
  v3 = operator new[](0x28uLL, 0x4E506456u, (POOL_TYPE)512);
  if ( v3 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    *((_DWORD *)v3 + 6) = 0;
    v3[2] = 0LL;
    *((_DWORD *)v3 + 7) = 17;
    *((_DWORD *)v3 + 8) = 11;
  }
  auto_ptr<DXGFASTMUTEX>::reset(v1, (DXGFASTMUTEX *)v3);
  if ( *v1 )
  {
    *((_DWORD *)this + 4) = 2;
  }
  else
  {
    v5 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v5 + 24) = this;
    WdLogEvent5_WdLowResource(v5);
    *((_DWORD *)this + 2) = -1073741801;
  }
  return this;
}
