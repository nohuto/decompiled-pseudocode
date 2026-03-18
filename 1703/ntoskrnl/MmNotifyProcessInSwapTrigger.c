/*
 * XREFs of MmNotifyProcessInSwapTrigger @ 0x1400B1DBC
 * Callers:
 *     KiRequestProcessInSwap @ 0x1400B2AE0 (KiRequestProcessInSwap.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401F8C50 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 */

char __fastcall MmNotifyProcessInSwapTrigger(__int64 a1)
{
  char result; // al
  __int64 v2; // r10
  ULONG64 v3; // r8
  TraceLoggingHProvider v4; // r9
  const GUID *v5; // [rsp+20h] [rbp-98h]
  const GUID *v6; // [rsp+28h] [rbp-90h]
  int v7; // [rsp+40h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-48h] BYREF
  int *v10; // [rsp+80h] [rbp-38h]
  int v11; // [rsp+88h] [rbp-30h]
  int v12; // [rsp+8Ch] [rbp-2Ch]

  result = *(_BYTE *)(a1 + 1475) & 0xC0;
  if ( result == (char)0x80 && qword_14036CFD8 && qword_14036CFD8->LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(qword_14036CFD8, 8uLL);
    if ( result )
    {
      v7 = *(_DWORD *)(v2 + 736);
      TlgCreateSz(&pDesc, (LPCSTR)(v2 + 1104));
      v12 = 0;
      v10 = &v7;
      v11 = 4;
      return TlgWriteEx(v4, &unk_1402AC3E1, v3, (ULONG)v4, v5, v6, 4u, &pData);
    }
  }
  return result;
}
