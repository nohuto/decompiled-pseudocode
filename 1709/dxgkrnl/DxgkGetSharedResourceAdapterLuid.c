/*
 * XREFs of DxgkGetSharedResourceAdapterLuid @ 0x1C0184850
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C00030B4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetSharedResourceAdapterLuid(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  bool v9; // zf
  __m128i *v11; // rax
  void *v12; // xmm0_8
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  PVOID v20; // r13
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v26; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  _BYTE v37[16]; // [rsp+30h] [rbp-58h] BYREF
  __m128i v38; // [rsp+40h] [rbp-48h]
  __m128i v39; // [rsp+50h] [rbp-38h]
  __int64 v40; // [rsp+60h] [rbp-28h]
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2088);
  if ( !DXGPROCESS::GetCurrent((__int64)a1, a2) )
  {
    v5 = WdLogNewEntry5_WdError(v4);
    LODWORD(v6) = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    v8 = qword_1C005F010;
    v9 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v7, 2088);
    return (unsigned int)v6;
  }
  v11 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v11 = (__m128i *)MmUserProbeAddress;
  v38 = *v11;
  v39 = v38;
  v40 = 0LL;
  v12 = (void *)_mm_srli_si128(v38, 8).m128i_u64[0];
  if ( v12 )
  {
    v13 = ObReferenceObjectByHandle(v12, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
    v6 = v13;
    if ( v13 == -1073741788 )
    {
      v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v17 + 24) = v12;
      *(_QWORD *)(v17 + 32) = -1073741788LL;
      WdLogEvent5_WdWarning(v17);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(qword_1C005F010, &EventProfilerExit, v18, 2088);
      return 3221225508LL;
    }
    if ( v13 < 0 )
    {
      v19 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v19 + 24) = v12;
      *(_QWORD *)(v19 + 32) = v6;
      WdLogEvent5_WdWarning(v19);
LABEL_20:
      v9 = (qword_1C005F010 & 2) == 0;
      goto LABEL_6;
    }
    v20 = Object;
    v21 = *((_QWORD *)Object + 2);
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v22 + 24) = v20;
      LODWORD(v6) = -1073741811;
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v22);
    }
    v23 = *(_QWORD *)(v21 + 88);
    if ( v23 )
      goto LABEL_27;
    v24 = *(_QWORD *)(v21 + 72);
    if ( v24 )
      v23 = *(_QWORD *)(v24 + 16);
    if ( v23 )
LABEL_27:
      v40 = *(_QWORD *)(v23 + 268);
    ObfDereferenceObject(v20);
    if ( (int)v6 < 0 )
      goto LABEL_20;
  }
  else
  {
    v25 = _mm_cvtsi128_si32(v38);
    if ( !v25 )
    {
      v36 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      LODWORD(v6) = -1073741811;
      *(_QWORD *)(v36 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v36);
      goto LABEL_20;
    }
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v37);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
    Global = DXGGLOBAL::GetGlobal(v26);
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v25, 2);
    v31 = ObjectA;
    if ( !ObjectA )
    {
      v32 = WdLogNewEntry5_WdWarning(0LL, v29, v30);
      *(_QWORD *)(v32 + 24) = v25;
      LODWORD(v6) = -1073741811;
      *(_QWORD *)(v32 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v32);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
      goto LABEL_20;
    }
    v33 = *(_QWORD *)(ObjectA + 88);
    if ( v33 )
      goto LABEL_37;
    v34 = *(_QWORD *)(v31 + 72);
    if ( v34 )
      v33 = *(_QWORD *)(v34 + 16);
    if ( v33 )
LABEL_37:
      v40 = *(_QWORD *)(v33 + 268);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
  }
  v35 = (unsigned __int64)&a1[1].m128i_u64[1];
  if ( (unsigned __int64)&a1[1].m128i_u64[1] > MmUserProbeAddress || v35 <= (unsigned __int64)a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a1 = v38;
  a1[1].m128i_i64[0] = v40;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v7, 2088);
  return 0LL;
}
