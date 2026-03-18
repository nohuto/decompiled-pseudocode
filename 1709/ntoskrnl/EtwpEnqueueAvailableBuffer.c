/*
 * XREFs of EtwpEnqueueAvailableBuffer @ 0x1400E078C
 * Callers:
 *     EtwpAllocateFreeBuffers @ 0x1400E02E8 (EtwpAllocateFreeBuffers.c)
 *     EtwpSwitchBuffer @ 0x1400E041C (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1400E08C8 (EtwpPrepareDirtyBuffer.c)
 *     EtwpRelinquishCompressionTarget @ 0x140281C04 (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x140281C54 (EtwpRotateCompressionTarget.c)
 *     EtwpCompleteBuffer @ 0x140532618 (EtwpCompleteBuffer.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x1400E0828 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400E0868 (EtwpLockBufferList.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall EtwpEnqueueAvailableBuffer(__int64 a1, unsigned int *a2, unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v5; // rcx
  __int64 result; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rdi
  bool v11; // zf
  _QWORD *v12; // r8
  _QWORD *v13; // rcx
  int v14; // eax
  char v15; // [rsp+40h] [rbp+8h] BYREF

  BugCheckParameter4 = *a2;
  v5 = *(unsigned int *)(a1 + 4);
  v15 = 0;
  if ( (_DWORD)v5 != (_DWORD)BugCheckParameter4 )
    KeBugCheckEx(0x11Du, 7uLL, (ULONG_PTR)a2, v5, BugCheckParameter4);
  a2[11] = a3;
  *((_QWORD *)a2 + 3) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 824));
  EtwpLockBufferList(a1, &v15);
  if ( (*(_DWORD *)(a1 + 12) & 0x4000000) == 0 )
    goto LABEL_3;
  v9 = (_QWORD *)(a1 + 72);
  if ( !*(_QWORD *)(a1 + 72) || a3 == 4 )
    goto LABEL_3;
  if ( !a3 )
  {
    v10 = a2 + 8;
    *v10 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = v10;
    v11 = a1 + 72 == *(_QWORD *)(a1 + 64);
    goto LABEL_10;
  }
  v12 = 0LL;
  if ( !*v9 )
    goto LABEL_3;
  do
  {
    v13 = (_QWORD *)*v9;
    if ( (!v12 && (v14 = *((_DWORD *)v13 + 3)) != 0 || (v14 = *((_DWORD *)v13 + 3), v14 == 6)) && (v12 = v9, v14 == 6) )
    {
      *v9 = *v13;
      if ( *v13 )
        *v13 = 0LL;
      else
        *(_QWORD *)(a1 + 64) = v9;
      *v13 = *(_QWORD *)(a1 + 2344);
      *(_QWORD *)(a1 + 2344) = v13;
    }
    else
    {
      v9 = (_QWORD *)*v9;
    }
  }
  while ( *v9 );
  if ( !v12 )
  {
LABEL_3:
    *((_QWORD *)a2 + 4) = 0LL;
    **(_QWORD **)(a1 + 64) = a2 + 8;
    *(_QWORD *)(a1 + 64) = a2 + 8;
    goto LABEL_4;
  }
  v10 = a2 + 8;
  *v10 = *v12;
  *v12 = v10;
  v11 = v12 == *(_QWORD **)(a1 + 64);
LABEL_10:
  if ( v11 )
    *(_QWORD *)(a1 + 64) = v10;
LABEL_4:
  result = EtwpUnlockBufferList(a1, &v15);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 244));
  return result;
}
