/*
 * XREFs of ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C01DB3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000CC00 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  DMMVIDPNTOPOLOGY *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  DMMVIDPNTOPOLOGY *v17; // r14
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  _QWORD *v22; // rax
  unsigned int v23; // esi
  __int64 v24; // rax
  unsigned int v26; // [rsp+48h] [rbp+10h] BYREF

  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 7033);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v8[3] = a3;
  v8[4] = v6;
  v8[5] = v7;
  v8[6] = a4;
  if ( a4 )
  {
    *a4 = -1;
    v14 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v7);
    v17 = v14;
    if ( v14 )
    {
      v26 = -1;
      v19 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, (unsigned int)v6, a3, &v26);
      v7 = v19;
      if ( v19 >= 0 )
      {
        v23 = v26;
        if ( v19 == 1075708748 && v26 != -1 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v12, v20, v13, v21);
          WdLogEvent5_WdAssertion(v24);
        }
        *a4 = v23;
        LODWORD(v7) = 0;
      }
      else
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v20, v13, v21);
        v22[3] = a3;
        v22[4] = v6;
        v22[5] = v17;
        v22[6] = v7;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v18 + 24) = v7;
      WdLogEvent5_WdError(v18);
      LODWORD(v7) = -1071774976;
    }
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v11[3] = 0LL;
    v11[4] = a3;
    v11[5] = v7;
    v11[6] = v6;
    WdLogEvent5_WdError(v11);
    LODWORD(v7) = -1073741811;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 7033);
  return (unsigned int)v7;
}
