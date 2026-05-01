/*
 * XREFs of ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x180145AC0
 * Callers:
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x18013D1FC (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *__fastcall WindowReadyState::SetCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _BYTE *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, _BYTE *); // r8
  _BYTE *result; // rax
  _BYTE *v7; // rdx
  _BYTE *v8; // r8
  _BYTE *v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r8
  _BYTE *v12; // rdx
  _BYTE *v13; // rdx
  __int64 v14; // rcx
  _BYTE v15[56]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE *v16; // [rsp+70h] [rbp-1h]
  _BYTE v17[56]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE *v18; // [rsp+B0h] [rbp+3Fh]

  v3 = a1 + 40;
  v4 = 0LL;
  v16 = 0LL;
  v5 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v5 )
  {
    v4 = (_BYTE *)(**v5)(v5, v15);
    v16 = v4;
  }
  result = v4;
  v7 = v15;
  if ( v4 != v15 && *(_QWORD *)(v3 + 56) != v3 )
  {
    v4 = *(_BYTE **)(v3 + 56);
    v16 = v4;
    *(_QWORD *)(v3 + 56) = result;
    goto LABEL_25;
  }
  v8 = 0LL;
  v18 = 0LL;
  if ( v4 )
  {
    result = v15;
    if ( v4 == v15 )
    {
      result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v4 + 8LL))(v4, v17);
      v8 = result;
      v18 = result;
      v4 = v16;
      if ( !v16 )
        goto LABEL_12;
      v9 = v15;
      LOBYTE(v9) = v16 != v15;
      result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v16 + 32LL))(v16, v9, result);
      v8 = v18;
    }
    else
    {
      v8 = v4;
      v18 = v4;
    }
    v4 = 0LL;
    v16 = 0LL;
  }
LABEL_12:
  v10 = *(_QWORD *)(v3 + 56);
  if ( !v10 )
    goto LABEL_19;
  v4 = *(_BYTE **)(v3 + 56);
  if ( v10 == v3 )
  {
    result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v10 + 8LL))(v4, v15);
    v4 = result;
    v16 = result;
    v11 = *(_QWORD *)(v3 + 56);
    if ( !v11 )
    {
      v8 = v18;
      goto LABEL_19;
    }
    LOBYTE(v7) = v11 != v3;
    result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v11 + 32LL))(*(_QWORD *)(v3 + 56), v7);
    v4 = v16;
    v8 = v18;
  }
  else
  {
    v16 = *(_BYTE **)(v3 + 56);
  }
  *(_QWORD *)(v3 + 56) = 0LL;
LABEL_19:
  if ( v8 )
  {
    result = v17;
    if ( v8 == v17 )
    {
      result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v8 + 8LL))(v8, v3);
      *(_QWORD *)(v3 + 56) = result;
      if ( v18 )
      {
        v12 = v17;
        LOBYTE(v12) = v18 != v17;
        result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v18 + 32LL))(v18, v12);
      }
      v4 = v16;
    }
    else
    {
      *(_QWORD *)(v3 + 56) = v8;
    }
  }
LABEL_25:
  if ( v4 )
  {
    v13 = v15;
    LOBYTE(v13) = v4 != v15;
    result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v4 + 32LL))(v4, v13);
  }
  v14 = *(_QWORD *)(a2 + 56);
  if ( v14 )
  {
    LOBYTE(v7) = v14 != a2;
    result = (_BYTE *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 32LL))(v14, v7);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return result;
}
