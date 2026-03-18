/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x140595C30
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1404B4AE4 (EtwpEnumerateAddressSpace.c)
 *     EtwpCovSampEnumerateProcess @ 0x1407B5E20 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140117300 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiFillMapFileInfo @ 0x140749CA4 (MiFillMapFileInfo.c)
 */

PVOID __fastcall MmEnumerateAddressSpaceAndReferenceImages(__int64 a1, char a2)
{
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rbp
  PVOID v5; // r12
  int v6; // edi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  char *PoolWithTag; // rax
  _QWORD *v10; // rcx
  _QWORD *j; // rdi
  char *i; // r15
  _QWORD **v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  __int16 v16; // dx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-78h]
  PVOID v33; // [rsp+28h] [rbp-70h]
  _BYTE v34[48]; // [rsp+30h] [rbp-68h] BYREF

  v3 = (a2 & 1) != 0;
  if ( (a2 & 2) != 0 )
    v3 |= 2u;
  if ( (a2 & 4) != 0 )
    v3 |= 4u;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( CurrentThread->ApcState.Process == (_KPROCESS *)a1 )
  {
    v6 = 0;
  }
  else
  {
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v34);
    v6 = 1;
  }
  v32 = v6;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  v7 = *(_QWORD *)(a1 + 1592);
  if ( v7 )
  {
    v8 = v7 + 1;
    if ( v8 <= 0x555555555555555LL )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 48 * v8, 0x3031704Du);
      v33 = PoolWithTag;
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        v10 = *(_QWORD **)(a1 + 1576);
        j = 0LL;
        for ( i = PoolWithTag; v10; v10 = (_QWORD *)*v10 )
          j = v10;
        if ( j )
        {
          while ( 1 )
          {
            v13 = (_QWORD **)j[1];
            v14 = (__int64)j;
            v15 = j;
            if ( v13 )
            {
              v25 = *v13;
              for ( j = (_QWORD *)j[1]; v25; v25 = (_QWORD *)*v25 )
                j = v25;
            }
            else
            {
              for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*j == v15 )
                  break;
                v15 = j;
              }
            }
            MiLockVad((__int64)CurrentThread, v14);
            if ( (unsigned int)MiVadDeleted(v14) == 1 || (_DWORD)v18 == 1 )
            {
LABEL_28:
              MiUnlockVad((__int64)CurrentThread, v14, v18, v19);
              goto LABEL_29;
            }
            if ( (v16 & 0x4000) != 0 )
            {
              if ( v3 < 4 )
                goto LABEL_28;
              *(_QWORD *)i = (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12;
              *((_QWORD *)i + 1) = ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32))
                                  - (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
                                  + 1) << 12;
              v26 = *(unsigned int *)(v14 + 52);
              LODWORD(v26) = v26 & 0x7FFFFFFF;
              if ( (v26 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) < 0x7FFFFFFFDLL )
                v27 = (v26 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) << 12;
              else
                v27 = 0LL;
              *((_QWORD *)i + 3) = v27;
              *((_DWORD *)i + 4) = *(_DWORD *)(a1 + 736);
              *((_DWORD *)i + 5) = 0x2000;
              v21 = (unsigned int)(v18 - 3);
              if ( (_DWORD)v21 )
              {
                v21 = (unsigned int)(v21 - 1);
                if ( (_DWORD)v21 )
                {
                  v21 = (unsigned int)(v21 - 1);
                  if ( (_DWORD)v21 )
                  {
                    if ( (_DWORD)v21 == 1 )
                      *((_DWORD *)i + 5) = 8396800;
                  }
                  else
                  {
                    *((_DWORD *)i + 5) = 536879104;
                  }
                }
                else
                {
                  *((_DWORD *)i + 5) = 2105344;
                }
              }
              else
              {
                v28 = *((_DWORD *)i + 5);
                if ( (*(_DWORD *)(v14 + 48) & 0x10000) == 0 )
                  v28 = 4202496;
                *((_DWORD *)i + 5) = v28;
              }
              v31 = *(_QWORD *)i & 0xFFFFFFFFFFFFFFFCuLL | 2;
            }
            else
            {
              if ( (_DWORD)v18 == 2 && (v16 & 0xF8) == 0x38 && (v3 & 1) != 0 )
              {
                v20 = **(_QWORD **)(v14 + 72);
                *(_QWORD *)i = MiReferenceControlAreaFile(v20);
                *((_QWORD *)i + 1) = (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12;
                *((_QWORD *)i + 2) = *(_QWORD *)(*(_QWORD *)v20 + 32LL);
                *((_QWORD *)i + 3) = ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32))
                                    - (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
                                    + 1) << 12;
                *((_DWORD *)i + 10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 56LL) + 60LL);
                if ( (*(_DWORD *)(v14 + 64) & 0x8000000) != 0 )
                {
                  v23 = *((_QWORD *)i + 1) & 0xFFFFFFFFFFFFE03FuLL;
                }
                else
                {
                  v22 = *((_QWORD *)i + 1) & 0xFFFFFFFFFFFFFC3FuLL | (4LL * (*(_BYTE *)(*(_QWORD *)v20 + 15LL) & 0xF0));
                  *((_QWORD *)i + 1) = v22;
                  v23 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(*(unsigned __int8 *)(*(_QWORD *)v20 + 15LL) << 9)) & 0x1C00;
                }
                *((_QWORD *)i + 1) = v23;
                if ( (v3 & 2) != 0 )
                {
                  v29 = HIBYTE(*(_DWORD *)(v14 + 64)) & 1 | *((_QWORD *)i + 1) & 0xFFFFFFFFFFFFFFFEuLL;
                  *((_QWORD *)i + 1) = v29;
                  *((_QWORD *)i + 1) = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v14 + 48) >> 2)) & 0x3E;
                  v30 = *(unsigned int *)(v14 + 52);
                  LODWORD(v30) = v30 & 0x7FFFFFFF;
                  *((_QWORD *)i + 4) = (v30 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) << 12;
                }
                goto LABEL_26;
              }
              if ( (v3 & 2) == 0 )
                goto LABEL_28;
              MiFillMapFileInfo(v17, i);
              v31 = *(_QWORD *)i & 0xFFFFFFFFFFFFFFFCuLL | 1;
            }
            *(_QWORD *)i = v31;
LABEL_26:
            MiUnlockVad((__int64)CurrentThread, v14, v21, v19);
            i += 48;
LABEL_29:
            if ( !j )
            {
              v5 = v33;
              break;
            }
          }
        }
        v6 = v32;
        *(_QWORD *)i = 0LL;
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v6 == 1 )
    KiUnstackDetachProcess((__int64)v34, 0LL);
  return v5;
}
