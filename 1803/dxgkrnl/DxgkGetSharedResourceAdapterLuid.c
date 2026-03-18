/*
 * XREFs of DxgkGetSharedResourceAdapterLuid @ 0x1C016C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001694C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetSharedResourceAdapterLuid(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  ULONG64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __m128i *v12; // rax
  void *v13; // xmm0_8
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  PVOID v22; // r15
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // ebx
  __int64 v28; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // [rsp+30h] [rbp-68h] BYREF
  __int64 v40; // [rsp+38h] [rbp-60h]
  _BYTE v41[16]; // [rsp+40h] [rbp-58h] BYREF
  __m128i v42; // [rsp+50h] [rbp-48h]
  __m128i v43; // [rsp+60h] [rbp-38h]
  __int64 v44; // [rsp+70h] [rbp-28h]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF

  v40 = 0LL;
  v39 = 2088;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2088);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2088);
  if ( !DXGPROCESS::GetCurrent(v5, v4) )
    goto LABEL_5;
  v6 = MmUserProbeAddress;
  v12 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v12 = (__m128i *)MmUserProbeAddress;
  v42 = *v12;
  v43 = v42;
  v44 = 0LL;
  v13 = (void *)_mm_srli_si128(v42, 8).m128i_u64[0];
  if ( v13 )
  {
    v14 = ObReferenceObjectByHandle(v13, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
    v8 = v14;
    if ( v14 == -1073741788 )
    {
      v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v18 + 24) = v13;
      *(_QWORD *)(v18 + 32) = -1073741788LL;
      WdLogEvent5_WdWarning(v18);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v19, &EventProfilerExit, v20, v39);
      return 3221225508LL;
    }
    if ( v14 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v21 + 24) = v13;
      *(_QWORD *)(v21 + 32) = v8;
      WdLogEvent5_WdWarning(v21);
      goto LABEL_6;
    }
    v22 = Object;
    v23 = *((_QWORD *)Object + 2);
    if ( !v23 )
    {
      v24 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v24 + 24) = v22;
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
    }
    v25 = *(_QWORD *)(v23 + 88);
    if ( v25 )
      goto LABEL_26;
    v26 = *(_QWORD *)(v23 + 72);
    if ( v26 )
      v25 = *(_QWORD *)(v26 + 16);
    if ( v25 )
LABEL_26:
      v44 = *(_QWORD *)(v25 + 268);
    ObfDereferenceObject(v22);
    if ( (int)v8 < 0 )
      goto LABEL_6;
  }
  else
  {
    v27 = _mm_cvtsi128_si32(v42);
    if ( !v27 )
    {
LABEL_5:
      v7 = WdLogNewEntry5_WdError(v6);
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v7 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v7);
LABEL_6:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v9, &EventProfilerExit, v10, v39);
      return (unsigned int)v8;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v41);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
    Global = DXGGLOBAL::GetGlobal(v28);
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v27, 2);
    v33 = ObjectA;
    if ( !ObjectA )
    {
      v34 = WdLogNewEntry5_WdWarning(0LL, v31, v32);
      *(_QWORD *)(v34 + 24) = v27;
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v34 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v34);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v41);
      goto LABEL_6;
    }
    v35 = *(_QWORD *)(ObjectA + 88);
    if ( v35 )
      goto LABEL_36;
    v36 = *(_QWORD *)(v33 + 72);
    if ( v36 )
      v35 = *(_QWORD *)(v36 + 16);
    if ( v35 )
LABEL_36:
      v44 = *(_QWORD *)(v35 + 268);
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v41);
  }
  if ( (unsigned __int64)&a1[1].m128i_u64[1] > MmUserProbeAddress || &a1[1].m128i_u64[1] <= (unsigned __int64 *)a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a1 = v42;
  a1[1].m128i_i64[0] = v44;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, v39);
  return 0LL;
}
