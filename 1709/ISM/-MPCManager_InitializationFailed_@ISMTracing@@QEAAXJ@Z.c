/*
 * XREFs of ?MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z @ 0x18005D2BC
 * Callers:
 *     ??0MPCManager@@QEAA@XZ @ 0x18005D4B8 (--0MPCManager@@QEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCManager_InitializationFailed_(ISMTracing *this, int a2)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]
  int v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  v2 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v2 )
  {
    if ( *v2 )
    {
      v3 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
      {
        v7 = 0;
        v5 = &v8;
        v6 = 4;
        TlgWrite((TraceLoggingHProvider)v3, &unk_1800EEAB0, 0LL, 0LL, 3u, &pData);
      }
    }
  }
}
