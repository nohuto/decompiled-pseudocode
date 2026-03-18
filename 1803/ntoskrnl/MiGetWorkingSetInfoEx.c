/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x140144614
 * Callers:
 *     MiGetWorkingSetInfo @ 0x140144490 (MiGetWorkingSetInfo.c)
 *     MmLogSystemShareablePfnInfo @ 0x140750D14 (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x1407AEA60 (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // r14
  int v10; // r12d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v17; // rax
  _QWORD v18[6]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v19[22]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[48]; // [rsp+100h] [rbp+0h] BYREF

  memset(v18, 0, 0x28uLL);
  memset(v19, 0, sizeof(v19));
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    goto LABEL_5;
  v9 = a1 - 1280;
  if ( (PVOID)(a1 - 1280) != PsIdleProcess )
  {
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v9 )
    {
      KiStackAttachProcess((_KPROCESS *)(a1 - 1280), 0, (__int64)v20);
      v10 = 1;
    }
LABEL_5:
    v19[5] = -1LL;
    v19[19] = MiQueryLeafPte;
    LODWORD(v19[0]) = 6;
    v19[21] = v18;
    BYTE4(v19[0]) = MiLockWorkingSetShared(a1);
    if ( v9 && (*(_DWORD *)(v9 + 772) & 0x20) != 0 )
    {
      v8 = -1073741558;
      goto LABEL_14;
    }
    v12 = *(_QWORD *)(a1 + 120);
    v11 = v12;
    if ( a4 )
    {
      if ( !v12 )
      {
LABEL_22:
        if ( a4 )
        {
          v12 = v18[2];
          goto LABEL_13;
        }
        goto LABEL_34;
      }
      if ( a3 < 0x10 )
      {
LABEL_12:
        v8 = -1073741820;
        if ( a4 )
        {
LABEL_13:
          *a2 = v12;
LABEL_14:
          MiUnlockWorkingSetShared(a1, BYTE4(v19[0]), v11);
          if ( v10 == 1 )
            KiUnstackDetachProcess((__int64)v20, 0LL);
          return v8;
        }
        v17 = v12 - *(_QWORD *)(a1 + 128);
LABEL_35:
        a2[1] = v17;
        goto LABEL_14;
      }
      v13 = 1LL;
      v14 = (a3 - 16) >> 3;
    }
    else
    {
      v11 = v12 - *(_QWORD *)(a1 + 128);
      if ( !v11 )
      {
LABEL_34:
        v17 = v18[2];
        goto LABEL_35;
      }
      if ( a3 < 0x30 )
        goto LABEL_12;
      v13 = 2LL;
      v14 = (a3 - 48) >> 5;
    }
    v15 = v14 + 1;
    if ( v11 > v15 )
      goto LABEL_12;
    if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
      LODWORD(v19[0]) |= 1u;
    v19[3] = a1;
    if ( a4 )
      LODWORD(v18[0]) |= 1u;
    v18[3] = v15;
    v18[1] = &a2[v13];
    v18[4] = v9;
    if ( (unsigned int)MiWalkPageTables((int *)v19) == 4 )
    {
      v12 = *(_QWORD *)(a1 + 120);
      goto LABEL_12;
    }
    goto LABEL_22;
  }
  if ( a4 )
    *a2 = 0LL;
  else
    a2[1] = 0LL;
  return 0LL;
}
