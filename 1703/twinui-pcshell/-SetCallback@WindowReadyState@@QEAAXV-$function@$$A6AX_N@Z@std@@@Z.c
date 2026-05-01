/*
 * XREFs of ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x18011B7C0
 * Callers:
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x180112F74 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_BYTE *__fastcall WindowReadyState::SetCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  _BYTE *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, _BYTE *); // r8
  _BYTE *result; // rax
  _BYTE *v7; // r8
  _BYTE *v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r8
  _BYTE *v11; // rdx
  _BYTE *v12; // rdx
  __int64 v13; // rcx
  _BYTE v14[56]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE *v15; // [rsp+70h] [rbp-1h]
  _BYTE v16[56]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE *v17; // [rsp+B0h] [rbp+3Fh]

  v2 = a2;
  v3 = a1 + 40;
  v4 = 0LL;
  v15 = 0LL;
  v5 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v5 )
  {
    v4 = (_BYTE *)(**v5)(v5, v14);
    v15 = v4;
  }
  result = v14;
  if ( v4 != v14 && *(_QWORD *)(v3 + 56) != v3 )
  {
    result = v4;
    v4 = *(_BYTE **)(v3 + 56);
    v15 = v4;
    *(_QWORD *)(v3 + 56) = result;
    goto LABEL_25;
  }
  v7 = 0LL;
  v17 = 0LL;
  if ( v4 )
  {
    result = v14;
    if ( v4 == v14 )
    {
      result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v4 + 8LL))(v4, v16);
      v7 = result;
      v17 = result;
      v4 = v15;
      if ( !v15 )
        goto LABEL_12;
      v8 = v14;
      LOBYTE(v8) = v15 != v14;
      result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *, _BYTE *))(*(_QWORD *)v15 + 32LL))(v15, v8, result);
      v7 = v17;
    }
    else
    {
      v7 = v4;
      v17 = v4;
    }
    v4 = 0LL;
    v15 = 0LL;
  }
LABEL_12:
  v9 = *(_QWORD *)(v3 + 56);
  if ( !v9 )
    goto LABEL_19;
  v4 = *(_BYTE **)(v3 + 56);
  if ( v9 == v3 )
  {
    result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v9 + 8LL))(v4, v14);
    v4 = result;
    v15 = result;
    v10 = *(_QWORD *)(v3 + 56);
    if ( !v10 )
    {
      v7 = v17;
      goto LABEL_19;
    }
    LOBYTE(a2) = v10 != v3;
    result = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 32LL))(*(_QWORD *)(v3 + 56), a2);
    v4 = v15;
    v7 = v17;
  }
  else
  {
    v15 = *(_BYTE **)(v3 + 56);
  }
  *(_QWORD *)(v3 + 56) = 0LL;
LABEL_19:
  if ( v7 )
  {
    result = v16;
    if ( v7 == v16 )
    {
      result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v7 + 8LL))(v7, v3);
      *(_QWORD *)(v3 + 56) = result;
      if ( v17 )
      {
        v11 = v16;
        LOBYTE(v11) = v17 != v16;
        result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v17 + 32LL))(v17, v11);
      }
      v4 = v15;
    }
    else
    {
      *(_QWORD *)(v3 + 56) = v7;
    }
  }
LABEL_25:
  if ( v4 )
  {
    v12 = v14;
    LOBYTE(v12) = v4 != v14;
    result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v4 + 32LL))(v4, v12);
  }
  v13 = *(_QWORD *)(v2 + 56);
  if ( v13 )
  {
    LOBYTE(a2) = v13 != v2;
    result = (_BYTE *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return result;
}
