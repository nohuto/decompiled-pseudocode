/*
 * XREFs of sub_180038624 @ 0x180038624
 * Callers:
 *     sub_180038FC4 @ 0x180038FC4 (sub_180038FC4.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlImageNtHeader @ 0x180036560 (RtlImageNtHeader.c)
 *     sub_1800391F0 @ 0x1800391F0 (sub_1800391F0.c)
 *     sub_180039214 @ 0x180039214 (sub_180039214.c)
 *     sub_180081628 @ 0x180081628 (sub_180081628.c)
 *     sub_180081AF4 @ 0x180081AF4 (sub_180081AF4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_180038624(unsigned __int64 a1, _QWORD *a2)
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
    sub_1800391F0(4LL, &v13);
    if ( (unsigned __int16)v6 > *(_WORD *)(v13 + 20)
      || (_WORD)v6 == *(_WORD *)(v13 + 20) && (unsigned __int16)v7 >= *(_WORD *)(v13 + 22) )
    {
      *a2 = v13;
    }
    else
    {
      if ( (unsigned int)sub_180081AF4(a1, &v12, &v16) )
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
                && (unsigned int)sub_180039214(v11, &v14)
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
      sub_180081628((unsigned __int16)v6, (unsigned __int16)v7, &v15);
      *a2 = v15;
    }
    return 1;
  }
  return v2;
}
