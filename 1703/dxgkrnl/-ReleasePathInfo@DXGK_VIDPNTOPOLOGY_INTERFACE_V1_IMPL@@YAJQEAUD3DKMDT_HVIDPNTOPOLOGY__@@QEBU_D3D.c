/*
 * XREFs of ?ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0096300
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v9; // rbx
  __int64 v10; // r8
  unsigned int v11; // esi
  _QWORD *v12; // rdx
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7039);
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = this;
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
    {
      v9 = a2 - 4;
      if ( *(_DWORD *)v9 == 305419896 )
      {
        v10 = *((_QWORD *)v9 + 1);
        v11 = 0;
        if ( !v10 )
          goto LABEL_11;
        v12 = (_QWORD *)((char *)this + 24);
        if ( (_QWORD *)*v12 == v12 )
          goto LABEL_24;
        v8 = *v12 - 8LL;
        if ( *v12 == 8LL )
          goto LABEL_24;
        do
        {
          if ( v8 == v10 )
            break;
          v19 = *(_QWORD **)(v8 + 8);
          v8 = (__int64)(v19 - 1);
          if ( v19 == v12 )
            v8 = 0LL;
        }
        while ( v8 );
        if ( !v8 )
        {
LABEL_24:
          v20 = WdLogNewEntry5_WdError(v8, v12);
          *(_QWORD *)(v20 + 24) = v9;
          *(_QWORD *)(v20 + 32) = this;
          WdLogEvent5_WdError(v20);
          v11 = -1071774928;
        }
        else
        {
LABEL_11:
          v13 = (void *)*((_QWORD *)v9 + 46);
          if ( v13 )
            ExFreePoolWithTag(v13, 0);
          ExFreePoolWithTag(v9, 0);
        }
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(v8, v7);
        *(_QWORD *)(v18 + 24) = v9;
        WdLogEvent5_WdError(v18);
        v11 = -1071774951;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v21 + 24) = this;
      WdLogEvent5_WdError(v21);
      v11 = -1071774976;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdError(v17);
    v11 = -1071774951;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v15, 7039);
  return v11;
}
