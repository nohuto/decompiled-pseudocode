/*
 * XREFs of ?AppendMonitorId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C00ADA0C
 * Callers:
 *     ?CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00AD730 (-CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1C00048CC (RtlStringCchLengthW.c)
 *     ?GetMonitorIdFromTargetId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C00ADA88 (-GetMonitorIdFromTargetId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 */

__int64 __fastcall AppendMonitorId(
        unsigned int a1,
        const struct _LUID *a2,
        struct VIDPN_MGR *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5,
        unsigned __int16 *psz)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  _QWORD *v18; // rax
  size_t pcchLength[3]; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v10) = GetMonitorIdFromTargetId(a1, a2, a3, a4, psz);
  if ( (int)v10 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v17 + 24) = 274LL;
    WdLogEvent5_WdError(v17);
  }
  else
  {
    v11 = RtlStringCchLengthW(psz, a4, pcchLength);
    v10 = v11;
    if ( v11 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      v18[6] = a2->HighPart;
      v18[7] = a2->LowPart;
      v18[3] = v10;
      v18[4] = psz;
      v18[5] = a4;
      WdLogEvent5_WdAssertion(v18);
    }
    else
    {
      *a5 = pcchLength[0];
    }
  }
  return (unsigned int)v10;
}
