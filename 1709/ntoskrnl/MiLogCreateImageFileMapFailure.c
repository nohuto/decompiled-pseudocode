/*
 * XREFs of MiLogCreateImageFileMapFailure @ 0x1406E1280
 * Callers:
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 * Callees:
 *     _TlgCreateSz @ 0x1400B0934 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x140213AC0 (_TlgWriteEx.c)
 */

void MiLogCreateImageFileMapFailure()
{
  __int64 v0; // r9
  LPCGUID pActivityId; // r11
  TraceLoggingHProvider v2; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  _DWORD *v5; // [rsp+70h] [rbp-38h]
  __int64 v6; // [rsp+78h] [rbp-30h]
  __int64 v7; // [rsp+80h] [rbp-28h]
  _DWORD v8[2]; // [rsp+88h] [rbp-20h] BYREF

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 0x400000000000uLL) )
    {
      TlgCreateSz(&pDesc, "SectionAlignmentIssue");
      v7 = *(_QWORD *)(v0 + 96);
      v8[0] = *(unsigned __int16 *)(v0 + 88);
      v5 = v8;
      v6 = 2LL;
      v8[1] = (_DWORD)pActivityId;
      TlgWriteEx(v2, &unk_1402D05C0, 0LL, (_DWORD)pActivityId + 1, pActivityId, pActivityId, 5u, &pData);
    }
  }
}
