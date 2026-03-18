/*
 * XREFs of DxgkGetSharedResourceAdapterLuid @ 0x1C0180760
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C000706C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetSharedResourceAdapterLuid(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __m128i *v12; // rax
  void *v13; // xmm0_8
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v32; // r9
  __int64 ObjectA; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  _BYTE v43[16]; // [rsp+30h] [rbp-68h] BYREF
  __m128i v44; // [rsp+40h] [rbp-58h]
  __m128i v45; // [rsp+50h] [rbp-48h]
  __int64 v46; // [rsp+60h] [rbp-38h]
  PVOID Object; // [rsp+B0h] [rbp+18h] BYREF
  PVOID v48; // [rsp+B8h] [rbp+20h]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2088);
  if ( !DXGPROCESS::GetCurrent((__int64)a1) )
  {
    v6 = WdLogNewEntry5_WdError(v5, v4);
    LODWORD(v7) = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    v9 = qword_1C006E790;
    v10 = (qword_1C006E790 & 2) == 0;
LABEL_7:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v9, &EventProfilerExit, v8, 2088);
    return (unsigned int)v7;
  }
  v12 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v12 = (__m128i *)MmUserProbeAddress;
  v44 = *v12;
  v45 = v44;
  v46 = 0LL;
  v13 = (void *)_mm_srli_si128(v44, 8).m128i_u64[0];
  if ( v13 )
  {
    v14 = ObReferenceObjectByHandle(v13, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
    v7 = v14;
    v19 = Object;
    v48 = Object;
    if ( v14 == -1073741788 )
    {
      v20 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      *(_QWORD *)(v20 + 24) = v13;
      LODWORD(v7) = -1073741788;
      *(_QWORD *)(v20 + 32) = -1073741788LL;
      WdLogEvent5_WdWarning(v20);
      goto LABEL_6;
    }
    if ( v14 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      *(_QWORD *)(v21 + 24) = v13;
      *(_QWORD *)(v21 + 32) = v7;
      WdLogEvent5_WdWarning(v21);
LABEL_18:
      v10 = (qword_1C006E790 & 2) == 0;
      goto LABEL_7;
    }
    v22 = *((_QWORD *)Object + 2);
    if ( !v22 )
    {
      v23 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      *(_QWORD *)(v23 + 24) = v19;
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v23 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v23);
    }
    v24 = *(_QWORD *)(v22 + 88);
    if ( v24 )
      goto LABEL_25;
    v25 = *(_QWORD *)(v22 + 72);
    if ( v25 )
      v24 = *(_QWORD *)(v25 + 16);
    if ( v24 )
LABEL_25:
      v46 = *(_QWORD *)(v24 + 268);
    ObfDereferenceObject(v19);
    if ( (int)v7 < 0 )
      goto LABEL_18;
  }
  else
  {
    v26 = _mm_cvtsi128_si32(v44);
    if ( !v26 )
    {
      v42 = WdLogNewEntry5_WdError(MmUserProbeAddress, v4);
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v42 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v42);
      goto LABEL_18;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v43);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
    Global = DXGGLOBAL::GetGlobal(v28, v27, v29, v30);
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v26, 2LL, v32);
    v37 = ObjectA;
    if ( !ObjectA )
    {
      v38 = WdLogNewEntry5_WdWarning(0LL, v34, v35, v36);
      *(_QWORD *)(v38 + 24) = v26;
      LODWORD(v7) = -1073741811;
      *(_QWORD *)(v38 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v38);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
      goto LABEL_18;
    }
    v39 = *(_QWORD *)(ObjectA + 88);
    if ( v39 )
      goto LABEL_35;
    v40 = *(_QWORD *)(v37 + 72);
    if ( v40 )
      v39 = *(_QWORD *)(v40 + 16);
    if ( v39 )
LABEL_35:
      v46 = *(_QWORD *)(v39 + 268);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
  }
  v41 = (unsigned __int64)&a1[1].m128i_u64[1];
  if ( (unsigned __int64)&a1[1].m128i_u64[1] > MmUserProbeAddress || v41 <= (unsigned __int64)a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a1 = v44;
  a1[1].m128i_i64[0] = v46;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v41, &EventProfilerExit, v8, 2088);
  return 0LL;
}
