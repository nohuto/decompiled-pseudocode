/*
 * XREFs of VidSchEnterIndependentFlip @ 0x1C0029990
 * Callers:
 *     <none>
 * Callees:
 *     Template_txqqqtxtx @ 0x1C00290D8 (Template_txqqqtxtx.c)
 */

void __fastcall VidSchEnterIndependentFlip(
        __int64 a1,
        __int64 a2,
        struct _LUID *a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        _QWORD *a8)
{
  __int64 v9; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r13
  _DWORD *v15; // r14
  _QWORD *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r12
  char v20; // si
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  bool v24; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-48h] BYREF
  struct _LUID DestinationLuid; // [rsp+B0h] [rbp+8h] BYREF

  v9 = (unsigned int)a2;
  v12 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
  v13 = a5;
  v14 = a5;
  v12[3] = *a3;
  v12[4] = a4;
  v12[5] = v13;
  WdLogEvent5_WdPresentTokenEvent(v12);
  v15 = a7;
  v16 = a8;
  *a7 = 0;
  *v16 = 0LL;
  if ( *(_BYTE *)(a1 + 47) && (_DWORD)v9 != -1 && (unsigned int)v13 < *(_DWORD *)(a1 + 128) )
  {
    RtlCopyLuid(&DestinationLuid, a3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
    v17 = 272 * v14 + *(_QWORD *)(a1 + 8 * v9 + 2992);
    v18 = 5LL * *(unsigned int *)(v17 + 352);
    *(_QWORD *)(v17 + 8 * v18 + 224) = MEMORY[0xFFFFF78000000320];
    *(_WORD *)(v17 + 8 * v18 + 192) = 257;
    *(struct _LUID *)(v17 + 8 * v18 + 196) = DestinationLuid;
    *(_QWORD *)(v17 + 8 * v18 + 208) = a4;
    *(_QWORD *)(v17 + 8 * v18 + 216) = *(_QWORD *)(v17 + 144);
    v19 = *(_QWORD *)(v17 + 144);
    *(_DWORD *)(v17 + 352) = ((unsigned __int8)*(_DWORD *)(v17 + 352) + 1) & 3;
    if ( (unsigned int)(*(_DWORD *)(v17 + 156) - 1) > 1 )
    {
      *(_DWORD *)(v17 + 156) = 1;
      *(_DWORD *)(v17 + 168) = 0;
      *(struct _LUID *)(v17 + 128) = DestinationLuid;
      *(_QWORD *)(v17 + 136) = a4;
      *(_WORD *)(v17 + 152) = 0;
      *(_BYTE *)(v17 + 154) = 0;
    }
    v20 = a6;
    *(_DWORD *)(v17 + 120) = a6;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v24 = bTracingEnabled == 0;
    *v16 = v19;
    if ( !v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_txqqqtxtx(v22, v21, v23, 1, DestinationLuid.LowPart, v9, v13, v20, 0, a4, 1, v19);
    *v15 = 1;
  }
}
