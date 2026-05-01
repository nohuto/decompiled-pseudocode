/*
 * XREFs of ??$CreateRefCountedObj@USERVICE_AVAILABILITY_CHANGED_DATA@@U1@@@YA?AV?$ComPtr@V?$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@@WRL@Microsoft@@$$QEAUSERVICE_AVAILABILITY_CHANGED_DATA@@@Z @ 0x1800194EC
 * Callers:
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800159F8 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CreateRefCountedObj<SERVICE_AVAILABILITY_CHANGED_DATA,SERVICE_AVAILABILITY_CHANGED_DATA>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rcx

  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[1] = 0LL;
    v4[2] = 0LL;
    v6 = *a2;
    *a2 = 0LL;
    v7 = v4[1];
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v5[1] = v6;
    v8 = a2[1];
    a2[1] = 0LL;
    v9 = v5[2];
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v5[2] = v8;
    *((_DWORD *)v5 + 10) = *((_DWORD *)a2 + 8);
    *((_DWORD *)v5 + 6) = *((_DWORD *)a2 + 4);
    v5[4] = a2[3];
    a2[3] = 0LL;
    *((_DWORD *)a2 + 8) = 0;
    *((_DWORD *)v5 + 12) = 0;
    *v5 = &CRefCountedObject<SERVICE_AVAILABILITY_CHANGED_DATA>::`vftable';
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
