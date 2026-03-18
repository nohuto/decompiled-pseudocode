/*
 * XREFs of ?CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01A4718
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01A43A0 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C01A3CFC (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CommitRimCompleteFrame(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v9; // rbx
  struct tagPOINTERQFRAME *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  _DWORD *v16; // r8
  unsigned int v17; // r9d
  _OWORD *v18; // r10
  __int64 v19; // rax
  __int64 v20; // rdx
  _OWORD *v21; // rcx
  __int128 v22; // xmm0
  bool v23; // zf
  int v24; // eax
  __int64 v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // r8
  void *v30; // rax
  int v31; // ecx
  __int64 i; // rax
  __int64 v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rsi
  struct _LIST_ENTRY *Flink; // rax
  _QWORD v37[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v38; // [rsp+50h] [rbp+8h] BYREF

  v38 = 0LL;
  LOBYTE(a3) = a1[12] == 0;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(*((_QWORD *)a1 + 4), 3LL, a3, &v38) >= 0 )
  {
    v4 = v38 == -64 ? 0LL : *(_QWORD *)(v38 + 64);
    RawInputManagerDeviceObjectDereference();
    LOBYTE(v5) = 19;
    v8 = HMValidateHandleNoSecure(v4, v5, v6, v7);
    EtwTraceBeginPointerFrameCommit(0LL, a1[6]);
    v9 = Win32AllocPoolZInit(112LL, 1718645589LL);
    if ( v9 )
    {
      v10 = AllocPointerQFrameList(a1[6]);
      *(_QWORD *)(v9 + 96) = v10;
      if ( v10 )
      {
        v14 = 0xFFFFFFFFLL;
        v15 = 216LL * a1[6];
        if ( v15 <= 0xFFFFFFFF )
          *(_QWORD *)(v9 + 88) = Win32AllocPoolZInit((unsigned int)v15, 1701868373LL);
        if ( *(_QWORD *)(v9 + 88) )
        {
          v16 = (_DWORD *)*((_QWORD *)a1 + 11);
          v17 = 0;
          if ( a1[6] )
          {
            v18 = v16 + 2;
            do
            {
              v19 = v17++;
              v20 = 216 * v19;
              LODWORD(v19) = *v16;
              v16 += 42;
              *(_DWORD *)(v20 + *(_QWORD *)(v9 + 88) + 44) = v19;
              v21 = (_OWORD *)(v20 + *(_QWORD *)(v9 + 88));
              v21[3] = *v18;
              v21[4] = v18[1];
              v21[5] = v18[2];
              v21[6] = v18[3];
              v21[7] = v18[4];
              v21[8] = v18[5];
              v21[9] = v18[6];
              v21[10] = v18[7];
              v22 = v18[8];
              v18 = (_OWORD *)((char *)v18 + 168);
              v21[11] = v22;
              v21[12] = *(_OWORD *)((char *)v18 - 24);
              *(_QWORD *)(v20 + *(_QWORD *)(v9 + 88) + 72) = v4;
            }
            while ( v17 < a1[6] );
          }
          v23 = dword_1C0327610 == -1;
          v24 = dword_1C0327610 + 1;
          *(_DWORD *)(v9 + 32) = dword_1C0327610;
          if ( v23 )
            v24 = 1;
          v25 = 0LL;
          dword_1C0327610 = v24;
          *(_DWORD *)(v9 + 40) = a1[6];
          *(_QWORD *)(v9 + 56) = v4;
          *(_QWORD *)(v9 + 64) = *((_QWORD *)a1 + 5);
          *(_DWORD *)(v9 + 48) = a1[7];
          v26 = *((_QWORD *)a1 + 10);
          while ( 1 )
          {
            if ( !v26 )
            {
              v31 = *(_DWORD *)(v9 + 32);
              for ( i = *(_QWORD *)(v9 + 80); i; i = *(_QWORD *)(i + 24) )
                *(_DWORD *)i = v31;
              v37[0] = v9 + 104;
              v37[1] = *(_QWORD *)(v8 + 472);
              HMAssignmentLock(v37);
              Flink = gFrameListHead.Flink;
              if ( gFrameListHead.Flink->Blink != &gFrameListHead )
                __fastfail(3u);
              *(_QWORD *)v9 = gFrameListHead.Flink;
              *(_QWORD *)(v9 + 8) = &gFrameListHead;
              Flink->Blink = (struct _LIST_ENTRY *)v9;
              gFrameListHead.Flink = (struct _LIST_ENTRY *)v9;
              *(_QWORD *)(v9 + 24) = v9 + 16;
              *(_QWORD *)(v9 + 16) = v9 + 16;
              return (struct tagPOINTERINPUTFRAME *)v9;
            }
            v28 = Win32AllocPoolZInit(32LL, 1685222229LL);
            if ( !v28 )
              break;
            v30 = (void *)Win32AllocPool(*(unsigned int *)(v26 + 4), 1685222229LL);
            *(_QWORD *)(v28 + 16) = v30;
            *(_DWORD *)(v28 + 4) = *(_DWORD *)v26;
            *(_DWORD *)(v28 + 8) = *(_DWORD *)(v26 + 4);
            memmove(v30, *(const void **)(v26 + 8), *(unsigned int *)(v26 + 4));
            if ( v25 )
              *(_QWORD *)(v25 + 24) = v28;
            else
              *(_QWORD *)(v9 + 80) = v28;
            v26 = *(_QWORD *)(v26 + 16);
            v25 = v28;
          }
          v33 = *(_QWORD *)(v9 + 80);
          while ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 16);
            v35 = v33;
            if ( v34 )
              Win32FreePool(v34, v27, v29);
            v33 = *(_QWORD *)(v33 + 24);
            Win32FreePool(v35, v27, v29);
          }
          Win32FreePool(*(_QWORD *)(v9 + 88), v27, v29);
        }
        Win32FreePool(*(_QWORD *)(v9 + 96), v14, v12);
      }
      Win32FreePool(v9, v11, v12);
    }
  }
  return 0LL;
}
