/*
 * XREFs of ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C007CA88
 * Callers:
 *     VidMmInitializeAdapter @ 0x1C00166D0 (VidMmInitializeAdapter.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AE0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C00205CC (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 *     ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C00766D8 (-VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0079DD8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C007AC1C (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C007CC38 (-VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 */

struct VIDMM_GLOBAL *__fastcall VidMmiInit(struct ADAPTER_RENDER *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int DriverVersion; // r15d
  SIZE_T v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _DXGK_QUERYSEGMENTOUT4 *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  VIDMM_GLOBAL *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  VIDMM_GLOBAL *v18; // rsi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rax
  struct _DXGK_QUERYSEGMENTOUT4 *v24; // rbp
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct _DXGK_QUERYSEGMENTOUT4 *v30; // rsi
  __int64 v31; // rax
  _BYTE SystemInformation[20]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v33; // [rsp+34h] [rbp-54h]

  v2 = *((_QWORD *)a1 + 2);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v2;
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0
    || *(_QWORD *)(v2 + 1632) < (unsigned __int64)v33 << 12 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v31 + 24) = 231LL;
    WdLogEvent5_WdAssertion(v31);
    return 0LL;
  }
  DriverVersion = DpiGetDriverVersion(*(_QWORD *)(v2 + 192));
  v6 = 40LL * *(unsigned int *)(v2 + 248);
  if ( !is_mul_ok(*(unsigned int *)(v2 + 248), 0x28uLL) )
    v6 = -1LL;
  v9 = (struct _DXGK_QUERYSEGMENTOUT4 *)operator new[](v6, 0x30306956u, PagedPool);
  if ( !v9 )
  {
    _InterlockedIncrement(&dword_1C00405B8);
    v26 = WdLogNewEntry5_WdLowResource(v8, v7);
    *(_QWORD *)(v26 + 24) = 240LL;
    WdLogEvent5_WdLowResource(v26);
    return 0LL;
  }
  memset(v9, 0, 40LL * *(unsigned int *)(v2 + 248));
  v11 = *(unsigned int *)(v2 + 248);
  v12 = 0LL;
  if ( (_DWORD)v11 )
  {
    while ( (int)VidMmiQuerySegmentInfo4((struct DXGADAPTER *)v2, v12, &v9[v12]) >= 0 )
    {
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= (unsigned int)v11 )
        goto LABEL_11;
    }
    v27 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v27 + 24) = 251LL;
    WdLogEvent5_WdAssertion(v27);
    goto LABEL_24;
  }
LABEL_11:
  v15 = (VIDMM_GLOBAL *)operator new(0xA200uLL, 0x35316956u, v10, (POOL_TYPE)512);
  if ( v15 )
    v18 = VIDMM_GLOBAL::VIDMM_GLOBAL(v15);
  else
    v18 = 0LL;
  if ( !v18 )
  {
    _InterlockedIncrement(&dword_1C00405B8);
    v28 = WdLogNewEntry5_WdLowResource(v17, v16);
    *(_QWORD *)(v28 + 24) = 265LL;
    WdLogEvent5_WdLowResource(v28);
LABEL_24:
    if ( (_DWORD)v11 )
    {
      v30 = v9;
      do
      {
        VidMmiFreeQuerySegmentInfo(v30++);
        --v11;
      }
      while ( v11 );
    }
    operator delete(v9);
    return 0LL;
  }
  v19 = VIDMM_GLOBAL::Init(v18, a1, v9, DriverVersion);
  v22 = v19;
  if ( v19 < 0 )
  {
    _InterlockedIncrement(&dword_1C00405BC);
    v29 = WdLogNewEntry5_WdLowResource(v21, v20);
    *(_QWORD *)(v29 + 24) = v22;
    WdLogEvent5_WdLowResource(v29);
    VIDMM_GLOBAL::`scalar deleting destructor'(v18);
    goto LABEL_24;
  }
  v23 = WdLogNewEntry5_WdEvent(v21, v20);
  WdLogEvent5_WdEvent(v23);
  if ( (_DWORD)v11 )
  {
    v24 = v9;
    do
    {
      VidMmiFreeQuerySegmentInfo(v24++);
      --v11;
    }
    while ( v11 );
  }
  operator delete(v9);
  return v18;
}
