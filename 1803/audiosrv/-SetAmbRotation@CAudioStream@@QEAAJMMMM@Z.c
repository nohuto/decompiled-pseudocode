/*
 * XREFs of ?SetAmbRotation@CAudioStream@@QEAAJMMMM@Z @ 0x1800B6384
 * Callers:
 *     ?SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z @ 0x1800C2B30 (-SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SetAmbRotation(CAudioStream *this, float a2, float a3, float a4)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax

  v4 = *((_QWORD *)this + 27);
  if ( !v4 )
  {
    v5 = -2147024809;
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CAudioStream::SetAmbRotation", 898, v5);
    return v5;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  if ( v6 == -2005139384 )
    v6 = -2147024809;
  v5 = v6;
  if ( v6 < 0 )
    goto LABEL_6;
  return v5;
}
