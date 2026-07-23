/*
 * XREFs of sub_1800215C8 @ 0x1800215C8
 * Callers:
 *     sub_180006420 @ 0x180006420 (sub_180006420.c)
 *     sub_18001E250 @ 0x18001E250 (sub_18001E250.c)
 *     sub_18001F7A8 @ 0x18001F7A8 (sub_18001F7A8.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 * Callees:
 *     sub_18001E4DC @ 0x18001E4DC (sub_18001E4DC.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     sub_180020B20 @ 0x180020B20 (sub_180020B20.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800215C8(__int64 a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  __int64 v5; // rbx
  unsigned int v6; // r15d
  int v9; // ebp
  int v10; // r14d
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  _WORD *v14; // rcx
  _WORD *i; // rdi
  __int64 v16; // rdi
  char v17; // cl
  unsigned int v18; // r12d
  __int64 (__fastcall *v19)(__int64, __int64, unsigned int); // rax
  unsigned int v20; // ebp
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v26; // [rsp+88h] [rbp+20h]

  v26 = a4;
  LODWORD(v5) = a3;
  v6 = (unsigned int)a3 >> 31;
  v9 = a3;
  v10 = 0;
  if ( a3 < 0 )
  {
    LODWORD(v5) = 1;
  }
  else if ( !a3 )
  {
    return;
  }
  v11 = *(unsigned __int8 *)(a2 + 45);
  if ( (unsigned int)v5 < v11 )
  {
    while ( 1 )
    {
      v12 = a2 + *(unsigned __int16 *)(a2 + 46);
      v13 = v12 + 2LL * (unsigned __int8)v11;
      v14 = (_WORD *)(v12 + 2LL * (unsigned int)v5);
      if ( *v14 )
      {
        if ( (unsigned __int64)v14 >= v13 )
          goto LABEL_21;
        do
        {
          if ( !*v14 )
            break;
          ++v14;
        }
        while ( (unsigned __int64)v14 < v13 );
        if ( (unsigned __int64)v14 >= v13 )
        {
LABEL_21:
          if ( v10 )
          {
            if ( a3 != -2 )
              RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
            if ( (a5 & 1) == 0 )
              RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 48));
          }
          return;
        }
        v5 = (__int64)((__int64)v14 - v12) >> 1;
      }
      else
      {
        do
          --v14;
        while ( !*v14 && (unsigned __int64)v14 > v12 );
        ++v14;
      }
      for ( i = (_WORD *)(v12 + 2 * ((unsigned int)v5 + 1LL)); !*i && (unsigned __int64)i < v13; ++i )
        ;
      v5 = (__int64)((__int64)v14 - v12) >> 1;
      v16 = i - v14;
      if ( (_DWORD)v5 == -1 )
        goto LABEL_21;
      if ( (unsigned int)v16 < a4 )
      {
        if ( !v6 )
          goto LABEL_21;
      }
      else
      {
        if ( !v10 )
        {
          if ( (a5 & 1) == 0 )
            RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 48));
          v10 = 2;
          if ( v9 != -2 )
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
          goto LABEL_18;
        }
        v17 = *(_BYTE *)(a2 + 44);
        v18 = (_DWORD)v5 << v17;
        v19 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))(a1 ^ qword_18015BFA8 ^ *(_QWORD *)(a1 + 32));
        v20 = (_DWORD)v16 << v17;
        v21 = (_DWORD)v16 << v17;
        v22 = a2 + (unsigned int)((_DWORD)v5 << v17);
        v23 = *(_QWORD *)a1;
        if ( v19 == sub_180020B20 )
          sub_180020B20(v23, v22, v21);
        else
          v19(v23, v22, v20);
        sub_18001E4DC(a2, v18, v20);
        if ( !v6 )
          goto LABEL_21;
        v9 = a3;
      }
      LODWORD(v5) = v16 + v5;
LABEL_18:
      v11 = *(unsigned __int8 *)(a2 + 45);
      a4 = v26;
      if ( (unsigned int)v5 >= v11 )
        goto LABEL_21;
    }
  }
}
