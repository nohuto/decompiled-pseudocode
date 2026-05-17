/*
 * XREFs of RtlpEnterCriticalSectionContended @ 0x180047CA0
 * Callers:
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 * Callees:
 *     RtlpWaitOnCriticalSection @ 0x18004A67C (RtlpWaitOnCriticalSection.c)
 *     RtlpInitializeStaticCriticalSection @ 0x180086E70 (RtlpInitializeStaticCriticalSection.c)
 */

__int64 __fastcall RtlpEnterCriticalSectionContended(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  bool v6; // si
  char v7; // al
  char v8; // bp
  unsigned __int64 v9; // rcx
  signed __int32 v10; // eax
  __int64 v11; // rdx
  unsigned __int32 v12; // ecx
  signed __int32 v13; // ett
  unsigned int v14; // edi
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 32) & 0x4000000) != 0 && *(_QWORD *)a1 != -1LL && !*(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    RtlpInitializeStaticCriticalSection();
  v5 = 0LL;
  v6 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    v5 = *(_QWORD *)(a1 + 32) & 0xFFFFFFLL;
    v6 = (*(_QWORD *)(a1 + 32) & 0x2000000LL) != 0;
  }
  LOBYTE(a4) = 0;
  v7 = 1;
  v8 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v7 )
      {
        a3 = 3LL;
        v9 = v5;
        if ( !v8 )
          a3 = 1LL;
        if ( v5 )
        {
          do
          {
            v10 = *(_DWORD *)(a1 + 8);
            while ( (v10 & 1) != 0 )
            {
              v13 = v10;
              v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v10 ^ a3, v10);
              if ( v13 == v10 )
                goto LABEL_25;
            }
            _mm_pause();
            --v9;
          }
          while ( v9 );
        }
      }
      v11 = *(unsigned int *)(a1 + 8);
      LOBYTE(a3) = 0;
      if ( !v8 )
        break;
      if ( (v11 & 2) == 0 )
      {
        if ( (v11 & 1) != 0 )
        {
          a3 = 1LL;
          v12 = v11 ^ 3;
        }
        else
        {
          v12 = v11 - 2;
        }
        goto LABEL_16;
      }
LABEL_20:
      RtlpWaitOnCriticalSection(a1, v11, a3, a4);
      a4 = 1LL;
      if ( v6 && v5 > 0x64 )
        --v5;
      v7 = 1;
    }
    if ( (v11 & 1) != 0 )
    {
      a3 = 1LL;
      v12 = v11 ^ 1;
    }
    else
    {
      v12 = v11 - 4;
      if ( (((_BYTE)v11 - 4) & 2) == 0 )
        v12 = v11 - 6;
    }
LABEL_16:
    if ( v12 == (_DWORD)v11 )
      goto LABEL_20;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), v12, v11) == (_DWORD)v11 )
      break;
    v7 = 0;
  }
  if ( !(_BYTE)a3 )
  {
    v8 = 1;
    v11 = v12;
    goto LABEL_20;
  }
LABEL_25:
  if ( v6 )
  {
    if ( !(_BYTE)a4 && v5 < 0x7D0 )
      LODWORD(v5) = v5 + 1;
    v14 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ v5) & 0xFFFFFF;
    if ( NtCurrentPeb()->NumberOfProcessors == 1 )
      v14 &= 0xFF000000;
    *(_QWORD *)(a1 + 32) = v14;
  }
  result = 0LL;
  *(_QWORD *)(a1 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 12) = 1;
  return result;
}
