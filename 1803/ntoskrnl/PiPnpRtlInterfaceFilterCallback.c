/*
 * XREFs of PiPnpRtlInterfaceFilterCallback @ 0x140503A10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x1405037F0 (_CmIsDeviceInterfaceEnabled.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 */

char __fastcall PiPnpRtlInterfaceFilterCallback(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  wchar_t *v8; // rdi
  char v9; // si
  _WORD *v10; // rax
  __int64 (__fastcall *v12)(__int64, const WCHAR *, _QWORD, _QWORD); // rax
  __int64 v13; // rax
  wchar_t *PoolWithTag; // rax
  _BYTE v15[4]; // [rsp+60h] [rbp-19h] BYREF
  int v16; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v17; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v18[2]; // [rsp+70h] [rbp-9h] BYREF

  v5 = a3;
  v8 = 0LL;
  v9 = 0;
  if ( !*(_QWORD *)a4 )
    goto LABEL_2;
  if ( (int)PnpGetObjectProperty(
              PiPnpRtlCtx,
              (_DWORD)a2,
              3,
              0,
              0LL,
              (__int64)&DEVPKEY_DeviceInterface_ClassGuid,
              (__int64)&v16,
              (__int64)v18,
              16,
              (__int64)&v17,
              0) >= 0
    && v16 == 13
    && v17 >= 0x10 )
  {
    v13 = **(_QWORD **)a4 - v18[0];
    if ( !v13 )
      v13 = *(_QWORD *)(*(_QWORD *)a4 + 8LL) - v18[1];
    if ( !v13 )
    {
LABEL_2:
      v10 = *(_WORD **)(a4 + 8);
      if ( !v10 || !*v10 )
        goto LABEL_26;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x47706E50u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return v9;
      if ( (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)a2,
                  3,
                  0,
                  0LL,
                  (__int64)&DEVPKEY_Device_InstanceId,
                  (__int64)&v16,
                  (__int64)PoolWithTag,
                  400,
                  (__int64)&v17,
                  0) >= 0
        && v16 == 18
        && !wcsicmp(*(const wchar_t **)(a4 + 8), v8) )
      {
LABEL_26:
        if ( !*(_BYTE *)(a4 + 16) || CmIsDeviceInterfaceEnabled(a1, a2, a3, (__int64)v15) >= 0 && v15[0] )
        {
          v9 = 1;
          v12 = *(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD, _QWORD))(a4 + 24);
          if ( v12 )
            v9 = v12(a1, a2, v5, *(_QWORD *)(a4 + 32));
        }
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0x47706E50u);
    }
  }
  return v9;
}
