/*
 * XREFs of MiMakeIoRangePermanent @ 0x1402564B0
 * Callers:
 *     MiMakeIoRangePermanentDpc @ 0x140256720 (MiMakeIoRangePermanentDpc.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnmappedIoNode @ 0x14014C5F4 (MiRemoveUnmappedIoNode.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMakeIoRangePermanent(__int64 a1)
{
  unsigned __int64 v1; // rsi
  _QWORD *v3; // rbx
  int v4; // r12d
  unsigned __int64 v5; // rdi
  int v6; // r15d
  KIRQL v7; // r13
  unsigned __int64 v8; // rdi
  _QWORD *i; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  _WORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rbp
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  bool v20; // r8
  _QWORD *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  _QWORD *v24; // rdx
  bool v25; // r8
  _QWORD *v26; // rax
  KIRQL v28; // [rsp+60h] [rbp+8h]
  _QWORD *v29; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 32) - v1;
  v29 = 0LL;
  v6 = 0;
  v28 = ExAcquireSpinLockExclusive(&dword_1403CC340);
  v7 = v28;
  v8 = v5 + 1;
  if ( !v8 )
    goto LABEL_33;
  do
  {
    for ( i = (_QWORD *)qword_1403CC350; ; i = (_QWORD *)i[1] )
    {
      while ( 1 )
      {
        if ( !i )
        {
          v16 = MiRemoveUnmappedIoNode((unsigned __int64 *)&qword_1403CC358, v1);
          v17 = (_QWORD *)v16;
          if ( !v16 )
          {
            v18 = v1 & 0x1FF;
            goto LABEL_28;
          }
          v19 = *(_QWORD *)(v16 + 40);
          v20 = 0;
          if ( !v3 )
            goto LABEL_27;
          while ( 1 )
          {
            if ( v19 < v3[5] )
            {
              v21 = (_QWORD *)*v3;
              if ( !*v3 )
              {
                v20 = 0;
LABEL_27:
                RtlAvlInsertNodeEx((unsigned __int64 *)&v29, (unsigned __int64)v3, v20, v17);
                v3 = v29;
                v18 = (v1 & 0xFFFFFFFFFLL) - v17[5];
LABEL_28:
                v22 = 512 - v18;
                v23 = v8;
                if ( v22 <= v8 )
                  v23 = v22;
                v8 -= v23;
                v1 += v23;
                goto LABEL_31;
              }
            }
            else
            {
              v21 = (_QWORD *)v3[1];
              if ( !v21 )
              {
                v20 = 1;
                goto LABEL_27;
              }
            }
            v3 = v21;
          }
        }
        v10 = i[5];
        if ( v1 >= v10 )
          break;
        i = (_QWORD *)*i;
      }
      v11 = v10 + 512;
      if ( v1 < v10 + 512 )
        break;
    }
    v12 = i[6];
    v13 = (v1 & 0xFFFFFFFFFLL) - v10;
    v14 = (_WORD *)(v12 + 2 * v13);
    if ( v8 + v1 <= v11 )
      v15 = 2 * (v13 + v8);
    else
      v15 = 1024LL;
    if ( (unsigned __int64)v14 >= v12 + v15 )
      continue;
    while ( (*v14 & 0x3FFF) == 0 )
    {
      *v14 = 0x4000;
LABEL_15:
      ++v14;
      ++v1;
      --v8;
      if ( (unsigned __int64)v14 >= v12 + v15 )
        goto LABEL_16;
    }
    if ( (unsigned __int16)*v14 >> 14 == v4 )
      goto LABEL_15;
    ++dword_1403CC394;
    v6 = -1073741800;
    v8 = 0LL;
LABEL_16:
    v3 = v29;
LABEL_31:
    ;
  }
  while ( v8 );
  v7 = v28;
  if ( v6 < 0 )
    goto LABEL_43;
LABEL_33:
  v24 = (_QWORD *)qword_1403CC3A0;
  v25 = 0;
  if ( !qword_1403CC3A0 )
    goto LABEL_42;
  while ( 2 )
  {
    if ( *(_QWORD *)(a1 + 32) >= v24[3] )
    {
      if ( *(_QWORD *)(a1 + 24) <= v24[4] )
      {
        ++dword_1403CC398;
        v6 = -1073741800;
        goto LABEL_43;
      }
      v26 = (_QWORD *)v24[1];
      if ( !v26 )
      {
        v25 = 1;
        goto LABEL_42;
      }
      goto LABEL_39;
    }
    v26 = (_QWORD *)*v24;
    if ( *v24 )
    {
LABEL_39:
      v24 = v26;
      continue;
    }
    break;
  }
  v25 = 0;
LABEL_42:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_1403CC3A0, (unsigned __int64)v24, v25, (_QWORD *)a1);
LABEL_43:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CC340);
  __writecr8(v7);
  while ( v3 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&v29, (__int64)v3);
    ExFreePoolWithTag(v3, 0);
    v3 = v29;
  }
  return (unsigned int)v6;
}
