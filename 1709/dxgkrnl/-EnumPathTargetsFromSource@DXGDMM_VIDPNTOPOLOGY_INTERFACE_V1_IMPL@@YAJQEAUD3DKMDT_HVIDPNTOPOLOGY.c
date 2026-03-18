/*
 * XREFs of ?EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C00E3430
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  DMMVIDPNTOPOLOGY *v8; // rax
  __int64 v9; // rcx
  DMMVIDPNTOPOLOGY *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // edi
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  unsigned int v21; // [rsp+58h] [rbp+20h] BYREF

  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 6019);
  if ( a4 )
  {
    *a4 = -1;
    v8 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v7);
    v10 = v8;
    if ( v8 )
    {
      v21 = -1;
      v11 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v8, (_QWORD *)(unsigned int)v6, a3, &v21);
      v7 = v11;
      if ( v11 < 0 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
        v19[3] = a3;
        v19[4] = v6;
        v19[5] = v10;
        v19[6] = v7;
      }
      else
      {
        v15 = v21;
        if ( v11 == 1075708748 && v21 != -1 )
        {
          v20 = WdLogNewEntry5_WdAssertion(v13);
          WdLogEvent5_WdAssertion(v20);
        }
        *a4 = v15;
        LODWORD(v7) = 0;
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v18 + 24) = v7;
      WdLogEvent5_WdError(v18);
      LODWORD(v7) = -1071774976;
    }
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v17[3] = 0LL;
    v17[4] = a3;
    v17[5] = v7;
    v17[6] = v6;
    WdLogEvent5_WdError(v17);
    LODWORD(v7) = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, 6019);
  return (unsigned int)v7;
}
