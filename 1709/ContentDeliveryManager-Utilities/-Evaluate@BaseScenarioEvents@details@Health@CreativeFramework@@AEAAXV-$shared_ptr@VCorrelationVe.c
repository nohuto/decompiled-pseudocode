/*
 * XREFs of ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800297D4
 * Callers:
 *     ??$SetEventValue@$00V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180029370 (--$SetEventValue@$00V-$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800017F0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800294F4 (-ReadTrackingInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180029584 (-ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800296F4 (-WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180034944 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ??$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x1800366C0 (--$PlacementHealthEvaluation@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ??$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180036850 (--$ReportPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ??$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEBG$$QEAG$$QEA_KAEBE00PEBD@Z @ 0x180036A00 (--$ReportSampledPlacementHealth@PEBGG_KAEBEPEBGPEBG@ContentDeliveryManagerTelemetry@Background@C.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::Evaluate(
        CreativeFramework::Health::details::BaseScenarioEvents *this,
        char *a2)
{
  _DWORD *v4; // rdi
  __int16 v5; // si
  const WCHAR *v6; // rdx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r13
  __int64 v9; // r12
  unsigned __int64 v10; // r8
  char v11; // al
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // r9d
  void **v15; // rax
  void **v16; // rax
  char *v17; // rdi
  char *v18; // rax
  __int16 v19; // r8
  unsigned __int8 v20; // al
  __int64 v21; // rcx
  char v22; // al
  void **v23; // rax
  void **v24; // rax
  void **v25; // rax
  volatile signed __int32 *v26; // rbx
  LPDWORD pcbData; // [rsp+38h] [rbp-E0h]
  int v28; // [rsp+60h] [rbp-B8h]
  int v29; // [rsp+68h] [rbp-B0h]
  int v30; // [rsp+70h] [rbp-A8h]
  int v31; // [rsp+78h] [rbp-A0h]
  int v32; // [rsp+80h] [rbp-98h]
  int v33; // [rsp+88h] [rbp-90h]
  int v34; // [rsp+90h] [rbp-88h]
  __int16 v35; // [rsp+98h] [rbp-80h] BYREF
  __int16 v36; // [rsp+9Ah] [rbp-7Eh] BYREF
  __int16 v37; // [rsp+9Ch] [rbp-7Ch] BYREF
  DWORD v38; // [rsp+A0h] [rbp-78h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+A8h] [rbp-70h] BYREF
  struct _FILETIME v40; // [rsp+B0h] [rbp-68h] BYREF
  char *v41; // [rsp+B8h] [rbp-60h] BYREF
  int v42; // [rsp+C0h] [rbp-58h]
  void **v43; // [rsp+C8h] [rbp-50h] BYREF
  void **v44; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-40h] BYREF
  char *v46; // [rsp+E0h] [rbp-38h] BYREF
  void **v47; // [rsp+E8h] [rbp-30h] BYREF
  void **v48; // [rsp+F0h] [rbp-28h] BYREF
  __int64 v49; // [rsp+F8h] [rbp-20h] BYREF
  char *v50; // [rsp+100h] [rbp-18h] BYREF
  void **v51; // [rsp+108h] [rbp-10h] BYREF
  void **v52; // [rsp+110h] [rbp-8h] BYREF
  _QWORD v53[2]; // [rsp+118h] [rbp+0h] BYREF
  void *v54[2]; // [rsp+128h] [rbp+10h] BYREF
  __int64 v55; // [rsp+138h] [rbp+20h]
  unsigned __int64 v56; // [rsp+140h] [rbp+28h]
  void *v57[2]; // [rsp+148h] [rbp+30h] BYREF
  __int64 v58; // [rsp+158h] [rbp+40h]
  unsigned __int64 v59; // [rsp+160h] [rbp+48h]
  wchar_t Buffer[512]; // [rsp+168h] [rbp+50h] BYREF
  wchar_t Src[512]; // [rsp+568h] [rbp+450h] BYREF

  v53[1] = -2LL;
  v41 = a2;
  CreativeFramework::Health::details::BaseScenarioEvents::ReadTrackingInfo(this);
  CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(this);
  v4 = (_DWORD *)((char *)this + 144);
  v5 = 0;
  *(_WORD *)((char *)this + 253) = 256;
  v38 = 36;
  v6 = (const WCHAR *)((char *)this + 216);
  if ( *((_QWORD *)this + 30) >= 8uLL )
    v6 = *(const WCHAR **)v6;
  if ( RegGetValueW(HKEY_CURRENT_USER, v6, L"HealthEvaluation", 8u, 0LL, (char *)this + 144, &v38)
    || v38 <= 4
    || *(_BYTE *)v4 != 4 )
  {
    v42 = 0;
    *v4 = 0;
    *(_BYTE *)v4 = 4;
    memset_0((char *)this + 152, 0, 0x20uLL);
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v7 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  v8 = *((_QWORD *)this + 19);
  v9 = (*(__int64 (__fastcall **)(CreativeFramework::Health::details::BaseScenarioEvents *))(*(_QWORD *)this + 8LL))(this);
  if ( (v9 & 2) != 0 )
  {
    v5 = 2;
  }
  else if ( (v9 & 1) != 0 )
  {
    v5 = 1;
  }
  GetSystemTimeAsFileTime(&v40);
  v10 = v40.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&v40) << 32);
  if ( *((_WORD *)this + 81) != v5 || !*((_QWORD *)this + 21) )
  {
    *((_WORD *)this + 81) = v5;
    *((_BYTE *)this + 176) = 0;
    *((_QWORD *)this + 21) = v10;
    *((_BYTE *)this + 253) = 1;
  }
  v11 = *((_BYTE *)this + 176);
  if ( v11 != -1 )
  {
    *((_BYTE *)this + 176) = v11 + 1;
    *((_BYTE *)this + 253) = 1;
  }
  if ( v5 != 2
    && ((unsigned int)*((_QWORD *)this + 21)
      - 2028888064
      + (((unsigned __int64)(unsigned int)*((_QWORD *)this + 21)
        + (HIDWORD(*((_QWORD *)this + 21)) << 32)
        + 144000000000LL) >> 32 << 32) > v10
     || *((_BYTE *)this + 176) <= 3u) )
  {
    v5 = *((_WORD *)this + 80);
  }
  v34 = *((unsigned __int8 *)this + 98);
  v33 = *((unsigned __int8 *)this + 97);
  v32 = *((unsigned __int8 *)this + 96);
  v31 = *((_DWORD *)this + 23);
  v30 = *((_DWORD *)this + 22);
  v29 = *((_DWORD *)this + 21);
  v28 = *((_DWORD *)this + 20);
  StringCchPrintfW(
    Buffer,
    512LL,
    L"{ %llu; %llu; %llu; %llu; %llu; %llu; %llu; %llu; %llu; %u; %u; %u; %u; %u; %u }",
    *((_QWORD *)this + 2),
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 4),
    *((_QWORD *)this + 5),
    *((_QWORD *)this + 6),
    *((_QWORD *)this + 7),
    *((_QWORD *)this + 8),
    *((_QWORD *)this + 9),
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v59 = 7LL;
  v58 = 0LL;
  LOWORD(v57[0]) = 0;
  if ( Buffer[0] )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( Buffer[v12] );
  }
  std::wstring::assign(v57, Buffer);
  LODWORD(pcbData) = *((_DWORD *)this + 34);
  StringCchPrintfW(
    Src,
    512LL,
    L"{ %llu; %llu; %llu; %u }",
    *((_QWORD *)this + 14),
    *((_QWORD *)this + 15),
    *((_QWORD *)this + 16),
    pcbData);
  v56 = 7LL;
  v55 = 0LL;
  LOWORD(v54[0]) = 0;
  if ( Src[0] )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( Src[v13] );
  }
  std::wstring::assign(v54, Src);
  v15 = v54;
  if ( v56 >= 8 )
    v15 = (void **)v54[0];
  v43 = v15;
  v16 = v57;
  if ( v59 >= 8 )
    v16 = (void **)v57[0];
  v44 = v16;
  v45 = v9;
  v35 = v5;
  v17 = (char *)this + 184;
  if ( *((_QWORD *)this + 26) < 8uLL )
    v18 = (char *)this + 184;
  else
    v18 = *(char **)v17;
  v46 = v18;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthEvaluation<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
    (unsigned int)&v46,
    (unsigned int)&v35,
    (unsigned int)&v45,
    v14,
    (__int64)&v44,
    (__int64)&v43,
    *(_QWORD *)a2 + 8LL);
  v19 = *((_WORD *)this + 80);
  if ( *((_QWORD *)this + 19) <= *((_QWORD *)this + 21) )
  {
    v21 = 1LL;
  }
  else
  {
    v20 = *((_BYTE *)this + 177);
    v21 = 10LL;
    if ( v20 < 0xAu )
      v21 = v20;
  }
  if ( v19 != v5
    || !v8
    || (unsigned int)(v8 + 711573504 * v21)
     + ((unsigned __int64)((unsigned int)v8 + 864000000000LL * v21 + (HIDWORD(v8) << 32)) >> 32 << 32) <= v7 )
  {
    *((_WORD *)this + 80) = v5;
    *((_QWORD *)this + 19) = v7;
    if ( v19 == v5 )
    {
      v22 = *((_BYTE *)this + 177);
      if ( v22 != -1 )
        ++v22;
    }
    else
    {
      v22 = 1;
    }
    *((_BYTE *)this + 177) = v22;
    *((_BYTE *)this + 253) = 1;
    v23 = v54;
    if ( *((_BYTE *)this + 248) )
    {
      if ( v56 >= 8 )
        v23 = (void **)v54[0];
      v47 = v23;
      v24 = v57;
      if ( v59 >= 8 )
        v24 = (void **)v57[0];
      v48 = v24;
      v49 = v9;
      v36 = v5;
      if ( *((_QWORD *)this + 26) >= 8uLL )
        v17 = *(char **)v17;
      v50 = v17;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        (unsigned int)&v50,
        (unsigned int)&v36,
        (unsigned int)&v49,
        1,
        (__int64)&v48,
        (__int64)&v47,
        *(_QWORD *)a2 + 8LL);
    }
    else
    {
      if ( v56 >= 8 )
        v23 = (void **)v54[0];
      v51 = v23;
      v25 = v57;
      if ( v59 >= 8 )
        v25 = (void **)v57[0];
      v52 = v25;
      v53[0] = v9;
      v37 = v5;
      if ( *((_QWORD *)this + 26) >= 8uLL )
        v17 = *(char **)v17;
      v41 = v17;
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportSampledPlacementHealth<unsigned short const *,unsigned short,unsigned __int64,unsigned char const &,unsigned short const *,unsigned short const *>(
        (unsigned int)&v41,
        (unsigned int)&v37,
        (unsigned int)v53,
        1,
        (__int64)&v52,
        (__int64)&v51,
        *(_QWORD *)a2 + 8LL);
    }
  }
  CreativeFramework::Health::details::BaseScenarioEvents::WriteHealthEvaluationInfo(this);
  if ( v56 >= 8 )
    operator delete(v54[0]);
  v56 = 7LL;
  v55 = 0LL;
  LOWORD(v54[0]) = 0;
  if ( v59 >= 8 )
    operator delete(v57[0]);
  v59 = 7LL;
  v58 = 0LL;
  LOWORD(v57[0]) = 0;
  v26 = (volatile signed __int32 *)*((_QWORD *)a2 + 1);
  if ( v26 && _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
    if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
  }
}
