/*
 * XREFs of ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x18003C2C4
 * Callers:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x18000160C (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180036344 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@W4Enum@Priority@ExecutionModel@@PEAVResourceSet@7@@Z @ 0x18003BE64 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180008F30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x1800179B4 (_TlgCreateSid.c)
 *     TraceLoggingProviderEnabled @ 0x180020094 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ExecutionModel::ResourceSet::Revoke(__int64 a1, char a2, int a3, __int64 a4, __int64 a5)
{
  DWORD TickCount; // eax
  const WCHAR *v9; // rdx
  int v10; // ecx
  __int64 v11; // r10
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  UCHAR v14; // dl
  int v15; // r12d
  int v16; // r15d
  const WCHAR *v17; // rdx
  __int64 v18; // r10
  char v19; // r11
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  __int64 v22; // rbx
  const WCHAR *v23; // rdx
  int v24; // ecx
  int v25; // eax
  __int64 v26; // r10
  LPCGUID v27; // r8
  LPCGUID v28; // r9
  char v30; // [rsp+38h] [rbp-D0h] BYREF
  char v31; // [rsp+39h] [rbp-CFh] BYREF
  char v32; // [rsp+3Ah] [rbp-CEh] BYREF
  int v33; // [rsp+3Ch] [rbp-CCh] BYREF
  int v34; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v35; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v36; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A8h] BYREF
  char v40[24]; // [rsp+68h] [rbp-A0h] BYREF
  char v41; // [rsp+80h] [rbp-88h] BYREF
  char v42; // [rsp+98h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v44; // [rsp+D8h] [rbp-30h]
  __int64 v45; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+F8h] [rbp-10h] BYREF
  int *v48; // [rsp+108h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+8h]
  __int64 *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  char *v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+130h] [rbp+28h]
  int *v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  __int64 *v56; // [rsp+148h] [rbp+40h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  int *v58; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  int *v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  __int64 *v62; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  unsigned int *v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  char *v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]
  char *v68; // [rsp+1A8h] [rbp+A0h]
  __int64 v69; // [rsp+1B0h] [rbp+A8h]

  TickCount = *(_DWORD *)(a1 + 1404);
  if ( (TickCount & 1) != 0 )
  {
    if ( hProvider > 4u )
    {
      LOBYTE(TickCount) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL);
      if ( (_BYTE)TickCount )
      {
        v9 = *(const WCHAR **)(a1 + 32);
        v37 = *(_QWORD *)(a1 + 1896);
        v44 = &v37;
        v45 = 8LL;
        TlgCreateWsz(&pDesc, v9);
        TlgCreateSid(&v47, (const SID *)(a1 + 64));
        v10 = *(_DWORD *)(a1 + 132);
        v48 = &v34;
        v33 = *(_DWORD *)(a1 + 136);
        v50 = (__int64 *)&v33;
        v52 = (char *)(a1 + 144);
        v54 = (int *)&v36;
        v56 = (__int64 *)&v30;
        v34 = v10;
        v49 = v11;
        v51 = v11;
        v53 = 8LL;
        LODWORD(v36) = a3;
        v55 = v11;
        v30 = a2;
        v57 = 1LL;
        LOBYTE(TickCount) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058EF3, v12, v13, 0xAu, &pData);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1404) = TickCount | 1;
    TickCount = GetTickCount();
    *(_DWORD *)(a1 + 1916) = TickCount;
    if ( *(_QWORD *)(a1 + 1840) )
    {
      HIBYTE(v35) = 0;
      *(_WORD *)((char *)&v35 + 1) = -1;
      LOBYTE(v35) = a2;
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v14, 0LL) )
      {
        RmpSystemMemoryMetricsQuery(
          *(struct _RM_PARTITION **)(*(_QWORD *)(a1 + 1432) + 112LL),
          (struct _RM_SYSTEM_MEMORY_METRICS *)v40);
        if ( a5 )
        {
          v15 = *(_DWORD *)(a5 + 1408);
          v16 = *(_DWORD *)(a5 + 1456);
          v39 = *(_QWORD *)(a5 + 1896);
        }
        else
        {
          LOWORD(v16) = -1;
          LOBYTE(v15) = 101;
          v39 = -1LL;
        }
        if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000009uLL) )
        {
          v17 = *(const WCHAR **)(a1 + 32);
          v38 = *(_QWORD *)(a1 + 1896);
          v44 = &v38;
          v45 = 8LL;
          TlgCreateWsz(&pDesc, v17);
          LODWORD(v36) = *(_DWORD *)(a1 + 136);
          v48 = (int *)&v36;
          v30 = *(_BYTE *)(a1 + 1408);
          v50 = (__int64 *)&v30;
          v52 = &v31;
          v54 = (int *)&v32;
          v56 = &v39;
          LOWORD(v33) = *(_WORD *)(a1 + 1456);
          v58 = &v33;
          v60 = &v34;
          v62 = &v37;
          v64 = &v35;
          v66 = &v42;
          v68 = &v41;
          v47.Ptr = a1 + 144;
          *(_QWORD *)&v47.Size = 8LL;
          v49 = v18;
          v51 = 1LL;
          v31 = v19;
          v53 = 1LL;
          v32 = v15;
          v55 = 1LL;
          v57 = 8LL;
          v59 = 2LL;
          LOWORD(v34) = v16;
          v61 = 2LL;
          LODWORD(v37) = a3;
          v63 = v18;
          v65 = 1LL;
          v67 = 8LL;
          v69 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800591BA, v20, v21, 0x10u, &pData);
        }
      }
      v22 = *(_QWORD *)(a1 + 1840);
      if ( v22 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 8LL))(*(_QWORD *)(a1 + 1840));
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v22 + 24LL))(v22, *(_QWORD *)(a1 + 1848), v35);
      LOBYTE(TickCount) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    else if ( hProvider > 4u )
    {
      LOBYTE(TickCount) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000009uLL);
      if ( (_BYTE)TickCount )
      {
        v23 = *(const WCHAR **)(a1 + 32);
        v38 = *(_QWORD *)(a1 + 1896);
        v44 = &v38;
        v45 = 8LL;
        TlgCreateWsz(&pDesc, v23);
        TlgCreateSid(&v47, (const SID *)(a1 + 64));
        v24 = *(_DWORD *)(a1 + 132);
        v48 = (int *)&v37;
        LODWORD(v36) = *(_DWORD *)(a1 + 136);
        v50 = &v36;
        v52 = (char *)(a1 + 144);
        v25 = (*(_DWORD *)(a1 + 1452) >> 1) & 1;
        LODWORD(v37) = v24;
        v34 = v25;
        v54 = &v34;
        v56 = (__int64 *)&v33;
        v49 = v26;
        v51 = v26;
        v53 = 8LL;
        v55 = v26;
        v33 = a3;
        v57 = v26;
        LOBYTE(TickCount) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058D68, v27, v28, 0xAu, &pData);
      }
    }
  }
  return TickCount;
}
