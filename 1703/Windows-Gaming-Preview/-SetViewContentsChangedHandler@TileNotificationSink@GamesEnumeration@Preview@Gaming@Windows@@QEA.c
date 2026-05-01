/*
 * XREFs of ?SetViewContentsChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z@std@@@Z @ 0x18001E5FC
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18000A950 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_BYTE *__fastcall Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::SetViewContentsChangedHandler(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // r8
  _BYTE *result; // rax
  _BYTE *v6; // r8
  _BYTE *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE *v11; // rdx
  _BYTE *v12; // rdx
  _BYTE v13[56]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE *v14; // [rsp+70h] [rbp-1h]
  _BYTE v15[56]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE *v16; // [rsp+B0h] [rbp+3Fh]

  v2 = a1 + 184;
  v3 = 0LL;
  v14 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v4 )
  {
    v3 = (_BYTE *)(**v4)(v4, v13);
    v14 = v3;
  }
  result = v13;
  if ( v3 != v13 && *(_QWORD *)(v2 + 56) != v2 )
  {
    result = v3;
    v3 = *(_BYTE **)(v2 + 56);
    v14 = v3;
    *(_QWORD *)(v2 + 56) = result;
    goto LABEL_25;
  }
  v6 = 0LL;
  v16 = 0LL;
  if ( v3 )
  {
    result = v13;
    if ( v3 == v13 )
    {
      result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v3 + 8LL))(v3, v15);
      v6 = result;
      v16 = result;
      v3 = v14;
      if ( !v14 )
        goto LABEL_12;
      v7 = v13;
      LOBYTE(v7) = v14 != v13;
      result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v14 + 32LL))(v14, v7, result);
      v6 = v16;
    }
    else
    {
      v6 = v3;
      v16 = v3;
    }
    v3 = 0LL;
    v14 = 0LL;
  }
LABEL_12:
  v8 = *(_QWORD *)(v2 + 56);
  if ( !v8 )
    goto LABEL_19;
  v3 = *(_BYTE **)(v2 + 56);
  if ( v8 == v2 )
  {
    result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 8LL))(v3, v13);
    v3 = result;
    v14 = result;
    v10 = *(_QWORD *)(v2 + 56);
    if ( !v10 )
    {
      v6 = v16;
      goto LABEL_19;
    }
    LOBYTE(v9) = v10 != v2;
    result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 32LL))(*(_QWORD *)(v2 + 56), v9);
    v3 = v14;
    v6 = v16;
  }
  else
  {
    v14 = *(_BYTE **)(v2 + 56);
  }
  *(_QWORD *)(v2 + 56) = 0LL;
LABEL_19:
  if ( v6 )
  {
    result = v15;
    if ( v6 == v15 )
    {
      result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 8LL))(v6, v2);
      *(_QWORD *)(v2 + 56) = result;
      if ( v16 )
      {
        v11 = v15;
        LOBYTE(v11) = v16 != v15;
        result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v16 + 32LL))(v16, v11);
      }
      v3 = v14;
    }
    else
    {
      *(_QWORD *)(v2 + 56) = v6;
    }
  }
LABEL_25:
  if ( v3 )
  {
    v12 = v13;
    LOBYTE(v12) = v3 != v13;
    return (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v3 + 32LL))(v3, v12);
  }
  return result;
}
