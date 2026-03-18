/*
 * XREFs of ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C008D690
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C008D680 (-DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkWaitForSynchronizationObject @ 0x1C01A85C0 (DxgkWaitForSynchronizationObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C008DBB0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rdi
  D3DKMT_HANDLE *v11; // rbx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  __int64 v17; // rbx
  __int64 v18; // r8
  D3DKMT_HANDLE *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int128 v26; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v27; // [rsp+70h] [rbp-D8h]
  __int128 v28; // [rsp+80h] [rbp-C8h]
  __int128 v29; // [rsp+90h] [rbp-B8h]
  __int128 v30; // [rsp+A0h] [rbp-A8h]
  __int128 v31; // [rsp+B0h] [rbp-98h]
  __int128 v32; // [rsp+C0h] [rbp-88h]
  __int128 v33; // [rsp+D0h] [rbp-78h]
  __int128 v34; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v35; // [rsp+F0h] [rbp-58h]
  __int128 v36; // [rsp+100h] [rbp-48h]
  __int128 v37; // [rsp+110h] [rbp-38h]
  __int64 v38; // [rsp+120h] [rbp-28h]

  v4 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2043);
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
    if ( !a2 )
    {
      v26 = *(_OWORD *)&v4->hContext;
      v27 = *(_OWORD *)&v4->ObjectHandleArray[2];
      v28 = *(_OWORD *)&v4->ObjectHandleArray[6];
      v29 = *(_OWORD *)&v4->ObjectHandleArray[10];
      v30 = *(_OWORD *)&v4->ObjectHandleArray[14];
      v31 = *(_OWORD *)&v4->ObjectHandleArray[18];
      v32 = *(_OWORD *)&v4->ObjectHandleArray[22];
      v33 = *(_OWORD *)&v4->ObjectHandleArray[26];
      v11 = &v4->ObjectHandleArray[30];
      v34 = *(_OWORD *)v11;
      v35 = *((_OWORD *)v11 + 1);
      v36 = *((_OWORD *)v11 + 2);
      v37 = *((_OWORD *)v11 + 3);
      v38 = *((_QWORD *)v11 + 8);
      goto LABEL_7;
    }
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v26 = *(_OWORD *)&v4->hContext;
    v27 = *(_OWORD *)&v4->ObjectHandleArray[2];
    v28 = *(_OWORD *)&v4->ObjectHandleArray[6];
    v29 = *(_OWORD *)&v4->ObjectHandleArray[10];
    v30 = *(_OWORD *)&v4->ObjectHandleArray[14];
    v31 = *(_OWORD *)&v4->ObjectHandleArray[18];
    v32 = *(_OWORD *)&v4->ObjectHandleArray[22];
    v33 = *(_OWORD *)&v4->ObjectHandleArray[26];
    v19 = &v4->ObjectHandleArray[30];
    v34 = *(_OWORD *)v19;
    v35 = *((_OWORD *)v19 + 1);
    v36 = *((_OWORD *)v19 + 2);
    v37 = *((_OWORD *)v19 + 3);
    v38 = *((_QWORD *)v19 + 8);
    if ( DWORD1(v26) )
    {
      if ( DWORD1(v26) <= 0x20 )
      {
LABEL_7:
        v13 = WaitForSynchronizationObjectFromGpu(
                DWORD1(v26),
                (const unsigned int *)&v26 + 2,
                0LL,
                *((unsigned __int64 *)&v34 + 1),
                v26,
                v10,
                a2 != 0,
                0,
                0);
        if ( v13 < 0 )
        {
          if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(qword_1C006E790, &EventProfilerExit, v14, 2043);
          return (unsigned int)v13;
        }
        else
        {
          if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v12, &EventProfilerExit, v14, 2043);
          return 0LL;
        }
      }
      v23 = (_QWORD *)WdLogNewEntry5_WdError(&v34, v8);
      v23[3] = (unsigned int)v26;
      v23[4] = DWORD1(v26);
      v23[5] = -1073741811LL;
      WdLogEvent5_WdError(v23);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v24, &EventProfilerExit, v25, 2043);
      return 3221225485LL;
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(&v34, v8);
      *(_QWORD *)(v20 + 24) = (unsigned int)v26;
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v20);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v21, &EventProfilerExit, v22, 2043);
      return 3221225485LL;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v17 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v18, 2043);
    return 3221225485LL;
  }
}
