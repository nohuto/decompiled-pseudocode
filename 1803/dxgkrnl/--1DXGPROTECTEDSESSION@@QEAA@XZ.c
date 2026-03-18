/*
 * XREFs of ??1DXGPROTECTEDSESSION@@QEAA@XZ @ 0x1C0034728
 * Callers:
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C003481C (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0014E70 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGPROTECTEDSESSION::~DXGPROTECTEDSESSION(struct DXGSYNCOBJECT **this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  struct DXGSYNCOBJECT *v6; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGSYNCOBJECT *v8; // rcx
  struct DXGSYNCOBJECT *v9; // rcx

  if ( *((_DWORD *)this + 18) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 44LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( this[18] )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 45LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 6) != 3 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 46LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_BYTE *)this + 136) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 47LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = this[14];
  if ( v6 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)this);
    DXGGLOBAL::DestroySyncObject(Global, v6, 0);
    this[14] = 0LL;
  }
  v8 = this[10];
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    this[10] = 0LL;
  }
  v9 = this[12];
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    this[12] = 0LL;
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 4));
  this[2] = 0LL;
}
