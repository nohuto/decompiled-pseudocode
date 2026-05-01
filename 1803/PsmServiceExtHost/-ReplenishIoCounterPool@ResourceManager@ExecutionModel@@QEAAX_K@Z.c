/*
 * XREFs of ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18004F040
 * Callers:
 *     ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x18001ED78 (-ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z.c)
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x180035420 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18001DA8C (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceManager::ReplenishIoCounterPool(
        ExecutionModel::ResourceManager *this,
        unsigned __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r8
  const struct _TlgProvider_t *v9; // rcx
  unsigned __int64 v10; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v13; // [rsp+68h] [rbp-9h]
  int v14; // [rsp+70h] [rbp-1h]
  int v15; // [rsp+74h] [rbp+3h]
  __int64 *v16; // [rsp+78h] [rbp+7h]
  int v17; // [rsp+80h] [rbp+Fh]
  int v18; // [rsp+84h] [rbp+13h]
  __int64 *v19; // [rsp+88h] [rbp+17h]
  int v20; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+94h] [rbp+23h]
  _QWORD *v22; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+A0h] [rbp+2Fh]
  int v24; // [rsp+A4h] [rbp+33h]
  _QWORD *v25; // [rsp+A8h] [rbp+37h]
  int v26; // [rsp+B0h] [rbp+3Fh]
  int v27; // [rsp+B4h] [rbp+43h]
  unsigned __int64 v28; // [rsp+E0h] [rbp+6Fh] BYREF

  v28 = a2;
  v2 = *((_QWORD *)this + 6);
  if ( (*(_BYTE *)(v2 + 1392) & 4) == 0 )
  {
    v4 = (_QWORD *)((char *)this + 72);
    v5 = a2;
    v6 = *((_QWORD *)this + 9);
    v7 = (_QWORD *)(v2 + 248);
    if ( v6 < a2 )
      v5 = *((_QWORD *)this + 9);
    v8 = a2 - v5;
    v11 = v5;
    v10 = v8;
    *v4 = v6 - v5;
    *v7 += v8;
    if ( v10 )
      ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(this);
    if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v13 = (__int64 *)&v28;
        v16 = (__int64 *)&v10;
        v19 = (__int64 *)&v11;
        v14 = 8;
        v17 = 8;
        v20 = 8;
        v22 = v7;
        v23 = 8;
        v25 = v4;
        v26 = 8;
        TlgWrite(v9, &unk_18007C48F, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
