/*
 * XREFs of sub_18002CFE4 @ 0x18002CFE4
 * Callers:
 *     sub_18002D3B8 @ 0x18002D3B8 (sub_18002D3B8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18002D604 @ 0x18002D604 (sub_18002D604.c)
 *     sub_18002D628 @ 0x18002D628 (sub_18002D628.c)
 *     RtlImageNtHeader @ 0x18002DC30 (RtlImageNtHeader.c)
 *     sub_18007BA4C @ 0x18007BA4C (sub_18007BA4C.c)
 *     sub_18007C270 @ 0x18007C270 (sub_18007C270.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002CFE4(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  unsigned int v6; // edi
  unsigned int v7; // esi
  _BYTE *v9; // r14
  __int64 v10; // r15
  _DWORD *v11; // rdi
  _DWORD *v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[512]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = 0;
  v16 = 512LL;
  v13 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v12 = v17;
  if ( a2 && a1 )
  {
    v5 = RtlImageNtHeader(a1);
    LOWORD(v6) = *(_WORD *)(v5 + 72);
    LOWORD(v7) = *(_WORD *)(v5 + 74);
    sub_18002D604(4LL, &v13);
    if ( (unsigned __int16)v6 > *(_WORD *)(v13 + 20)
      || (_WORD)v6 == *(_WORD *)(v13 + 20) && (unsigned __int16)v7 >= *(_WORD *)(v13 + 22) )
    {
      *a2 = v13;
    }
    else
    {
      if ( (unsigned int)sub_18007C270(a1, &v12, &v16) )
      {
        v9 = v12;
        if ( v12 )
        {
          v7 = ((unsigned __int16)v6 << 16) + (unsigned __int16)v7;
          if ( *v12 )
          {
            v10 = (unsigned int)*v12;
            v11 = v12 + 1;
            do
            {
              if ( v11[4] == 1
                && (unsigned int)sub_18002D628(v11, &v14)
                && *(unsigned __int16 *)(v14 + 22) + (*(unsigned __int16 *)(v14 + 20) << 16) >= v7 )
              {
                v7 = *(unsigned __int16 *)(v14 + 22) + (*(unsigned __int16 *)(v14 + 20) << 16);
              }
              v11 += 5;
              --v10;
            }
            while ( v10 );
          }
          if ( v9 != v17 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v12);
          v6 = HIWORD(v7);
        }
      }
      sub_18007BA4C((unsigned __int16)v6, (unsigned __int16)v7, &v15);
      *a2 = v15;
    }
    return 1;
  }
  return v2;
}
