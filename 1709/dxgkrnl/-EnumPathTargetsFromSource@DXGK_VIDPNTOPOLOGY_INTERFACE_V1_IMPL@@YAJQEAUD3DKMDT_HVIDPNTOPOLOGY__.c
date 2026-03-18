/*
 * XREFs of ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C00FA9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
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
  __int64 v9; // rcx
  DMMVIDPNTOPOLOGY *v10; // rax
  __int64 v11; // rcx
  DMMVIDPNTOPOLOGY *v12; // r14
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // esi
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  unsigned int v23; // [rsp+48h] [rbp+10h] BYREF

  v6 = (unsigned int)a2;
  v7 = (__int64)this;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7033);
  v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v8[3] = a3;
  v8[4] = v6;
  v8[5] = v7;
  v8[6] = a4;
  if ( a4 )
  {
    *a4 = -1;
    v10 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v7);
    v12 = v10;
    if ( v10 )
    {
      v23 = -1;
      v13 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v10, (_QWORD *)(unsigned int)v6, a3, &v23);
      v7 = v13;
      if ( v13 < 0 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
        v21[3] = a3;
        v21[4] = v6;
        v21[5] = v12;
        v21[6] = v7;
      }
      else
      {
        v17 = v23;
        if ( v13 == 1075708748 && v23 != -1 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v22);
        }
        *a4 = v17;
        LODWORD(v7) = 0;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v20 + 24) = v7;
      WdLogEvent5_WdError(v20);
      LODWORD(v7) = -1071774976;
    }
  }
  else
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v19[3] = 0LL;
    v19[4] = a3;
    v19[5] = v7;
    v19[6] = v6;
    WdLogEvent5_WdError(v19);
    LODWORD(v7) = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, 7033);
  return (unsigned int)v7;
}
