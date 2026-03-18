/*
 * XREFs of ?ProcessOutput@CInteractionProcessor@@QEAAXPEAUIManipulationResource@@_N1PEAUIManipulationTelemetryData@@AEAUInteractionOutput@@@Z @ 0x1801D5870
 * Callers:
 *     ?ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4InertiaFrameType@@PEAUIManipulationTelemetryData@@PEAW4PointerResult@@@Z @ 0x1801D5208 (-ProcessHandledInteractions@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@_K_NW4Inertia.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x1801D5010 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 */

void __fastcall CInteractionProcessor::ProcessOutput(
        CInteractionProcessor *this,
        __int64 (__fastcall ***a2)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *),
        unsigned __int8 a3,
        __int64 a4,
        struct IManipulationTelemetryData *a5,
        struct InteractionOutput *a6)
{
  char RailsEnabled; // r13
  char v10; // si
  char v11; // cl
  __m128 v12; // xmm6
  __m128 v13; // xmm8
  __m128 v14; // xmm7
  char *v15; // r14
  __m128 v16; // xmm1
  unsigned __int64 v17; // xmm0_8
  __int64 v18; // xmm0_8
  __int64 (__fastcall **v19)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *); // rax
  int v20; // eax
  __int64 (__fastcall **v21)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *); // rax
  __int64 v22; // r9
  int v23; // [rsp+38h] [rbp-D0h] BYREF
  int v24; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v25; // [rsp+40h] [rbp-C8h] BYREF
  struct IManipulationTelemetryData *v26; // [rsp+48h] [rbp-C0h] BYREF
  CInteractionProcessor *v27; // [rsp+50h] [rbp-B8h] BYREF
  struct IManipulationResource *v28; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A8h]
  int v30; // [rsp+68h] [rbp-A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  char v32; // [rsp+88h] [rbp-80h]
  unsigned __int64 v33; // [rsp+8Ch] [rbp-7Ch]
  int v34; // [rsp+94h] [rbp-74h]
  CInteractionProcessor **v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  struct IManipulationResource **v37; // [rsp+A8h] [rbp-60h]
  __int128 v38; // [rsp+B0h] [rbp-58h]
  __int128 v39; // [rsp+C0h] [rbp-48h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  char *v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  struct IManipulationTelemetryData **v43; // [rsp+E8h] [rbp-20h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  int *v45; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]

  v26 = a5;
  v23 = 0;
  RailsEnabled = CInteractionProcessor::GetRailsEnabled((__int64)this, 0);
  v10 = CInteractionProcessor::GetRailsEnabled((__int64)this, 1);
  if ( a3 )
  {
    v11 = *((_BYTE *)this + 808);
    v12 = 0LL;
    if ( (v11 & 1) != 0 )
    {
      v13 = (__m128)*((unsigned int *)a6 + 2);
    }
    else
    {
      *((_DWORD *)a6 + 2) = 0;
      v13 = 0LL;
      v11 = *((_BYTE *)this + 808);
    }
    if ( (v11 & 2) != 0 )
    {
      v12 = (__m128)*((unsigned int *)a6 + 3);
    }
    else
    {
      *((_DWORD *)a6 + 3) = 0;
      v11 = *((_BYTE *)this + 808);
    }
    v14 = (__m128)LODWORD(FLOAT_1_0);
    if ( (v11 & 4) != 0 )
      v14 = (__m128)*((unsigned int *)a6 + 4);
    else
      *((_DWORD *)a6 + 4) = 1065353216;
    memset_0(&pData, 0, 0x60uLL);
    LODWORD(pData.Ptr) = 0;
    v15 = (char *)this + 792;
    if ( *((_DWORD *)this + 198) && (*((_BYTE *)a6 + 4) & 2) == 0 )
      LODWORD(pData.Ptr) = 3 - (*(_DWORD *)a6 != 0);
    LODWORD(v29) = 0;
    v16 = (__m128)*((unsigned int *)a6 + 9);
    v34 = 0;
    v33 = _mm_unpacklo_ps(v13, v12).m128_u64[0];
    v35 = (CInteractionProcessor **)_mm_unpacklo_ps(v14, v14).m128_u64[0];
    v37 = (struct IManipulationResource **)*((_QWORD *)a6 + 3);
    v17 = _mm_unpacklo_ps(v16, v16).m128_u64[0];
    v16.m128_i32[0] = *((_DWORD *)a6 + 8);
    *(_QWORD *)((char *)&v38 + 4) = v17;
    v18 = *((_QWORD *)a6 + 5);
    LODWORD(v36) = 1065353216;
    LODWORD(v38) = 0;
    LODWORD(v29) = 0;
    HIDWORD(v38) = 0;
    HIDWORD(v39) = 0;
    LODWORD(v40) = *((_DWORD *)a6 + 5);
    HIDWORD(v40) = *((_DWORD *)this + 197);
    HIDWORD(pData.Ptr) = *((_DWORD *)this + 203);
    pData.Size = *((_DWORD *)this + 204);
    pData.Reserved = *((_DWORD *)this + 205);
    *(_QWORD *)((char *)&v39 + 4) = v18;
    v19 = *a2;
    HIDWORD(v36) = *((_DWORD *)a6 + 13);
    LODWORD(v39) = v16.m128_i32[0];
    v32 = RailsEnabled | v32 & 0xFC | (2 * (v10 | 2));
    v20 = (*v19)((struct IManipulationResource *)a2, &pData, v26);
  }
  else
  {
    v15 = (char *)this + 792;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0;
    if ( *((_DWORD *)this + 198) && (*((_BYTE *)a6 + 4) & 2) == 0 && *(_DWORD *)a6 )
      LODWORD(v28) = 3;
    else
      LODWORD(v28) = 0;
    HIDWORD(v28) = *((_DWORD *)this + 203);
    v29 = *((_QWORD *)this + 102);
    v21 = *a2;
    LOBYTE(v30) = RailsEnabled | v30 & 0xFC | (2 * (v10 | 2));
    v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IManipulationResource *, EVENT_DATA_DESCRIPTOR *, struct IManipulationTelemetryData *), struct IManipulationResource **))v21[1])(
            a2,
            &v28);
  }
  v23 = v20;
  if ( dword_1802D3FE0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
    {
      v27 = this;
      v35 = &v27;
      v37 = &v28;
      v24 = a3;
      *((_QWORD *)&v38 + 1) = &v24;
      *((_QWORD *)&v39 + 1) = &v25;
      LODWORD(v26) = *((_DWORD *)a6 + 1);
      v43 = &v26;
      v45 = &v23;
      v36 = 8LL;
      v28 = (struct IManipulationResource *)a2;
      *(_QWORD *)&v38 = 8LL;
      *(_QWORD *)&v39 = v22;
      LODWORD(v25) = 1;
      v40 = v22;
      v41 = v15;
      v42 = v22;
      v44 = v22;
      v46 = v22;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802AA2FC, 0LL, 0LL, 9u, &pData);
    }
  }
}
