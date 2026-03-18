/*
 * XREFs of ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00F26B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00A3CDC (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UpdatePathSupportInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v5; // rbp
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // rcx
  DMMVIDPNTOPOLOGY *v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  int updated; // ebx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7038);
  if ( a2 )
  {
    v5 = *(_DWORD *)a2;
    v6 = *((unsigned int *)a2 + 1);
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
    v7[3] = v5;
    v7[4] = v6;
    v7[5] = this;
    v7[6] = a2;
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
      v9 = this;
    else
      v9 = 0LL;
    if ( v9 )
    {
      v10 = *((_DWORD *)a2 + 83);
      if ( (v10 & 1) == 0 )
        *((_DWORD *)a2 + 83) = v10 | 1;
      updated = DMMVIDPNTOPOLOGY::UpdatePathSupportInfo(
                  v9,
                  v5,
                  v6,
                  (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)a2 + 4,
                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)a2 + 6,
                  (const struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *)a2 + 83);
      if ( updated < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v17 + 24) = a2;
        *(_QWORD *)(v17 + 32) = v9;
        WdLogEvent5_WdError(v17);
      }
      else
      {
        updated = 0;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v16 + 24) = this;
      WdLogEvent5_WdError(v16);
      updated = -1071774976;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    updated = -1073741811;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v13, 7038);
  return (unsigned int)updated;
}
