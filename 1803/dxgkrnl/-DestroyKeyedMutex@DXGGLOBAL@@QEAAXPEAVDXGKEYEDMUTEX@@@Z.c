/*
 * XREFs of ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1C01C05F4
 * Callers:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00333A4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C00349A4 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGGLOBAL::DestroyKeyedMutex(struct _KTHREAD **this, struct DXGKEYEDMUTEX ***a2)
{
  __int64 v4; // rax
  struct DXGKEYEDMUTEX **v5; // rdx
  struct DXGKEYEDMUTEX **v6; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 4313LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 44));
  v5 = *a2;
  if ( (*a2)[1] != (struct DXGKEYEDMUTEX *)a2 || (v6 = a2[1], *v6 != (struct DXGKEYEDMUTEX *)a2) )
    __fastfail(3u);
  *v6 = (struct DXGKEYEDMUTEX *)v5;
  v5[1] = (struct DXGKEYEDMUTEX *)v6;
  DXGFASTMUTEX::Release(this + 44);
  DXGKEYEDMUTEX::`scalar deleting destructor'((DXGKEYEDMUTEX *)a2);
}
