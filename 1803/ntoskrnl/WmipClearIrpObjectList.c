/*
 * XREFs of WmipClearIrpObjectList @ 0x1400B7188
 * Callers:
 *     WmipCompleteGuidIrpWithError @ 0x1400738A4 (WmipCompleteGuidIrpWithError.c)
 *     WmipNotificationIrpCancel @ 0x1400B7120 (WmipNotificationIrpCancel.c)
 *     WmipReceiveNotifications @ 0x1400CDDCC (WmipReceiveNotifications.c)
 *     WmipWriteWnodeToObject @ 0x140154818 (WmipWriteWnodeToObject.c)
 * Callees:
 *     <none>
 */

void __fastcall WmipClearIrpObjectList(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // r9
  _QWORD *v6; // rax

  v1 = (_QWORD *)(a1 + 120);
  v2 = *(_QWORD **)(a1 + 120);
  while ( v2 != v1 )
  {
    v3 = v2;
    v4 = v2;
    v2 = (_QWORD *)*v2;
    *(v4 - 1) = 0LL;
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
}
