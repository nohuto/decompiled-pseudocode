/*
 * XREFs of ExpPrepareNewSvmDevice @ 0x140287DE8
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1402874A0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpPrepareNewSvmDevice(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rbx
  int v10; // edi
  __int64 v11; // rax
  int v13; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+34h] [rbp-54h]

  *a4 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x65447845u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x80uLL);
  v9[2] = a1;
  *((_DWORD *)v9 + 6) = 1;
  *((_OWORD *)v9 + 2) = *(_OWORD *)a3;
  *((_OWORD *)v9 + 3) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)v9 + 4) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)v9 + 5) = *(_OWORD *)(a3 + 48);
  *((_OWORD *)v9 + 6) = *(_OWORD *)(a3 + 64);
  v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))v9[11])(v9[5], v9 + 14);
  if ( v10 >= 0 )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, int *))v9[8])(v9[5], &v13);
    if ( v10 >= 0 )
    {
      if ( (v13 & 7) != 7 || 1 << (v14 & 0x1F) < (unsigned int)ExpSvmAgents )
      {
        v10 = -1073741585;
        goto LABEL_14;
      }
      _InterlockedAdd(&ExTbFlushActive, 1u);
      v10 = ((__int64 (__fastcall *)(__int64, _QWORD, int *, _QWORD *))HalIommuDispatch[3])(a2, v9[14], &v13, v9 + 15);
      if ( v10 < 0 )
      {
        _InterlockedDecrement(&ExTbFlushActive);
        goto LABEL_14;
      }
      v10 = ((__int64 (__fastcall *)(_QWORD, int *, __int64 (__fastcall *)(__int64, int, __int64), _QWORD))v9[9])(
              v9[5],
              &v13,
              ExSvmDevicePowerCallback,
              v9[15]);
      if ( v10 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD))(a3 + 16))(*(_QWORD *)(a3 + 8));
        v11 = ExpSvmDevices;
        if ( *(__int64 **)(ExpSvmDevices + 8) != &ExpSvmDevices )
          __fastfail(3u);
        *v9 = ExpSvmDevices;
        v9[1] = &ExpSvmDevices;
        *(_QWORD *)(v11 + 8) = v9;
        ExpSvmDevices = (__int64)v9;
        *a4 = v9;
LABEL_14:
        if ( v10 >= 0 )
          return (unsigned int)v10;
      }
    }
  }
  if ( v9[15] )
  {
    ((void (__fastcall *)(__int64))HalIommuDispatch[7])(a2);
    _InterlockedDecrement(&ExTbFlushActive);
  }
  ExFreePoolWithTag(v9, 0);
  return (unsigned int)v10;
}
