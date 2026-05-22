/*
 * XREFs of ?DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x18008A160
 * Callers:
 *     ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x180089E80 (-AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 *     ?Initialize@DWMCursor@@QEAAJ_N@Z @ 0x18008AE5C (-Initialize@DWMCursor@@QEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::DuplicateHandleAndVerifySend(
        DWMCursorBroker *this,
        struct DWMCursor *a2,
        unsigned int a3)
{
  __int64 v3; // rsi
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v16; // [rsp+30h] [rbp-88h] BYREF
  __int128 v17; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v18[8]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v19; // [rsp+58h] [rbp-60h]
  __int128 v20; // [rsp+68h] [rbp-50h]

  v3 = a3;
  v6 = 0;
  v16 = 0LL;
  v7 = NtDCompositionDuplicateHandleToProcess(*((_QWORD *)a2 + 10), *((unsigned int *)this + 4 * a3 + 328), &v16);
  if ( v7 < 0 )
    v6 = v7 | 0x10000000;
  if ( v6 >= 0 )
  {
    v8 = *(_QWORD *)a2;
    v18[0] = 0;
    v9 = *(_OWORD *)(*(__int64 (__fastcall **)(struct DWMCursor *, __int128 *))(v8 + 40))(a2, &v17);
    v10 = *(_QWORD *)a2;
    v19 = v9;
    v11 = (*(__int64 (__fastcall **)(struct DWMCursor *))(v10 + 48))(a2);
    v12 = *((_QWORD *)this + 160);
    LODWORD(v17) = v11;
    v13 = 2 * v3;
    *((_QWORD *)&v17 + 1) = v16;
    v14 = *((_QWORD *)this + v13 + 165);
    v20 = v17;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *, int))(*(_QWORD *)v12 + 152LL))(
           v12,
           v14,
           4LL,
           v18,
           64);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 160) + 144LL))(
        *((_QWORD *)this + 160),
        *((_QWORD *)this + v13 + 165));
      *((_QWORD *)this + v13 + 165) = 0LL;
    }
  }
  return (unsigned int)v6;
}
