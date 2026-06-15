/*
 * XREFs of ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x1800C62D0
 * Callers:
 *     ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x1800C3000 (-HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x1800C5760 (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z.c)
 *     ?SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z @ 0x1800C667C (-SetDynamicObjects@CStreamResource@Sarm@@QEAAJI_J@Z.c)
 *     ?ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z @ 0x1800C6854 (-ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x1800C71DC (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 */

__int64 __fastcall Sarm::CStreamResource::ProcessDynamicObjectCountChange(
        Sarm::CStreamResource *this,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4)
{
  unsigned int v6; // r8d
  unsigned int v7; // edx
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rsi
  const GUID *v16; // r8
  const GUID *v17; // r9
  unsigned int v18; // r15d
  double v19; // xmm1_8
  __int64 *v20; // rcx
  bool v21; // cf
  int v22; // eax
  unsigned int v23; // ebx
  bool v24; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-81h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-69h] BYREF
  char *v28; // [rsp+70h] [rbp-49h]
  int v29; // [rsp+78h] [rbp-41h]
  int v30; // [rsp+7Ch] [rbp-3Dh]
  char *v31; // [rsp+80h] [rbp-39h]
  int v32; // [rsp+88h] [rbp-31h]
  int v33; // [rsp+8Ch] [rbp-2Dh]
  unsigned int *v34; // [rsp+90h] [rbp-29h]
  int v35; // [rsp+98h] [rbp-21h]
  int v36; // [rsp+9Ch] [rbp-1Dh]
  unsigned int *v37; // [rsp+A0h] [rbp-19h]
  int v38; // [rsp+A8h] [rbp-11h]
  int v39; // [rsp+ACh] [rbp-Dh]
  bool *v40; // [rsp+B0h] [rbp-9h]
  int v41; // [rsp+B8h] [rbp-1h]
  int v42; // [rsp+BCh] [rbp+3h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  unsigned int v44; // [rsp+128h] [rbp+6Fh] BYREF

  v44 = a2;
  v25 = a3;
  SarmTraceLoggingTracer("Sarm::CStreamResource::ProcessDynamicObjectCountChange", 0x19Eu);
  v6 = v25;
  v7 = v44;
  *a4 = 0LL;
  v8 = Sarm::CStreamResource::ValidateDynamicObjectRequest(this, v7, v6);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = v25;
    *((_DWORD *)this + 16) = v44;
    v12 = *((_DWORD *)this + 17);
    if ( v11 < v12 )
      v12 = v11;
    *((_DWORD *)this + 18) = v12;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v18 = Sarm::CStreamResource::CalculateDynamicObjectGrantCount(this, v11);
    if ( v18 < *((_DWORD *)this + 20) )
    {
      PerformanceCount.QuadPart = 0LL;
      QueryPerformanceCounter(&PerformanceCount);
      v19 = (double)(int)g_u64QPCFrequency;
      if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
        v19 = v19 + 1.844674407370955e19;
      v20 = *(__int64 **)(*((_QWORD *)this + 1) + 16LL);
      if ( *v20 >= 0 )
        v13 = *v20;
      if ( v20[1] >= 0 )
        v14 = v20[1];
      v15 = (unsigned int)(int)((double)(int)PerformanceCount.LowPart * 10000000.0 / v19);
    }
    if ( (unsigned int)dword_18012A220 > 5 )
    {
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v21 = v18 < *((_DWORD *)this + 20);
      v28 = (char *)this + 40;
      v31 = (char *)this + 16;
      v24 = v21;
      v42 = 0;
      v34 = &v44;
      v37 = &v25;
      v40 = &v24;
      v29 = 8;
      v32 = 16;
      v35 = 4;
      v38 = 4;
      v41 = 1;
      TlgWrite((TraceLoggingHProvider)&dword_18012A220, &unk_1800FAA19, v16, v17, 7u, &pData);
    }
    v22 = Sarm::CStreamResource::SetDynamicObjects(this, v18, v15 + v13);
    v23 = v22;
    if ( v22 >= 0 )
    {
      *a4 = v13 + v15 + v14;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1BF,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
        (const char *)(unsigned int)v22);
      return v23;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A1,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
