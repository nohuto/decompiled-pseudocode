/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x14000CD84
 * Callers:
 *     MiGetWorkingSetInfo @ 0x14000CC00 (MiGetWorkingSetInfo.c)
 *     MmLogSystemShareablePfnInfo @ 0x1406E734C (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x14074CE48 (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiWalkPageTables @ 0x14009CD60 (MiWalkPageTables.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  unsigned int v4; // edi
  __int64 v9; // r14
  int v10; // r12d
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  volatile LONG *SharedVm; // rax
  int v19; // ecx
  char v20; // al
  __int64 v21; // rax
  _QWORD v22[6]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v23[20]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v24[48]; // [rsp+F0h] [rbp-10h] BYREF

  v4 = 0;
  LODWORD(v22[0]) = 0;
  memset(&v22[1], 0, 0x20uLL);
  memset(v23, 0, 0x98uLL);
  v9 = 0LL;
  v10 = 0;
  if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
    goto LABEL_5;
  v9 = a1 - 1280;
  if ( (PVOID)(a1 - 1280) != PsIdleProcess )
  {
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v9 )
    {
      KiStackAttachProcess(a1 - 1280);
      v10 = 1;
    }
LABEL_5:
    v23[18] = v22;
    BYTE4(v23[0]) = MiLockWorkingSetShared(a1);
    if ( v9 && (*(_DWORD *)(v9 + 772) & 0x20) != 0 )
    {
      v4 = -1073741558;
      goto LABEL_14;
    }
    v11 = *(_QWORD *)(a1 + 120);
    if ( a4 )
    {
      if ( !v11 )
        goto LABEL_22;
      if ( a3 < 0x10 )
      {
LABEL_12:
        v15 = *(_QWORD *)(a1 + 120);
        v4 = -1073741820;
        if ( a4 )
        {
LABEL_13:
          *a2 = v15;
LABEL_14:
          v16 = BYTE4(v23[0]);
          SharedVm = (volatile LONG *)MiGetSharedVm(a1);
          ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
          __writecr8(v16);
          if ( v10 == 1 )
            KiUnstackDetachProcess(v24, 0LL);
          return v4;
        }
        v21 = v15 - *(_QWORD *)(a1 + 128);
LABEL_34:
        a2[1] = v21;
        goto LABEL_14;
      }
      v12 = 1LL;
      v13 = (a3 - 16) >> 3;
    }
    else
    {
      v11 -= *(_QWORD *)(a1 + 128);
      if ( !v11 )
      {
LABEL_33:
        v21 = v22[2];
        goto LABEL_34;
      }
      if ( a3 < 0x30 )
        goto LABEL_12;
      v12 = 2LL;
      v13 = (a3 - 48) >> 5;
    }
    v14 = v13 + 1;
    if ( v11 <= v13 + 1 )
    {
      v23[3] = -1LL;
      v19 = 6;
      v23[16] = MiQueryLeafPte;
      v20 = *(_BYTE *)(a1 + 192);
      v23[1] = a1;
      if ( (v20 & 7) == 2 )
        v19 = 7;
      LODWORD(v23[0]) = v19;
      if ( a4 )
        LODWORD(v22[0]) |= 1u;
      v22[3] = v14;
      v22[1] = &a2[v12];
      v22[4] = v9;
      if ( (unsigned int)MiWalkPageTables(v23) != 2 )
      {
LABEL_22:
        if ( a4 )
        {
          v15 = v22[2];
          goto LABEL_13;
        }
        goto LABEL_33;
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
