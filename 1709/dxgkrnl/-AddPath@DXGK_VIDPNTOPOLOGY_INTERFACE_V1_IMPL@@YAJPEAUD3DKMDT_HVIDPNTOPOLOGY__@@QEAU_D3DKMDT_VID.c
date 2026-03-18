/*
 * XREFs of ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01F3B80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000A3FC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C000B628 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000EA34 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00A3674 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A40DC (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A4368 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DMMVIDPNTOPOLOGY *v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  struct DMMVIDPNPRESENTPATH *v27; // [rsp+48h] [rbp+10h] BYREF
  struct DMMVIDPNPRESENTPATH *v28; // [rsp+50h] [rbp+18h] BYREF

  v4 = (__int64)this;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, (__int64)a3, 7041);
  if ( a2 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
    v8[3] = *(_DWORD *)a2;
    v8[4] = *((unsigned int *)a2 + 1);
    v8[5] = a2;
    v8[6] = v4;
    v11 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v4);
    if ( v11 )
    {
      if ( !*((_DWORD *)a2 + 16) )
      {
        v14 = WdLogNewEntry5_WdWarning(v10, v9, v12);
        *(_QWORD *)(v14 + 24) = a2;
        WdLogEvent5_WdWarning(v14);
        *((_DWORD *)a2 + 16) = 255;
      }
      if ( !*((_DWORD *)a2 + 17) )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v12);
        v15[3] = *(_DWORD *)a2;
        v15[4] = *((unsigned int *)a2 + 1);
        v15[5] = v4;
        WdLogEvent5_WdWarning(v15);
        memset(a2 + 19, 0, 0x100uLL);
        *((_DWORD *)a2 + 83) = 0;
        *((_DWORD *)a2 + 83) |= 1u;
        *(_QWORD *)(a2 + 17) = 1LL;
      }
      if ( *((_DWORD *)a2 + 84) != 1 || *((_QWORD *)a2 + 43) || *((_QWORD *)a2 + 44) )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v12);
        v16[3] = *((int *)a2 + 84);
        v16[4] = *(_DWORD *)a2;
        v16[5] = *((unsigned int *)a2 + 1);
        v16[6] = v4;
        WdLogEvent5_WdWarning(v16);
        *((_QWORD *)a2 + 43) = 0LL;
        *((_QWORD *)a2 + 44) = 0LL;
        *((_DWORD *)a2 + 84) = 1;
      }
      v27 = 0LL;
      v28 = 0LL;
      v17 = DMMVIDPNTOPOLOGY::CreateNewPath(v11, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2, &v28);
      v20 = v17;
      LODWORD(v4) = -1071774970;
      if ( v17 == -1071774970 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v21[3] = *(_DWORD *)a2;
        v21[4] = *((unsigned int *)a2 + 1);
        v21[5] = -1071774970LL;
        WdLogEvent5_WdError(v21);
      }
      else if ( v17 >= 0 )
      {
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(
          (__int64 (__fastcall ****)(_QWORD, __int64))&v27,
          (__int64 (__fastcall ***)(_QWORD, __int64))v28);
        v23 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPNTOPOLOGY **)v11, v27, D3DKMDT_MCC_ENFORCE);
        v4 = v23;
        if ( v23 >= 0 )
        {
          v27 = 0LL;
          LODWORD(v4) = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v11, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2);
        }
        else
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v24);
          v25[3] = *(_DWORD *)a2;
          v25[4] = *((unsigned int *)a2 + 1);
          v25[5] = v11;
          v25[6] = v4;
          WdLogEvent5_WdDmmEvent(v25);
        }
      }
      else
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
        LODWORD(v4) = v20;
        v22[3] = *(_DWORD *)a2;
        v22[4] = *((unsigned int *)a2 + 1);
        v22[5] = v20;
      }
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v27);
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v13 + 24) = v4;
      WdLogEvent5_WdError(v13);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = v4;
    WdLogEvent5_WdError(v5);
    LODWORD(v4) = -1071774951;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit, v7, 7041);
  return (unsigned int)v4;
}
