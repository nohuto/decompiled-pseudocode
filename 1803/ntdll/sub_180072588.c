/*
 * XREFs of sub_180072588 @ 0x180072588
 * Callers:
 *     RtlValidateHeap @ 0x1800723C0 (RtlValidateHeap.c)
 *     sub_180100000 @ 0x180100000 (sub_180100000.c)
 *     sub_180100300 @ 0x180100300 (sub_180100300.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 *     sub_180100B78 @ 0x180100B78 (sub_180100B78.c)
 *     sub_180100D3C @ 0x180100D3C (sub_180100D3C.c)
 *     sub_180100ECC @ 0x180100ECC (sub_180100ECC.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_1800EF014 @ 0x1800EF014 (sub_1800EF014.c)
 *     sub_1801011EC @ 0x1801011EC (sub_1801011EC.c)
 */

char __fastcall sub_180072588(unsigned __int64 a1, unsigned __int64 a2, const char *a3)
{
  unsigned __int64 v5; // rdi
  char v6; // al
  __int64 v7; // rcx
  int v9; // edx
  unsigned __int8 v10; // al
  unsigned int v11; // eax
  unsigned int v12; // eax
  _QWORD *i; // rax

  v5 = a1;
  if ( a2 )
  {
    if ( (a2 & 0xF) == 0 )
    {
      v6 = *(_BYTE *)(a2 + 15);
      if ( (v6 & 0x3F) != 0 )
      {
        if ( v6 >= 0 )
        {
          if ( !*(_DWORD *)(a1 + 124)
            || (v9 = *(_DWORD *)(a2 + 8) ^ *(_DWORD *)(a1 + 136),
                HIBYTE(v9) == ((unsigned __int8)v9 ^ (unsigned __int8)(BYTE1(v9) ^ BYTE2(v9)))) )
          {
            if ( *(_BYTE *)(a2 + 15) == 4 )
            {
              if ( (a2 & 0xFFF) != 0x30 )
                goto LABEL_34;
            }
            else
            {
              v10 = *(_BYTE *)(a2 + 14);
              if ( v10 )
                a1 = (a2 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v10 << 16) + 0x10000;
              if ( !a1 || *(_QWORD *)(a1 + 40) != v5 || a2 < *(_QWORD *)(a1 + 64) || a2 >= *(_QWORD *)(a1 + 72) )
                goto LABEL_34;
            }
            if ( *(_DWORD *)(v5 + 124) )
            {
              v11 = *(_DWORD *)(a2 + 8);
              if ( (v11 & *(_DWORD *)(v5 + 124)) != 0 )
                v11 ^= *(_DWORD *)(v5 + 136);
              v12 = HIWORD(v11);
            }
            else
            {
              LOBYTE(v12) = *(_BYTE *)(a2 + 10);
            }
            if ( (v12 & 4) == 0 || (unsigned __int8)sub_1800EF014(v5, a2) )
            {
              if ( *(_BYTE *)(a2 + 15) == 4 )
                return 1;
              for ( i = *(_QWORD **)(v5 + 288); i != (_QWORD *)(v5 + 288); i = (_QWORD *)*i )
              {
                if ( a2 >= i[5] && a2 < i[6] )
                  return 1;
              }
            }
          }
        }
        else
        {
          if ( *(_BYTE *)(a1 + 386) == 2 )
            v7 = *(_QWORD *)(a1 + 376);
          else
            v7 = 0LL;
          if ( v7 )
            return 1;
        }
      }
    }
  }
LABEL_34:
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid address specified to %s( %p, %p )\n", a3, (const void *)v5, (const void *)(a2 + 16));
  sub_1801011EC();
  return 0;
}
