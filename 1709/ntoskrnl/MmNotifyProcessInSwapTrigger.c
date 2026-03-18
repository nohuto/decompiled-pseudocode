/*
 * XREFs of MmNotifyProcessInSwapTrigger @ 0x1400BFE8C
 * Callers:
 *     KiRequestProcessInSwap @ 0x1400BFCE0 (KiRequestProcessInSwap.c)
 * Callees:
 *     _TlgCreateSz @ 0x1400B0934 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x140213AC0 (_TlgWriteEx.c)
 */

char __fastcall MmNotifyProcessInSwapTrigger(__int64 a1)
{
  char result; // al
  __int64 v2; // r10
  ULONG64 v3; // r8
  TraceLoggingHProvider v4; // r9
  const GUID *v5; // [rsp+20h] [rbp-88h]
  const GUID *v6; // [rsp+28h] [rbp-80h]
  int v7; // [rsp+40h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-38h] BYREF
  int *v10; // [rsp+80h] [rbp-28h]
  int v11; // [rsp+88h] [rbp-20h]
  int v12; // [rsp+8Ch] [rbp-1Ch]

  result = *(_BYTE *)(a1 + 1475) & 0x60;
  if ( result == 64 && hProvider && hProvider->LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(hProvider, 8uLL);
    if ( result )
    {
      v7 = *(_DWORD *)(v2 + 736);
      TlgCreateSz(&pDesc, (LPCSTR)(v2 + 1104));
      v12 = 0;
      v10 = &v7;
      v11 = 4;
      return TlgWriteEx(v4, &unk_1402D031E, v3, (ULONG)v4, v5, v6, 4u, &pData);
    }
  }
  return result;
}
