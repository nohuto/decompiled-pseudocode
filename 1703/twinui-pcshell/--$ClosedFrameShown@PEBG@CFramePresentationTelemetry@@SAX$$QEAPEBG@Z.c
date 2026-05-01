/*
 * XREFs of ??$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z @ 0x18006A168
 * Callers:
 *     _lambda_c4af78c0c8077c37e96163482dfb0569_::operator() @ 0x180066DD4 (_lambda_c4af78c0c8077c37e96163482dfb0569_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026994 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall CFramePresentationTelemetry::ClosedFrameShown<unsigned short const *>(void **a1)
{
  const struct _TlgProvider_t *v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  void *v4; // r8
  __int64 v5; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  void *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  v2 = CAppManagerLogging::Provider();
  v3 = v2;
  if ( *(_DWORD *)v2 > 5u )
  {
    LODWORD(v2) = 0;
    if ( (*((_QWORD *)v3 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v3 + 3) & 0x200000000000LL) == *((_QWORD *)v3 + 3) )
    {
      v4 = &unk_1801C6ABC;
      LODWORD(v5) = 0;
      if ( *a1 )
      {
        v4 = *a1;
        v5 = -1LL;
        do
          ++v5;
        while ( *((_WORD *)*a1 + v5) );
      }
      v8 = v4;
      v9 = 2 * v5 + 2;
      v10 = 0;
      LODWORD(v2) = TlgWrite(v3, &unk_1801F6098, 0LL, 0LL, 3u, &pData);
    }
  }
  return (int)v2;
}
