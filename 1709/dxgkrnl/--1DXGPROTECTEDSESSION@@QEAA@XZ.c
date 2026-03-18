/*
 * XREFs of ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1C0029664
 * Callers:
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C0029734 (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007C94 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGPROTECTEDSESSION::~DXGPROTECTEDSESSION(struct DXGSYNCOBJECT **this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  struct DXGSYNCOBJECT *v5; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGSYNCOBJECT *v7; // rcx
  struct DXGSYNCOBJECT *v8; // rcx

  if ( *((_DWORD *)this + 18) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 42LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( this[17] )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 43LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 6) != 3 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 44LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this[14];
  if ( v5 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this);
    DXGGLOBAL::DestroySyncObject(Global, v5, 0);
    this[14] = 0LL;
  }
  v7 = this[10];
  if ( v7 )
  {
    operator delete(v7);
    this[10] = 0LL;
  }
  v8 = this[12];
  if ( v8 )
  {
    operator delete(v8);
    this[12] = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 4));
  this[2] = 0LL;
}
