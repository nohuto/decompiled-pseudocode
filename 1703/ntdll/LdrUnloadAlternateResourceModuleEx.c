/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x180010CF0
 * Callers:
 *     LdrUnloadAlternateResourceModule @ 0x180010CE0 (LdrUnloadAlternateResourceModule.c)
 *     sub_180011E90 @ 0x180011E90 (sub_180011E90.c)
 *     sub_18002FF94 @ 0x18002FF94 (sub_18002FF94.c)
 *     LdrResRelease @ 0x18008C450 (LdrResRelease.c)
 * Callees:
 *     sub_180003824 @ 0x180003824 (sub_180003824.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReAllocateHeap @ 0x180022260 (RtlReAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180087DCC @ 0x180087DCC (sub_180087DCC.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1, __int16 a2)
{
  char v4; // bl
  unsigned int v5; // edi
  int v6; // r14d
  int v7; // r13d
  __int64 v8; // rsi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  bool v14; // zf
  __int64 v15; // rax
  __int64 Heap; // rax
  __int64 v18; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+60h] [rbp+8h]
  __int64 v20; // [rsp+70h] [rbp+18h]

  v4 = 0;
  if ( !a1 )
    return 0;
  RtlAcquireSRWLockExclusive(&unk_18015C3B0);
  v5 = dword_18015A268;
  if ( dword_18015A268 )
  {
    v6 = dword_18015A268;
    for ( HIDWORD(v18) = dword_18015A268; ; HIDWORD(v18) = v7 )
    {
      if ( v6 <= 0 )
        goto LABEL_34;
      v7 = v6 - 1;
      v8 = qword_18015A260 + 72LL * (v6 - 1);
      if ( *(_QWORD *)(v8 + 8) == a1 )
        break;
LABEL_6:
      v6 = v7;
    }
    v20 = qword_18015A260 + 72LL * v7;
    v9 = (_QWORD *)(v8 + 32);
    v10 = *(_QWORD *)(v8 + 32);
    if ( v10 && (!a2 || a2 == *(_WORD *)v8) && v10 != -1 && *(_DWORD *)(v8 + 56) == -1 )
    {
      v11 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(v8 + 64) == -1073741799 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
        v6 = HIDWORD(v18);
        v8 = v20;
      }
      else
      {
        ZwUnmapViewOfSection(-1LL, v11);
      }
      v12 = *(_QWORD *)(v8 + 40);
      if ( v12 )
      {
        ZwClose(v12);
        *(_QWORD *)(v8 + 40) = 0LL;
      }
      *v9 = 0LL;
      v5 = dword_18015A268;
    }
    v13 = *(_DWORD *)(v8 + 56);
    v19 = v13;
    if ( v13 == -1 )
    {
      v13 = *(_DWORD *)(v8 + 60);
      v19 = v13;
    }
    if ( v6 != v5 )
      sub_180087DCC((unsigned int)(v6 - 1), v10, 0LL);
    v14 = v5-- == 1;
    dword_18015A268 = v5;
    if ( v14 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
      qword_18015A260 = 0LL;
      dword_18015A26C = 0;
    }
    else
    {
      v15 = (unsigned int)(dword_18015A26C - 32);
      if ( v5 >= (unsigned int)v15 )
        goto LABEL_22;
      Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, qword_18015A260, 72 * v15, v18);
      if ( !Heap )
      {
        v4 = 0;
        goto LABEL_34;
      }
      qword_18015A260 = Heap;
      dword_18015A26C -= 32;
    }
    v13 = v19;
    v5 = dword_18015A268;
LABEL_22:
    if ( v13 == -1 )
    {
      v4 = 1;
      LOBYTE(v18) = 1;
    }
    else
    {
      v4 = sub_180003824(v13);
      LOBYTE(v18) = v4;
      v5 = dword_18015A268;
    }
    goto LABEL_6;
  }
  v4 = 1;
LABEL_34:
  RtlReleaseSRWLockExclusive(&unk_18015C3B0);
  return v4;
}
