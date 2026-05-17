/*
 * XREFs of sub_18006008C @ 0x18006008C
 * Callers:
 *     sub_18005FF9C @ 0x18005FF9C (sub_18005FF9C.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_1800114B4 @ 0x1800114B4 (sub_1800114B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800609A8 @ 0x1800609A8 (sub_1800609A8.c)
 *     sub_180060A50 @ 0x180060A50 (sub_180060A50.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18006008C(unsigned __int64 a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  int v5; // r15d
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned int v11; // edi
  unsigned int v12; // eax
  char *v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  _QWORD *v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r13
  char v21; // cl
  unsigned int v22; // ebx
  unsigned int v23; // r13d
  unsigned int v24; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+20h]

  v25 = a4;
  v5 = 0;
  v6 = (unsigned int)a3 >> 31;
  v7 = a4;
  if ( a3 >= 0 && !a3 )
    return;
  v11 = 1;
  if ( a3 >= 0 )
    v11 = a3;
  if ( (dword_18015A43C & 0x20) != 0 && a3 >= 0 )
  {
    v16 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 1) == 0 )
    {
      v17 = *(_QWORD **)(v16 + 72);
      v18 = v17[1] >> *(_BYTE *)(v16 + 11);
      if ( v18 <= 8 )
        v18 = 8LL;
      v19 = v17[1] >> *(_BYTE *)(v16 + 12);
      if ( v19 <= 8 )
        v19 = 8LL;
      v20 = v17[3] + v17[2];
      if ( (v20 <= v18 || (int)sub_1800114B4() >= 0) && v20 <= v19 )
        return;
      v7 = v25;
    }
  }
  if ( v11 < *(unsigned __int8 *)(a2 + 45) )
  {
    do
    {
      v12 = sub_1800609A8(a2, v11, &v24);
      v11 = v12;
      if ( v12 == -1 )
        break;
      if ( v24 >= v7 )
      {
        if ( v5 )
        {
          v21 = *(_BYTE *)(a2 + 44);
          v22 = v12 << v21;
          v23 = v24 << v21;
          ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 32)))(
            *(_QWORD *)a1,
            a2 + (v12 << v21),
            v24 << v21);
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL),
            -(__int64)((unsigned __int64)v23 >> 12));
          sub_180060A50(a2, v22, v23, 1, 0LL);
          if ( !v6 )
            break;
          v11 += v24;
          v7 = v25;
        }
        else
        {
          if ( (a5 & 1) == 0 )
            RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 96), v13, (__int64)v14, v15);
          v5 = 2;
          if ( a3 != -2 )
            RtlAcquireSRWLockExclusive(a2 + 24, (unsigned __int64)v13, v14, v15);
        }
      }
      else
      {
        if ( !v6 )
          break;
        v11 = v24 + v12;
      }
    }
    while ( v11 < *(unsigned __int8 *)(a2 + 45) );
    if ( v5 )
    {
      if ( a3 != -2 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 24));
      if ( (a5 & 1) == 0 )
        RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 96));
    }
  }
}
