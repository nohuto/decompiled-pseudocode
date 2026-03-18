/*
 * XREFs of ?OnSourceObjectDeleted@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z @ 0x1C01E3DEC
 * Callers:
 *     ??1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ @ 0x1C01E3740 (--1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::OnSourceObjectDeleted(
        struct DXGFASTMUTEX *const *this,
        struct DXGDISPLAYMANAGERSOURCEOBJECT *a2)
{
  struct DXGDISPLAYMANAGERSOURCEOBJECT *v4; // rcx
  DXGDISPLAYMANAGEROBJECT *v5; // rdx
  DXGDISPLAYMANAGEROBJECT *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( a2 )
  {
    v4 = 0LL;
    v5 = (DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 14);
    if ( v5 != (DXGDISPLAYMANAGEROBJECT *)(this + 14) )
      v4 = (DXGDISPLAYMANAGEROBJECT *)((char *)v5 - 8);
    while ( v4 && v4 != a2 )
    {
      v6 = (DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)v4 + 1);
      v4 = (DXGDISPLAYMANAGEROBJECT *)((char *)v6 - 8);
      if ( v6 == (DXGDISPLAYMANAGEROBJECT *)(this + 14) )
        v4 = 0LL;
    }
    if ( v4 )
    {
      v7 = (_QWORD *)((char *)a2 + 8);
      v8 = *((_QWORD *)a2 + 1);
      if ( *(struct DXGDISPLAYMANAGERSOURCEOBJECT **)(v8 + 8) != (struct DXGDISPLAYMANAGERSOURCEOBJECT *)((char *)a2 + 8)
        || (v9 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v9 != v7) )
      {
        __fastfail(3u);
      }
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      *v7 = 0LL;
      *((_QWORD *)a2 + 2) = 0LL;
      --*((_QWORD *)this + 16);
    }
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
}
