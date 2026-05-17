/*
 * XREFs of RtlpHpHeapProtect @ 0x180102D14
 * Callers:
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 *     RtlpHpLargeAllocationProtect @ 0x18010761C (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x180108950 (RtlpHpSegProtect.c)
 */

__int64 __fastcall RtlpHpHeapProtect(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // r8
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned __int64 v8; // rbx
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  char v13; // dl
  unsigned __int64 v14; // rcx

  v2 = a2;
  LODWORD(v4) = ZwQueryVirtualMemory();
  if ( (int)v4 >= 0 )
  {
    v5 = ZwProtectVirtualMemory();
    LODWORD(v4) = v5;
    if ( v5 >= 0 )
    {
      v6 = RtlpHpSegProtect(a1 + 112, (unsigned int)v2, (unsigned int)v5);
      LODWORD(v4) = v6;
      if ( v6 >= 0 )
      {
        v7 = RtlpHpSegProtect(a1 + 216, (unsigned int)v2, (unsigned int)v6);
        v4 = (unsigned int)v7;
        if ( v7 >= 0 )
        {
          v8 = *(_QWORD *)(a1 + 80);
          if ( !v8 )
          {
            LODWORD(v4) = 0;
            return (unsigned int)v4;
          }
          while ( 1 )
          {
LABEL_8:
            v10 = RtlpHpLargeAllocationProtect(v8, v2, v4);
            v4 = (unsigned int)v10;
            if ( v10 < 0 )
              return (unsigned int)v4;
            v11 = *(_QWORD *)v8;
            if ( !*(_QWORD *)v8 )
            {
              v11 = *(_QWORD *)(v8 + 8);
              if ( !v11 )
                break;
            }
            if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
              v8 ^= v11;
            else
              v8 = v11;
          }
          v12 = v8;
          v13 = *(_BYTE *)(a1 + 88) & 1;
          while ( 1 )
          {
            v12 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v13 )
            {
              if ( !v12 )
                return (unsigned int)v4;
              v12 ^= v8;
            }
            if ( !v12 )
              return (unsigned int)v4;
            v14 = *(_QWORD *)(v12 + 8);
            if ( v13 )
            {
              if ( !v14 )
                goto LABEL_23;
              v14 ^= v12;
            }
            if ( v14 && v14 != v8 )
            {
              v8 = v14;
              goto LABEL_8;
            }
LABEL_23:
            v8 = v12;
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
