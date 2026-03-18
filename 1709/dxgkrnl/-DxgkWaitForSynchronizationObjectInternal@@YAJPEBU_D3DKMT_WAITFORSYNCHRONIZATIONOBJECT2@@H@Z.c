/*
 * XREFs of ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00E8DC8
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C00E8DB0 (-DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z.c)
 *     DxgkWaitForSynchronizationObject @ 0x1C01C2450 (DxgkWaitForSynchronizationObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C00E9300 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // r12d
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rdi
  D3DKMT_HANDLE *v10; // rbx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  D3DKMT_HANDLE *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int128 v28; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v29; // [rsp+70h] [rbp-E8h]
  __int128 v30; // [rsp+80h] [rbp-D8h]
  __int128 v31; // [rsp+90h] [rbp-C8h]
  __int128 v32; // [rsp+A0h] [rbp-B8h]
  __int128 v33; // [rsp+B0h] [rbp-A8h]
  __int128 v34; // [rsp+C0h] [rbp-98h]
  __int128 v35; // [rsp+D0h] [rbp-88h]
  __int128 v36; // [rsp+E0h] [rbp-78h] BYREF
  __int128 v37; // [rsp+F0h] [rbp-68h]
  __int128 v38; // [rsp+100h] [rbp-58h]
  __int128 v39; // [rsp+110h] [rbp-48h]
  __int64 v40; // [rsp+120h] [rbp-38h]

  v3 = a2;
  v4 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2043);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v16 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v16;
      }
    }
  }
  if ( v9 )
  {
    if ( !v3 )
    {
      v28 = *(_OWORD *)&v4->hContext;
      v29 = *(_OWORD *)&v4->ObjectHandleArray[2];
      v30 = *(_OWORD *)&v4->ObjectHandleArray[6];
      v31 = *(_OWORD *)&v4->ObjectHandleArray[10];
      v32 = *(_OWORD *)&v4->ObjectHandleArray[14];
      v33 = *(_OWORD *)&v4->ObjectHandleArray[18];
      v34 = *(_OWORD *)&v4->ObjectHandleArray[22];
      v35 = *(_OWORD *)&v4->ObjectHandleArray[26];
      v10 = &v4->ObjectHandleArray[30];
      v36 = *(_OWORD *)v10;
      v37 = *((_OWORD *)v10 + 1);
      v38 = *((_OWORD *)v10 + 2);
      v39 = *((_OWORD *)v10 + 3);
      v40 = *((_QWORD *)v10 + 8);
      goto LABEL_7;
    }
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v28 = *(_OWORD *)&v4->hContext;
    v29 = *(_OWORD *)&v4->ObjectHandleArray[2];
    v30 = *(_OWORD *)&v4->ObjectHandleArray[6];
    v31 = *(_OWORD *)&v4->ObjectHandleArray[10];
    v32 = *(_OWORD *)&v4->ObjectHandleArray[14];
    v33 = *(_OWORD *)&v4->ObjectHandleArray[18];
    v34 = *(_OWORD *)&v4->ObjectHandleArray[22];
    v35 = *(_OWORD *)&v4->ObjectHandleArray[26];
    v21 = &v4->ObjectHandleArray[30];
    v36 = *(_OWORD *)v21;
    v37 = *((_OWORD *)v21 + 1);
    v38 = *((_OWORD *)v21 + 2);
    v39 = *((_OWORD *)v21 + 3);
    v40 = *((_QWORD *)v21 + 8);
    if ( DWORD1(v28) )
    {
      if ( DWORD1(v28) <= 0x20 )
      {
LABEL_7:
        v12 = WaitForSynchronizationObjectFromGpu(
                DWORD1(v28),
                (const unsigned int *)&v28 + 2,
                0LL,
                *((unsigned __int64 *)&v36 + 1),
                v28,
                v9,
                v3 != 0,
                0,
                0);
        if ( v12 < 0 )
        {
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(qword_1C005F010, &EventProfilerExit, v13, 2043);
          return (unsigned int)v12;
        }
        else
        {
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v11, &EventProfilerExit, v13, 2043);
          return 0LL;
        }
      }
      v25 = (_QWORD *)WdLogNewEntry5_WdError(&v36);
      v25[3] = (unsigned int)v28;
      v25[4] = DWORD1(v28);
      v25[5] = -1073741811LL;
      WdLogEvent5_WdError(v25);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v26, &EventProfilerExit, v27, 2043);
      return 3221225485LL;
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(&v36);
      *(_QWORD *)(v22 + 24) = (unsigned int)v28;
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v22);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v23, &EventProfilerExit, v24, 2043);
      return 3221225485LL;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v17 + 24) = PsGetCurrentProcess(v19, v18);
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v20, 2043);
    return 3221225485LL;
  }
}
