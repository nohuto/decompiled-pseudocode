/*
 * XREFs of WmipClearIrpObjectList @ 0x140108C68
 * Callers:
 *     WmipCompleteGuidIrpWithError @ 0x1400DEA70 (WmipCompleteGuidIrpWithError.c)
 *     WmipWriteWnodeToObject @ 0x1401081A4 (WmipWriteWnodeToObject.c)
 *     WmipNotificationIrpCancel @ 0x140108C00 (WmipNotificationIrpCancel.c)
 *     WmipReceiveNotifications @ 0x14011FCA4 (WmipReceiveNotifications.c)
 * Callees:
 *     <none>
 */

void __fastcall WmipClearIrpObjectList(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // r8

  v1 = (_QWORD *)(a1 + 120);
  v2 = *(_QWORD **)(a1 + 120);
  while ( v2 != v1 )
  {
    v3 = v2 - 10;
    v2 = (_QWORD *)*v2;
    v3[9] = 0LL;
    v4 = v3 + 10;
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
}
