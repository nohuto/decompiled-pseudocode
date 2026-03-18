/*
 * XREFs of ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@@AEAUInteractionOutput@@@Z @ 0x18018F1C0
 * Callers:
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x18018EE50 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x18018EC98 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 */

void __fastcall CInteractionProcessor::ProcessOutput(
        CInteractionProcessor *this,
        __int64 (__fastcall ***a2)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *),
        unsigned __int8 a3,
        __int64 a4,
        struct IManipulationTelemetryData *a5,
        struct InteractionOutput *a6)
{
  char RailsEnabled; // r12
  char v10; // bl
  char *v11; // r14
  unsigned __int64 v12; // xmm0_8
  __m128 v13; // xmm1
  unsigned __int64 v14; // xmm0_8
  __m128 v15; // xmm1
  char v16; // al
  char v17; // bl
  unsigned __int64 v18; // xmm0_8
  __m128 v19; // xmm1
  char v20; // al
  unsigned __int64 v21; // xmm0_8
  __m128 v22; // xmm1
  unsigned __int64 v23; // xmm0_8
  char v24; // bl
  __int64 (__fastcall **v25)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *); // rax
  int v26; // eax
  __int64 (__fastcall **v27)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *); // rax
  const GUID *v28; // r8
  const GUID *v29; // r9
  struct IManipulationTelemetryData *v30; // [rsp+30h] [rbp-D0h] BYREF
  int v31; // [rsp+38h] [rbp-C8h] BYREF
  struct IManipulationResource *v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+48h] [rbp-B8h]
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+54h] [rbp-ACh] BYREF
  CInteractionProcessor *v36; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+70h] [rbp-90h]
  unsigned __int64 v39; // [rsp+74h] [rbp-8Ch]
  float v40; // [rsp+7Ch] [rbp-84h]
  __int128 v41; // [rsp+80h] [rbp-80h]
  struct IManipulationResource **v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  int *v44; // [rsp+A0h] [rbp-60h]
  const GUID *v45; // [rsp+A8h] [rbp-58h]
  int *v46; // [rsp+B0h] [rbp-50h]
  const GUID *v47; // [rsp+B8h] [rbp-48h]
  char *v48; // [rsp+C0h] [rbp-40h]
  const GUID *v49; // [rsp+C8h] [rbp-38h]
  struct IManipulationTelemetryData **v50; // [rsp+D0h] [rbp-30h]
  const GUID *v51; // [rsp+D8h] [rbp-28h]
  int *v52; // [rsp+E0h] [rbp-20h]
  const GUID *v53; // [rsp+E8h] [rbp-18h]

  v30 = a5;
  v31 = 0;
  RailsEnabled = CInteractionProcessor::GetRailsEnabled((__int64)this, 0);
  v10 = CInteractionProcessor::GetRailsEnabled((__int64)this, 1);
  if ( a3 )
  {
    if ( (*((_BYTE *)this + 424) & 1) == 0 )
      *((_DWORD *)a6 + 2) = 0;
    if ( (*((_BYTE *)this + 424) & 2) == 0 )
      *((_DWORD *)a6 + 3) = 0;
    if ( (*((_BYTE *)this + 424) & 4) == 0 )
      *((_DWORD *)a6 + 4) = 1065353216;
    memset_0(&pData, 0, 0x54uLL);
    LODWORD(pData.Ptr) = 0;
    v11 = (char *)this + 408;
    if ( *((_DWORD *)this + 102) && (*((_BYTE *)a6 + 4) & 2) == 0 )
      LODWORD(pData.Ptr) = 3 - (*(_DWORD *)a6 != 0);
    v33 = 0;
    v12 = _mm_unpacklo_ps((__m128)*((unsigned int *)a6 + 2), (__m128)*((unsigned int *)a6 + 3)).m128_u64[0];
    v13 = (__m128)*((unsigned int *)a6 + 4);
    v38 = 0;
    *(_QWORD *)&pData.Size = v12;
    v40 = FLOAT_1_0;
    HIDWORD(v41) = 0;
    v33 = 0;
    v14 = _mm_unpacklo_ps(v13, v13).m128_u64[0];
    v15 = (__m128)*((unsigned int *)a6 + 7);
    LODWORD(v43) = 0;
    LODWORD(v45) = 0;
    HIDWORD(v45) = *((_DWORD *)a6 + 5);
    LODWORD(v46) = *((_DWORD *)this + 101);
    v16 = *((_BYTE *)this + 425) & 1;
    v39 = v14;
    v17 = v16 | (2 * (RailsEnabled & 1 | (2 * (v10 & 1 | 2))));
    v18 = _mm_unpacklo_ps((__m128)*((unsigned int *)a6 + 6), v15).m128_u64[0];
    v19 = (__m128)*((unsigned int *)a6 + 9);
    v20 = *((_BYTE *)this + 424) >> 6;
    *(_QWORD *)((char *)&v41 + 4) = v18;
    v21 = _mm_unpacklo_ps(v19, v19).m128_u64[0];
    v22 = (__m128)*((unsigned int *)a6 + 11);
    v42 = (struct IManipulationResource **)v21;
    v23 = _mm_unpacklo_ps((__m128)*((unsigned int *)a6 + 10), v22).m128_u64[0];
    v22.m128_i32[0] = *((_DWORD *)a6 + 8);
    v44 = (int *)v23;
    v24 = BYTE4(pData.Ptr) & 0xE0 | v20 | (4 * v17);
    LODWORD(v41) = *((_DWORD *)a6 + 13);
    v25 = *a2;
    HIDWORD(v43) = v22.m128_i32[0];
    BYTE4(pData.Ptr) = v24;
    v26 = (*v25)((struct IManipulationResource *)a2, &pData, v30);
  }
  else
  {
    v11 = (char *)this + 408;
    v30 = 0LL;
    if ( *((_DWORD *)this + 102) && (*((_BYTE *)a6 + 4) & 2) == 0 && *(_DWORD *)a6 )
      LODWORD(v30) = 3;
    else
      LODWORD(v30) = 0;
    v27 = *a2;
    BYTE4(v30) = BYTE4(v30) & 0xE0 | (*((_BYTE *)this + 424) >> 6) | (4
                                                                    * (*((_BYTE *)this + 425) & 1 | (2 * (RailsEnabled & 1 | (2 * (v10 & 1 | 2))))));
    v26 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *), struct IManipulationTelemetryData **))v27[1])(
            a2,
            &v30);
  }
  v31 = v26;
  if ( dword_18023D7F0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
    {
      v36 = this;
      *(_QWORD *)&v41 = &v36;
      v42 = &v32;
      v34 = a3;
      v44 = &v34;
      v46 = &v35;
      LODWORD(v30) = *((_DWORD *)a6 + 1);
      v50 = &v30;
      v52 = &v31;
      *((_QWORD *)&v41 + 1) = 8LL;
      v32 = (struct IManipulationResource *)a2;
      v43 = 8LL;
      v45 = v29;
      v35 = 1;
      v47 = v29;
      v48 = v11;
      v49 = v29;
      v51 = v29;
      v53 = v29;
      TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F89D4, v28, v29, 9u, &pData);
    }
  }
}
