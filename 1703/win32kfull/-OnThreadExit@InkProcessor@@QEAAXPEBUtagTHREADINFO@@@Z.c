/*
 * XREFs of ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C00DA238
 * Callers:
 *     InkProcessorOnThreadExit @ 0x1C00DA1D0 (InkProcessorOnThreadExit.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InkProcessor::OnThreadExit(InkProcessor **this, const struct tagTHREADINFO *a2)
{
  __int64 v4; // r8
  InkProcessor *i; // rbx
  LPCGUID v6; // r8
  LPCGUID cData; // r9
  int v8; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v10; // [rsp+60h] [rbp-48h]
  int v11; // [rsp+68h] [rbp-40h]
  int v12; // [rsp+6Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-38h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v4 = *((_BYTE *)this + 8) == 0 ? 0xC0000001 : 0;
  if ( *((_BYTE *)this + 8) )
  {
    for ( i = this[12]; i != (InkProcessor *)(this + 12); i = *(InkProcessor **)i )
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*((_QWORD *)i - 1) + 16LL))((__int64)i - 8, *(_QWORD *)a2, v4);
  }
  else if ( hProvider > 2u )
  {
    v12 = 0;
    v10 = &v8;
    v11 = 4;
    v8 = v4;
    TlgCreateSz(&pDesc, "Ink processor not enabled");
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v6, cData, (UINT32)cData, &pData);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
