/*
 * XREFs of EtwpEnumerateTraceGuids @ 0x14056B218
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x140552724 (EtwpGetNextGuidEntry.c)
 */

__int64 __fastcall EtwpEnumerateTraceGuids(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v7; // r14
  unsigned int v8; // ebp
  signed __int64 *v9; // rdx
  signed __int64 *NextGuidEntry; // rax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  GUID **v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r9
  int v16; // eax

  v4 = 0;
  v5 = 0;
  v7 = a1;
  v8 = *a3 / 0x24u;
  v9 = 0LL;
  while ( 1 )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, v9, 0);
    if ( !NextGuidEntry )
      break;
    if ( ++v5 > 0x71C71C7 )
    {
LABEL_17:
      v4 = -2147483643;
      goto LABEL_18;
    }
    if ( v5 <= v8 )
    {
      *(_OWORD *)a2 = *(_OWORD *)(NextGuidEntry + 3);
      *(_DWORD *)(a2 + 28) = *((_DWORD *)NextGuidEntry + 16);
      *(_DWORD *)(a2 + 20) = *((unsigned __int16 *)NextGuidEntry + 36);
      *(_DWORD *)(a2 + 24) = *((unsigned __int8 *)NextGuidEntry + 74);
      *(_BYTE *)(a2 + 32) = *((_BYTE *)NextGuidEntry + 75) & 1;
      a2 += 36LL;
    }
    v9 = NextGuidEntry;
    a1 = v7;
  }
  if ( v7 == EtwpHostSiloState )
    v11 = 2147353472LL;
  else
    v11 = *(_QWORD *)(*(_QWORD *)v7 + 1072LL) + 550LL;
  v12 = 0;
  v13 = &EtwpUmglProviders;
  v14 = a2 + 28;
  do
  {
    v15 = *((unsigned __int8 *)v13 + 8);
    if ( *(_BYTE *)(v11 + 2 * v15) )
    {
      if ( ++v5 > 0x71C71C7 )
        goto LABEL_17;
      if ( v5 <= v8 )
      {
        *(GUID *)(v14 - 28) = **v13;
        *(_DWORD *)(v14 - 8) = *(unsigned __int8 *)(v11 + 2 * v15);
        v16 = *(unsigned __int8 *)(v11 + 2 * v15 + 1);
        *(_DWORD *)(v14 - 4) = 0;
        *(_DWORD *)v14 = v16;
        *(_BYTE *)(v14 + 4) = 1;
        v14 += 36LL;
      }
    }
    ++v12;
    v13 += 2;
  }
  while ( v12 < 0xA );
LABEL_18:
  *a3 = 36 * v5;
  if ( v4 >= 0 && v5 > v8 )
    return (unsigned int)-1073741789;
  return (unsigned int)v4;
}
