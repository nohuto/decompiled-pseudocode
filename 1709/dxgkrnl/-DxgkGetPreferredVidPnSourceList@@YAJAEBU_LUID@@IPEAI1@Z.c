/*
 * XREFs of ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00F68F0
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DD090 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C00079B4 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetPreferredVidPnSourceList(const struct _LUID *a1, unsigned int a2, char *a3, char *a4)
{
  __int64 v5; // r14
  const struct _LUID *v7; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rcx
  DXGADAPTER *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  ADAPTER_DISPLAY *v15; // r13
  int v16; // ebp
  __int64 v17; // rdx
  int v18; // r11d
  __int64 v19; // rcx
  char *v20; // rbx
  __int64 v21; // r15
  unsigned int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // esi
  __int64 i; // rdx
  unsigned int v27; // eax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v33[8]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v34[32]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v35[96]; // [rsp+58h] [rbp-60h] BYREF
  signed __int64 v37; // [rsp+D0h] [rbp+18h]

  v5 = a2;
  v7 = a1;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v7, &v32);
  v11 = v9;
  if ( !v9 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    LODWORD(v14) = -1073741811;
    v28[3] = v7->HighPart;
    v28[4] = v7->LowPart;
    v28[5] = -1073741811LL;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v9, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v11);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33);
  v14 = v12;
  if ( v12 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v13);
  }
  else
  {
    v15 = (ADAPTER_DISPLAY *)*((_QWORD *)v11 + 288);
    if ( v15 )
    {
      v16 = 0;
      v17 = 0LL;
      v18 = -1;
      if ( (_DWORD)v5 )
      {
        do
        {
          v19 = *(unsigned int *)&a4[4 * v17];
          v14 = (unsigned int)v17;
          if ( (_DWORD)v19 != -1 )
          {
            if ( (unsigned int)v19 >= *((_DWORD *)v15 + 20) )
            {
              v29 = (_QWORD *)WdLogNewEntry5_WdError(v19);
              v30 = *(unsigned int *)&a4[4 * v14];
              LODWORD(v14) = -1073741811;
              v29[3] = v30;
              v29[4] = v7->HighPart;
              v29[5] = v7->LowPart;
              v29[6] = -1073741811LL;
              goto LABEL_35;
            }
            v16 |= 1 << v19;
          }
          v17 = (unsigned int)(v17 + 1);
        }
        while ( (unsigned int)v17 < (unsigned int)v5 );
        v20 = a4;
        v37 = a3 - a4;
        v21 = v5;
        do
        {
          if ( *(_DWORD *)v20 == v18 )
          {
            v22 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v15, *(_DWORD *)&v20[v37]);
            v24 = v22;
            if ( v22 != v18 )
            {
              if ( v22 >= *((_DWORD *)v15 + 20) )
              {
                v31 = WdLogNewEntry5_WdAssertion(v23);
                *(_QWORD *)(v31 + 24) = 7674LL;
                WdLogEvent5_WdAssertion(v31);
                v18 = -1;
              }
              if ( ((1 << v24) & v16) == 0 )
              {
                *(_DWORD *)v20 = v24;
                v16 |= 1 << v24;
              }
            }
          }
          v20 += 4;
          --v21;
        }
        while ( v21 );
        v7 = a1;
      }
      v13 = 0LL;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(i + 1) )
      {
        if ( *(_DWORD *)&a4[4 * i] == v18 )
        {
          v27 = *((_DWORD *)v15 + 20);
          while ( (unsigned int)v13 < v27 && _bittest(&v16, v13) )
            v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= v27 )
            goto LABEL_33;
          *(_DWORD *)&a4[4 * i] = v13;
          v16 |= 1 << v13;
          v13 = (unsigned int)(v13 + 1);
        }
      }
      LODWORD(v14) = 0;
      goto LABEL_20;
    }
LABEL_33:
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v14 = -1073741811LL;
  }
  v29[3] = v7->HighPart;
  v29[4] = v7->LowPart;
  v29[5] = v14;
LABEL_35:
  WdLogEvent5_WdError(v29);
LABEL_20:
  COREACCESS::~COREACCESS((COREACCESS *)v35);
  COREACCESS::~COREACCESS((COREACCESS *)v34);
  return (unsigned int)v14;
}
