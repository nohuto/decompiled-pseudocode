/*
 * XREFs of CoreUICallSend @ 0x1C006BF70
 * Callers:
 *     ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C00695F8 (-UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z.c)
 *     ?UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1C00696EC (-UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z.c)
 *     ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C006A198 (-RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C006A274 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C006BA6C (-PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU.c)
 * Callees:
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C006C904 (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 *     ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z @ 0x1C006CB3C (-MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 CoreUICallSend(
        struct IMessageCallSendHost *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int8 *a6,
        ...)
{
  void *v7; // r9
  unsigned int v11; // edi
  int v12; // ebx
  unsigned int v14; // [rsp+40h] [rbp-A9h]
  unsigned int v15; // [rsp+48h] [rbp-A1h]
  void *v16; // [rsp+50h] [rbp-99h] BYREF
  _BYTE v17[136]; // [rsp+60h] [rbp-89h] BYREF
  unsigned int v18; // [rsp+E8h] [rbp-1h]
  va_list va; // [rsp+170h] [rbp+87h] BYREF

  va_start(va, a6);
  v7 = 0LL;
  v16 = 0LL;
  if ( a1 && a6 )
  {
    v11 = 0;
    v12 = CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(
            (CoreMessaging::Calling::SendProcessor *)v17,
            a1,
            a4,
            a5,
            a6,
            va,
            0,
            0,
            v14,
            v15);
    if ( v12 >= 0 )
    {
      v11 = v18;
      v12 = 0;
    }
    v7 = v16;
  }
  else
  {
    v11 = (unsigned int)v16;
    v12 = -2147024809;
  }
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(struct IMessageCallSendHost *, __int64, _QWORD, _QWORD, void **))(*(_QWORD *)a1 + 24LL))(
            a1,
            a2,
            a3,
            v11,
            &v16);
    if ( v12 >= 0 )
    {
      v12 = CoreMessaging::Calling::SendProcessor::MarshalSend(
              (CoreMessaging::Calling::SendProcessor *)v17,
              v16,
              v11,
              va);
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(struct IMessageCallSendHost *, __int64, _QWORD, void *, unsigned int))(*(_QWORD *)a1 + 32LL))(
                a1,
                a2,
                a3,
                v16,
                v11);
        if ( v12 >= 0 )
          return 0;
      }
    }
    v7 = v16;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *, __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a2, a3);
  return (unsigned int)v12;
}
