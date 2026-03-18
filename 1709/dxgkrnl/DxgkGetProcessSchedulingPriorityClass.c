/*
 * XREFs of DxgkGetProcessSchedulingPriorityClass @ 0x1C01BAA50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000E380 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00F1AA0 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00F1B34 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00F1B54 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01701A8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityClass(void *a1, _DWORD *a2, __int64 a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE v13[80]; // [rsp+20h] [rbp-68h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2032);
  if ( a2 )
  {
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v13, a1, 512);
    v7 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v13, 1);
    if ( v7 >= 0 )
    {
      v9 = *((unsigned int *)DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v13) + 62);
      v7 = 0;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v9;
      DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v13, v9, v10);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v13, v6, v8);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, 2032);
    return (unsigned int)v7;
  }
  else
  {
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerExit, a3, 2032);
    return 3221225485LL;
  }
}
