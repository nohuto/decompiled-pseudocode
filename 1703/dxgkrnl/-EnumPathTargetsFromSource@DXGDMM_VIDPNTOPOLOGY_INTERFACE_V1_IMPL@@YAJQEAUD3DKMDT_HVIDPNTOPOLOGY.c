/*
 * XREFs of ?EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C00AD190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        unsigned __int64 a3,
        unsigned int *a4)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  DMMVIDPNTOPOLOGY *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DMMVIDPNTOPOLOGY *v11; // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edi
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  unsigned int v23; // [rsp+58h] [rbp+20h] BYREF

  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6019);
  if ( a4 )
  {
    *a4 = -1;
    v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v7);
    v11 = v8;
    if ( v8 )
    {
      v23 = -1;
      v12 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v8, v6, a3, &v23);
      v7 = v12;
      if ( v12 < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
        v21[3] = a3;
        v21[4] = v6;
        v21[5] = v11;
        v21[6] = v7;
      }
      else
      {
        v17 = v23;
        if ( v12 == 1075708748 && v23 != -1 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
          WdLogEvent5_WdAssertion(v22);
        }
        *a4 = v17;
        LODWORD(v7) = 0;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v20 + 24) = v7;
      WdLogEvent5_WdError(v20);
      LODWORD(v7) = -1071774976;
    }
  }
  else
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v19[3] = 0LL;
    v19[4] = a3;
    v19[5] = v7;
    v19[6] = v6;
    WdLogEvent5_WdError(v19);
    LODWORD(v7) = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 6019);
  return (unsigned int)v7;
}
