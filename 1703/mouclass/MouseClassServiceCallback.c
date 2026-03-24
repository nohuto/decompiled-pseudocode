/*
 * XREFs of MouseClassServiceCallback @ 0x1C00016C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqiL @ 0x1C00018E0 (WPP_RECORDER_SF_qqiL.c)
 *     MouseClassDequeueRead @ 0x1C00019A0 (MouseClassDequeueRead.c)
 *     memmove @ 0x1C0002C80 (memmove.c)
 *     MouseClassReadCopyData @ 0x1C0004774 (MouseClassReadCopyData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005040 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0005260 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C0005330 (WPP_RECORDER_SF_qLL.c)
 *     WPP_RECORDER_SF_qLqq @ 0x1C0005424 (WPP_RECORDER_SF_qLqq.c)
 *     WPP_RECORDER_SF_qlqqd @ 0x1C0005604 (WPP_RECORDER_SF_qlqqd.c)
 *     WPP_RECORDER_SF_qqLLqq @ 0x1C0005850 (WPP_RECORDER_SF_qqLLqq.c)
 */

__int64 __fastcall MouseClassServiceCallback(__int64 a1, char *a2, int a3, _DWORD *a4)
{
  char *v6; // rsi
  __int64 v8; // rbp
  unsigned int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 *v12; // r8
  int v13; // r9d
  __int64 v14; // r14
  unsigned int v15; // r8d
  unsigned int v16; // edx
  __int64 **v17; // rax
  __int64 *v18; // rdx
  char *v19; // rsi
  unsigned int v20; // edi
  PDEVICE_OBJECT v21; // rdx
  __int64 v22; // rdx
  __int64 result; // rax
  __int64 v24; // rcx
  void *v25; // rbx
  unsigned int v26; // r14d
  unsigned int v27; // r14d
  int v28; // edx
  int v29; // r9d
  char *v30; // rsi
  unsigned __int64 v31; // r8
  unsigned int v32; // ebx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 *v35; // rcx
  __int64 **v36; // rax
  __int64 v37; // [rsp+60h] [rbp-38h] BYREF
  __int64 *v38; // [rsp+68h] [rbp-30h]
  __int64 v39; // [rsp+A0h] [rbp+8h]

  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  v8 = *(_QWORD *)(a1 + 64);
  v9 = 0;
  v10 = a3 - (_DWORD)v6;
  *a4 = 0;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v8 + 144));
  v38 = &v37;
  v37 = (__int64)&v37;
  v11 = MouseClassDequeueRead(v8);
  v14 = v11;
  if ( v11 )
  {
    v39 = *(_QWORD *)(v11 + 184);
    v15 = *(_DWORD *)(v39 + 8);
    v9 = v15;
    if ( v10 < v15 )
      v9 = v10;
    v16 = v9 / 0x18;
    *a4 += v9 / 0x18;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLLqq(WPP_GLOBAL_Control->DeviceExtension, v16, v15, v13);
    WPP_RECORDER_SF_qqiL(WPP_GLOBAL_Control->DeviceExtension, v16, v15, v13);
    memmove(*(void **)(v14 + 24), v6, v9);
    *(_DWORD *)(v14 + 48) = 0;
    v12 = &v37;
    *(_QWORD *)(v14 + 56) = v9;
    *(_DWORD *)(v39 + 8) = v9;
    v17 = (__int64 **)(v14 + 168);
    v18 = v38;
    if ( (__int64 *)*v38 != &v37 )
      __fastfail(3u);
    *(_QWORD *)(v14 + 176) = v38;
    *v17 = &v37;
    *v18 = (__int64)v17;
    v38 = (__int64 *)(v14 + 168);
  }
  v19 = &v6[v9];
  v20 = v10 - v9;
  v21 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_qL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)WPP_GLOBAL_Control, (_DWORD)v12, v13);
    v21 = WPP_GLOBAL_Control;
  }
  if ( v20 )
  {
    if ( LOWORD(v21->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(v21->DeviceExtension, (_DWORD)v21, (_DWORD)v12, 52);
      v21 = WPP_GLOBAL_Control;
    }
    v26 = *(_DWORD *)(v8 + 136);
    if ( v26 < v20 )
      v20 = *(_DWORD *)(v8 + 136);
    v27 = *(_DWORD *)(v8 + 104) + v26 - *(_DWORD *)(v8 + 112);
    if ( LOWORD(v21->DeviceType) )
    {
      WPP_RECORDER_SF_qLL(v21->DeviceExtension, (_DWORD)v21, (_DWORD)v12, 54);
      v21 = WPP_GLOBAL_Control;
    }
    if ( v20 < v27 )
      v27 = v20;
    if ( LOWORD(v21->DeviceType) )
      WPP_RECORDER_SF_qLqq(v21->DeviceExtension, (_DWORD)v21, (_DWORD)v12, 55);
    memmove(*(void **)(v8 + 112), v19, v27);
    *(_QWORD *)(v8 + 112) += v27;
    v30 = &v19[v27];
    v31 = *(_QWORD *)(v8 + 112);
    if ( v31 >= *(_QWORD *)(v8 + 104) + (unsigned __int64)*(unsigned int *)(v8 + 136) )
      v31 = *(_QWORD *)(v8 + 104);
    *(_QWORD *)(v8 + 112) = v31;
    v32 = v20 - v27;
    if ( v20 != v27 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qLqq(WPP_GLOBAL_Control->DeviceExtension, v28, v31, 56);
      memmove(*(void **)(v8 + 112), v30, v32);
      *(_QWORD *)(v8 + 112) += v32;
    }
    *(_DWORD *)(v8 + 84) += v20 / 0x18;
    *a4 += v20 / 0x18;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qlqqd(WPP_GLOBAL_Control->DeviceExtension, v20 / 0x18, v31, v29);
  }
  for ( ; *(_DWORD *)(v8 + 84); v38 = (__int64 *)(v34 + 168) )
  {
    v33 = MouseClassDequeueRead(v8);
    v34 = v33;
    if ( !v33 )
      break;
    *(_DWORD *)(v33 + 48) = MouseClassReadCopyData(v8, v33);
    v35 = v38;
    v36 = (__int64 **)(v34 + 168);
    if ( (__int64 *)*v38 != &v37 )
      __fastfail(3u);
    *(_QWORD *)(v34 + 176) = v38;
    *v36 = &v37;
    *v35 = (__int64)v36;
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v8 + 144));
  while ( 1 )
  {
    result = v37;
    if ( (__int64 *)v37 == &v37 )
      break;
    v24 = *(_QWORD *)v37;
    if ( *(__int64 **)(v37 + 8) != &v37 || *(_QWORD *)(v24 + 8) != v37 )
      __fastfail(3u);
    v37 = *(_QWORD *)v37;
    *(_QWORD *)(v24 + 8) = &v37;
    v25 = (void *)(result - 168);
    IofCompleteRequest((PIRP)(result - 168), 6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v25, 0x20u);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v22) = 5;
    return WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v22, 3LL);
  }
  return result;
}
