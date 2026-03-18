/*
 * XREFs of ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00A3550
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00ECDC8 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C000B8CC (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetPreferredVidPnSourceList(const struct _LUID *a1, unsigned int a2, char *a3, char *a4)
{
  __int64 v5; // r14
  const struct _LUID *v7; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGADAPTER *v12; // rsi
  int v13; // eax
  __int64 i; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  ADAPTER_DISPLAY *v17; // r13
  int v18; // ebp
  int v19; // r11d
  __int64 v20; // rcx
  char *v21; // rbx
  __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // esi
  unsigned int v30; // eax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v36[8]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v37[32]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v38[96]; // [rsp+58h] [rbp-60h] BYREF
  signed __int64 v40; // [rsp+D0h] [rbp+18h]

  v5 = a2;
  v7 = a1;
  Global = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v7, &v35);
  v12 = v9;
  if ( !v9 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v16) = -1073741811;
    v31[3] = v7->HighPart;
    v31[4] = v7->LowPart;
    v31[5] = -1073741811LL;
    WdLogEvent5_WdError(v31);
    return (unsigned int)v16;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v9, 0LL);
  DXGADAPTER::ReleaseReference(v12);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36);
  v16 = v13;
  if ( v13 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v15, i);
  }
  else
  {
    v17 = (ADAPTER_DISPLAY *)*((_QWORD *)v12 + 285);
    if ( v17 )
    {
      v18 = 0;
      v16 = 0LL;
      v19 = -1;
      if ( (_DWORD)v5 )
      {
        do
        {
          v20 = *(unsigned int *)&a4[4 * v16];
          if ( (_DWORD)v20 != -1 )
          {
            if ( (unsigned int)v20 >= *((_DWORD *)v17 + 20) )
            {
              v32 = (_QWORD *)WdLogNewEntry5_WdError(v20, i);
              v33 = *(unsigned int *)&a4[4 * v16];
              LODWORD(v16) = -1073741811;
              v32[3] = v33;
              v32[4] = v7->HighPart;
              v32[5] = v7->LowPart;
              v32[6] = -1073741811LL;
              goto LABEL_35;
            }
            v18 |= 1 << v20;
          }
          v16 = (unsigned int)(v16 + 1);
        }
        while ( (unsigned int)v16 < (unsigned int)v5 );
        v21 = a4;
        v40 = a3 - a4;
        v22 = v5;
        do
        {
          if ( *(_DWORD *)v21 == v19 )
          {
            v23 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v17, *(_DWORD *)&v21[v40]);
            v28 = v23;
            if ( v23 != v19 )
            {
              if ( v23 >= *((_DWORD *)v17 + 20) )
              {
                v34 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
                *(_QWORD *)(v34 + 24) = 7659LL;
                WdLogEvent5_WdAssertion(v34);
                v19 = -1;
              }
              if ( ((1 << v28) & v18) == 0 )
              {
                *(_DWORD *)v21 = v28;
                v18 |= 1 << v28;
              }
            }
          }
          v21 += 4;
          --v22;
        }
        while ( v22 );
        v7 = a1;
      }
      v15 = 0LL;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(i + 1) )
      {
        if ( *(_DWORD *)&a4[4 * i] == v19 )
        {
          v30 = *((_DWORD *)v17 + 20);
          while ( (unsigned int)v15 < v30 && _bittest(&v18, v15) )
            v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= v30 )
            goto LABEL_33;
          *(_DWORD *)&a4[4 * i] = v15;
          v18 |= 1 << v15;
          v15 = (unsigned int)(v15 + 1);
        }
      }
      LODWORD(v16) = 0;
      goto LABEL_20;
    }
LABEL_33:
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v15, i);
    v16 = -1073741811LL;
  }
  v32[3] = v7->HighPart;
  v32[4] = v7->LowPart;
  v32[5] = v16;
LABEL_35:
  WdLogEvent5_WdError(v32);
LABEL_20:
  COREACCESS::~COREACCESS((COREACCESS *)v38);
  COREACCESS::~COREACCESS((COREACCESS *)v37);
  return (unsigned int)v16;
}
