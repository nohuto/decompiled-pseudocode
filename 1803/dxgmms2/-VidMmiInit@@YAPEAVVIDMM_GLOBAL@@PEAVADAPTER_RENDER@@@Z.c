/*
 * XREFs of ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C007CF88
 * Callers:
 *     VidMmInitializeAdapter @ 0x1C0015CD0 (VidMmInitializeAdapter.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004F48 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C0022B18 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 *     ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C007B3A0 (-VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 *     ?VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C007D138 (-VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C007D5D0 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C007E224 (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 */

struct VIDMM_GLOBAL *__fastcall VidMmiInit(struct ADAPTER_RENDER *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int DriverVersion; // r15d
  SIZE_T v6; // rax
  __int64 v7; // rcx
  struct _DXGK_QUERYSEGMENTOUT4 *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  VIDMM_GLOBAL *v14; // rax
  __int64 v15; // rcx
  VIDMM_GLOBAL *v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rax
  struct _DXGK_QUERYSEGMENTOUT4 *v22; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  struct _DXGK_QUERYSEGMENTOUT4 *v28; // rsi
  __int64 v29; // rax
  _BYTE SystemInformation[20]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-54h]

  v2 = *((_QWORD *)a1 + 2);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v2;
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0
    || *(_QWORD *)(v2 + 1768) < (unsigned __int64)v31 << 12 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v29 + 24) = 231LL;
    WdLogEvent5_WdAssertion(v29);
    return 0LL;
  }
  DriverVersion = DpiGetDriverVersion(*(_QWORD *)(v2 + 192));
  v6 = 40LL * *(unsigned int *)(v2 + 248);
  if ( !is_mul_ok(*(unsigned int *)(v2 + 248), 0x28uLL) )
    v6 = -1LL;
  v8 = (struct _DXGK_QUERYSEGMENTOUT4 *)operator new[](v6, 0x30306956u, PagedPool);
  if ( !v8 )
  {
    _InterlockedIncrement(&dword_1C00475B8);
    v24 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v24 + 24) = 240LL;
    WdLogEvent5_WdLowResource(v24);
    return 0LL;
  }
  memset(v8, 0, 40LL * *(unsigned int *)(v2 + 248));
  v10 = *(unsigned int *)(v2 + 248);
  v11 = 0LL;
  if ( (_DWORD)v10 )
  {
    while ( (int)VidMmiQuerySegmentInfo4((struct DXGADAPTER *)v2, v11, &v8[v11]) >= 0 )
    {
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= (unsigned int)v10 )
        goto LABEL_11;
    }
    v25 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v25 + 24) = 251LL;
    WdLogEvent5_WdAssertion(v25);
    goto LABEL_24;
  }
LABEL_11:
  v14 = (VIDMM_GLOBAL *)operator new(0xA440uLL, 0x35316956u, v9, (POOL_TYPE)512);
  if ( v14 )
    v16 = VIDMM_GLOBAL::VIDMM_GLOBAL(v14);
  else
    v16 = 0LL;
  if ( !v16 )
  {
    _InterlockedIncrement(&dword_1C00475B8);
    v26 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v26 + 24) = 265LL;
    WdLogEvent5_WdLowResource(v26);
LABEL_24:
    if ( (_DWORD)v10 )
    {
      v28 = v8;
      do
      {
        VidMmiFreeQuerySegmentInfo(v28++);
        --v10;
      }
      while ( v10 );
    }
    operator delete(v8);
    return 0LL;
  }
  v17 = VIDMM_GLOBAL::Init(v16, a1, v8, DriverVersion);
  v20 = v17;
  if ( v17 < 0 )
  {
    _InterlockedIncrement(&dword_1C00475BC);
    v27 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v27 + 24) = v20;
    WdLogEvent5_WdLowResource(v27);
    VIDMM_GLOBAL::`scalar deleting destructor'(v16);
    goto LABEL_24;
  }
  v21 = WdLogNewEntry5_WdEvent(v19, v18);
  WdLogEvent5_WdEvent(v21);
  if ( (_DWORD)v10 )
  {
    v22 = v8;
    do
    {
      VidMmiFreeQuerySegmentInfo(v22++);
      --v10;
    }
    while ( v10 );
  }
  operator delete(v8);
  return v16;
}
