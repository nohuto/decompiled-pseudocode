/*
 * XREFs of MouseClassServiceCallback @ 0x1C00037C0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0001800 (memmove.c)
 *     MouseClassDequeueRead @ 0x1C00026EC (MouseClassDequeueRead.c)
 *     MouseClassReadCopyData @ 0x1C0003438 (MouseClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004500 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C00049F4 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0004AC4 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLqq @ 0x1C0004BB8 (WPP_RECORDER_SF_qLqq.c)
 *     WPP_RECORDER_SF_qlqqd @ 0x1C0004D98 (WPP_RECORDER_SF_qlqqd.c)
 *     WPP_RECORDER_SF_qqLLqq @ 0x1C0005250 (WPP_RECORDER_SF_qqLLqq.c)
 *     WPP_RECORDER_SF_qqiL @ 0x1C000580C (WPP_RECORDER_SF_qqiL.c)
 */

__int64 **__fastcall MouseClassServiceCallback(__int64 a1, char *a2, int a3, _DWORD *a4)
{
  char *v6; // r15
  __int64 v8; // rdi
  unsigned int v9; // esi
  unsigned int v10; // ebx
  __int64 *v11; // rax
  int v12; // r8d
  int v13; // r9d
  __int64 *v14; // r14
  __int64 **v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  __int64 ***v18; // r14
  _QWORD *v19; // rax
  char *v20; // r15
  unsigned int v21; // esi
  unsigned int v22; // r14d
  unsigned int v23; // r14d
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rdx
  char *v27; // r15
  __int64 v28; // rax
  size_t v29; // rbx
  __int64 *v30; // rax
  int v31; // r8d
  int v32; // r9d
  __int64 *v33; // rbx
  _QWORD *v34; // rcx
  __int64 ***v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rbx
  __int64 **result; // rax
  __int64 *v39; // rax
  __int64 *v40; // [rsp+60h] [rbp-10h] BYREF
  __int64 **v41; // [rsp+68h] [rbp-8h]
  __int64 v42; // [rsp+A0h] [rbp+30h]

  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = a3 - (_DWORD)v6;
  v10 = 0;
  *a4 = 0;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 144));
  v41 = &v40;
  v40 = (__int64 *)&v40;
  v11 = MouseClassDequeueRead(v8);
  v13 = 0;
  v14 = v11;
  LODWORD(v15) = -1431655765;
  if ( v11 )
  {
    v42 = v11[23];
    v16 = *(_DWORD *)(v42 + 8);
    v10 = v16;
    if ( v9 < v16 )
      v10 = v9;
    v17 = v10 / 0x18;
    *a4 += v10 / 0x18;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLLqq(WPP_GLOBAL_Control->DeviceExtension, v17, v16, 0);
    WPP_RECORDER_SF_qqiL(WPP_GLOBAL_Control->DeviceExtension, v17, v16, v13);
    memmove((void *)v14[3], v6, v10);
    *((_DWORD *)v14 + 12) = 0;
    v15 = &v40;
    v14[7] = v10;
    v18 = (__int64 ***)(v14 + 21);
    *(_DWORD *)(v42 + 8) = v10;
    v19 = v41;
    if ( *v41 != (__int64 *)&v40 )
      __fastfail(3u);
    v18[1] = v41;
    *v18 = &v40;
    *v19 = v18;
    v41 = (__int64 **)v18;
  }
  v20 = &v6[v10];
  v21 = v9 - v10;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v15, v12, v13);
  if ( v21 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, 24 * *(_DWORD *)(v8 + 84), v12, 52);
    v22 = *(_DWORD *)(v8 + 136);
    if ( v22 < v21 )
      v21 = *(_DWORD *)(v8 + 136);
    v23 = *(_DWORD *)(v8 + 104) + v22 - *(_DWORD *)(v8 + 112);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v15, v12, 54);
    if ( v21 < v23 )
      v23 = v21;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v15, v12, 55);
    memmove(*(void **)(v8 + 112), v20, v23);
    v26 = *(_QWORD *)(v8 + 104);
    v27 = &v20[v23];
    v28 = *(unsigned int *)(v8 + 136);
    *(_QWORD *)(v8 + 112) += v23;
    if ( *(_QWORD *)(v8 + 112) >= (unsigned __int64)(v26 + v28) )
      *(_QWORD *)(v8 + 112) = v26;
    v29 = v21 - v23;
    if ( v21 != v23 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, v26, v24, 56);
      memmove(*(void **)(v8 + 112), v27, v29);
      *(_QWORD *)(v8 + 112) += v29;
    }
    *(_DWORD *)(v8 + 84) += v21 / 0x18;
    *a4 += v21 / 0x18;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qlqqd(WPP_GLOBAL_Control->DeviceExtension, v21 / 0x18, v24, v25);
  }
  while ( *(_DWORD *)(v8 + 84) )
  {
    v30 = MouseClassDequeueRead(v8);
    v33 = v30;
    if ( !v30 )
      break;
    *((_DWORD *)v30 + 12) = MouseClassReadCopyData(v8, v30, v31, v32);
    v34 = v41;
    v35 = (__int64 ***)(v33 + 21);
    if ( *v41 != (__int64 *)&v40 )
      __fastfail(3u);
    v33[22] = (__int64)v41;
    *v35 = &v40;
    *v34 = v35;
    v41 = (__int64 **)(v33 + 21);
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 144));
  while ( 1 )
  {
    v37 = v40;
    result = &v40;
    if ( v40 == (__int64 *)&v40 )
      break;
    if ( (__int64 **)v40[1] != &v40 || (v39 = (__int64 *)*v40, *(__int64 **)(*v40 + 8) != v40) )
      __fastfail(3u);
    v40 = (__int64 *)*v40;
    v39[1] = (__int64)&v40;
    IofCompleteRequest((PIRP)(v37 - 21), 6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v37 - 21, 0x20u);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v36) = 5;
    return (__int64 **)WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v36, 3LL);
  }
  return result;
}
