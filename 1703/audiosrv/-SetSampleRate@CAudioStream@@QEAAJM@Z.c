/*
 * XREFs of ?SetSampleRate@CAudioStream@@QEAAJM@Z @ 0x180096A10
 * Callers:
 *     ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x1800A18B0 (-SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SetSampleRate(CAudioStream *this, float a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax

  v2 = *((_QWORD *)this + 25);
  if ( !v2 )
  {
    v3 = -2147024809;
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CAudioStream::SetSampleRate", 874, v3);
    return v3;
  }
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  if ( v4 == -2005139384 )
    v4 = -2147024809;
  v3 = v4;
  if ( v4 < 0 )
    goto LABEL_6;
  return v3;
}
