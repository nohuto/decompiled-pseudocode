/*
 * XREFs of PepQueryPerfDomainInfo @ 0x1C003363C
 * Callers:
 *     RegisterXsdDomain @ 0x1C0022A24 (RegisterXsdDomain.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     ProcLibTracePepPerfDomain @ 0x1C00074AC (ProcLibTracePepPerfDomain.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008840 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepQueryPerfDomainInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v4; // edi
  char v5; // r8
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 1088);
  v7 = 0LL;
  v8 = 0LL;
  LODWORD(v7) = *(_DWORD *)(a2 + 36);
  v4 = 0;
  if ( (int)PoFxProcessorNotification(v2, 42LL, &v7) >= 0 )
  {
    v5 = BYTE4(v7);
    if ( BYTE4(v7) )
    {
      if ( BYTE4(v7) == 1 )
      {
        *(_DWORD *)(a2 + 40) = 253;
      }
      else
      {
        if ( BYTE4(v7) != 2 )
        {
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            2u,
            0x21u,
            (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
            BYTE4(v7));
          return (unsigned int)-1073741811;
        }
        *(_DWORD *)(a2 + 40) = 254;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 40) = 252;
    }
    *(_WORD *)(a2 + 57) = *(_WORD *)((char *)&v7 + 5);
    *(_QWORD *)(a2 + 60) = v8;
    *(_BYTE *)(a2 + 56) = v5;
    ProcLibTracePepPerfDomain(a2, 0);
  }
  return v4;
}
