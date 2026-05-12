/*
 * XREFs of RaidRegisterForRuntimePowerManagement @ 0x1C001900C
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C001DF18 (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003616C (StorpUnitInitializePoFxPower.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0060A88 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0002C98 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0002CCC (_TlgWrite.c)
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     RaidGetStorPoFxFState @ 0x1C001950C (RaidGetStorPoFxFState.c)
 *     RaidGetStorPoFxComponent @ 0x1C0019534 (RaidGetStorPoFxComponent.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     memset @ 0x1C001F680 (memset.c)
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
  _DWORD *v7; // rdi
  char i; // r12
  __int64 StorPoFxComponent; // rax
  __int64 v11; // r8
  int v12; // r10d
  __int64 v13; // r11
  unsigned int v14; // ebx
  __int64 j; // rdx
  __int64 StorPoFxFState; // rax
  unsigned int v17; // r9d
  int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // r15d
  _DWORD *Pool; // rax
  _DWORD *v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // r15d
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // r11
  __int128 v29; // xmm0
  unsigned int v30; // edx
  char v31; // cl
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // r11
  __int64 v37; // r10
  __int64 (__fastcall *v38)(int, int, int, int, __int64, __int64, __int64); // rax
  __int64 v39; // r8
  int v40; // esi
  const struct _TlgProvider_t *v41; // rcx
  const struct _TlgProvider_t *v42; // rcx
  unsigned int v43; // ecx
  const GUID *v44; // r8
  const GUID *v45; // r9
  int v46; // r10d
  int v47; // eax
  unsigned int v48; // eax
  int v50; // ebx
  const GUID *v51; // r8
  const GUID *v52; // r9
  int v53; // r10d
  int v54; // r11d
  __int64 v55; // rcx
  unsigned __int8 v56; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int8 v57; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v58; // [rsp+32h] [rbp-CEh] BYREF
  struct _TlgProvider_t hProvider; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int8 *v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  unsigned __int8 *Data4; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  char *v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  unsigned __int8 *v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h]
  unsigned int *v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  struct _TlgProvider_t *v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  void (__fastcall **p_EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+E0h] [rbp-20h]
  __int64 v73; // [rsp+E8h] [rbp-18h]
  struct _TlgProvider_t *p_hProvider; // [rsp+F0h] [rbp-10h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  unsigned int *v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h]
  char *v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  char *v80; // [rsp+120h] [rbp+20h]
  __int64 v81; // [rsp+128h] [rbp+28h]
  char *v82; // [rsp+130h] [rbp+30h]
  __int64 v83; // [rsp+138h] [rbp+38h]

  v4 = *(_DWORD *)(a2 + 8);
  v5 = 0;
  v6 = 0;
  *(unsigned __int64 *)((char *)&hProvider.KeywordAny + 4) = a4;
  *(const unsigned __int16 **)((char *)&hProvider.ProviderMetadataPtr + 4) = a3;
  v7 = (_DWORD *)a2;
  *(unsigned __int64 *)((char *)&hProvider.KeywordAll + 4) = a2;
  LODWORD(a4) = 80;
  for ( i = 1; v6 < v4; v6 = v12 + 1 )
  {
    StorPoFxComponent = RaidGetStorPoFxComponent(v7, v6);
    v13 = StorPoFxComponent;
    if ( StorPoFxComponent )
    {
      a4 = (unsigned int)(a4 + 56);
      if ( *(_DWORD *)(StorPoFxComponent + 8) > v5 )
        v5 = *(_DWORD *)(StorPoFxComponent + 8);
    }
    v14 = *(_DWORD *)(StorPoFxComponent + 8);
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
  v22[18] = v4;
  for ( *((_QWORD *)v22 + 8) = v23; v24 < v22[18]; ++v24 )
  {
    v25 = RaidGetStorPoFxComponent(v7, v24);
    *(_QWORD *)((char *)v22 + v27 + 112) = v28;
    *(const unsigned __int16 **)((char *)&hProvider.ProviderMetadataPtr + 4) = (const unsigned __int16 *)v25;
    *(_DWORD *)((char *)v22 + v27 + 108) = *(_DWORD *)(v25 + 8);
    *(_DWORD *)((char *)v22 + v27 + 104) = *(_DWORD *)(v25 + 12);
    v29 = *(_OWORD *)(v25 + 16);
    *(_QWORD *)((char *)v22 + v27 + 96) = 1LL;
    *(_OWORD *)((char *)v22 + v27 + 80) = v29;
    if ( (v7[3] & 0x100) != 0 )
      *(_QWORD *)((char *)v22 + v27 + 96) = 3LL;
    v30 = *(_DWORD *)((char *)v22 + v27 + 108);
    v31 = 0;
    if ( v30 <= 1 )
      v31 = i;
    v32 = 0LL;
    i = v31;
    if ( v30 )
    {
      v33 = *(__int64 *)((char *)&hProvider.ProviderMetadataPtr + 4);
      do
      {
        v34 = RaidGetStorPoFxFState(v33, (unsigned int)v32, v26, 3 * v32);
        v32 = (unsigned int)(v32 + 1);
        *(_DWORD *)(v36 + 8 * v35 + 16) = *(_DWORD *)(v34 + 24);
        *(_QWORD *)(v36 + 8 * v35 + 8) = *(_QWORD *)(v34 + 16);
        *(_QWORD *)(v36 + 8 * v35) = *(_QWORD *)(v34 + 8);
      }
      while ( (unsigned int)v32 < *(_DWORD *)((char *)v22 + v37 + 108) );
      v7 = *(_DWORD **)((char *)&hProvider.KeywordAll + 4);
    }
  }
  if ( **(_DWORD **)(a1 + 64) == 1 )
  {
    if ( !i )
      *((_QWORD *)v22 + 4) = StorPortUnitIdleState;
    *((_QWORD *)v22 + 2) = StorPortUnitActiveConditionStep1;
    *((_QWORD *)v22 + 3) = StorPortUnitIdleCondition;
    *((_QWORD *)v22 + 6) = StorPortUnitPowerNotRequiredStep1;
    *((_QWORD *)v22 + 5) = StorPortUnitPowerRequiredStep1;
    v38 = StorPortUnitPowerControl;
  }
  else
  {
    if ( !i )
      *((_QWORD *)v22 + 4) = &StorPortAdapterIdleState;
    *((_QWORD *)v22 + 2) = StorPortAdapterActiveCondition;
    *((_QWORD *)v22 + 3) = StorPortAdapterIdleCondition;
    *((_QWORD *)v22 + 6) = StorPortAdapterPowerNotRequiredStep1;
    *((_QWORD *)v22 + 5) = StorPortAdapterPowerRequiredStep1;
    v38 = StorPortAdapterPowerControl;
  }
  v39 = *(unsigned __int64 *)((char *)&hProvider.KeywordAny + 4);
  *((_QWORD *)v22 + 7) = v38;
  v40 = PoFxRegisterDevice(a1, v22, v39);
  ExFreePoolWithTag(v22, 0x4F506152u);
  if ( v40 >= 0 )
  {
    v41 = (const struct _TlgProvider_t *)**(unsigned int **)(a1 + 64);
    if ( (_DWORD)v41 == 1 )
    {
      v50 = 0;
      if ( *v7 >= 2u )
        v50 = v7[4];
      if ( (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn(v41, 0x400000000000uLL) )
      {
        v55 = *(_QWORD *)v52[1].Data4;
        HIDWORD(hProvider.RegHandle) = *(_DWORD *)(v55 + 56);
        v56 = v52[5].Data4[0];
        v57 = v52[5].Data4[1];
        v58 = v52[5].Data4[2];
        hProvider.LevelPlus1 = v7[2];
        HIDWORD(hProvider.KeywordAny) = v7[3];
        v60 = (unsigned __int8 *)(v55 + 5192);
        v66 = &v56;
        Data4 = v52[107].Data4;
        v68 = (unsigned int *)&v57;
        LODWORD(hProvider.EnableCallback) = v53;
        v70 = (struct _TlgProvider_t *)&v58;
        p_EnableCallback = &hProvider.EnableCallback;
        p_hProvider = &hProvider;
        v76 = &hProvider.LevelPlus1 + 1;
        v78 = (char *)&hProvider.KeywordAny + 4;
        v80 = (char *)&hProvider.KeywordAll + 4;
        v82 = (char *)&hProvider.ProviderMetadataPtr + 4;
        *(&hProvider.LevelPlus1 + 1) = v5;
        HIDWORD(hProvider.KeywordAll) = v50;
        HIDWORD(hProvider.ProviderMetadataPtr) = v54;
        v61 = 16LL;
        v63 = 16LL;
        v64 = (char *)&hProvider.RegHandle + 4;
        v65 = 4LL;
        v67 = 1LL;
        v69 = 1LL;
        v71 = 1LL;
        v73 = 4LL;
        v75 = 4LL;
        v77 = 4LL;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 4LL;
        TlgWrite(
          (TraceLoggingHProvider)((char *)&hProvider.ProviderMetadataPtr + 4),
          &unk_1C004B700,
          v51,
          v52,
          0xEu,
          (EVENT_DATA_DESCRIPTOR *)((char *)&hProvider.EnableCallback + 4));
      }
    }
    else if ( !(_DWORD)v41 )
    {
      v42 = 0LL;
      if ( *v7 >= 2u )
        v42 = (const struct _TlgProvider_t *)(unsigned int)v7[4];
      if ( (unsigned int)dword_1C0056060 > 5 )
      {
        if ( TlgKeywordOn(v42, 0x400000000000uLL) )
        {
          v47 = v7[2];
          hProvider.LevelPlus1 = v43;
          v64 = (char *)&hProvider.KeywordAll + 4;
          HIDWORD(hProvider.KeywordAll) = v47;
          v48 = v7[3];
          v66 = (unsigned __int8 *)&hProvider.KeywordAny + 4;
          *(&hProvider.LevelPlus1 + 1) = v48;
          v68 = &hProvider.LevelPlus1 + 1;
          v60 = v45[324].Data4;
          v70 = &hProvider;
          HIDWORD(hProvider.ProviderMetadataPtr) = v46;
          HIDWORD(hProvider.KeywordAny) = v5;
          v61 = 16LL;
          Data4 = (unsigned __int8 *)&hProvider.ProviderMetadataPtr + 4;
          v63 = 4LL;
          v65 = 4LL;
          v67 = 4LL;
          v69 = 4LL;
          v71 = 4LL;
          TlgWrite(
            &hProvider,
            &unk_1C004B7C7,
            v44,
            v45,
            8u,
            (EVENT_DATA_DESCRIPTOR *)((char *)&hProvider.EnableCallback + 4));
        }
      }
    }
  }
  return (unsigned int)v40;
}
