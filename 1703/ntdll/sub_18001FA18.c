/*
 * XREFs of sub_18001FA18 @ 0x18001FA18
 * Callers:
 *     sub_18001FFBC @ 0x18001FFBC (sub_18001FFBC.c)
 * Callees:
 *     sub_18001E4DC @ 0x18001E4DC (sub_18001E4DC.c)
 *     sub_18001FB1C @ 0x18001FB1C (sub_18001FB1C.c)
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001FA18(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // r14
  unsigned int v9; // ebx
  char v11; // cl
  __int64 (__fastcall *v12)(PVOID); // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  void *v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // rdx
  _WORD *v18; // r9
  unsigned __int64 v19; // rax
  unsigned int v20; // [rsp+48h] [rbp+10h] BYREF

  v6 = (unsigned __int16)(qword_18015BFE8 ^ *(_WORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12));
  v7 = sub_18001FB1C(a2, a3, v6, &v20);
  v8 = v7;
  if ( v7 == -1 )
  {
    return 0;
  }
  else
  {
    v11 = *(_BYTE *)(a2 + 44);
    v12 = (__int64 (__fastcall *)(PVOID))(a1 ^ qword_18015BFA8 ^ *(_QWORD *)(a1 + 24));
    v13 = v20 << v11;
    v14 = a2 + (unsigned int)((_DWORD)v8 << v11);
    v15 = *(void **)a1;
    if ( v12 == sub_180020D20 )
      v16 = sub_180020D20(v15);
    else
      v16 = ((__int64 (__fastcall *)(void *, __int64, __int64))v12)(v15, v14, v13);
    v9 = v16;
    if ( v16 < 0 )
    {
      sub_18001E4DC(a2, a3, v6);
    }
    else
    {
      v17 = 0LL;
      v18 = (_WORD *)(a2 + *(unsigned __int16 *)(a2 + 46) + 2 * v8);
      v19 = (2 * (unsigned __int64)v20 + 1) >> 1;
      if ( v18 > &v18[v20] )
        v19 = 0LL;
      if ( v19 )
      {
        do
        {
          if ( !*v18 )
            *v18 = 1;
          ++v18;
          ++v17;
        }
        while ( v17 < v19 );
      }
      v9 = 0;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
  }
  return v9;
}
