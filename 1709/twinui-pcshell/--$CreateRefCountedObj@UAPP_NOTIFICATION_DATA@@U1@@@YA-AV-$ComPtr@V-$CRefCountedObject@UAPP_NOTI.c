/*
 * XREFs of ??$CreateRefCountedObj@UAPP_NOTIFICATION_DATA@@U1@@@YA?AV?$ComPtr@V?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@@WRL@Microsoft@@$$QEAUAPP_NOTIFICATION_DATA@@@Z @ 0x18005DE00
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180058EA0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CreateRefCountedObj<APP_NOTIFICATION_DATA,APP_NOTIFICATION_DATA>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rcx

  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[1] = *a2;
    v4[2] = a2[1];
    v6 = a2[2];
    a2[2] = 0LL;
    v7 = v4[3];
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v5[3] = v6;
    v8 = a2[3];
    a2[3] = 0LL;
    v9 = v5[4];
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v5[4] = v8;
    *a2 = 0LL;
    a2[1] = 0LL;
    *((_DWORD *)v5 + 10) = 0;
    *v5 = &CRefCountedObject<APP_NOTIFICATION_DATA>::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5;
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
  return a1;
}
