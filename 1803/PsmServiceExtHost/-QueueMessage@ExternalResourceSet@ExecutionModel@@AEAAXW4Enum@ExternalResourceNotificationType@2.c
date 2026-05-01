/*
 * XREFs of ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x18005C4B0
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18001E7A0 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18005C460 (-OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x18005C5BC (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F5B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

char __fastcall ExecutionModel::ExternalResourceSet::QueueMessage(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v5; // rax
  _QWORD *v6; // rcx
  char result; // al
  const struct _TlgProvider_t *v8; // rcx
  UINT32 cData; // r9d
  int v10; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v13; // [rsp+60h] [rbp-38h]
  UINT32 v14; // [rsp+68h] [rbp-30h]
  int v15; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v16; // [rsp+70h] [rbp-28h]
  int v17; // [rsp+78h] [rbp-20h]
  int v18; // [rsp+7Ch] [rbp-1Ch]

  v3 = a1 + 1432;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v5[4] = a2;
    v6 = *(_QWORD **)(v3 + 8);
    *((_QWORD *)v5 + 1) = v6;
    *(_QWORD *)v5 = v3;
    *v6 = v5;
    *(_QWORD *)(v3 + 8) = v5;
    ++*(_QWORD *)(v3 + 16);
  }
  result = SetEvent(*(HANDLE *)(a1 + 1424));
  if ( hProvider > 4u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL);
    if ( result )
    {
      v15 = 0;
      v18 = 0;
      v13 = &v10;
      v16 = &v11;
      v10 = a2;
      v14 = cData;
      v11 = a1;
      v17 = 8;
      return TlgWrite(v8, &unk_18007F859, 0LL, 0LL, cData, &pData);
    }
  }
  return result;
}
