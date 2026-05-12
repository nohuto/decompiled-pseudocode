/*
 * XREFs of RaidRegisterForRuntimePowerManagement @ 0x1C0018EB8
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C001CFF8 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0034D60 (StorpUnitInitializePoFxPower.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005E704 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x1C0018E74 (RaidGetStorPoFxComponent.c)
 *     RaidGetStorPoFxFState @ 0x1C00193CC (RaidGetStorPoFxFState.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

__int64 __fastcall RaidRegisterForRuntimePowerManagement(
        __int64 a1,
        unsigned __int64 a2,
        const unsigned __int16 *a3,
        unsigned __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r14d
  unsigned int v6; // r10d
  int *v7; // rdi
  char i; // r13
  char *StorPoFxComponent; // rax
  __int64 v11; // r8
  int v12; // r10d
  char *v13; // r11
  unsigned int v14; // ebx
  __int64 j; // rdx
  __int64 StorPoFxFState; // rax
  unsigned int v17; // r9d
  int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // r12d
  _DWORD *Pool; // rax
  _DWORD *v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // r12d
  unsigned int v25; // r11d
  __int64 v26; // r9
  __int64 v27; // rsi
  char *v28; // rax
  __int64 v29; // r8
  int v30; // r11d
  __int64 v31; // r10
  unsigned int v32; // edx
  __int128 v33; // xmm0
  __int64 v34; // rcx
  char v35; // cl
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // r10
  __int64 (__fastcall *v40)(); // rax
  __int64 v41; // r8
  int v42; // esi
  const struct _TlgProvider_t *v43; // rcx
  const struct _TlgProvider_t *v44; // rcx
  unsigned int v45; // ecx
  const GUID *v46; // r8
  const GUID *v47; // r9
  int v48; // r10d
  int v49; // eax
  unsigned int v50; // eax
  int v52; // ebx
  const GUID *v53; // r8
  const GUID *v54; // r9
  int v55; // r10d
  int v56; // r11d
  __int64 v57; // rcx
  unsigned __int8 v58; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v59; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v60; // [rsp+32h] [rbp-CEh] BYREF
  struct _TlgProvider_t hProvider; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int8 *v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
  unsigned __int8 *Data4; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  char *v66; // [rsp+A0h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  unsigned __int8 *v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+B8h] [rbp-48h]
  unsigned int *v70; // [rsp+C0h] [rbp-40h]
  __int64 v71; // [rsp+C8h] [rbp-38h]
  struct _TlgProvider_t *v72; // [rsp+D0h] [rbp-30h]
  __int64 v73; // [rsp+D8h] [rbp-28h]
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+E0h] [rbp-20h]
  __int64 v75; // [rsp+E8h] [rbp-18h]
  struct _TlgProvider_t *p_hProvider; // [rsp+F0h] [rbp-10h]
  __int64 v77; // [rsp+F8h] [rbp-8h]
  unsigned int *v78; // [rsp+100h] [rbp+0h]
  __int64 v79; // [rsp+108h] [rbp+8h]
  char *v80; // [rsp+110h] [rbp+10h]
  __int64 v81; // [rsp+118h] [rbp+18h]
  char *v82; // [rsp+120h] [rbp+20h]
  __int64 v83; // [rsp+128h] [rbp+28h]
  char *v84; // [rsp+130h] [rbp+30h]
  __int64 v85; // [rsp+138h] [rbp+38h]

  v4 = *(_DWORD *)(a2 + 8);
  v5 = 0;
  v6 = 0;
  *(unsigned __int64 *)((char *)&hProvider.KeywordAny + 4) = a4;
  *(const unsigned __int16 **)((char *)&hProvider.ProviderMetadataPtr + 4) = a3;
  v7 = (int *)a2;
  *(unsigned __int64 *)((char *)&hProvider.KeywordAll + 4) = a2;
  LODWORD(a4) = 80;
  for ( i = 1; v6 < v4; v6 = v12 + 1 )
  {
    StorPoFxComponent = RaidGetStorPoFxComponent(v7, v6);
    v13 = StorPoFxComponent;
    if ( StorPoFxComponent )
    {
      a4 = (unsigned int)(a4 + 56);
      if ( *((_DWORD *)StorPoFxComponent + 2) > v5 )
        v5 = *((_DWORD *)StorPoFxComponent + 2);
    }
    v14 = *((_DWORD *)StorPoFxComponent + 2);
    for ( j = 0LL; (unsigned int)j < v14; a4 = v19 )
    {
      StorPoFxFState = RaidGetStorPoFxFState(v13, j, v11, a4);
      j = (unsigned int)(v18 + 1);
      v19 = v17 + 24;
      if ( !StorPoFxFState )
        v19 = v17;
    }
  }
  v20 = a4;
  Pool = RaidAllocatePool(NonPagedPoolNx, (unsigned int)a4, 0x4F506152u, a1);
  v22 = Pool;
  if ( !Pool )
    return 3221225626LL;
  memset(Pool, 0, v20);
  v23 = *(__int64 *)((char *)&hProvider.ProviderMetadataPtr + 4);
  v24 = 0;
  *v22 = 2;
  v25 = 0;
  v22[18] = v4;
  v26 = 3LL;
  for ( *((_QWORD *)v22 + 8) = v23; v25 < v22[18]; v24 = 0 )
  {
    v27 = 14LL * v25;
    v28 = RaidGetStorPoFxComponent(v7, v25);
    *(_QWORD *)&v22[v27 + 28] = v31;
    *(const unsigned __int16 **)((char *)&hProvider.ProviderMetadataPtr + 4) = (const unsigned __int16 *)v28;
    v32 = *((_DWORD *)v28 + 2);
    v22[v27 + 27] = v32;
    v22[v27 + 26] = *((_DWORD *)v28 + 3);
    v33 = *((_OWORD *)v28 + 1);
    *(_QWORD *)&v22[v27 + 24] = 1LL;
    v34 = *(_QWORD *)&v22[v27 + 24];
    *(_OWORD *)&v22[v27 + 20] = v33;
    if ( (v7[3] & 0x100) != 0 )
      v34 = v26;
    *(_QWORD *)&v22[v27 + 24] = v34;
    v35 = 0;
    if ( v32 <= 1 )
      v35 = i;
    i = v35;
    if ( v32 )
    {
      v36 = *(__int64 *)((char *)&hProvider.ProviderMetadataPtr + 4);
      do
      {
        v37 = RaidGetStorPoFxFState(v36, v24, v29, 3LL * v24);
        ++v24;
        *(_DWORD *)(v39 + 8 * v38 + 16) = *(_DWORD *)(v37 + 24);
        *(_QWORD *)(v39 + 8 * v38 + 8) = *(_QWORD *)(v37 + 16);
        *(_QWORD *)(v39 + 8 * v38) = *(_QWORD *)(v37 + 8);
      }
      while ( v24 < v22[v27 + 27] );
      v7 = *(int **)((char *)&hProvider.KeywordAll + 4);
      v26 = 3LL;
    }
    v25 = v30 + 1;
  }
  if ( **(_DWORD **)(a1 + 64) == 1 )
  {
    if ( !i )
      *((_QWORD *)v22 + 4) = StorPortUnitIdleState;
    *((_QWORD *)v22 + 2) = StorPortUnitActiveConditionStep1;
    *((_QWORD *)v22 + 3) = StorPortUnitIdleCondition;
    *((_QWORD *)v22 + 6) = StorPortUnitPowerNotRequiredStep1;
    *((_QWORD *)v22 + 5) = StorPortUnitPowerRequiredStep1;
    v40 = StorPortUnitPowerControl;
  }
  else
  {
    if ( !i )
      *((_QWORD *)v22 + 4) = StorPortAdapterIdleState;
    *((_QWORD *)v22 + 2) = StorPortAdapterActiveCondition;
    *((_QWORD *)v22 + 3) = StorPortAdapterIdleCondition;
    *((_QWORD *)v22 + 6) = StorPortAdapterPowerNotRequiredStep1;
    *((_QWORD *)v22 + 5) = StorPortAdapterPowerRequiredStep1;
    v40 = (__int64 (__fastcall *)())StorPortAdapterPowerControl;
  }
  v41 = *(unsigned __int64 *)((char *)&hProvider.KeywordAny + 4);
  *((_QWORD *)v22 + 7) = v40;
  v42 = PoFxRegisterDevice(a1, v22, v41, v26);
  ExFreePoolWithTag(v22, 0x4F506152u);
  if ( v42 >= 0 )
  {
    v43 = (const struct _TlgProvider_t *)**(unsigned int **)(a1 + 64);
    if ( (_DWORD)v43 == 1 )
    {
      v52 = 0;
      if ( (unsigned int)*v7 >= 2 )
        v52 = v7[4];
      if ( (unsigned int)dword_1C0055010 > 5 && TlgKeywordOn(v43, 0x400000000000uLL) )
      {
        v57 = *(_QWORD *)v54[1].Data4;
        HIDWORD(hProvider.RegHandle) = *(_DWORD *)(v57 + 56);
        v58 = v54[5].Data4[0];
        v59 = v54[5].Data4[1];
        v60 = v54[5].Data4[2];
        hProvider.LevelPlus1 = v7[2];
        HIDWORD(hProvider.KeywordAny) = v7[3];
        v62 = (unsigned __int8 *)(v57 + 5192);
        v68 = &v58;
        Data4 = v54[105].Data4;
        v70 = (unsigned int *)&v59;
        LODWORD(hProvider.EnableCallback) = v55;
        v72 = (struct _TlgProvider_t *)&v60;
        p_EnableCallback = &hProvider.EnableCallback;
        p_hProvider = &hProvider;
        v78 = &hProvider.LevelPlus1 + 1;
        v80 = (char *)&hProvider.KeywordAny + 4;
        v82 = (char *)&hProvider.KeywordAll + 4;
        v84 = (char *)&hProvider.ProviderMetadataPtr + 4;
        *(&hProvider.LevelPlus1 + 1) = v5;
        HIDWORD(hProvider.KeywordAll) = v52;
        HIDWORD(hProvider.ProviderMetadataPtr) = v56;
        v63 = 16LL;
        v65 = 16LL;
        v66 = (char *)&hProvider.RegHandle + 4;
        v67 = 4LL;
        v69 = 1LL;
        v71 = 1LL;
        v73 = 1LL;
        v75 = 4LL;
        v77 = 4LL;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 4LL;
        v85 = 4LL;
        TlgWrite(
          (TraceLoggingHProvider)((char *)&hProvider.ProviderMetadataPtr + 4),
          &unk_1C004B480,
          v53,
          v54,
          0xEu,
          (EVENT_DATA_DESCRIPTOR *)((char *)&hProvider.EnableCallback + 4));
      }
    }
    else if ( !(_DWORD)v43 )
    {
      v44 = 0LL;
      if ( (unsigned int)*v7 >= 2 )
        v44 = (const struct _TlgProvider_t *)(unsigned int)v7[4];
      if ( (unsigned int)dword_1C0055010 > 5 )
      {
        if ( TlgKeywordOn(v44, 0x400000000000uLL) )
        {
          v49 = v7[2];
          hProvider.LevelPlus1 = v45;
          v66 = (char *)&hProvider.KeywordAll + 4;
          HIDWORD(hProvider.KeywordAll) = v49;
          v50 = v7[3];
          v68 = (unsigned __int8 *)&hProvider.KeywordAny + 4;
          *(&hProvider.LevelPlus1 + 1) = v50;
          v70 = &hProvider.LevelPlus1 + 1;
          v62 = v47[324].Data4;
          v72 = &hProvider;
          HIDWORD(hProvider.ProviderMetadataPtr) = v48;
          HIDWORD(hProvider.KeywordAny) = v5;
          v63 = 16LL;
          Data4 = (unsigned __int8 *)&hProvider.ProviderMetadataPtr + 4;
          v65 = 4LL;
          v67 = 4LL;
          v69 = 4LL;
          v71 = 4LL;
          v73 = 4LL;
          TlgWrite(
            &hProvider,
            &unk_1C004B547,
            v46,
            v47,
            8u,
            (EVENT_DATA_DESCRIPTOR *)((char *)&hProvider.EnableCallback + 4));
        }
      }
    }
  }
  return (unsigned int)v42;
}
