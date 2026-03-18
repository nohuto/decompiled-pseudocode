/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000FB70
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0012DE0 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRunMethod(__int64 a1)
{
  void *v1; // r15
  __int64 v2; // rbx
  volatile signed __int32 *v3; // rsi
  unsigned int v4; // ebp
  _QWORD *v5; // r13
  __int64 v6; // r12
  int v8; // edx
  void *v9; // r8
  void *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  int v13; // r14d
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  unsigned int v16; // ebp
  volatile signed __int32 *v17; // rcx
  char v18; // al
  int v19; // edx
  void *v20; // rax
  __int64 v21; // rcx
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  int v24; // r14d
  char v26; // [rsp+28h] [rbp-A0h]
  char v27; // [rsp+30h] [rbp-98h]
  _QWORD v28[10]; // [rsp+50h] [rbp-78h] BYREF

  v1 = &unk_1C005B1F0;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( (*(_DWORD *)(a1 + 84) & 0x40) != 0 && *(_DWORD *)(a1 + 128) )
  {
    v8 = 0;
    v9 = &unk_1C005B1F0;
    v10 = &unk_1C005B1F0;
    if ( v2 )
    {
      v11 = *(_QWORD *)(v2 + 8);
      v8 = v2;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v9 = *(void **)(v2 + 560);
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = *(void **)(v2 + 568);
      }
    }
    v26 = v8;
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qss(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      6,
      66,
      (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
      v26,
      (__int64)v9,
      (__int64)v10);
    *(_DWORD *)(a1 + 32) = 0;
    goto LABEL_19;
  }
  v12 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 9;
  v3 = (volatile signed __int32 *)AMLIGetNamedChild(*(_QWORD **)(v2 + 712), v12);
  if ( !v3 )
    goto LABEL_19;
  v13 = *(_DWORD *)(a1 + 84);
  if ( (v13 & 2) != 0 )
  {
    _m_prefetchw((const void *)(v2 + 8));
    v14 = *(_QWORD *)(v2 + 8);
    do
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 8), v14 | 0x20000000000000LL, v14);
    }
    while ( v15 != v14 );
    if ( (v14 & 0x20000000000000LL) != 0 )
      goto LABEL_19;
  }
  else
  {
    if ( (v13 & 8) != 0 )
    {
      if ( !*(_DWORD *)(v2 + 504) )
        goto LABEL_19;
      memset(v28, 0, 0x28uLL);
      v5 = v28;
      v28[2] = 1LL;
      v16 = 1;
      WORD1(v28[0]) = 1;
      goto LABEL_14;
    }
    if ( (v13 & 0x30) != 0 )
    {
      v24 = v13 | 0x40;
      *(_DWORD *)(a1 + 84) = v24;
      memset(v28, 0, sizeof(v28));
      v5 = v28;
      v28[2] = 2LL;
      v16 = 2;
      WORD1(v28[0]) = 1;
      v28[7] = ((unsigned __int64)(unsigned __int8)v24 >> 4) & 1;
      WORD1(v28[5]) = 1;
      goto LABEL_14;
    }
    if ( (v13 & 0x80u) != 0 )
    {
      _m_prefetchw((const void *)(v2 + 952));
      v22 = *(_QWORD *)(v2 + 952);
      do
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 952), v22 | 0x4000, v22);
      }
      while ( v23 != v22 );
      if ( (v22 & 0x4000) != 0 )
        goto LABEL_19;
      v6 = a1 + 88;
      memset((void *)(a1 + 88), 0, 0x28uLL);
      *(_DWORD *)(a1 + 32) = 8;
    }
  }
  v16 = 0;
LABEL_14:
  v17 = *(volatile signed __int32 **)(a1 + 56);
  if ( v17 )
  {
    AMLIDereferenceHandleEx(v17);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  v18 = gdwfAMLI;
  *(_QWORD *)(a1 + 56) = v3;
  dword_1C00677B8 = 0;
  pszDest = 0;
  if ( (v18 & 4) != 0 )
    _InterlockedIncrement(v3 + 2);
  v4 = AMLIAsyncEvalObject(v3, v6, v16, v5, ACPIBuildCompleteMustSucceed, a1);
LABEL_19:
  v19 = 0;
  v20 = &unk_1C005B1F0;
  if ( v2 )
  {
    v21 = *(_QWORD *)(v2 + 8);
    v19 = v2;
    if ( (v21 & 0x200000000000LL) != 0 )
    {
      v1 = *(void **)(v2 + 560);
      if ( (v21 & 0x400000000000LL) != 0 )
        v20 = *(void **)(v2 + 568);
    }
  }
  v27 = v19;
  LOBYTE(v19) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v19,
    6,
    67,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v4,
    v27,
    (__int64)v1,
    (__int64)v20);
  if ( v4 == 259 )
    v4 = 0;
  else
    ACPIBuildCompleteMustSucceed((ULONG_PTR)v3, v4, 0LL, a1);
  if ( v3 )
    AMLIDereferenceHandleEx(v3);
  return v4;
}
