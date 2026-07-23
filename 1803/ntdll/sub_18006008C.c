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

void __fastcall sub_18006008C(_RTL_SRWLOCK *a1, __int64 a2, int a3, unsigned int a4, char a5)
{
  int v5; // r15d
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned int v11; // edi
  unsigned int v12; // eax
  _QWORD *Ptr; // r8
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r13
  char v18; // cl
  unsigned int v19; // ebx
  unsigned int v20; // r13d
  unsigned int v21; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+20h]

  v22 = a4;
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
    Ptr = a1->Ptr;
    if ( (*((_BYTE *)a1->Ptr + 13) & 1) == 0 )
    {
      v14 = (_QWORD *)Ptr[9];
      v15 = v14[1] >> *((_BYTE *)Ptr + 11);
      if ( v15 <= 8 )
        v15 = 8LL;
      v16 = v14[1] >> *((_BYTE *)Ptr + 12);
      if ( v16 <= 8 )
        v16 = 8LL;
      v17 = v14[3] + v14[2];
      if ( (v17 <= v15 || (int)sub_1800114B4() >= 0) && v17 <= v16 )
        return;
      v7 = v22;
    }
  }
  if ( v11 < *(unsigned __int8 *)(a2 + 45) )
  {
    do
    {
      v12 = sub_1800609A8(a2, v11, &v21);
      v11 = v12;
      if ( v12 == -1 )
        break;
      if ( v21 >= v7 )
      {
        if ( v5 )
        {
          v18 = *(_BYTE *)(a2 + 44);
          v19 = v12 << v18;
          v20 = v21 << v18;
          ((void (__fastcall *)(PVOID, __int64, _QWORD))((unsigned __int64)a1 ^ qword_18015A440 ^ (__int64)a1[4].Ptr))(
            a1->Ptr,
            a2 + (v12 << v18),
            v21 << v18);
          _InterlockedExchangeAdd64((volatile signed __int64 *)a1[9].Ptr + 3, -(__int64)((unsigned __int64)v20 >> 12));
          sub_180060A50(a2, v19, v20, 1, 0LL);
          if ( !v6 )
            break;
          v11 += v21;
          v7 = v22;
        }
        else
        {
          if ( (a5 & 1) == 0 )
            RtlAcquireSRWLockShared(a1 + 12);
          v5 = 2;
          if ( a3 != -2 )
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
        }
      }
      else
      {
        if ( !v6 )
          break;
        v11 = v21 + v12;
      }
    }
    while ( v11 < *(unsigned __int8 *)(a2 + 45) );
    if ( v5 )
    {
      if ( a3 != -2 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
      if ( (a5 & 1) == 0 )
        RtlReleaseSRWLockShared(a1 + 12);
    }
  }
}
