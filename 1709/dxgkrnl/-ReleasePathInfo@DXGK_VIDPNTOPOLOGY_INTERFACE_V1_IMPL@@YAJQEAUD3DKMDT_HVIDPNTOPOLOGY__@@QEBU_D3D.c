/*
 * XREFs of ?ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00EF3F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v7; // rbx
  __int64 v8; // r8
  unsigned int v9; // esi
  _QWORD *v10; // rdx
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7039);
  v5 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = this;
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
    {
      v7 = a2 - 4;
      if ( *(_DWORD *)v7 == 305419896 )
      {
        v8 = *((_QWORD *)v7 + 1);
        v9 = 0;
        if ( !v8 )
          goto LABEL_11;
        v10 = (_QWORD *)((char *)this + 24);
        if ( (_QWORD *)*v10 == v10 )
          goto LABEL_24;
        v6 = *v10 - 8LL;
        if ( *v10 == 8LL )
          goto LABEL_24;
        do
        {
          if ( v6 == v8 )
            break;
          v17 = *(_QWORD **)(v6 + 8);
          v6 = (__int64)(v17 - 1);
          if ( v17 == v10 )
            v6 = 0LL;
        }
        while ( v6 );
        if ( !v6 )
        {
LABEL_24:
          v18 = WdLogNewEntry5_WdError(v6);
          *(_QWORD *)(v18 + 24) = v7;
          *(_QWORD *)(v18 + 32) = this;
          WdLogEvent5_WdError(v18);
          v9 = -1071774928;
        }
        else
        {
LABEL_11:
          v11 = (void *)*((_QWORD *)v7 + 46);
          if ( v11 )
            ExFreePoolWithTag(v11, 0);
          ExFreePoolWithTag(v7, 0);
        }
      }
      else
      {
        v16 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v16 + 24) = v7;
        WdLogEvent5_WdError(v16);
        v9 = -1071774951;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v19 + 24) = this;
      WdLogEvent5_WdError(v19);
      v9 = -1071774976;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v15 + 24) = 0LL;
    WdLogEvent5_WdError(v15);
    v9 = -1071774951;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, 7039);
  return v9;
}
