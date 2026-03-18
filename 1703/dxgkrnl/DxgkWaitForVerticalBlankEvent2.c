/*
 * XREFs of DxgkWaitForVerticalBlankEvent2 @ 0x1C017E840
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00DA620 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  unsigned int v7; // edi
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  unsigned int v13; // esi
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  PVOID v18; // rcx
  __int64 v19; // rax
  struct _KEVENT **v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // esi
  __int64 v23; // r8
  PVOID Object; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v25[4]; // [rsp+40h] [rbp-B8h]
  HANDLE Handle[2]; // [rsp+50h] [rbp-A8h]
  __int128 v27; // [rsp+60h] [rbp-98h]
  __int128 v28; // [rsp+70h] [rbp-88h]
  __int128 v29; // [rsp+80h] [rbp-78h]
  PVOID v30[10]; // [rsp+90h] [rbp-68h] BYREF

  v4 = (_OWORD *)a1;
  v5 = 0;
  v6 = 0;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2083);
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v25 = *v4;
  *(_OWORD *)Handle = v4[1];
  v27 = v4[2];
  v28 = v4[3];
  v29 = v4[4];
  v7 = v25[3];
  if ( v25[3] > 8 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    v8[3] = v25[3];
    v8[4] = 32LL;
    v8[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v8);
    v10 = qword_1C006E790;
    v11 = (qword_1C006E790 & 2) == 0;
LABEL_8:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2083);
    return 3221225485LL;
  }
  memset(v30, 0, 0x48uLL);
  v13 = 0;
  if ( v25[3] )
  {
    while ( 1 )
    {
      v14 = ObReferenceObjectByHandle(Handle[v13], 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v17 = v13 + 1;
      v18 = Object;
      v30[v17] = Object;
      if ( v14 < 0 )
        break;
      ++v13;
      if ( (unsigned int)v17 >= v7 )
      {
        v6 = v7 + 1;
        goto LABEL_19;
      }
    }
    if ( v13 )
    {
      do
        ObfDereferenceObject(v30[++v5]);
      while ( v5 < v13 );
    }
    v19 = WdLogNewEntry5_WdWarning(v18, v15, v17, v16);
    *(_QWORD *)(v19 + 24) = Handle[v13];
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v19);
    v11 = (qword_1C006E790 & 2) == 0;
    goto LABEL_8;
  }
LABEL_19:
  v20 = (struct _KEVENT **)v30;
  if ( !v6 )
    v20 = 0LL;
  v22 = DxgkWaitForVerticalBlankEventInternal(v25[0], v25[1], v25[2], v6, v20);
  if ( v7 )
  {
    do
      ObfDereferenceObject(v30[++v5]);
    while ( v5 < v7 );
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v23, 2083);
  return v22;
}
