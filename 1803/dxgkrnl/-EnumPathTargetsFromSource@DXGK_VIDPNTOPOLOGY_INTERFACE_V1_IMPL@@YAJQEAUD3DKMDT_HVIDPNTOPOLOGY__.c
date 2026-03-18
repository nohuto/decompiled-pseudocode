/*
 * XREFs of ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C0220390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000733C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00BC204 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  DMMVIDPNTOPOLOGY *v15; // rax
  __int64 v16; // rcx
  DMMVIDPNTOPOLOGY *v17; // rbp
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v30; // [rsp+20h] [rbp-28h] BYREF
  __int64 v31; // [rsp+28h] [rbp-20h]
  unsigned int v32; // [rsp+58h] [rbp+10h] BYREF

  v31 = 0LL;
  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  v30 = 7033;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7033);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 7033);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = a3;
  v12[4] = v6;
  v12[5] = v7;
  v12[6] = a4;
  if ( a4 )
  {
    *a4 = -1;
    v15 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v7);
    v17 = v15;
    if ( v15 )
    {
      v32 = -1;
      v19 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v15, v6, a3, &v32);
      v7 = v19;
      if ( v19 >= 0 )
      {
        v25 = v32;
        if ( v19 == 1075708748 && v32 != -1 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v26);
        }
        *a4 = v25;
        LODWORD(v7) = 0;
      }
      else
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
        v24[3] = a3;
        v24[4] = v6;
        v24[5] = v17;
        v24[6] = v7;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v18 + 24) = v7;
      WdLogEvent5_WdError(v18);
      LODWORD(v7) = -1071774976;
    }
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v14[3] = 0LL;
    v14[4] = a3;
    v14[5] = v7;
    v14[6] = v6;
    WdLogEvent5_WdError(v14);
    LODWORD(v7) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v27, &EventProfilerExit, v28, v30);
  return (unsigned int)v7;
}
