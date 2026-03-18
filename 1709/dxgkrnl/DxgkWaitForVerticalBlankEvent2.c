/*
 * XREFs of DxgkWaitForVerticalBlankEvent2 @ 0x1C0181EA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00ECDD0 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent2(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  unsigned int v4; // r15d
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v11; // rdi
  __int64 v12; // r14
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  PVOID v16; // rcx
  PVOID *v17; // rbx
  __int64 v18; // rax
  struct _KEVENT **v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // r14d
  PVOID *v23; // rdi
  PVOID Object; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v25[4]; // [rsp+40h] [rbp-C8h]
  HANDLE Handle[2]; // [rsp+50h] [rbp-B8h]
  __int128 v27; // [rsp+60h] [rbp-A8h]
  __int128 v28; // [rsp+70h] [rbp-98h]
  __int128 v29; // [rsp+80h] [rbp-88h]
  _QWORD v30[10]; // [rsp+90h] [rbp-78h] BYREF

  v3 = (_OWORD *)a1;
  v4 = 0;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2083);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v25 = *v3;
  *(_OWORD *)Handle = v3[1];
  v27 = v3[2];
  v28 = v3[3];
  v29 = v3[4];
  v5 = v25[3];
  if ( v25[3] > 8 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, a2, a3);
    v6[3] = v25[3];
    v6[4] = 32LL;
    v6[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v6);
    v8 = qword_1C005F010;
    v9 = (qword_1C005F010 & 2) == 0;
LABEL_8:
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v7, 2083);
    return 3221225485LL;
  }
  memset(v30, 0, 0x48uLL);
  v11 = 0LL;
  if ( v25[3] )
  {
    while ( 1 )
    {
      v12 = (unsigned int)v11;
      v13 = ObReferenceObjectByHandle(Handle[v11], 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v15 = (unsigned int)(v11 + 1);
      v16 = Object;
      v30[v15] = Object;
      if ( v13 < 0 )
        break;
      v11 = (unsigned int)v15;
      if ( (unsigned int)v15 >= (unsigned int)v5 )
      {
        v4 = v5 + 1;
        goto LABEL_20;
      }
    }
    if ( (_DWORD)v11 )
    {
      v17 = (PVOID *)&v30[1];
      v12 = (unsigned int)v11;
      do
      {
        ObfDereferenceObject(*v17++);
        --v11;
      }
      while ( v11 );
    }
    v18 = WdLogNewEntry5_WdWarning(v16, v14, v15);
    *(_QWORD *)(v18 + 24) = Handle[v12];
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    v9 = (qword_1C005F010 & 2) == 0;
    goto LABEL_8;
  }
LABEL_20:
  v19 = (struct _KEVENT **)v30;
  if ( !v4 )
    v19 = 0LL;
  v22 = DxgkWaitForVerticalBlankEventInternal(v25[0], v25[1], v25[2], v4, v19);
  if ( (_DWORD)v5 )
  {
    v23 = (PVOID *)&v30[1];
    do
    {
      ObfDereferenceObject(*v23++);
      --v5;
    }
    while ( v5 );
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, 2083);
  return v22;
}
