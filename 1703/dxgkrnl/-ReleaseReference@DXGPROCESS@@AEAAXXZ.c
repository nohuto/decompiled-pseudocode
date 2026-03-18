/*
 * XREFs of ?ReleaseReference@DXGPROCESS@@AEAAXXZ @ 0x1C0006C40
 * Callers:
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C009B128 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C009C184 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     ??_GDXGPROCESS@@AEAAPEAXI@Z @ 0x1C0006CDC (--_GDXGPROCESS@@AEAAPEAXI@Z.c)
 */

void __fastcall DXGPROCESS::ReleaseReference(DXGPROCESS *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax

  if ( *((__int64 *)this + 3) <= 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 894LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (*((_QWORD *)this + 3))-- == 1LL )
    DXGPROCESS::`scalar deleting destructor'(this, 1u);
}
