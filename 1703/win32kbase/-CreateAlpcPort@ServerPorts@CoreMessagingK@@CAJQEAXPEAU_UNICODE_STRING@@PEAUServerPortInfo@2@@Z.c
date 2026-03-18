/*
 * XREFs of ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1C006A0A4
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C0069EA8 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?EnsureAlpcCallbackRegistered@ServerPorts@CoreMessagingK@@CAJXZ @ 0x1C006A01C (-EnsureAlpcCallbackRegistered@ServerPorts@CoreMessagingK@@CAJXZ.c)
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C006B91C (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::CreateAlpcPort(
        void *const a1,
        struct _UNICODE_STRING *a2,
        struct CoreMessagingK::ServerPortInfo *a3)
{
  int v6; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v9[2]; // [rsp+28h] [rbp-71h] BYREF
  int v10; // [rsp+38h] [rbp-61h] BYREF
  __int64 v11; // [rsp+40h] [rbp-59h]
  struct _UNICODE_STRING *v12; // [rsp+48h] [rbp-51h]
  int v13; // [rsp+50h] [rbp-49h]
  void *v14; // [rsp+58h] [rbp-41h]
  __int64 v15; // [rsp+60h] [rbp-39h]
  _QWORD v16[10]; // [rsp+70h] [rbp-29h] BYREF

  v6 = CoreMessagingK::ServerPorts::EnsureAlpcCallbackRegistered();
  if ( v6 >= 0 )
  {
    v11 = 0LL;
    v15 = 0LL;
    v10 = 48;
    v13 = 512;
    v12 = a2;
    v14 = a1;
    memset(v16, 0, 0x48uLL);
    LODWORD(v16[0]) = 1179648;
    v16[2] = 0xFFFFLL;
    v6 = ZwAlpcCreatePort(&Handle, &v10, v16);
    if ( v6 >= 0 )
    {
      v9[0] = CoreMessagingK::ServerPorts::s_CallbackObject;
      v9[1] = Handle;
      v6 = ZwAlpcSetInformation(Handle, 9LL, v9);
      if ( v6 < 0 )
      {
        ZwClose(Handle);
      }
      else
      {
        v6 = 0;
        *((_QWORD *)a3 + 1) = Handle;
        CoreMessagingK::ServerPorts::DrainPort(a3);
      }
    }
  }
  return (unsigned int)v6;
}
