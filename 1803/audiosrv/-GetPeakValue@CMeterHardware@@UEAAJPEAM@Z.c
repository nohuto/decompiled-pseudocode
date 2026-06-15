/*
 * XREFs of ?GetPeakValue@CMeterHardware@@UEAAJPEAM@Z @ 0x1800A07C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterHardware::GetPeakValue(CMeterHardware *this, float *a2)
{
  int v2; // ebx
  float v5; // xmm6_4
  unsigned int v7; // eax
  __int64 v8; // rdi
  unsigned int v9; // eax
  float *v10; // rcx
  __int64 v11; // rdx
  float v12; // xmm0_4
  float v13; // xmm6_4
  _DWORD v14[32]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  if ( *((_QWORD *)this + 5) )
  {
    v7 = *((_DWORD *)this + 6);
    if ( v7 > 0x20 )
      return 2147942487LL;
    v8 = 0LL;
    if ( v7 )
    {
      do
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**((_QWORD **)this + 5) + 32LL))(
               *((_QWORD *)this + 5),
               (unsigned int)v8,
               &v14[v8]);
        if ( v2 < 0 )
          v14[v8] = 0;
        v9 = *((_DWORD *)this + 6);
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < v9 );
      if ( v9 )
      {
        v10 = (float *)v14;
        v11 = v9;
        do
        {
          v12 = *v10++;
          v5 = fmaxf(v12, v5);
          --v11;
        }
        while ( v11 );
      }
    }
  }
  v13 = fminf(v5, 1.0);
  if ( v13 <= 0.0 )
    v13 = 0.0;
  *a2 = v13;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterHardware::GetPeakValue", 437, v2);
  return (unsigned int)v2;
}
