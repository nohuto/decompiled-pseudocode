/*
 * XREFs of ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C021E0EC
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021D820 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C020BAF8 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ValidatePointer(
        HideInkCursorProvider *this,
        unsigned int a2,
        const struct tagPOINTER_INFO **a3,
        __int64 a4)
{
  int PointerInfoByPointerId; // eax
  __int64 v5; // rdx
  const GUID *v6; // r8
  const GUID *v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  char v13; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v14[2]; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v16; // [rsp+60h] [rbp+17h]
  int v17; // [rsp+68h] [rbp+1Fh]
  int v18; // [rsp+6Ch] [rbp+23h]
  const char *v19; // [rsp+70h] [rbp+27h]
  int v20; // [rsp+78h] [rbp+2Fh]
  int v21; // [rsp+7Ch] [rbp+33h]
  char *v22; // [rsp+80h] [rbp+37h]
  int v23; // [rsp+88h] [rbp+3Fh]
  int v24; // [rsp+8Ch] [rbp+43h]

  *(_QWORD *)v14 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v14, a3, a4);
  v8 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    LOBYTE(v5) = 19;
    v9 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v14 + 16LL), v5, (__int64)v6, (__int64)v7) + 472);
    if ( *(_DWORD *)(v9 + 24) != 5 )
    {
      v8 = -1073741811;
      if ( (unsigned int)pRelatedActivityId > 2 )
      {
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v16 = v14;
        v19 = "Not an integrated pen device";
        v13 = *(_BYTE *)(v9 + 24);
        v22 = &v13;
        v14[0] = -1073741811;
        v17 = 4;
        v20 = 29;
        v23 = 1;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9198, v10, v11, 5u, &pData);
      }
    }
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v18 = 0;
    v21 = 0;
    v14[0] = PointerInfoByPointerId;
    v16 = v14;
    v19 = "Wrong thread (or invalid pointer id)";
    v17 = 4;
    v20 = 37;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E8C52, v6, v7, 4u, &pData);
  }
  return v8;
}
