/*
 * XREFs of ?FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAI@Z @ 0x1C01F14D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01F2FB4 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::FindFirstAvailableTarget(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rax
  int FirstAvailableTarget; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  int v21; // [rsp+68h] [rbp+20h] BYREF

  v5 = (int)a3;
  v6 = a1;
  v7 = a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 6031);
  if ( a4 )
  {
    *a4 = -1;
    if ( (_DWORD)v5 )
    {
      v12 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
      v15 = v12;
      if ( v12 )
      {
        v21 = v13;
        FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
                                 v12,
                                 (unsigned int)v7,
                                 (unsigned int)v5,
                                 &v21,
                                 0LL,
                                 0LL);
        v6 = FirstAvailableTarget;
        if ( FirstAvailableTarget >= 0 )
        {
          LODWORD(v6) = 0;
          *a4 = v21;
        }
        else
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v18);
          v19[3] = v15;
          v19[4] = v7;
          v19[5] = v5;
          v19[6] = v6;
        }
      }
      else
      {
        v16 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v16 + 24) = v6;
        WdLogEvent5_WdError(v16);
        LODWORD(v6) = -1071774976;
      }
    }
    else
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v11[3] = 0LL;
      v11[4] = a4;
      v11[5] = v6;
      v11[6] = v7;
      WdLogEvent5_WdError(v11);
      LODWORD(v6) = -1071774929;
    }
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v8[3] = 0LL;
    v8[4] = v6;
    v8[5] = v7;
    WdLogEvent5_WdError(v8);
    LODWORD(v6) = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, 6031);
  return (unsigned int)v6;
}
