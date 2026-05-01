/*
 * XREFs of ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x18005B17C
 * Callers:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052974 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180054958 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18005A828 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 * Callees:
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180022810 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     TraceLoggingProviderEnabled @ 0x1800289BC (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ExecutionModel::ResourceSet::Revoke(__int64 a1, char a2, int a3, unsigned __int64 a4, __int64 a5)
{
  DWORD TickCount; // eax
  const WCHAR *v10; // rdx
  int v11; // ecx
  __int64 v12; // r10
  UCHAR v13; // dl
  __int64 v14; // rsi
  int v15; // r12d
  int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r15d
  const WCHAR *v20; // rdx
  __int64 v21; // r10
  const WCHAR *v22; // rdx
  int v23; // ecx
  int v24; // eax
  __int64 v25; // r10
  char v27; // [rsp+30h] [rbp-D0h] BYREF
  char v28; // [rsp+31h] [rbp-CFh] BYREF
  char v29; // [rsp+32h] [rbp-CEh] BYREF
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v31; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+3Ch] [rbp-C4h] BYREF
  int v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  char v38[24]; // [rsp+60h] [rbp-A0h] BYREF
  char v39; // [rsp+78h] [rbp-88h] BYREF
  char v40; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+F0h] [rbp-10h] BYREF
  int *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  int *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  char *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  int *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  __int64 *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  int *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  int *v58; // [rsp+160h] [rbp+60h]
  __int64 v59; // [rsp+168h] [rbp+68h]
  __int64 *v60; // [rsp+170h] [rbp+70h]
  __int64 v61; // [rsp+178h] [rbp+78h]
  unsigned int *v62; // [rsp+180h] [rbp+80h]
  __int64 v63; // [rsp+188h] [rbp+88h]
  char *v64; // [rsp+190h] [rbp+90h]
  __int64 v65; // [rsp+198h] [rbp+98h]
  char *v66; // [rsp+1A0h] [rbp+A0h]
  __int64 v67; // [rsp+1A8h] [rbp+A8h]

  TickCount = *(_DWORD *)(a1 + 1404);
  v34 = a3;
  if ( (TickCount & 1) != 0 )
  {
    if ( hProvider > 4u )
    {
      LOBYTE(TickCount) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL);
      if ( (_BYTE)TickCount )
      {
        v10 = *(const WCHAR **)(a1 + 32);
        v35 = *(_QWORD *)(a1 + 1880);
        v42 = &v35;
        v43 = 8LL;
        TlgCreateWsz(&pDesc, v10);
        TlgCreateSid(&v45, (const SID *)(a1 + 64));
        v11 = *(_DWORD *)(a1 + 132);
        v46 = &v30;
        v33 = *(_DWORD *)(a1 + 136);
        v48 = &v33;
        v50 = (char *)(a1 + 144);
        v52 = &v32;
        v54 = (__int64 *)&v27;
        v30 = v11;
        v47 = v12;
        v49 = v12;
        v51 = 8LL;
        v32 = a3;
        v53 = v12;
        v27 = a2;
        v55 = 1LL;
        LOBYTE(TickCount) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007F29F, 0LL, 0LL, 0xAu, &pData);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1404) = TickCount | 1;
    TickCount = GetTickCount();
    v14 = *(_QWORD *)(a1 + 1832);
    *(_DWORD *)(a1 + 1900) = TickCount;
    if ( v14 )
    {
      HIBYTE(v31) = 0;
      *(_WORD *)((char *)&v31 + 1) = -1;
      LOBYTE(v31) = a2;
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v13, 0LL) )
      {
        RmpSystemMemoryMetricsQuery(
          *(struct _RM_PARTITION **)(*(_QWORD *)(a1 + 1432) + 120LL),
          (struct _RM_SYSTEM_MEMORY_METRICS *)v38);
        if ( a5 )
        {
          v15 = *(_DWORD *)(a5 + 1408);
          v16 = *(_DWORD *)(a5 + 1456);
          v17 = *(_QWORD *)(a5 + 1880);
        }
        else
        {
          LOWORD(v16) = -1;
          LOBYTE(v15) = 101;
          v17 = -1LL;
        }
        v18 = *(_QWORD *)(a1 + 1440);
        v37 = v17;
        if ( a4 > *(_QWORD *)(v18 + 1312) )
          v19 = *(_DWORD *)(a1 + 1412);
        else
          v19 = *(_DWORD *)(a1 + 1408);
        if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000009uLL) )
        {
          v20 = *(const WCHAR **)(a1 + 32);
          v36 = *(_QWORD *)(a1 + 1880);
          v42 = &v36;
          v43 = 8LL;
          TlgCreateWsz(&pDesc, v20);
          v32 = *(_DWORD *)(a1 + 136);
          v46 = &v32;
          v27 = *(_BYTE *)(a1 + 1408);
          v48 = (int *)&v27;
          v50 = &v28;
          v52 = (int *)&v29;
          v54 = &v37;
          LOWORD(v33) = *(_WORD *)(a1 + 1456);
          v56 = &v33;
          v58 = &v30;
          LODWORD(v35) = v34;
          v60 = &v35;
          v62 = &v31;
          v64 = &v40;
          v66 = &v39;
          v45.Ptr = a1 + 144;
          *(_QWORD *)&v45.Size = 8LL;
          v47 = v21;
          v49 = 1LL;
          v28 = v19;
          v51 = 1LL;
          v29 = v15;
          v53 = 1LL;
          v55 = 8LL;
          v57 = 2LL;
          LOWORD(v30) = v16;
          v59 = 2LL;
          v61 = v21;
          v63 = 1LL;
          v65 = 8LL;
          v67 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007EE6E, 0LL, 0LL, 0x10u, &pData);
        }
        v14 = *(_QWORD *)(a1 + 1832);
      }
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(v14, *(_QWORD *)(a1 + 1840), v31);
      LOBYTE(TickCount) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else if ( hProvider > 4u )
    {
      LOBYTE(TickCount) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000009uLL);
      if ( (_BYTE)TickCount )
      {
        v22 = *(const WCHAR **)(a1 + 32);
        v36 = *(_QWORD *)(a1 + 1880);
        v42 = &v36;
        v43 = 8LL;
        TlgCreateWsz(&pDesc, v22);
        TlgCreateSid(&v45, (const SID *)(a1 + 64));
        v23 = *(_DWORD *)(a1 + 132);
        v46 = (int *)&v35;
        v34 = *(_DWORD *)(a1 + 136);
        v48 = &v34;
        v50 = (char *)(a1 + 144);
        v24 = (*(_DWORD *)(a1 + 1452) >> 1) & 1;
        LODWORD(v35) = v23;
        v32 = v24;
        v52 = &v32;
        v54 = (__int64 *)&v30;
        v47 = v25;
        v49 = v25;
        v51 = 8LL;
        v53 = v25;
        v30 = a3;
        v55 = v25;
        LOBYTE(TickCount) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007F384, 0LL, 0LL, 0xAu, &pData);
      }
    }
  }
  return TickCount;
}
