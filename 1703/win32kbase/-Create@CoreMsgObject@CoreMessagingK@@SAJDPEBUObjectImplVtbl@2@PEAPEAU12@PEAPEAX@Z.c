/*
 * XREFs of ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1C006B808
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C0069EA8 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C006B6F4 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

NTSTATUS __fastcall CoreMessagingK::CoreMsgObject::Create(
        char a1,
        __int64 (**a2)(void),
        struct CoreMessagingK::CoreMsgObject **a3,
        void **a4)
{
  __int64 (*v5)(void); // rax
  unsigned int v9; // esi
  NTSTATUS result; // eax
  int v11; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  __int128 v15; // [rsp+70h] [rbp-10h]
  _QWORD *Object; // [rsp+A8h] [rbp+28h]

  *a4 = 0LL;
  v5 = *a2;
  *a3 = 0LL;
  v12 = 0LL;
  v11 = 48;
  v9 = v5() + 8;
  v13 = 0LL;
  v14 = a1 == 0 ? 0x200 : 0;
  v15 = 0LL;
  result = ObCreateObject(0LL, ExCoreMessagingObjectType, &v11);
  if ( result >= 0 )
  {
    memset(Object, 0, v9);
    *(_DWORD *)Object = gSessionId;
    Object[1] = a2;
    result = ObInsertObject(Object, 0LL, 0x10000000u, 0, 0LL, a4);
    if ( result >= 0 )
    {
      *a3 = (struct CoreMessagingK::CoreMsgObject *)Object;
      return 0;
    }
  }
  return result;
}
