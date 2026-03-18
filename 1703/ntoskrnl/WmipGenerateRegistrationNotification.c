/*
 * XREFs of WmipGenerateRegistrationNotification @ 0x1405A0CC8
 * Callers:
 *     WmipRemoveDS @ 0x1405996CC (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x1405A03B8 (WmipAddDataSource.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WmipReferenceEntry @ 0x14055536C (WmipReferenceEntry.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140595CB0 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipCachePtrs @ 0x1405A0DA8 (WmipCachePtrs.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405A0E6C (WmipEnableCollectionForNewGuid.c)
 *     WmipSendGuidUpdateNotifications @ 0x1405A0F20 (WmipSendGuidUpdateNotifications.c)
 */

__int64 __fastcall WmipGenerateRegistrationNotification(ULONG_PTR a1, unsigned int a2)
{
  __int64 v4; // rdx
  void *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  void *v12; // [rsp+78h] [rbp+20h] BYREF

  WmipReferenceEntry(a1);
  v4 = 0LL;
  v11 = 0;
  v5 = 0LL;
  v6 = *(_QWORD **)(a1 + 40);
  v10 = 0;
  v12 = 0LL;
  if ( v6 != (_QWORD *)(a1 + 40) )
  {
    do
    {
      v7 = v6 - 5;
      if ( (*(_DWORD *)(v6 - 3) & 8) == 0 )
      {
        v8 = (_QWORD *)(v7[7] + 72LL);
        WmipCachePtrs(*((_DWORD *)v7 + 14) + 72, (_DWORD)v6 - 40, (unsigned int)&v10, (unsigned int)&v11, (__int64)&v12);
        if ( a2 == 1 )
        {
          WmipEnableCollectionForNewGuid(v8, v6 - 5);
        }
        else if ( a2 == 2 )
        {
          WmipDisableCollectionForRemovedGuid(v8, (__int64)(v6 - 5));
        }
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != (_QWORD *)(a1 + 40) );
    v4 = v10;
    v5 = v12;
  }
  WmipSendGuidUpdateNotifications(a2, v4, v5);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)a1);
}
