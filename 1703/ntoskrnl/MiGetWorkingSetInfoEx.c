/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x140039718
 * Callers:
 *     MiGetWorkingSetInfo @ 0x140039594 (MiGetWorkingSetInfo.c)
 *     MmLogSystemShareablePfnInfo @ 0x1406BA5D8 (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x140710184 (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiWalkPageTables @ 0x1400D7BB0 (MiWalkPageTables.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  __int64 v8; // rdi
  int v9; // r12d
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned int v15; // edi
  unsigned __int64 v16; // rbx
  volatile LONG *SharedVm; // rax
  int v19; // ecx
  char v20; // al
  _QWORD v21[6]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v22[18]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[48]; // [rsp+E0h] [rbp-20h] BYREF

  LODWORD(v21[0]) = 0;
  memset(&v21[1], 0, 0x20uLL);
  memset(v22, 0, sizeof(v22));
  v8 = 0LL;
  v9 = 0;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
    goto LABEL_5;
  v8 = a1 - 1280;
  if ( (PVOID)(a1 - 1280) != PsIdleProcess )
  {
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v8 )
    {
      KiStackAttachProcess(a1 - 1280);
      v9 = 1;
    }
LABEL_5:
    v22[17] = v21;
    BYTE4(v22[0]) = MiLockWorkingSetShared(a1);
    if ( v8 && (*(_DWORD *)(v8 + 772) & 0x20) != 0 )
    {
      v15 = -1073741558;
      goto LABEL_14;
    }
    v10 = *(_QWORD *)(a1 + 120);
    if ( a4 )
    {
      if ( !v10 )
        goto LABEL_22;
      if ( a3 < 0x10 )
      {
LABEL_12:
        v14 = *(_QWORD *)(a1 + 120);
        v15 = -1073741820;
        if ( a4 )
          *a2 = v14;
        else
          a2[1] = v14 - *(_QWORD *)(a1 + 128);
LABEL_14:
        v16 = BYTE4(v22[0]);
        SharedVm = (volatile LONG *)MiGetSharedVm(a1);
        ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
        __writecr8(v16);
        if ( v9 == 1 )
          KiUnstackDetachProcess(v23, 0LL);
        return v15;
      }
      v11 = 1LL;
      v12 = (a3 - 16) >> 3;
    }
    else
    {
      v10 -= *(_QWORD *)(a1 + 128);
      if ( !v10 )
        goto LABEL_34;
      if ( a3 < 0x30 )
        goto LABEL_12;
      v11 = 2LL;
      v12 = (a3 - 48) >> 5;
    }
    v13 = v12 + 1;
    if ( v10 <= v12 + 1 )
    {
      v22[3] = -1LL;
      v19 = 6;
      v22[15] = MiQueryLeafPte;
      v20 = *(_BYTE *)(a1 + 192);
      v22[1] = a1;
      if ( (v20 & 7) == 2 )
        v19 = 7;
      LODWORD(v22[0]) = v19;
      if ( a4 )
        LODWORD(v21[0]) |= 1u;
      v21[3] = v13;
      v21[1] = &a2[v11];
      v21[4] = v8;
      if ( (unsigned int)MiWalkPageTables(v22) != 2 )
      {
LABEL_22:
        if ( a4 )
        {
          *a2 = v21[2];
LABEL_24:
          v15 = 0;
          goto LABEL_14;
        }
LABEL_34:
        a2[1] = v21[2];
        goto LABEL_24;
      }
    }
    goto LABEL_12;
  }
  if ( a4 )
    *a2 = 0LL;
  else
    a2[1] = 0LL;
  return 0LL;
}
