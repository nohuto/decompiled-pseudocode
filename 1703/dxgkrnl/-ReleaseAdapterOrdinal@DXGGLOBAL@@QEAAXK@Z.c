/*
 * XREFs of ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0196734
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C016D848 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseAdapterOrdinal(struct _RTL_BITMAP *this, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v4; // esi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = a2;
  if ( (unsigned int)a2 >= this[51].SizeOfBitMap )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 2466LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&this[28].Buffer);
  RtlClearBits(this + 31, v4, 1u);
  DXGFASTMUTEX::Release((struct _KTHREAD **)&this[28].Buffer, v7, v8, v9);
}
