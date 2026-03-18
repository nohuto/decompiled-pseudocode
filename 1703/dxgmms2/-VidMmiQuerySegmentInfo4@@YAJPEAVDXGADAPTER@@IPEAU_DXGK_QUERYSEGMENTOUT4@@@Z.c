/*
 * XREFs of ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C0070670
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C0075314 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0013E10 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
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
  __int64 v15; // rcx
  _DWORD *v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // edi
  _DWORD *v21; // rax
  __int128 v22; // xmm1
  SIZE_T v23; // xmm0_8
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE v31[40]; // [rsp+20h] [rbp-50h] BYREF
  _DXGKARG_QUERYADAPTERINFO var28; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+40h]
  int v34; // [rsp+B8h] [rbp+48h] BYREF

  v34 = a2;
  *(_DWORD *)v31 = 0;
  memset(&v31[8], 0, 0x20uLL);
  DriverVersion = DpiGetDriverVersion(*((_QWORD *)this + 24));
  var28.InputDataSize = 4;
  v33 = DriverVersion;
  *(_DWORD *)v31 = 0;
  var28.pInputData = &v34;
  v6 = 0;
  *(_QWORD *)&v31[8] = 0LL;
  var28.pOutputData = v31;
  v7 = 0;
  var28.Type = DXGKQAITYPE_QUERYSEGMENT4;
  var28.OutputDataSize = 40;
  v8 = DXGADAPTER::DdiQueryAdapterInfo(this, &var28);
  v11 = v8;
  if ( v8 < 0 )
  {
    v26 = WdLogNewEntry5_WdWarning(v10, v9);
    *(_QWORD *)(v26 + 24) = v11;
    WdLogEvent5_WdWarning(v26);
    return (unsigned int)v11;
  }
  v12 = *(_DWORD *)v31;
  if ( *(_DWORD *)v31 > 0x20u )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v27 + 24) = 76LL;
    WdLogEvent5_WdAssertion(v27);
    LODWORD(v11) = -1073741823;
    return (unsigned int)v11;
  }
  v13 = 104LL * *(unsigned int *)v31;
  if ( !is_mul_ok(*(unsigned int *)v31, 0x68uLL) )
    v13 = -1LL;
  v14 = operator new[](v13, 0x31326956u, PagedPool);
  v16 = v14;
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1C003C5A4);
    v28 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v28 + 24) = v12;
    WdLogEvent5_WdLowResource(v28);
    return 3221225495LL;
  }
  memset(v14, 0, 104LL * v12);
  *(_QWORD *)&v31[8] = v16;
  *(_QWORD *)&v31[32] = 104LL;
  v17 = DXGADAPTER::DdiQueryAdapterInfo(this, &var28);
  v11 = v17;
  if ( v17 < 0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v29 + 24) = v11;
    WdLogEvent5_WdAssertion(v29);
    goto LABEL_26;
  }
  v20 = 0;
  if ( !v12 )
  {
LABEL_12:
    v22 = *(_OWORD *)&v31[16];
    *(_OWORD *)&a3->NbSegment = *(_OWORD *)v31;
    v23 = *(_QWORD *)&v31[32];
    *(_OWORD *)&a3->PagingBufferSegmentId = v22;
    a3->SegmentDescriptorStride = v23;
    return (unsigned int)v11;
  }
  v21 = v16 + 23;
  while ( 1 )
  {
    if ( v33 < 0x7005 )
    {
      *v21 = 0;
      goto LABEL_11;
    }
    v25 = (unsigned int)*v21;
    if ( (unsigned int)v25 > 1 )
      break;
    if ( (_DWORD)v25 )
    {
      if ( v6 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v25, v33);
        *(_QWORD *)(v30 + 24) = v7;
        *(_QWORD *)(v30 + 32) = v20;
        goto LABEL_25;
      }
      v6 = 1;
      v7 = v20;
    }
LABEL_11:
    ++v20;
    v21 += 26;
    if ( v20 >= v12 )
      goto LABEL_12;
  }
  v30 = WdLogNewEntry5_WdAssertion(v25, v33);
  *(_QWORD *)(v30 + 24) = (unsigned int)v16[26 * v20 + 23];
LABEL_25:
  WdLogEvent5_WdAssertion(v30);
  LODWORD(v11) = -1073741823;
LABEL_26:
  operator delete(v16);
  return (unsigned int)v11;
}
