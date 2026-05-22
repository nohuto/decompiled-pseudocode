/*
 * XREFs of ?DuplicateHandleAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x180025784
 * Callers:
 *     ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x1800253E0 (-AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 *     ?RegisterWithCursorBroker@DWMCursor@@IEAAJXZ @ 0x180026B1C (-RegisterWithCursorBroker@DWMCursor@@IEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::DuplicateHandleAndVerifySend(
        DWMCursorBroker *this,
        struct DWMCursor *a2,
        unsigned int a3)
{
  __int64 v4; // r14
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // [rsp+30h] [rbp-88h] BYREF
  __int128 v18; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v19[8]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v20; // [rsp+58h] [rbp-60h]
  __int128 v21; // [rsp+68h] [rbp-50h]

  v4 = a3;
  v6 = 0;
  v17 = 0LL;
  v7 = NtDCompositionDuplicateHandleToProcess(*((_QWORD *)a2 + 11), *((unsigned int *)this + 4 * a3 + 330), &v17);
  if ( v7 < 0 )
  {
    v6 = v7 | 0x10000000;
    v9 = Microsoft_OneCore_MinInputEnableBits;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 190, v6);
  }
  v9 = Microsoft_OneCore_MinInputEnableBits;
LABEL_5:
  if ( v6 >= 0 )
  {
    v10 = *(_QWORD *)a2;
    v19[0] = 0;
    v11 = *(_OWORD *)(*(__int64 (__fastcall **)(struct DWMCursor *, __int128 *))(v10 + 40))(a2, &v18);
    v12 = *(_QWORD *)a2;
    v20 = v11;
    v13 = (*(__int64 (__fastcall **)(struct DWMCursor *))(v12 + 48))(a2);
    v14 = *((_QWORD *)this + 161);
    LODWORD(v18) = v13;
    *((_QWORD *)&v18 + 1) = v17;
    v15 = *((_QWORD *)this + 2 * v4 + 166);
    v21 = v18;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *, int))(*(_QWORD *)v14 + 152LL))(
           v14,
           v15,
           4LL,
           v19,
           64);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 161) + 144LL))(
        *((_QWORD *)this + 161),
        *((_QWORD *)this + 2 * v4 + 166));
      *((_QWORD *)this + 2 * v4 + 166) = 0LL;
    }
  }
  else if ( (v9 & 2) != 0 )
  {
    McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 360, v6);
  }
  return (unsigned int)v6;
}
