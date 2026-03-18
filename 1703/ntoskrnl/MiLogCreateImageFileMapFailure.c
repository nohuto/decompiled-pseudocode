/*
 * XREFs of MiLogCreateImageFileMapFailure @ 0x1406B5128
 * Callers:
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401F8C50 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14020CB14 (_TlgWriteEx.c)
 */

void MiLogCreateImageFileMapFailure()
{
  __int64 v0; // r10
  __int64 v1; // rax
  ULONG64 v2; // r8
  TraceLoggingHProvider v3; // r9
  const GUID *v4; // [rsp+20h] [rbp-98h]
  const GUID *v5; // [rsp+28h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-58h] BYREF
  _DWORD *v8; // [rsp+70h] [rbp-48h]
  int v9; // [rsp+78h] [rbp-40h]
  int v10; // [rsp+7Ch] [rbp-3Ch]
  __int64 v11; // [rsp+80h] [rbp-38h]
  _DWORD v12[6]; // [rsp+88h] [rbp-30h] BYREF

  if ( qword_14036CFD8 && qword_14036CFD8->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_14036CFD8, 0x400000000000uLL) )
    {
      TlgCreateSz(&pDesc, "SectionAlignmentIssue");
      v1 = *(_QWORD *)(v0 + 96);
      v10 = 0;
      v12[1] = 0;
      v11 = v1;
      v12[0] = *(unsigned __int16 *)(v0 + 88);
      v8 = v12;
      v9 = 2;
      TlgWriteEx(v3, &unk_1402AC683, v2, (ULONG)v3, v4, v5, 5u, &pData);
    }
  }
}
