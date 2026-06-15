/*
 * XREFs of ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x180048290
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterSoftware::GetPeakValue(CMeterSoftware *this, float *a2)
{
  int v2; // ebx
  float v5; // xmm6_4
  __int64 v6; // rcx
  float v7; // xmm6_4
  int v9; // eax
  __int64 v10; // rcx
  float *v11; // rax
  float v12; // xmm0_4
  __int64 v13; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-1B8h] BYREF
  char v15; // [rsp+28h] [rbp-1B0h]
  _BYTE v16[384]; // [rsp+30h] [rbp-1A8h] BYREF

  v2 = 0;
  v5 = 0.0;
  if ( !a2 )
    return 2147500035LL;
  v15 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((_QWORD *)this + 5);
  if ( !v6 )
    goto LABEL_3;
  if ( *((_DWORD *)this + 8) <= 0x20u )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 24LL))(v6, v16);
    v2 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -2147023174 || v9 == -2147417848 )
      {
        v13 = *((_QWORD *)this + 5);
        if ( v13 )
        {
          *((_QWORD *)this + 5) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v2 = 0;
      }
    }
    else if ( *((_DWORD *)this + 8) )
    {
      v10 = *((unsigned int *)this + 8);
      v11 = (float *)v16;
      do
      {
        v12 = *v11;
        v11 += 3;
        v5 = fmaxf(v12, v5);
        --v10;
      }
      while ( v10 );
    }
LABEL_3:
    if ( v15 )
      LeaveCriticalSection(lpCriticalSection);
    v7 = fminf(v5, 1.0);
    if ( v7 <= 0.0 )
      v7 = 0.0;
    *a2 = v7;
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CMeterSoftware::GetPeakValue", 0x25Fu, v2);
    return (unsigned int)v2;
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return 2147942487LL;
}
