/*
 * XREFs of ?DxgkCloseAdapter@@YAJPEBU_D3DKMT_CLOSEADAPTER@@E@Z @ 0x1C0095FC0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C009FA34 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 */

__int64 __fastcall DxgkCloseAdapter(const struct _D3DKMT_CLOSEADAPTER *a1, char a2, __int64 a3)
{
  const struct _D3DKMT_CLOSEADAPTER *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int hAdapter; // [rsp+38h] [rbp+10h]

  v4 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2002);
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_CLOSEADAPTER *)MmUserProbeAddress;
    hAdapter = v4->hAdapter;
  }
  else
  {
    hAdapter = v4->hAdapter;
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v10 = *ThreadProperty;
    }
  }
  if ( v10 )
  {
    v12 = DXGADAPTER::DestroyHandle(v10, hAdapter);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v11, &EventProfilerExit, v13, 2002);
    return v12;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v17, &EventProfilerExit, v18, 2002);
    return 3221225485LL;
  }
}
