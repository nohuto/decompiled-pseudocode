/*
 * XREFs of MiIssueHardFaultIo @ 0x140116084
 * Callers:
 *     MiIssueHardFault @ 0x14002C7B0 (MiIssueHardFault.c)
 *     MiPfCoalesceAndIssueIOs @ 0x140129B30 (MiPfCoalesceAndIssueIOs.c)
 *     MiPfIssueCoalesceCandidates @ 0x14021BC24 (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     IoPageReadEx @ 0x140064A60 (IoPageReadEx.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     SmPageRead @ 0x140271800 (SmPageRead.c)
 */

__int64 __fastcall MiIssueHardFaultIo(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r10
  char v5; // dl
  char v6; // r10
  char v7; // r9
  int v8; // r11d
  _KPROCESS *Process; // rdx
  signed __int32 v10; // eax
  struct _KEVENT *v11; // rbp
  NTSTATUS *v12; // rsi
  NTSTATUS v13; // eax
  unsigned int v14; // edi
  signed __int32 v16; // ett
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r8

  v3 = *(_BYTE *)(a1 + 189);
  if ( v3 < 0 )
  {
    v17 = a1 + 256;
    v18 = (a1 + 256) | 1;
    if ( (v3 & 4) == 0 )
      v18 = v17;
    v19 = v18;
    if ( (a3 & 1) != 0 )
    {
      v20 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v20 == 1 && (*(_DWORD *)(v20 + 80) & 0x800) != 0 )
        v19 = v18 | 2;
    }
    v12 = (NTSTATUS *)(a1 + 80);
    v11 = (struct _KEVENT *)(a1 + 32);
    v13 = SmPageRead(a1 + 96, v19, a1 + 32, a1 + 80);
  }
  else
  {
    v5 = v3 & 4 | 1;
    if ( (*(_BYTE *)(a1 + 191) & 2) == 0 )
      v5 = v3 & 4;
    v6 = v3 & 4;
    if ( v6 || (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 216)) == 8 && !v8 )
      v7 = v5 | 2;
    if ( !v6 )
    {
      Process = KeGetCurrentThread()->Process;
      v10 = Process[2].ActiveProcessors.Bitmap[14];
      while ( v10 )
      {
        v16 = v10;
        v10 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[14],
                v10 - 1,
                v10);
        if ( v16 == v10 )
        {
          v7 |= 8u;
          break;
        }
      }
    }
    v11 = (struct _KEVENT *)(a1 + 32);
    v12 = (NTSTATUS *)(a1 + 80);
    v13 = IoPageReadEx(*(struct _FILE_OBJECT **)(a1 + 192), a1 + 256, (_QWORD *)(a1 + 96), a1 + 32, a1 + 80, v7, 0LL);
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
