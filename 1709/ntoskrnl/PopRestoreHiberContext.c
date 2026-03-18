/*
 * XREFs of PopRestoreHiberContext @ 0x140434AE0
 * Callers:
 *     PopHandleNextState @ 0x140439818 (PopHandleNextState.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IoInitializeDumpStack @ 0x1401F66E0 (IoInitializeDumpStack.c)
 *     IoNotifyDump @ 0x1401F67A4 (IoNotifyDump.c)
 *     PopInternalAddToDumpFile @ 0x140239DE4 (PopInternalAddToDumpFile.c)
 *     PopDecompressHiberBlocks @ 0x140432B24 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x140433A00 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140434168 (PopRequestRead.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 *     BgLibraryInitialize @ 0x1407D088C (BgLibraryInitialize.c)
 */

struct _KPRCB *__fastcall PopRestoreHiberContext(ULONG_PTR BugCheckParameter3)
{
  struct _KPRCB *result; // rax
  unsigned int Number; // edi
  unsigned __int64 v4; // r12
  _QWORD *v5; // r13
  unsigned __int64 v6; // rsi
  int v7; // eax
  char v8; // cl
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  _DWORD *v11; // rsi
  __int64 v12; // r14
  int v13; // ebp
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG_PTR v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  void (*v24)(void); // rax
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // r9
  __int64 v28; // r10
  unsigned int v29; // r11d
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // r11
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  _QWORD v37[11]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+90h] [rbp+8h]
  void *v39; // [rsp+98h] [rbp+10h]

  result = KeGetCurrentPrcb();
  Number = result->Number;
  if ( Number >= *(_DWORD *)(BugCheckParameter3 + 264) )
    return result;
  v4 = 0LL;
  v5 = (_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 272) + ((unsigned __int64)Number << 7));
  v5[10] = 0LL;
  if ( Number == *(_DWORD *)(BugCheckParameter3 + 192) )
  {
    byte_1403A33E0 = 0;
    v6 = __rdtsc();
    if ( Address )
    {
      v7 = BgLibraryInitialize(Address, 0xFFFFFFFFLL);
      v8 = byte_1403A33E0;
      if ( v7 >= 0 )
        v8 = 1;
      byte_1403A33E0 = v8;
    }
    v9 = __rdtsc();
    qword_140365DC0 += (((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9) - v6;
  }
  if ( !Number )
  {
    v39 = qword_140365B98;
    v38 = __rdtsc();
    v10 = *(_QWORD **)(BugCheckParameter3 + 200);
    if ( v10[11] == v10[69] )
      *(_QWORD *)(BugCheckParameter3 + 408) = v10[72];
    else
      *(_QWORD *)(BugCheckParameter3 + 408) = 0LL;
    v11 = qword_140365B98;
    v12 = *(_QWORD *)(BugCheckParameter3 + 408);
    v13 = *(_DWORD *)(BugCheckParameter3 + 288);
    v14 = *(_QWORD *)(BugCheckParameter3 + 280);
    memset(qword_140365B98, 0, 0x40uLL);
    v11[6] = 0;
    *(_QWORD *)v11 = v14;
    v11[2] = v13;
    *((_QWORD *)v11 + 2) = v12;
    *(_BYTE *)(BugCheckParameter3 + 4) = 1;
    IoNotifyDump(2);
    if ( *(_QWORD *)(BugCheckParameter3 + 408) )
    {
      *(_DWORD *)(BugCheckParameter3 + 184) = 9;
      *(_QWORD *)(BugCheckParameter3 + 160) = v37;
      v37[0] = qword_140365B18;
      v37[1] = qword_140365B18;
      v37[2] = 0LL;
      ((void (__fastcall *)(_QWORD))off_140353598[0])(0LL);
      v15 = IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
      v19 = v15;
      if ( v15 < 0 || PopSimulateHiberBugcheck == 4 )
      {
        PopCheckpointSystemSleep(28LL, v16, v17, v18);
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0xCuLL, v19, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
      }
      v20 = __rdtsc();
      v21 = v38;
      qword_140365DA0 = (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v38;
      v22 = *(_QWORD *)(BugCheckParameter3 + 168);
      *(_DWORD *)(BugCheckParameter3 + 336) = 0;
      *(_QWORD *)(BugCheckParameter3 + 352) = 0LL;
      if ( *(_QWORD *)(v22 + 128) )
        *(_BYTE *)(BugCheckParameter3 + 400) = 1;
      PopHiberReadChecksums(BugCheckParameter3);
      v23 = *(_QWORD *)(BugCheckParameter3 + 200);
      *(_DWORD *)(BugCheckParameter3 + 184) = 10;
      *(_QWORD *)(BugCheckParameter3 + 384) = *(_QWORD *)(v23 + 112) << 12;
      while ( *(_QWORD *)(BugCheckParameter3 + 408) )
      {
        PopRequestRead(BugCheckParameter3, (__int64)v39, 1u);
        if ( (unsigned int)PopDecompressHiberBlocks(
                             (_DWORD *)BugCheckParameter3,
                             v5,
                             1,
                             0,
                             (void (__fastcall *)(_DWORD *))PopDecompressCallback) == -2147483614
          && !*(_DWORD *)(BugCheckParameter3 + 336) )
        {
          _mm_pause();
        }
      }
      PopDecompressHiberBlocks((_DWORD *)BugCheckParameter3, v5, 1, 1, 0LL);
      v24 = *(void (**)(void))(*(_QWORD *)(BugCheckParameter3 + 168) + 72LL);
      if ( v24 )
        v24();
    }
    else
    {
      v21 = v38;
    }
    IoNotifyDump(3);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
    while ( *(_DWORD *)(BugCheckParameter3 + 16) != *(_DWORD *)(BugCheckParameter3 + 264) )
      _mm_pause();
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0;
    if ( *(_DWORD *)(BugCheckParameter3 + 264) )
    {
      v30 = *(_QWORD *)(BugCheckParameter3 + 272);
      do
      {
        v31 = v29++;
        v31 <<= 7;
        qword_140365D80 += *(_QWORD *)(v31 + v30 + 64);
        qword_140365D90 += *(_QWORD *)(v31 + *(_QWORD *)(BugCheckParameter3 + 272) + 72);
        qword_140365DB8 += *(_QWORD *)(v31 + *(_QWORD *)(BugCheckParameter3 + 272) + 80);
        v30 = *(_QWORD *)(BugCheckParameter3 + 272);
        v25 += *(_QWORD *)(v31 + v30 + 88);
        v26 += *(_QWORD *)(v31 + v30 + 96);
        v27 += *(_QWORD *)(v31 + v30 + 104);
        v28 += *(_QWORD *)(v31 + v30 + 112);
        v32 = *(_QWORD *)(v31 + v30 + 64) + *(_QWORD *)(v31 + v30 + 72);
        if ( v32 <= v4 )
          v32 = v4;
        v4 = v32;
      }
      while ( v29 < *(_DWORD *)(BugCheckParameter3 + 264) );
    }
    v33 = v25 / (v27 + 1);
    v34 = v26 / (v28 + 1);
    if ( v34 > v33 )
    {
      v35 = 100 * (qword_140365D88 * *(unsigned int *)(BugCheckParameter3 + 264) / (v28 + v27 + 1) - v33) / (v34 - v33);
      if ( v35 > 99 )
      {
        dword_140365B44 = 99;
LABEL_42:
        v36 = __rdtsc();
        qword_140365DA8 = (((unsigned __int64)HIDWORD(v36) << 32) | (unsigned int)v36) - v21;
        result = (struct _KPRCB *)(qword_140365DA8 - qword_140365DA0 - v4);
        qword_140365D78 = (__int64)result;
        return result;
      }
      dword_140365B44 = v35;
      if ( (int)v35 >= 1 )
        goto LABEL_42;
    }
    dword_140365B44 = 1;
    goto LABEL_42;
  }
  while ( !*(_BYTE *)(BugCheckParameter3 + 4) )
    _mm_pause();
  result = (struct _KPRCB *)PopDecompressHiberBlocks((_DWORD *)BugCheckParameter3, v5, 0, 1, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
  return result;
}
