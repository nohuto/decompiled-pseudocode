/*
 * XREFs of InkProcessorIsInkDevice @ 0x1C00DA0F0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall InkProcessorIsInkDevice(__int16 a1, __int16 a2, const GUID *a3, _WORD *a4)
{
  LPCGUID v4; // r14
  unsigned int v6; // edi
  unsigned __int8 v10; // bl
  unsigned int v12; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-60h] BYREF
  unsigned int *v14; // [rsp+58h] [rbp-40h]
  __int64 v15; // [rsp+60h] [rbp-38h]

  v4 = InkProcessor::s_pInstance;
  v6 = 0;
  if ( InkProcessor::s_pInstance )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    v10 = v4->Data4[0];
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    if ( v10 && a1 == -241 && a2 == 256 && (!a3 || LOWORD(a3->Data1) == 1118) && (!a4 || *a4 == 85) )
      return 1;
  }
  else if ( hProvider > 2u )
  {
    v12 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v14 = &v12;
    v15 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, a3, (LPCGUID)v12, 3u, &pData);
  }
  return v6;
}
