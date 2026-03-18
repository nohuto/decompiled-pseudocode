/*
 * XREFs of AccFieldUnit @ 0x1C001FA10
 * Callers:
 *     <none>
 * Callees:
 *     PushAccFieldObj @ 0x1C0018A78 (PushAccFieldObj.c)
 *     ReadField @ 0x1C001FD00 (ReadField.c)
 *     AcquireGL @ 0x1C0020828 (AcquireGL.c)
 *     WriteField @ 0x1C00209B8 (WriteField.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 *     PrintObject @ 0x1C005E804 (PrintObject.c)
 */

__int64 __fastcall AccFieldUnit(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // edi
  int v7; // edx
  __int64 v8; // r8
  unsigned int *v9; // rsi
  int v10; // edx
  int v11; // edx
  __int64 v12; // rcx
  __int64 *v13; // rbx
  __int64 v14; // r9
  __int64 *v15; // rax
  __int64 *i; // r8
  __int64 **v17; // r10
  __int64 *v18; // rdx
  __int64 *v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int16 v25; // cx
  unsigned int *v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned int Field; // eax
  __int64 v31; // rcx
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v34; // r10
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // r8
  __int64 *v38; // rcx
  __int64 **v39; // rax

  v4 = a3;
  if ( a3 )
    v7 = 3;
  else
    v7 = *(_DWORD *)(a2 + 16) & 0xF;
  v8 = 130LL;
  v9 = *(unsigned int **)(*(_QWORD *)(a2 + 32) + 32LL);
  if ( v7 )
  {
    v10 = v7 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          return v4;
        goto LABEL_7;
      }
      goto LABEL_22;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    if ( *(_WORD *)(*(_QWORD *)v9 + 66LL) == 130 )
      return (unsigned int)PushAccFieldObj(
                             a1,
                             (int)WriteFieldObj,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 96LL) + 8LL) + 64LL,
                             (_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 96LL) + 8LL) + 96LL) + 8LL),
                             *(_QWORD *)(*(_QWORD *)v9 + 96LL) + 16LL,
                             8u);
  }
  ++*(_DWORD *)(a2 + 16);
  v23 = v9[5];
  if ( (v23 & 0x80000010) == 0 )
  {
    v24 = *(_QWORD *)v9;
    v25 = *(_WORD *)(*(_QWORD *)v9 + 66LL);
    if ( v25 == 130 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 96) + 8LL) + 96LL) + 20LL) & 0x10) == 0 )
        goto LABEL_22;
    }
    else
    {
      if ( v25 != 132 )
        goto LABEL_22;
      v8 = *(_QWORD *)(v24 + 96);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 96LL) + 20LL) & 0x10) == 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 96LL) + 20LL) & 0x10) == 0 )
      {
        goto LABEL_22;
      }
    }
  }
  LODWORD(v23) = v23 | 0x80000000;
  v9[5] = v23;
  v4 = AcquireGL(a1, v23, v8, a4);
  if ( v4 )
    return v4;
LABEL_22:
  ++*(_DWORD *)(a2 + 16);
  if ( (v9[5] & 0x80000000) != 0 )
    *(_DWORD *)(a2 + 16) |= 0x20000u;
  v26 = v9 + 2;
  v27 = *(_QWORD *)(a2 + 40);
  v28 = *(_QWORD *)(a2 + 32);
  if ( (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
    Field = ReadField(a1, v28, v26, v27);
  else
    Field = WriteField(a1, v28, v26, v27);
  v4 = Field;
  if ( Field != 32772 && a2 == *(_QWORD *)(a1 + 416) )
  {
LABEL_7:
    if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 && ghGlobalLock )
      ghGlobalLock(5LL, 1LL, qword_1C007A028);
    if ( (gDebugger & 0xD0) != 0 && (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
    {
      ConPrintf("=");
      PrintObject(*(_QWORD *)(a2 + 40));
    }
    v12 = *(_QWORD *)(a1 + 416);
    v13 = (_QWORD *)(v12 - 16);
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v12 + 8);
    *(_DWORD *)(v12 - 16) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v14 = v13[1];
    v15 = *(__int64 **)(v14 + 40);
    for ( i = (__int64 *)(v14 + 40); v15 != i; v15 = (__int64 *)*v15 )
    {
      if ( v13 + 2 < v15 )
        break;
    }
    v17 = (__int64 **)v15[1];
    v18 = v13 + 2;
    if ( *v17 != v15 )
      __fastfail(3u);
    *v18 = (__int64)v15;
    v13[3] = v17;
    *v17 = v18;
    v15[1] = (__int64)v18;
    if ( (__int64 *)*v18 != i )
    {
      v31 = *((unsigned int *)v13 + 1);
      v32 = *v18 - 16;
      if ( (_QWORD *)v32 == (_QWORD *)((char *)v13 + v31) )
      {
        *((_DWORD *)v13 + 1) = *(_DWORD *)(v32 + 4) + v31;
        v33 = v32 + 16;
        v34 = *(_QWORD *)(v32 + 16);
        if ( *(_QWORD *)(v34 + 8) != v33 || (v35 = *(_QWORD **)(v33 + 8), *v35 != v33) )
          __fastfail(3u);
        *v35 = v34;
        *(_QWORD *)(v34 + 8) = v35;
      }
    }
    v19 = (__int64 *)v13[3];
    if ( v19 != i )
    {
      v36 = *((unsigned int *)v19 - 3);
      v37 = v19 - 2;
      if ( v13 == (__int64 *)((char *)v19 + v36 - 16) )
      {
        *((_DWORD *)v37 + 1) = *((_DWORD *)v13 + 1) + v36;
        v38 = (__int64 *)*v18;
        if ( *(__int64 **)(*v18 + 8) != v18 || (v39 = (__int64 **)v13[3], *v39 != v18) )
          __fastfail(3u);
        *v39 = v38;
        v13 = v37;
        v38[1] = (__int64)v39;
      }
    }
    if ( *(_QWORD *)(v14 + 32) <= (unsigned __int64)v13 + *((unsigned int *)v13 + 1) )
    {
      *(_QWORD *)(v14 + 32) = v13;
      v20 = v13 + 2;
      v21 = *v20;
      if ( *(_QWORD **)(*v20 + 8LL) != v20 || (v22 = (_QWORD *)v20[1], (_QWORD *)*v22 != v20) )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
    }
    KeReleaseSpinLock(&gmutHeap, NewIrql);
  }
  return v4;
}
