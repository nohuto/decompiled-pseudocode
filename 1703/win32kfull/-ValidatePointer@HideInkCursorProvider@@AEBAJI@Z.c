/*
 * XREFs of ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C021CE0C
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021C560 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0209D58 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ValidatePointer(
        HideInkCursorProvider *this,
        unsigned int a2,
        const struct tagPOINTER_INFO **a3)
{
  int PointerInfoByPointerId; // eax
  unsigned int v4; // ebx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  const GUID *v7; // r9
  unsigned __int8 v8; // cl
  LPCGUID v9; // r8
  unsigned __int8 v11; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v12[2]; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned int *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+17h] BYREF
  unsigned __int8 *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]

  *(_QWORD *)v12 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v12, a3);
  v4 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v12 + 16LL), 19) + 472) + 24LL) != 5 )
    {
      v4 = -1073741811;
      if ( hProvider > 2u )
      {
        v16 = 0;
        v14 = v12;
        v12[0] = -1073741811;
        v15 = 4;
        TlgCreateSz(&pDesc, "Not an integrated pen device");
        v8 = v7[1].Data4[0];
        v20 = 0;
        v18 = &v11;
        v11 = v8;
        v19 = 1;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC5B7, v9, v7, 5u, &pData);
      }
    }
  }
  else if ( hProvider > 2u )
  {
    v16 = 0;
    v12[0] = PointerInfoByPointerId;
    v15 = 4;
    v14 = v12;
    TlgCreateSz(&pDesc, "Wrong thread (or invalid pointer id)");
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v5, v6, 4u, &pData);
  }
  return v4;
}
