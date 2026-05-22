/*
 * XREFs of ?InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z @ 0x1800901C4
 * Callers:
 *     ?OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z @ 0x180094160 (-OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z.c)
 *     ?QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z @ 0x1800958BC (-QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x18008FD44 (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersContinuousTracing::InputReportIgnored_(
        RawInputProvidersContinuousTracing *this,
        int a2,
        const unsigned __int16 *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  const wchar_t *v6; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v8; // [rsp+50h] [rbp-38h]
  __int64 v9; // [rsp+58h] [rbp-30h]
  const wchar_t *v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]
  int v13; // [rsp+98h] [rbp+10h] BYREF

  v13 = a2;
  v4 = *((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
  if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 2) != 0 && (*(_QWORD *)(v4 + 24) & 2LL) == *(_QWORD *)(v4 + 24) )
  {
    v8 = &v13;
    v9 = 4LL;
    LODWORD(v5) = 0;
    v6 = &word_1800DF514;
    if ( a3 )
    {
      v6 = a3;
      v5 = -1LL;
      do
        ++v5;
      while ( a3[v5] );
    }
    v10 = v6;
    v11 = 2 * v5 + 2;
    v12 = 0;
    TlgWrite((TraceLoggingHProvider)v4, &unk_1800EF721, 0LL, 0LL, 4u, &pData);
  }
}
