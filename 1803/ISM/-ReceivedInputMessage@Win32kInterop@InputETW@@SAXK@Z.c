/*
 * XREFs of ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800136A0
 * Callers:
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x18001436C (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x180005B60 (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall InputETW::Win32kInterop::ReceivedInputMessage(unsigned int a1)
{
  __int64 v1; // rbx
  _DWORD *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v1 = a1;
  v2 = (_DWORD *)*((_QWORD *)InputETW::Instance() + 1);
  if ( v2 )
  {
    if ( *v2 > 1u )
    {
      v3 = *((_QWORD *)InputETW::Instance() + 1);
      if ( *(_DWORD *)v3 > 5u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
      {
        v8 = 0;
        v6 = &v4;
        v4 = v1;
        v7 = 8;
        TlgWrite((TraceLoggingHProvider)v3, &unk_18010CF25, 0LL, 0LL, 3u, &pData);
      }
    }
  }
}
