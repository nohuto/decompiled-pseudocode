/*
 * XREFs of ?ProcessInkFeedbackCommand@InkFeedbackServer@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021CB2C
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C02184EC (-ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InkFeedbackServer::ProcessInkFeedbackCommand(
        _QWORD **a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  _QWORD *i; // rbx
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  _BYTE v14[4]; // [rsp+30h] [rbp-59h] BYREF
  _DWORD v15[3]; // [rsp+34h] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  _DWORD *v17; // [rsp+60h] [rbp-29h]
  int v18; // [rsp+68h] [rbp-21h]
  int v19; // [rsp+6Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-19h] BYREF
  _BYTE *v21; // [rsp+80h] [rbp-9h]
  int v22; // [rsp+88h] [rbp-1h]
  int v23; // [rsp+8Ch] [rbp+3h]

  if ( hProvider > 4u )
  {
    v15[0] = 0;
    v19 = 0;
    v17 = v15;
    v18 = 4;
    TlgCreateSz(&pDesc, "Processing ink feedback command...");
    v23 = 0;
    v21 = v14;
    v14[0] = a2;
    v22 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC52F, v8, v9, 5u, &pData);
  }
  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    if ( (*(int (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD))*(i - 1))(i - 1, a2, a3, a4) >= 0 )
      return 0LL;
  }
  if ( a2 == 2 || a2 == 4 )
    return 0LL;
  if ( hProvider > 2u )
  {
    v19 = 0;
    v17 = v15;
    v15[0] = -1073741823;
    v18 = 4;
    TlgCreateSz(&pDesc, "Command not serviced");
    v23 = 0;
    v21 = v14;
    v14[0] = a2;
    v22 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC4F4, v11, v12, 5u, &pData);
  }
  return 3221225473LL;
}
