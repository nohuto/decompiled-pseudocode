/*
 * XREFs of ExpPrepareNewSvmDevice @ 0x1402BC0E8
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1402BB7A0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewSvmDevice(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 (__fastcall *v5)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  int v9; // eax
  int v10; // ebx
  size_t v11; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD *, _QWORD); // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  int v19; // [rsp+38h] [rbp-40h] BYREF
  int v20; // [rsp+3Ch] [rbp-3Ch]

  *a4 = 0LL;
  v5 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(a3 + 64);
  v18 = 0LL;
  v9 = v5(*(_QWORD *)(a3 + 8), 0LL, 0LL, &v18);
  v10 = v9;
  if ( v9 == -1073741789 )
  {
    if ( !v18 )
      return (unsigned int)-1073741823;
    v11 = v18 + 120;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v18 + 120, 0x65447845u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v11);
    *((_DWORD *)v13 + 6) = 1;
    v13[2] = a1;
    *((_OWORD *)v13 + 2) = *(_OWORD *)a3;
    *((_OWORD *)v13 + 3) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)v13 + 4) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)v13 + 5) = *(_OWORD *)(a3 + 48);
    v13[12] = *(_QWORD *)(a3 + 64);
    v14 = (__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))v13[12];
    v15 = v13[5];
    v13[13] = v13 + 15;
    v10 = v14(v15, v18, v13 + 15, 0LL);
    if ( v10 < 0 )
      goto LABEL_19;
    v10 = ((__int64 (__fastcall *)(_QWORD, int *))v13[8])(v13[5], &v19);
    if ( v10 < 0 )
      goto LABEL_19;
    if ( (v19 & 7) == 7 && 1 << (v20 & 0x1F) >= (unsigned int)ExpSvmAgents )
    {
      _InterlockedIncrement(&ExTbFlushActive);
      v10 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, _QWORD *))HalIommuDispatch[3])(a2, v13[13], &v19, v13 + 14);
      if ( v10 >= 0 )
      {
        v10 = ((__int64 (__fastcall *)(_QWORD, int *, __int64 (__fastcall *)(__int64, int, __int64), _QWORD))v13[9])(
                v13[5],
                &v19,
                ExSvmDevicePowerCallback,
                v13[14]);
        if ( v10 < 0 )
        {
LABEL_19:
          if ( v13[14] )
          {
            ((void (__fastcall *)(__int64))HalIommuDispatch[7])(a2);
            _InterlockedDecrement(&ExTbFlushActive);
          }
          ExFreePoolWithTag(v13, 0);
          return (unsigned int)v10;
        }
        (*(void (__fastcall **)(_QWORD))(a3 + 16))(*(_QWORD *)(a3 + 8));
        v16 = ExpSvmDevices;
        if ( *(__int64 **)(ExpSvmDevices + 8) != &ExpSvmDevices )
          __fastfail(3u);
        *v13 = ExpSvmDevices;
        v13[1] = &ExpSvmDevices;
        *(_QWORD *)(v16 + 8) = v13;
        ExpSvmDevices = (__int64)v13;
        *a4 = v13;
      }
      else
      {
        _InterlockedDecrement(&ExTbFlushActive);
      }
    }
    else
    {
      v10 = -1073741585;
    }
    if ( v10 >= 0 )
      return (unsigned int)v10;
    goto LABEL_19;
  }
  if ( v9 >= 0 )
    return (unsigned int)-1073741823;
  return (unsigned int)v10;
}
