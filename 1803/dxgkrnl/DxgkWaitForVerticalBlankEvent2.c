/*
 * XREFs of DxgkWaitForVerticalBlankEvent2 @ 0x1C0169AF0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00CF8C0 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent2(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  unsigned int v4; // r15d
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rdi
  __int64 v13; // r14
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  PVOID v17; // rcx
  struct _KEVENT **v18; // rax
  unsigned int v19; // r14d
  PVOID *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r8
  PVOID *v23; // rbx
  int v24; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-E0h]
  PVOID Object; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v27[4]; // [rsp+50h] [rbp-C8h]
  HANDLE Handle[2]; // [rsp+60h] [rbp-B8h]
  __int128 v29; // [rsp+70h] [rbp-A8h]
  __int128 v30; // [rsp+80h] [rbp-98h]
  __int128 v31; // [rsp+90h] [rbp-88h]
  _QWORD v32[10]; // [rsp+A0h] [rbp-78h] BYREF

  v3 = (_OWORD *)a1;
  v4 = 0;
  v25 = 0LL;
  v24 = 2083;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2083);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 2083);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v27 = *v3;
  *(_OWORD *)Handle = v3[1];
  v29 = v3[2];
  v30 = v3[3];
  v31 = v3[4];
  v7 = v27[3];
  if ( v27[3] > 8 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v6);
    v8[3] = v7;
    v8[4] = 32LL;
    v8[5] = -1073741811LL;
LABEL_8:
    WdLogEvent5_WdWarning(v8);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v9, &EventProfilerExit, v10, v24);
    return 3221225485LL;
  }
  memset(v32, 0, 0x48uLL);
  v12 = 0LL;
  if ( v27[3] )
  {
    while ( 1 )
    {
      v13 = (unsigned int)v12;
      v14 = ObReferenceObjectByHandle(Handle[v12], 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v16 = (unsigned int)(v12 + 1);
      v17 = Object;
      v32[v16] = Object;
      if ( v14 < 0 )
        break;
      v12 = (unsigned int)v16;
      if ( (unsigned int)v16 >= (unsigned int)v7 )
      {
        v4 = v7 + 1;
        goto LABEL_16;
      }
    }
    if ( (_DWORD)v12 )
    {
      v23 = (PVOID *)&v32[1];
      v13 = (unsigned int)v12;
      do
      {
        ObfDereferenceObject(*v23++);
        --v12;
      }
      while ( v12 );
    }
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v15, v16);
    v8[3] = Handle[v13];
    v8[4] = -1073741811LL;
    goto LABEL_8;
  }
LABEL_16:
  v18 = (struct _KEVENT **)v32;
  if ( !v4 )
    v18 = 0LL;
  v19 = DxgkWaitForVerticalBlankEventInternal(v27[0], v27[1], v27[2], v4, v18);
  if ( (_DWORD)v7 )
  {
    v20 = (PVOID *)&v32[1];
    do
    {
      ObfDereferenceObject(*v20++);
      --v7;
    }
    while ( v7 );
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v24);
  return v19;
}
