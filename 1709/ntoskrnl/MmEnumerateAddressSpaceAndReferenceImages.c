/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x140452B80
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1404524D0 (EtwpEnumerateAddressSpace.c)
 * Callees:
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiVadDeleted @ 0x14003D4D0 (MiVadDeleted.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14003D780 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiFillMapFileInfo @ 0x1406DEE20 (MiFillMapFileInfo.c)
 */

PVOID __fastcall MmEnumerateAddressSpaceAndReferenceImages(__int64 BugCheckParameter1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v4; // r8d
  unsigned int v5; // r15d
  PVOID v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  char *PoolWithTag; // rax
  _QWORD *v10; // rcx
  char *v11; // rbx
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  __int16 v16; // dx
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // r12
  unsigned __int64 v20; // rdx
  __int64 v22; // rdx
  int v23; // r8d
  int v24; // r8d
  int v25; // r8d
  int v26; // eax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-68h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v30; // [rsp+28h] [rbp-60h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a2 & 1 | 2;
  if ( (a2 & 2) == 0 )
    v4 = a2 & 1;
  v5 = v4 | 4;
  if ( (a2 & 4) == 0 )
    v5 = v4;
  v6 = 0LL;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
  {
    v29 = 0;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v30);
    v29 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter1);
  v7 = *(_QWORD *)(BugCheckParameter1 + 1592);
  if ( v7 )
  {
    v8 = v7 + 1;
    if ( v8 <= 0x555555555555555LL )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 48 * v8, 0x3031704Du);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        v10 = *(_QWORD **)(BugCheckParameter1 + 1576);
        v11 = PoolWithTag;
        v12 = 0LL;
        while ( v10 )
        {
          v12 = v10;
          v10 = (_QWORD *)*v10;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v12 )
            {
              *(_QWORD *)v11 = 0LL;
              goto LABEL_38;
            }
            v13 = (_QWORD *)v12[1];
            v14 = (__int64)v12;
            v15 = v12;
            if ( v13 )
            {
              do
              {
                v12 = v13;
                v13 = (_QWORD *)*v13;
              }
              while ( v13 );
            }
            else
            {
              while ( 1 )
              {
                v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !v12 || (_QWORD *)*v12 == v15 )
                  break;
                v15 = v12;
              }
            }
            MiLockVad((__int64)CurrentThread, v14);
            if ( (unsigned int)MiVadDeleted(v14) == 1 || v18 == 1 )
              goto LABEL_15;
            if ( (v16 & 0x8000) == 0 )
              break;
            if ( v5 >= 4 )
            {
              *(_QWORD *)v11 = (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12;
              *((_QWORD *)v11 + 1) = ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32))
                                    - (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
                                    + 1) << 12;
              v22 = *(unsigned int *)(v14 + 52);
              LODWORD(v22) = v22 & 0x7FFFFFFF;
              if ( (v22 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) < 0x7FFFFFFFELL )
                *((_QWORD *)v11 + 3) = (v22 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) << 12;
              else
                *((_QWORD *)v11 + 3) = 0LL;
              *((_DWORD *)v11 + 4) = *(_DWORD *)(BugCheckParameter1 + 736);
              *((_DWORD *)v11 + 5) = 0x2000;
              v23 = v18 - 3;
              if ( v23 )
              {
                v24 = v23 - 1;
                if ( v24 )
                {
                  v25 = v24 - 1;
                  if ( v25 )
                  {
                    if ( v25 == 1 )
                      *((_DWORD *)v11 + 5) = 8396800;
                  }
                  else
                  {
                    *((_DWORD *)v11 + 5) = 536879104;
                  }
                }
                else
                {
                  *((_DWORD *)v11 + 5) = 2105344;
                }
              }
              else
              {
                v26 = *((_DWORD *)v11 + 5);
                if ( (*(_DWORD *)(v14 + 48) & 0x40000) == 0 )
                  v26 = 4202496;
                *((_DWORD *)v11 + 5) = v26;
              }
              v28 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCuLL | 2;
              goto LABEL_56;
            }
LABEL_15:
            MiUnlockVad((__int64)CurrentThread, v14);
          }
          if ( v18 != 2 || (v16 & 0xF8) != 0x38 || (v5 & 1) == 0 )
          {
            if ( (v5 & 2) != 0 )
            {
              MiFillMapFileInfo(v17, v11);
              v28 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_56:
              *(_QWORD *)v11 = v28;
              goto LABEL_30;
            }
            goto LABEL_15;
          }
          v19 = **(_QWORD **)(v14 + 72);
          *(_QWORD *)v11 = MiReferenceControlAreaFile(v19);
          *((_QWORD *)v11 + 1) = (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12;
          *((_QWORD *)v11 + 2) = *(_QWORD *)(*(_QWORD *)v19 + 32LL);
          *((_QWORD *)v11 + 3) = ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32))
                                - (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
                                + 1) << 12;
          *((_DWORD *)v11 + 10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 56LL) + 60LL);
          if ( (*(_DWORD *)(v14 + 64) & 0x8000000) != 0 )
          {
            *((_QWORD *)v11 + 1) &= 0xFFFFFFFFFFFFE03FuLL;
          }
          else
          {
            v20 = *((_QWORD *)v11 + 1) & 0xFFFFFFFFFFFFFC3FuLL | (4LL * (*(_BYTE *)(*(_QWORD *)v19 + 15LL) & 0xF0));
            *((_QWORD *)v11 + 1) = v20;
            *((_QWORD *)v11 + 1) = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(*(unsigned __int8 *)(*(_QWORD *)v19 + 15LL) << 9)) & 0x1C00;
          }
          if ( (v5 & 2) != 0 )
          {
            *((_QWORD *)v11 + 1) ^= (*((_DWORD *)v11 + 2) ^ *(unsigned __int8 *)(v14 + 67)) & 1;
            *((_QWORD *)v11 + 1) ^= ((unsigned __int8)*((_QWORD *)v11 + 1) ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v14 + 48) >> 2)) & 0x3E;
            v27 = *(unsigned int *)(v14 + 52);
            LODWORD(v27) = v27 & 0x7FFFFFFF;
            *((_QWORD *)v11 + 4) = (v27 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) << 12;
          }
LABEL_30:
          MiUnlockVad((__int64)CurrentThread, v14);
          v11 += 48;
        }
      }
    }
  }
LABEL_38:
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter1);
  if ( v29 == 1 )
    KiUnstackDetachProcess(&v30, 0LL);
  return v6;
}
