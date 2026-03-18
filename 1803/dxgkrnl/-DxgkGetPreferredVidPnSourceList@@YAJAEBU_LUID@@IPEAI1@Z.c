/*
 * XREFs of ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00DC0B4
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B4E1C (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0014CA0 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetPreferredVidPnSourceList(const struct _LUID *a1, unsigned int a2, char *a3, char *a4)
{
  __int64 v5; // r15
  const struct _LUID *v6; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rcx
  DXGADAPTER *v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  ADAPTER_DISPLAY *v14; // r14
  int v15; // esi
  __int64 v16; // rdx
  int v17; // r11d
  __int64 v18; // rcx
  char *v19; // rbx
  __int64 v20; // r13
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebp
  __int64 i; // rdx
  unsigned int v26; // eax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v32[8]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v33[32]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v34[96]; // [rsp+58h] [rbp-60h] BYREF

  v5 = a2;
  v6 = a1;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v6, &v31);
  v10 = v8;
  if ( !v8 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    LODWORD(v13) = -1073741811;
    v27[3] = v6->HighPart;
    v27[4] = v6->LowPart;
    v27[5] = -1073741811LL;
    WdLogEvent5_WdError(v27);
    return (unsigned int)v13;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v8, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v10);
  v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32);
  v13 = v11;
  if ( v11 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v12);
  }
  else
  {
    v14 = (ADAPTER_DISPLAY *)*((_QWORD *)v10 + 307);
    if ( v14 )
    {
      v15 = 0;
      v16 = 0LL;
      v17 = -1;
      if ( (_DWORD)v5 )
      {
        do
        {
          v18 = *(unsigned int *)&a4[4 * v16];
          v13 = (unsigned int)v16;
          if ( (_DWORD)v18 != -1 )
          {
            if ( (unsigned int)v18 >= *((_DWORD *)v14 + 20) )
            {
              v28 = (_QWORD *)WdLogNewEntry5_WdError(v18);
              v29 = *(unsigned int *)&a4[4 * v13];
              LODWORD(v13) = -1073741811;
              v28[3] = v29;
              v28[4] = v6->HighPart;
              v28[5] = v6->LowPart;
              v28[6] = -1073741811LL;
              goto LABEL_35;
            }
            v15 |= 1 << v18;
          }
          v16 = (unsigned int)(v16 + 1);
        }
        while ( (unsigned int)v16 < (unsigned int)v5 );
        v19 = a4;
        v20 = v5;
        do
        {
          if ( *(_DWORD *)v19 == v17 )
          {
            v21 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v14, *(_DWORD *)&v19[a3 - a4]);
            v23 = v21;
            if ( v21 != v17 )
            {
              if ( v21 >= *((_DWORD *)v14 + 20) )
              {
                v30 = WdLogNewEntry5_WdAssertion(v22);
                *(_QWORD *)(v30 + 24) = 7894LL;
                WdLogEvent5_WdAssertion(v30);
                v17 = -1;
              }
              if ( ((1 << v23) & v15) == 0 )
              {
                *(_DWORD *)v19 = v23;
                v15 |= 1 << v23;
              }
            }
          }
          v19 += 4;
          --v20;
        }
        while ( v20 );
        v6 = a1;
      }
      v12 = 0LL;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(i + 1) )
      {
        if ( *(_DWORD *)&a4[4 * i] == v17 )
        {
          v26 = *((_DWORD *)v14 + 20);
          while ( (unsigned int)v12 < v26 && _bittest(&v15, v12) )
            v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= v26 )
            goto LABEL_33;
          *(_DWORD *)&a4[4 * i] = v12;
          v15 |= 1 << v12;
          v12 = (unsigned int)(v12 + 1);
        }
      }
      LODWORD(v13) = 0;
      goto LABEL_20;
    }
LABEL_33:
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v13 = -1073741811LL;
  }
  v28[3] = v6->HighPart;
  v28[4] = v6->LowPart;
  v28[5] = v13;
LABEL_35:
  WdLogEvent5_WdError(v28);
LABEL_20:
  COREACCESS::~COREACCESS((COREACCESS *)v34);
  COREACCESS::~COREACCESS((COREACCESS *)v33);
  return (unsigned int)v13;
}
