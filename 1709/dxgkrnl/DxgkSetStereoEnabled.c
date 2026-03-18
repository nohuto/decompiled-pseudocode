/*
 * XREFs of DxgkSetStereoEnabled @ 0x1C01AC7C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetStereoEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int updated; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  int v12; // [rsp+58h] [rbp+10h] BYREF
  BOOL v13; // [rsp+60h] [rbp+18h] BYREF

  v3 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2089);
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    v12 = 0;
    v10 = (*(__int64 (__fastcall **)(int *))(*((_QWORD *)Current + 12) + 224LL))(&v12);
    if ( !v12 || v10 )
    {
      updated = -1073741637;
    }
    else
    {
      v13 = v3 != 0;
      updated = ZwUpdateWnfStateData(&WNF_DX_STEREO_CONFIG, &v13, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v5);
    updated = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v8, &EventProfilerExit, v9, 2089);
  return updated;
}
