/*
 * XREFs of VmpInsertMemoryRange @ 0x1402521B8
 * Callers:
 *     VmCreateMemoryRange @ 0x140705320 (VmCreateMemoryRange.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x14004A340 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     VmpProcessContextLockExclusive @ 0x1402524DC (VmpProcessContextLockExclusive.c)
 */

__int64 __fastcall VmpInsertMemoryRange(_QWORD *SpinLock, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rbp
  unsigned __int64 *v9; // r10
  unsigned int v10; // ebx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 *v13; // r14
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  bool v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  bool v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax

  v6 = VmpProcessContextLockExclusive(SpinLock);
  v7 = SpinLock[9];
  v8 = v6;
  if ( v7 == -1 )
  {
    SpinLock[9] = a3;
  }
  else if ( v7 != a3 )
  {
    v10 = -1073740007;
    goto LABEL_59;
  }
  v9 = SpinLock + 1;
  v10 = 0;
  v11 = SpinLock[1];
  while ( v11 )
  {
    if ( a2[7] < *(_QWORD *)(v11 + 24) )
    {
      v12 = *(_QWORD *)v11;
    }
    else
    {
      if ( a2[6] <= *(_QWORD *)(v11 + 32) )
      {
LABEL_19:
        v10 = -1073741800;
        goto LABEL_59;
      }
      v12 = *(_QWORD *)(v11 + 8);
    }
    if ( (SpinLock[2] & 1) != 0 && v12 )
      v11 ^= v12;
    else
      v11 = v12;
  }
  v13 = SpinLock + 3;
  v14 = SpinLock[3];
  while ( v14 )
  {
    if ( a2[9] < *(_QWORD *)(v14 + 64) )
    {
      v15 = *(_QWORD *)v14;
    }
    else
    {
      if ( a2[8] <= *(_QWORD *)(v14 + 72) )
        goto LABEL_19;
      v15 = *(_QWORD *)(v14 + 8);
    }
    if ( (SpinLock[4] & 1) != 0 && v15 )
      v14 ^= v15;
    else
      v14 = v15;
  }
  v16 = 0;
  v17 = *v9;
  if ( !*v9 )
    goto LABEL_43;
  v18 = a2[6];
  while ( 1 )
  {
    if ( v18 <= *(_QWORD *)(v17 + 32) && v18 < *(_QWORD *)(v17 + 24) )
    {
      v19 = *(_QWORD *)v17;
      if ( (SpinLock[2] & 1) != 0 )
      {
        if ( !v19 )
          goto LABEL_36;
        v19 ^= v17;
      }
      if ( !v19 )
      {
LABEL_36:
        v16 = 0;
        goto LABEL_43;
      }
      goto LABEL_41;
    }
    v19 = *(_QWORD *)(v17 + 8);
    if ( (SpinLock[2] & 1) != 0 )
    {
      if ( !v19 )
        break;
      v19 ^= v17;
    }
    if ( !v19 )
      break;
LABEL_41:
    v17 = v19;
  }
  v16 = 1;
LABEL_43:
  RtlRbInsertNodeEx((__int64)(SpinLock + 1), v17, v16, (unsigned __int64)(a2 + 3));
  v20 = 0;
  v21 = *v13;
  if ( !*v13 )
    goto LABEL_58;
  v22 = a2[8];
  while ( 2 )
  {
    if ( v22 <= *(_QWORD *)(v21 + 72) && v22 < *(_QWORD *)(v21 + 64) )
    {
      v23 = *(_QWORD *)v21;
      if ( (SpinLock[4] & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_51;
        v23 ^= v21;
      }
      if ( !v23 )
      {
LABEL_51:
        v20 = 0;
        goto LABEL_58;
      }
LABEL_56:
      v21 = v23;
      continue;
    }
    break;
  }
  v23 = *(_QWORD *)(v21 + 8);
  if ( (SpinLock[4] & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_57;
    v23 ^= v21;
  }
  if ( v23 )
    goto LABEL_56;
LABEL_57:
  v20 = 1;
LABEL_58:
  RtlRbInsertNodeEx((__int64)(SpinLock + 3), v21, v20, (unsigned __int64)a2);
LABEL_59:
  if ( v8 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)SpinLock);
    __writecr8((unsigned __int8)v8);
  }
  return v10;
}
