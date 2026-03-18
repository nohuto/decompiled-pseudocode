/*
 * XREFs of _PnpValidateObjectName @ 0x14051C15C
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x14051A080 (PiDqOpenUserObjectRegKey.c)
 *     PiDmObjectCreate @ 0x1405D3AB4 (PiDmObjectCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     _PnpValidateObjectNameDispatch @ 0x14051C224 (_PnpValidateObjectNameDispatch.c)
 */

__int64 __fastcall PnpValidateObjectName(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rsi
  __int64 (__fastcall *v8)(__int64, __int64, _QWORD, __int64, int, _DWORD *); // rdi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  _DWORD v16[20]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(_QWORD *)&PiPnpRtlCtx;
  memset(v16, 0, sizeof(v16));
  v8 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _DWORD *))(*(_QWORD *)&PiPnpRtlCtx + 488LL);
  v16[4] = a4;
  if ( v8 )
  {
    v9 = v8(*(_QWORD *)&PiPnpRtlCtx, a2, a3, 1LL, 1, v16);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return v16[0];
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  v10 = PnpValidateObjectNameDispatch(v4, a2, a3, v16[4]);
  v11 = v10;
  if ( !v8 )
    return v11;
  v16[0] = v10;
  v13 = v8(v4, a2, a3, 1LL, 2, v16);
  v14 = v13;
  if ( v13 == -1073741822 )
    return v11;
  if ( v13 == -1073741536 )
    return v16[0];
  v15 = v11;
  if ( v14 )
    return (unsigned int)-1073741595;
  return v15;
}
