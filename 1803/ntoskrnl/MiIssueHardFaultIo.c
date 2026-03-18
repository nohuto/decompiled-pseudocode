/*
 * XREFs of MiIssueHardFaultIo @ 0x140057CF4
 * Callers:
 *     MiIssueHardFault @ 0x140059D80 (MiIssueHardFault.c)
 *     MiPfCoalesceAndIssueIOs @ 0x1400C5F28 (MiPfCoalesceAndIssueIOs.c)
 *     MiPfIssueCoalesceCandidates @ 0x140257DB8 (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     IoPageReadEx @ 0x140048610 (IoPageReadEx.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     SmPageRead @ 0x1401542D8 (SmPageRead.c)
 */

__int64 __fastcall MiIssueHardFaultIo(__int64 a1, int a2, __int64 a3)
{
  char v3; // al
  char v6; // r10
  char v7; // dl
  char v8; // r9
  _KPROCESS *Process; // rdx
  signed __int32 v10; // eax
  struct _KEVENT *v11; // rbp
  NTSTATUS *v12; // rsi
  NTSTATUS v13; // eax
  unsigned int v14; // edi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  signed __int32 v20; // ett

  v3 = *(_BYTE *)(a1 + 189);
  v6 = v3 & 4;
  if ( v3 < 0 )
  {
    v16 = a1 + 264;
    v17 = (a1 + 264) | 1;
    if ( !v6 )
      v17 = v16;
    v18 = v17;
    if ( (a3 & 1) != 0 )
    {
      v19 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v19 == 1 && (*(_DWORD *)(v19 + 80) & 0x800) != 0 )
        v18 = v17 | 2;
    }
    v12 = (NTSTATUS *)(a1 + 80);
    v11 = (struct _KEVENT *)(a1 + 32);
    v13 = SmPageRead(a1 + 96, v18, a1 + 32, a1 + 80);
  }
  else
  {
    v7 = v3 & 4 | 1;
    if ( (*(_BYTE *)(a1 + 191) & 2) == 0 )
      v7 = v3 & 4;
    if ( v6 )
    {
      v8 = v7 | 2;
    }
    else
    {
      v8 = v7;
      if ( !a2 && (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 216)) == 8 )
        v8 |= 2u;
    }
    if ( !v6 )
    {
      Process = KeGetCurrentThread()->Process;
      v10 = Process[2].ActiveProcessors.Bitmap[14];
      while ( v10 )
      {
        v20 = v10;
        v10 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[14],
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
    v12 = (NTSTATUS *)(a1 + 80);
    v13 = IoPageReadEx(*(struct _FILE_OBJECT **)(a1 + 192), a1 + 264, (_QWORD *)(a1 + 96), a1 + 32, a1 + 80, v8, 0LL);
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
