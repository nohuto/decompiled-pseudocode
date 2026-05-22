/*
 * XREFs of ?MPCInputProviderBase_Destroy_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x18005FA7C
 * Callers:
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x18005FCF4 (--1MPCInputProviderBase@@UEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputProviderBase_Destroy_(ISMTracing *this, const struct DeviceInfo *a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // [rsp+30h] [rbp-68h] BYREF
  int v7; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  int *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v3 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v3 )
  {
    if ( *v3 )
    {
      v4 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
      {
        v5 = *(_DWORD *)a2;
        v11 = 0;
        v14 = 0;
        v6 = v5;
        v9 = &v6;
        v7 = *((_DWORD *)a2 + 1);
        v12 = &v7;
        v10 = 4;
        v13 = 4;
        TlgWrite((TraceLoggingHProvider)v4, &unk_1800EEC94, 0LL, 0LL, 4u, &pData);
      }
    }
  }
}
