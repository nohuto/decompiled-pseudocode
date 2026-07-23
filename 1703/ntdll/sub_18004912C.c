/*
 * XREFs of sub_18004912C @ 0x18004912C
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_1800E5D78 @ 0x1800E5D78 (sub_1800E5D78.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180049308 @ 0x180049308 (sub_180049308.c)
 */

__int64 __fastcall sub_18004912C(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        char a5,
        char a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PGENERIC_MAPPING a11,
        int a12,
        __int64 a13,
        int a14,
        PVOID *a15,
        _BYTE *a16,
        _DWORD *a17)
{
  int v20; // ebp
  PVOID ProcessHeap; // rsi
  PVOID *v22; // rbx
  unsigned int v23; // ecx
  int v24; // r14d
  ACL *Acl; // rax
  int v26; // r9d
  unsigned int v27; // edi
  int v29; // [rsp+20h] [rbp-98h]
  __int64 v30; // [rsp+D0h] [rbp+18h] BYREF

  v20 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( a3 || a1 )
  {
    v22 = a15;
    v23 = 200;
    LODWORD(v30) = 200;
    v24 = 0;
    while ( 1 )
    {
      Acl = (ACL *)RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1310720, v23);
      *v22 = Acl;
      if ( !Acl )
        break;
      LOBYTE(v26) = a4;
      LOBYTE(v29) = a5;
      v27 = sub_180049308(
              v20,
              a2,
              a3,
              v26,
              v29,
              a6,
              a7,
              a8,
              a9,
              a10,
              a11,
              a12,
              a13,
              a14,
              (__int64)&v30,
              Acl,
              (__int64)a16,
              a17);
      if ( (v27 & 0x80000000) == 0 )
      {
        if ( !(_DWORD)v30 )
        {
          RtlFreeHeap(ProcessHeap, 0, *v22);
          *v22 = 0LL;
        }
        return v27;
      }
      RtlFreeHeap(ProcessHeap, 0, *v22);
      *v22 = 0LL;
      if ( v27 != -1073741789 )
        return v27;
      if ( (unsigned int)++v24 >= 2 )
        return v27;
      v23 = v30;
    }
    return 3221225495LL;
  }
  else
  {
    *a16 = 0;
    *a17 = a5 != 0 ? 0x400 : 0;
    *a15 = 0LL;
    return 2147483659LL;
  }
}
