/*
 * XREFs of ?GetPeakValue@CMeterHardware@@UEAAJPEAM@Z @ 0x180083B30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterHardware::GetPeakValue(CMeterHardware *this, float *a2)
{
  int v2; // edi
  float v5; // xmm6_4
  __int64 i; // rsi
  __int64 v8; // rcx
  float *v9; // rax
  float v10; // xmm0_4
  float v11; // xmm6_4
  _DWORD v12[32]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  if ( *((_QWORD *)this + 6) )
  {
    if ( *((_DWORD *)this + 8) > 0x20u )
      return 2147942487LL;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**((_QWORD **)this + 6) + 32LL))(
             *((_QWORD *)this + 6),
             (unsigned int)i,
             &v12[i]);
      if ( v2 < 0 )
        v12[i] = 0;
    }
    if ( *((_DWORD *)this + 8) )
    {
      v8 = *((unsigned int *)this + 8);
      v9 = (float *)v12;
      do
      {
        v10 = *v9++;
        v5 = fmaxf(v10, v5);
        --v8;
      }
      while ( v8 );
    }
  }
  v11 = fminf(v5, 1.0);
  if ( v11 <= 0.0 )
    v11 = 0.0;
  *a2 = v11;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterHardware::GetPeakValue", 438, v2);
  return (unsigned int)v2;
}
