/*
 * XREFs of sub_18002FA10 @ 0x18002FA10
 * Callers:
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 * Callees:
 *     sub_18000BC3C @ 0x18000BC3C (sub_18000BC3C.c)
 *     sub_1800877D8 @ 0x1800877D8 (sub_1800877D8.c)
 */

__int64 __fastcall sub_18002FA10(__int64 a1)
{
  unsigned __int64 v2; // rdi
  bool v3; // si
  char v4; // bp
  char i; // al
  int v6; // r8d
  unsigned __int64 v7; // rcx
  signed __int32 v8; // eax
  int v9; // edx
  char v10; // r8
  signed __int32 v11; // ecx
  signed __int32 v12; // ett
  unsigned int v13; // edi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 32) & 0x4000000) != 0 && *(_QWORD *)a1 != -1LL && !*(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    sub_1800877D8();
  v2 = 0LL;
  v3 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v2 = *(_QWORD *)(a1 + 32) & 0xFFFFFFLL;
    v3 = (*(_QWORD *)(a1 + 32) & 0x2000000LL) != 0;
  }
  v4 = 0;
  for ( i = 1; ; i = 0 )
  {
    while ( 1 )
    {
      if ( i )
      {
        v6 = 3;
        v7 = v2;
        if ( !v4 )
          v6 = 1;
        if ( v2 )
        {
          do
          {
            v8 = *(_DWORD *)(a1 + 8);
            while ( (v8 & 1) != 0 )
            {
              v12 = v8;
              v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v8 ^ v6, v8);
              if ( v12 == v8 )
                goto LABEL_25;
            }
            _mm_pause();
            --v7;
          }
          while ( v7 );
        }
      }
      v9 = *(_DWORD *)(a1 + 8);
      v10 = 0;
      if ( !v4 )
        break;
      if ( (v9 & 2) == 0 )
      {
        if ( (v9 & 1) != 0 )
        {
          v10 = 1;
          v11 = v9 ^ 3;
        }
        else
        {
          v11 = v9 - 2;
        }
        goto LABEL_16;
      }
LABEL_20:
      sub_18000BC3C(a1, v9);
      if ( v3 && v2 > 0x64 )
        --v2;
      i = 1;
    }
    if ( (v9 & 1) != 0 )
    {
      v10 = 1;
      v11 = v9 ^ 1;
    }
    else
    {
      v11 = v9 - 4;
      if ( (((_BYTE)v9 - 4) & 2) == 0 )
        v11 = v9 - 6;
    }
LABEL_16:
    if ( v11 == v9 )
      goto LABEL_20;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v11, v9) == v9 )
      break;
  }
  if ( !v10 )
  {
    v4 = 1;
    v9 = v11;
    goto LABEL_20;
  }
LABEL_25:
  if ( v3 )
  {
    if ( v2 < 0x7D0 )
      LODWORD(v2) = v2 + 1;
    v13 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ v2) & 0xFFFFFF;
    if ( NtCurrentPeb()->NumberOfProcessors == 1 )
      v13 &= 0xFF000000;
    *(_QWORD *)(a1 + 32) = v13;
  }
  result = 0LL;
  *(_QWORD *)(a1 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 12) = 1;
  return result;
}
