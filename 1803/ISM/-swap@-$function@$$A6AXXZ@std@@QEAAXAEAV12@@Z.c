/*
 * XREFs of ?swap@?$function@$$A6AXXZ@std@@QEAAXAEAV12@@Z @ 0x1800CD970
 * Callers:
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800C70E0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall std::function<void (void)>::swap(__int64 a1, __int64 a2)
{
  _BYTE *result; // rax
  _BYTE *v5; // rcx
  _BYTE *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  _BYTE v13[56]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE *v14; // [rsp+68h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF

  result = &retaddr;
  v5 = *(_BYTE **)(a1 + 56);
  if ( v5 != (_BYTE *)a1 )
  {
    result = *(_BYTE **)(a2 + 56);
    if ( result != (_BYTE *)a2 )
    {
      *(_QWORD *)(a1 + 56) = result;
      *(_QWORD *)(a2 + 56) = v5;
      return result;
    }
  }
  v6 = 0LL;
  v14 = 0LL;
  if ( v5 )
  {
    if ( v5 == (_BYTE *)a1 )
    {
      result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v5 + 8LL))(v5, v13);
      v6 = result;
      v14 = result;
      v8 = *(_QWORD *)(a1 + 56);
      if ( !v8 )
        goto LABEL_10;
      LOBYTE(v7) = v8 != a1;
      result = (_BYTE *)(*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v7, result);
      v6 = v14;
    }
    else
    {
      v6 = v5;
      v14 = v5;
    }
    *(_QWORD *)(a1 + 56) = 0LL;
  }
LABEL_10:
  v9 = *(_QWORD *)(a2 + 56);
  if ( !v9 )
    goto LABEL_17;
  if ( v9 == a2 )
  {
    result = (_BYTE *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, a1);
    *(_QWORD *)(a1 + 56) = result;
    v11 = *(_QWORD *)(a2 + 56);
    if ( !v11 )
    {
      v6 = v14;
      goto LABEL_17;
    }
    LOBYTE(v10) = v11 != a2;
    result = (_BYTE *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v10);
    v6 = v14;
  }
  else
  {
    *(_QWORD *)(a1 + 56) = v9;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
LABEL_17:
  if ( v6 )
  {
    result = v13;
    if ( v6 == v13 )
    {
      result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 8LL))(v6, a2);
      *(_QWORD *)(a2 + 56) = result;
      if ( v14 )
      {
        v12 = v13;
        LOBYTE(v12) = v14 != v13;
        return (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v14 + 32LL))(v14, v12);
      }
    }
    else
    {
      *(_QWORD *)(a2 + 56) = v6;
    }
  }
  return result;
}
