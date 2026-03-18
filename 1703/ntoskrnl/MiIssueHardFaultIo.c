/*
 * XREFs of MiIssueHardFaultIo @ 0x140097C48
 * Callers:
 *     MiPfCoalesceAndIssueIOs @ 0x14002EF8C (MiPfCoalesceAndIssueIOs.c)
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 *     MiPfIssueCoalesceCandidates @ 0x14013DC80 (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     SmPageRead @ 0x14003897C (SmPageRead.c)
 *     IoPageReadEx @ 0x14004AFE0 (IoPageReadEx.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiIssueHardFaultIo(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // r10
  char v5; // r11
  char v6; // r10
  int v7; // edx
  char v8; // r9
  _KPROCESS *Process; // rdx
  signed __int32 v10; // eax
  struct _KEVENT *v11; // rbp
  int *v12; // rsi
  int v13; // eax
  unsigned int v14; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  unsigned __int64 v19; // r8
  signed __int32 v20; // ett

  v3 = *(_BYTE *)(a1 + 189);
  if ( v3 >= 0x80u )
  {
    v16 = a1 + 256;
    v17 = (a1 + 256) | 1;
    if ( (v3 & 4) == 0 )
      v17 = v16;
    v18 = v17;
    if ( (a3 & 1) != 0 )
    {
      v19 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v19 == 1 && (*(_DWORD *)(v19 + 80) & 0x800) != 0 )
        v18 = v17 | 2;
    }
    v12 = (int *)(a1 + 80);
    v11 = (struct _KEVENT *)(a1 + 32);
    v13 = SmPageRead((union _MM_STORE_KEY *)(a1 + 96), v18);
  }
  else
  {
    v5 = v3 & 4 | 1;
    if ( (*(_BYTE *)(a1 + 191) & 2) == 0 )
      v5 = v3 & 4;
    v6 = v3 & 4;
    if ( v6 || (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 216)) == 8 && !v7 )
      v8 = v5 | 2;
    if ( !v6 )
    {
      Process = KeGetCurrentThread()->Process;
      v10 = Process[2].ActiveProcessors.Bitmap[11];
      while ( v10 )
      {
        v20 = v10;
        v10 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[11],
                v10 - 1,
                v10);
        if ( v20 == v10 )
        {
          v8 |= 8u;
          break;
        }
      }
    }
    v11 = (struct _KEVENT *)(a1 + 32);
    v12 = (int *)(a1 + 80);
    v13 = IoPageReadEx(
            *(struct _FILE_OBJECT **)(a1 + 192),
            (struct _MDL *)(a1 + 256),
            (_QWORD *)(a1 + 96),
            (struct _KEVENT *)(a1 + 32),
            (struct _IO_STATUS_BLOCK *)(a1 + 80),
            v8,
            0LL);
  }
  v14 = v13;
  if ( v13 < 0 )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    *v12 = v13;
    KeSetEvent(v11, 0, 0);
  }
  return v14;
}
