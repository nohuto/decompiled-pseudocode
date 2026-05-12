/*
 * XREFs of RaidRegisterForRuntimePowerManagement @ 0x1C00352CC
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C00317EC (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0033890 (StorpUnitInitializePoFxPower.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005FBD8 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 *     RaidGetStorPoFxComponent @ 0x1C000EBC0 (RaidGetStorPoFxComponent.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     RaidGetStorPoFxFState @ 0x1C002F424 (RaidGetStorPoFxFState.c)
 */

__int64 __fastcall RaidRegisterForRuntimePowerManagement(
        __int64 a1,
        unsigned __int64 a2,
        const unsigned __int16 *a3,
        unsigned __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v5; // r15d
  unsigned int v6; // r10d
  int *v7; // rdi
  unsigned int v9; // r9d
  char i; // r14
  char *StorPoFxComponent; // rax
  int v12; // r10d
  char *v13; // r11
  unsigned int v14; // ebx
  unsigned int j; // edx
  char *StorPoFxFState; // rax
  int v17; // edx
  unsigned int v18; // r9d
  unsigned int v19; // ecx
  size_t v20; // r12
  _DWORD *Pool; // rax
  _DWORD *v22; // rbx
  __int64 v24; // rax
  unsigned int v25; // r11d
  char *v26; // r12
  char *v27; // rax
  __int64 v28; // r10
  int v29; // r11d
  unsigned int v30; // edx
  __int128 v31; // xmm0
  char v32; // cl
  unsigned int v33; // esi
  _DWORD *v34; // rdi
  char *v35; // rax
  __int64 v36; // r9
  __int64 v37; // r10
  __int64 (__fastcall *v38)(int, int, int, int, __int64, __int64, __int64); // rax
  __int64 (__fastcall *v39)(PVOID); // rcx
  __int64 (__fastcall *v40)(PVOID); // rdx
  void (__fastcall *v41)(__int64, unsigned int); // r8
  void (__fastcall *v42)(__int64, unsigned int); // r9
  int v43; // esi
  const struct _TlgProvider_t *v44; // rcx
  int v45; // ebx
  const GUID *v46; // r8
  const GUID *v47; // r9
  int v48; // r10d
  int v49; // r11d
  __int64 v50; // rcx
  const struct _TlgProvider_t *v51; // rcx
  unsigned int v52; // ecx
  const GUID *v53; // r8
  const GUID *v54; // r9
  int v55; // r10d
  int v56; // eax
  unsigned int v57; // eax
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

  v4 = *(unsigned int *)(a2 + 8);
  v5 = 0;
  v6 = 0;
  *(unsigned __int64 *)((char *)&hProvider.KeywordAny + 4) = a4;
  *(const unsigned __int16 **)((char *)&hProvider.ProviderMetadataPtr + 4) = a3;
  v7 = (int *)a2;
  *(unsigned __int64 *)((char *)&hProvider.KeywordAll + 4) = a2;
  v9 = 80;
  for ( i = 1; v6 < (unsigned int)v4; v6 = v12 + 1 )
  {
    StorPoFxComponent = RaidGetStorPoFxComponent(v7, v6);
    v13 = StorPoFxComponent;
    if ( StorPoFxComponent )
    {
      v9 += 56;
      if ( *((_DWORD *)StorPoFxComponent + 2) > v5 )
        v5 = *((_DWORD *)StorPoFxComponent + 2);
    }
    v14 = *((_DWORD *)StorPoFxComponent + 2);
    for ( j = 0; j < v14; v9 = v19 )
    {
      StorPoFxFState = RaidGetStorPoFxFState(v13, j);
      v19 = v18 + 24;
      if ( !StorPoFxFState )
        v19 = v18;
      j = v17 + 1;
    }
  }
  v20 = v9;
  Pool = RaidAllocatePool(NonPagedPoolNx, v9, 0x4F506152u, a1);
  v22 = Pool;
  if ( !Pool )
    return 3221225626LL;
  memset(Pool, 0, v20);
  v24 = *(__int64 *)((char *)&hProvider.ProviderMetadataPtr + 4);
  v25 = 0;
  *v22 = 2;
  v22[18] = v4;
  v26 = (char *)&v22[14 * v4 + 20];
  for ( *((_QWORD *)v22 + 8) = v24; v25 < v22[18]; v26 += 24 * v30 )
  {
    v27 = RaidGetStorPoFxComponent(v7, v25);
    *(_QWORD *)((char *)v22 + v28 + 112) = v26;
    *(const unsigned __int16 **)((char *)&hProvider.ProviderMetadataPtr + 4) = (const unsigned __int16 *)v27;
    v30 = *((_DWORD *)v27 + 2);
    *(_DWORD *)((char *)v22 + v28 + 108) = v30;
    *(_DWORD *)((char *)v22 + v28 + 104) = *((_DWORD *)v27 + 3);
    v31 = *((_OWORD *)v27 + 1);
    *(_QWORD *)((char *)v22 + v28 + 96) = 1LL;
    *(_OWORD *)((char *)v22 + v28 + 80) = v31;
    if ( (v7[3] & 0x100) != 0 )
      *(_QWORD *)((char *)v22 + v28 + 96) = 3LL;
    v32 = 0;
    if ( v30 <= 1 )
      v32 = i;
    v33 = 0;
    i = v32;
    if ( v30 )
    {
      v34 = *(const unsigned __int16 **)((char *)&hProvider.ProviderMetadataPtr + 4);
      do
      {
        v35 = RaidGetStorPoFxFState(v34, v33++);
        *(_DWORD *)&v26[8 * v36 + 16] = *((_DWORD *)v35 + 6);
        *(_QWORD *)&v26[8 * v36 + 8] = *((_QWORD *)v35 + 2);
        *(_QWORD *)&v26[8 * v36] = *((_QWORD *)v35 + 1);
        v30 = *(_DWORD *)((char *)v22 + v37 + 108);
      }
      while ( v33 < v30 );
      v7 = *(int **)((char *)&hProvider.KeywordAll + 4);
    }
    v25 = v29 + 1;
  }
  if ( **(_DWORD **)(a1 + 64) == 1 )
  {
    if ( !i )
      *((_QWORD *)v22 + 4) = StorPortUnitIdleState;
    v38 = StorPortUnitPowerControl;
    v39 = StorPortUnitPowerRequiredStep1;
    v40 = StorPortUnitPowerNotRequiredStep1;
    v41 = StorPortUnitIdleCondition;
    v42 = StorPortUnitActiveConditionStep1;
  }
  else
  {
    if ( !i )
      *((_QWORD *)v22 + 4) = &StorPortAdapterIdleState;
    v38 = StorPortAdapterPowerControl;
    v39 = StorPortAdapterPowerRequiredStep1;
    v40 = StorPortAdapterPowerNotRequiredStep1;
    v41 = (void (__fastcall *)(__int64, unsigned int))StorPortAdapterIdleCondition;
    v42 = (void (__fastcall *)(__int64, unsigned int))StorPortAdapterActiveCondition;
  }
  *((_QWORD *)v22 + 2) = v42;
  *((_QWORD *)v22 + 3) = v41;
  *((_QWORD *)v22 + 6) = v40;
  *((_QWORD *)v22 + 5) = v39;
  *((_QWORD *)v22 + 7) = v38;
  v43 = PoFxRegisterDevice(a1, v22, *(unsigned __int64 *)((char *)&hProvider.KeywordAny + 4));
  ExFreePoolWithTag(v22, 0x4F506152u);
  if ( v43 >= 0 )
  {
    v44 = (const struct _TlgProvider_t *)**(unsigned int **)(a1 + 64);
    if ( (_DWORD)v44 == 1 )
    {
      v45 = 0;
      if ( (unsigned int)*v7 >= 2 )
        v45 = v7[4];
      if ( (unsigned int)dword_1C0056060 > 5 )
      {
        if ( TlgKeywordOn(v44, 0x400000000000uLL) )
        {
          v50 = *(_QWORD *)v47[1].Data4;
          HIDWORD(hProvider.RegHandle) = *(_DWORD *)(v50 + 56);
          v58 = v47[5].Data4[0];
          v59 = v47[5].Data4[1];
          v60 = v47[5].Data4[2];
          hProvider.LevelPlus1 = v7[2];
          HIDWORD(hProvider.KeywordAny) = v7[3];
          v62 = (unsigned __int8 *)(v50 + 5192);
          v68 = &v58;
          Data4 = v47[107].Data4;
          v70 = (unsigned int *)&v59;
          LODWORD(hProvider.EnableCallback) = v48;
          v72 = (struct _TlgProvider_t *)&v60;
          p_EnableCallback = &hProvider.EnableCallback;
          p_hProvider = &hProvider;
          v78 = &hProvider.LevelPlus1 + 1;
          v80 = (char *)&hProvider.KeywordAny + 4;
          v82 = (char *)&hProvider.KeywordAll + 4;
          v84 = (char *)&hProvider.ProviderMetadataPtr + 4;
          *(&hProvider.LevelPlus1 + 1) = v5;
          HIDWORD(hProvider.KeywordAll) = v45;
          HIDWORD(hProvider.ProviderMetadataPtr) = v49;
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
            &unk_1C004BF18,
            v46,
            v47,
            0xEu,
            (EVENT_DATA_DESCRIPTOR *)((char *)&hProvider.EnableCallback + 4));
        }
      }
    }
    else if ( !(_DWORD)v44 )
    {
      v51 = 0LL;
      if ( (unsigned int)*v7 >= 2 )
        v51 = (const struct _TlgProvider_t *)(unsigned int)v7[4];
      if ( (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn(v51, 0x400000000000uLL) )
      {
        v56 = v7[2];
        hProvider.LevelPlus1 = v52;
        v66 = (char *)&hProvider.KeywordAll + 4;
        HIDWORD(hProvider.KeywordAll) = v56;
        v57 = v7[3];
        v68 = (unsigned __int8 *)&hProvider.KeywordAny + 4;
        *(&hProvider.LevelPlus1 + 1) = v57;
        v70 = &hProvider.LevelPlus1 + 1;
        v62 = v54[324].Data4;
        v72 = &hProvider;
        HIDWORD(hProvider.ProviderMetadataPtr) = v55;
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
          &unk_1C004BFDF,
          v53,
          v54,
          8u,
          (EVENT_DATA_DESCRIPTOR *)((char *)&hProvider.EnableCallback + 4));
      }
    }
  }
  return (unsigned int)v43;
}
