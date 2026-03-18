/*
 * XREFs of ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C021EE78
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021E220 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0209D58 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::ValidatePointer(InkDevice *this, unsigned int a2, const struct tagPOINTER_INFO **a3)
{
  int PointerInfoByPointerId; // eax
  unsigned int v5; // ebx
  LPCGUID v6; // r8
  LPCGUID cData; // r9
  __int64 v8; // r10
  __int64 v9; // r10
  char v10; // cl
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  int v13; // eax
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  __int64 v16; // rcx
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  char v20; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v21[2]; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned int *v23; // [rsp+60h] [rbp+7h]
  int v24; // [rsp+68h] [rbp+Fh]
  int v25; // [rsp+6Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+17h] BYREF
  char *v27; // [rsp+80h] [rbp+27h]
  int v28; // [rsp+88h] [rbp+2Fh]
  int v29; // [rsp+8Ch] [rbp+33h]

  *(_QWORD *)v21 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v21, a3);
  v5 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    v8 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v21 + 16LL), 19) + 472);
    if ( *(_DWORD *)(v8 + 24) == 5 )
    {
      v13 = *(_DWORD *)(v8 + 736);
      if ( v13 == 0x80000000 || v13 == 11 || v13 == 13 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 456LL);
        if ( *(unsigned __int16 *)(v16 + 112) != *((_DWORD *)this + 34)
          || *(unsigned __int16 *)(v16 + 110) != *((_DWORD *)this + 33) )
        {
          v5 = -1073741823;
          if ( hProvider > 2u )
          {
            v25 = 0;
            v23 = v21;
            v24 = 4;
            v21[0] = -1073741823;
            TlgCreateSz(&pDesc, "Pointer device not supported by the ink device");
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v17, v18, (UINT32)v18, &pData);
          }
        }
      }
      else
      {
        v5 = -1073741811;
        if ( hProvider > 2u )
        {
          v25 = 0;
          v21[0] = -1073741811;
          v23 = v21;
          v24 = 4;
          TlgCreateSz(&pDesc, "Pointer device not mapped to the integrated display");
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v14, v15, (UINT32)v15, &pData);
        }
      }
    }
    else
    {
      v5 = -1073741811;
      if ( hProvider > 2u )
      {
        v25 = 0;
        v21[0] = -1073741811;
        v23 = v21;
        v24 = 4;
        TlgCreateSz(&pDesc, "Not an integrated pen device");
        v10 = *(_BYTE *)(v9 + 24);
        v29 = 0;
        v27 = &v20;
        v20 = v10;
        v28 = 1;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC5B7, v11, v12, 5u, &pData);
      }
    }
  }
  else if ( hProvider > 2u )
  {
    v25 = 0;
    v21[0] = PointerInfoByPointerId;
    v23 = v21;
    v24 = 4;
    TlgCreateSz(&pDesc, "Wrong thread (or invalid pointer id)");
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v6, cData, (UINT32)cData, &pData);
  }
  return v5;
}
