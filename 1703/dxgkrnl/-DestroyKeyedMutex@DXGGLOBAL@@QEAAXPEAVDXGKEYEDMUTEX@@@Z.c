/*
 * XREFs of ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1C01A5A18
 * Callers:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00385A8 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::DestroyKeyedMutex(struct _KTHREAD **this, struct DXGKEYEDMUTEX *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  struct DXGKEYEDMUTEX **v10; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v6 + 24) = 3945LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 43));
  v9 = *(_QWORD *)a2;
  v10 = (struct DXGKEYEDMUTEX **)*((_QWORD *)a2 + 1);
  if ( *(struct DXGKEYEDMUTEX **)(*(_QWORD *)a2 + 8LL) != a2 || *v10 != a2 )
    __fastfail(3u);
  *v10 = (struct DXGKEYEDMUTEX *)v9;
  *(_QWORD *)(v9 + 8) = v10;
  DXGFASTMUTEX::Release(this + 43, v9, v7, v8);
  DXGKEYEDMUTEX::`scalar deleting destructor'(a2);
}
