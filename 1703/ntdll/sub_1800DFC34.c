/*
 * XREFs of sub_1800DFC34 @ 0x1800DFC34
 * Callers:
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18005DF10 (RtlExpandEnvironmentStrings_U.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180062DA0 (RtlQueryEnvironmentVariable_U.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1800A5560 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     sub_1800DFBA0 @ 0x1800DFBA0 (sub_1800DFBA0.c)
 */

__int64 sub_1800DFC34()
{
  __int64 result; // rax
  __int64 **Heap; // rax
  __int64 **v2; // rbx
  signed __int64 v3; // rdi
  int v4; // eax
  signed __int64 v5; // rcx
  int v6; // eax
  int i; // edi
  __int64 *v8; // rdx
  int v9; // eax
  signed __int64 v10; // rdi
  __int64 *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // [rsp+38h] [rbp-D0h]
  __int64 v15; // [rsp+40h] [rbp-C8h]
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  char *v17; // [rsp+50h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-B0h]
  char *v19; // [rsp+60h] [rbp-A8h]
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  char *v21; // [rsp+70h] [rbp-98h]
  int v22; // [rsp+84h] [rbp-84h]
  int v23; // [rsp+8Ch] [rbp-7Ch]
  int v24; // [rsp+90h] [rbp-78h]
  char v25; // [rsp+94h] [rbp-74h] BYREF
  int v26; // [rsp+29Ch] [rbp+194h]
  char v27; // [rsp+2A4h] [rbp+19Ch] BYREF
  char v28; // [rsp+4B8h] [rbp+3B0h] BYREF

  LODWORD(v20) = 34078720;
  v21 = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  result = qword_180158E00;
  LODWORD(v16) = 34078720;
  LODWORD(v18) = 0x2000000;
  if ( qword_180158E00 == -1 )
  {
    v19 = &v25;
    v17 = &v27;
    v21 = &v28;
    Heap = (__int64 **)RtlAllocateHeap(qword_18015B328, dword_18015B268 + 0x40000, 16LL);
    v2 = Heap;
    if ( Heap )
    {
      Heap[1] = (__int64 *)Heap;
      *Heap = (__int64 *)Heap;
      v15 = qword_18015C4A8;
      v3 = qword_18015C4A8;
      if ( !qword_18015C4A8 )
      {
        v4 = ZwOpenKey();
        v5 = 0LL;
        if ( v4 < 0 )
          v5 = -1LL;
        v15 = v5;
        v3 = _InterlockedCompareExchange64(&qword_18015C4A8, v5, 0LL);
        if ( v3 )
        {
          if ( v4 >= 0 )
            ZwClose();
          v15 = v3;
        }
        else
        {
          v3 = v5;
        }
      }
      if ( v3 != -1 && (int)ZwQueryValueKey() >= 0 && v14 == 16 )
      {
        v6 = v22;
        if ( v22 )
        {
          if ( v22 != 1 )
            v6 = 0;
          if ( v6 )
            goto LABEL_20;
        }
      }
      if ( (int)RtlQueryEnvironmentVariable_U(0LL, &qword_180111448, (__int64)&v16) >= 0
        && (int)sub_1800DFBA0((__int64)v2, (__int64)&v16) >= 0 )
      {
LABEL_20:
        if ( v15 != -1 )
        {
          for ( i = 0; ; ++i )
          {
            v9 = ZwEnumerateValueKey();
            if ( v9 == -2147483622 )
              break;
            if ( v9 != -2147483643 )
            {
              if ( v9 < 0 )
                break;
              if ( v24 )
              {
                if ( (unsigned int)(v23 - 1) <= 1 )
                {
                  LOWORD(v18) = v24;
                  if ( (int)ZwQueryValueKey() >= 0 && (unsigned int)(v23 - 1) <= 1 )
                  {
                    v8 = &v16;
                    LOWORD(v16) = 2 * (((unsigned int)(v14 - 12) >> 1) - 1);
                    if ( v26 == 2 )
                    {
                      if ( (int)RtlExpandEnvironmentStrings_U(0LL, (unsigned __int16 *)&v16, (__int64)&v20, 0LL) < 0 )
                        continue;
                      v8 = &v20;
                    }
                    sub_1800DFBA0((__int64)v2, (__int64)v8);
                  }
                }
              }
            }
          }
        }
      }
    }
    v10 = _InterlockedCompareExchange64(&qword_180158E00, (signed __int64)v2, -1LL);
    if ( v10 == -1 )
    {
      return (__int64)v2;
    }
    else
    {
      if ( v2 )
      {
        while ( 1 )
        {
          v11 = *v2;
          if ( *v2 == (__int64 *)v2 )
            break;
          v12 = *v11;
          if ( (__int64 **)v11[1] != v2 || *(__int64 **)(v12 + 8) != v11 )
            __fastfail(3u);
          v13 = qword_18015B328;
          *v2 = (__int64 *)v12;
          *(_QWORD *)(v12 + 8) = v2;
          RtlFreeHeap(v13, 0, (unsigned __int64)v11);
        }
        RtlFreeHeap(qword_18015B328, 0, (unsigned __int64)v2);
      }
      return v10;
    }
  }
  return result;
}
