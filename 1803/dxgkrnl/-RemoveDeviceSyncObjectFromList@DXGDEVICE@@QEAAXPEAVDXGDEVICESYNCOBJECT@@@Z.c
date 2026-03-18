/*
 * XREFs of ?RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C00F28A4
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00BD4FC (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::RemoveDeviceSyncObjectFromList(DXGDEVICE *this, struct DXGDEVICESYNCOBJECT ***a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGDEVICESYNCOBJECT **v6; // rax
  struct DXGDEVICESYNCOBJECT **v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !*((_DWORD *)this + 18)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13))
    && !*((_BYTE *)this + 1745) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v8 + 24) = 7587LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 7588LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v6 = *a2;
  if ( (*a2)[1] != (struct DXGDEVICESYNCOBJECT *)a2 || (v7 = a2[1], *v7 != (struct DXGDEVICESYNCOBJECT *)a2) )
    __fastfail(3u);
  *v7 = (struct DXGDEVICESYNCOBJECT *)v6;
  v6[1] = (struct DXGDEVICESYNCOBJECT *)v7;
}
