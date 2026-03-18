/*
 * XREFs of DxgkGetProcessDeviceLostSupport @ 0x1C01BA4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000E380 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00F1B34 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00F1B54 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01701A8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetDeviceLostSupport@DXGPROCESS@@QEAAJPEBU_LUID@@PEAE@Z @ 0x1C01B9964 (-GetDeviceLostSupport@DXGPROCESS@@QEAAJPEBU_LUID@@PEAE@Z.c)
 */

__int64 __fastcall DxgkGetProcessDeviceLostSupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int DeviceLostSupport; // edi
  __int64 v8; // r8
  struct _LUID *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  DXGPROCESS *Process; // rax
  __int64 v15; // r8
  _BYTE *v16; // rdx
  unsigned __int8 v17[8]; // [rsp+20h] [rbp-88h] BYREF
  struct _LUID v18[2]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v19; // [rsp+38h] [rbp-70h]
  _BYTE v20[80]; // [rsp+40h] [rbp-68h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2156);
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)&v18[0].LowPart = *(_OWORD *)v4;
  v19 = *(_QWORD *)(v4 + 16);
  v17[0] = 1;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v20, *(void **)v18, 4096);
  DeviceLostSupport = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v20, 0);
  if ( DeviceLostSupport < 0 )
  {
    v9 = (struct _LUID *)WdLogNewEntry5_WdWarning(v6, v5, v8);
    v9[3] = v18[0];
    WdLogEvent5_WdWarning(v9);
LABEL_8:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v20, v10, v11);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v12, 2156);
    return (unsigned int)DeviceLostSupport;
  }
  Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v20);
  DeviceLostSupport = DXGPROCESS::GetDeviceLostSupport(Process, &v18[1], v17);
  if ( DeviceLostSupport < 0 )
    goto LABEL_8;
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v20, v10, v11);
  v16 = (_BYTE *)(a1 + 16);
  if ( a1 + 16 >= MmUserProbeAddress )
    v16 = (_BYTE *)MmUserProbeAddress;
  *v16 = v17[0];
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(MmUserProbeAddress, &EventProfilerExit, v15, 2156);
  return 0LL;
}
