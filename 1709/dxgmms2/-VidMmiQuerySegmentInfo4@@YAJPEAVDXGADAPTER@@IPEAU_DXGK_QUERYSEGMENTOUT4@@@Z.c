/*
 * XREFs of ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C00766D8
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C007CA88 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0016124 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 */

__int64 __fastcall VidMmiQuerySegmentInfo4(struct DXGADAPTER *this, int a2, struct _DXGK_QUERYSEGMENTOUT4 *a3)
{
  unsigned int DriverVersion; // eax
  char v6; // r13
  unsigned int v7; // r12d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // r14d
  SIZE_T v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD *v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // edi
  _DWORD *v22; // rax
  __int128 v23; // xmm1
  SIZE_T v24; // xmm0_8
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE v32[40]; // [rsp+20h] [rbp-50h] BYREF
  _DXGKARG_QUERYADAPTERINFO var28; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v34; // [rsp+B0h] [rbp+40h]
  int v35; // [rsp+B8h] [rbp+48h] BYREF

  v35 = a2;
  *(_DWORD *)v32 = 0;
  memset(&v32[8], 0, 0x20uLL);
  DriverVersion = DpiGetDriverVersion(*((_QWORD *)this + 24));
  var28.InputDataSize = 4;
  v34 = DriverVersion;
  *(_DWORD *)v32 = 0;
  var28.pInputData = &v35;
  v6 = 0;
  *(_QWORD *)&v32[8] = 0LL;
  var28.pOutputData = v32;
  v7 = 0;
  var28.Type = DXGKQAITYPE_QUERYSEGMENT4;
  var28.OutputDataSize = 40;
  v8 = DXGADAPTER::DdiQueryAdapterInfo(this, &var28);
  v11 = v8;
  if ( v8 < 0 )
  {
    v27 = WdLogNewEntry5_WdWarning(v10);
    *(_QWORD *)(v27 + 24) = v11;
    WdLogEvent5_WdWarning(v27);
    return (unsigned int)v11;
  }
  v12 = *(_DWORD *)v32;
  if ( *(_DWORD *)v32 > 0x20u )
  {
    v28 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v28 + 24) = 76LL;
    WdLogEvent5_WdAssertion(v28);
    LODWORD(v11) = -1073741823;
    return (unsigned int)v11;
  }
  v13 = 104LL * *(unsigned int *)v32;
  if ( !is_mul_ok(*(unsigned int *)v32, 0x68uLL) )
    v13 = -1LL;
  v14 = operator new[](v13, 0x31326956u, PagedPool);
  v17 = v14;
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1C00405B4);
    v29 = WdLogNewEntry5_WdLowResource(v16, v15);
    *(_QWORD *)(v29 + 24) = v12;
    WdLogEvent5_WdLowResource(v29);
    return 3221225495LL;
  }
  memset(v14, 0, 104LL * v12);
  *(_QWORD *)&v32[8] = v17;
  *(_QWORD *)&v32[32] = 104LL;
  v18 = DXGADAPTER::DdiQueryAdapterInfo(this, &var28);
  v11 = v18;
  if ( v18 < 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v30 + 24) = v11;
    WdLogEvent5_WdAssertion(v30);
    goto LABEL_26;
  }
  v21 = 0;
  if ( !v12 )
  {
LABEL_12:
    v23 = *(_OWORD *)&v32[16];
    *(_OWORD *)&a3->NbSegment = *(_OWORD *)v32;
    v24 = *(_QWORD *)&v32[32];
    *(_OWORD *)&a3->PagingBufferSegmentId = v23;
    a3->SegmentDescriptorStride = v24;
    return (unsigned int)v11;
  }
  v22 = v17 + 23;
  while ( 1 )
  {
    if ( v34 < 0x7005 )
    {
      *v22 = 0;
      goto LABEL_11;
    }
    v26 = (unsigned int)*v22;
    if ( (unsigned int)v26 > 1 )
      break;
    if ( (_DWORD)v26 )
    {
      if ( v6 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v26, v34);
        *(_QWORD *)(v31 + 24) = v7;
        *(_QWORD *)(v31 + 32) = v21;
        goto LABEL_25;
      }
      v6 = 1;
      v7 = v21;
    }
LABEL_11:
    ++v21;
    v22 += 26;
    if ( v21 >= v12 )
      goto LABEL_12;
  }
  v31 = WdLogNewEntry5_WdAssertion(v26, v34);
  *(_QWORD *)(v31 + 24) = (unsigned int)v17[26 * v21 + 23];
LABEL_25:
  WdLogEvent5_WdAssertion(v31);
  LODWORD(v11) = -1073741823;
LABEL_26:
  operator delete(v17);
  return (unsigned int)v11;
}
