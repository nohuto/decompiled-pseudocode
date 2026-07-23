/*
 * XREFs of PspCreatePicoThread @ 0x1406E3980
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 */

__int64 __fastcall PspCreatePicoThread(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  char v4; // bl
  char *v7; // rdi
  int inserted; // esi
  struct _EX_RUNDOWN_REF *v9; // r13
  _QWORD *v10; // rcx
  __int64 v11; // rax
  volatile signed __int32 *v12; // r14
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  PVOID v16; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v18; // [rsp+80h] [rbp-80h]
  __int64 v19[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v20[60]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21[154]; // [rsp+280h] [rbp+180h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+750h] [rbp+650h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v16 = 0LL;
  Object = 0LL;
  v18 = a3;
  if ( *(_QWORD *)(a1 + 184) )
  {
    inserted = ObpReferenceObjectByHandleWithTag(
                 *(_QWORD *)a1,
                 2,
                 (__int64)PsProcessType,
                 0,
                 1917023056,
                 &Object,
                 0LL,
                 0LL);
    if ( inserted >= 0 )
    {
      v7 = (char *)Object;
      if ( *((_QWORD *)Object + 226) )
      {
        --CurrentThread->KernelApcDisable;
        v9 = (struct _EX_RUNDOWN_REF *)(v7 + 760);
        v4 = 1;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v7 + 95) )
        {
          v4 = 3;
          ObfReferenceObjectWithTag(v7, 0x72437350u);
          memset(v21, 0, sizeof(v21));
          v21[31] = *(_QWORD *)(a1 + 16);
          v21[16] = *(_QWORD *)(a1 + 24);
          v21[17] = *(_QWORD *)(a1 + 32);
          WORD1(v21[8]) = 43;
          LOWORD(v21[7]) = 51;
          LOWORD(v21[32]) = 639;
          v21[19] = *(_QWORD *)(a1 + 8);
          HIWORD(v21[7]) = *(_WORD *)(a1 + 56);
          LOWORD(v21[8]) = *(_WORD *)(a1 + 58);
          v19[1] = *(_QWORD *)(a1 + 40);
          v19[2] = *(_QWORD *)(a1 + 48);
          v21[15] = *(_QWORD *)(a1 + 64);
          v21[18] = *(_QWORD *)(a1 + 72);
          v21[22] = *(_QWORD *)(a1 + 96);
          v21[21] = *(_QWORD *)(a1 + 104);
          v21[20] = *(_QWORD *)(a1 + 112);
          v21[23] = *(_QWORD *)(a1 + 120);
          v21[24] = *(_QWORD *)(a1 + 128);
          v21[25] = *(_QWORD *)(a1 + 136);
          v21[26] = *(_QWORD *)(a1 + 144);
          v21[27] = *(_QWORD *)(a1 + 152);
          v21[28] = *(_QWORD *)(a1 + 160);
          v21[29] = *(_QWORD *)(a1 + 168);
          v21[30] = *(_QWORD *)(a1 + 176);
          LODWORD(v21[35]) = 8064;
          v21[6] = 0x1F800010000BLL;
          *(_DWORD *)((char *)&v21[7] + 2) = 2818091;
          LODWORD(v14) = 1;
          v19[0] = 0LL;
          inserted = PspAllocateThread(
                       (struct _KPROCESS *)v7,
                       0LL,
                       0,
                       0LL,
                       v21,
                       v19,
                       0LL,
                       0LL,
                       (int *)&v14,
                       &v16,
                       0LL,
                       (__int64)&AccessState);
          if ( inserted >= 0 )
          {
            v10 = 0LL;
            if ( a2 )
            {
              memset(v20, 0, 0x1D8uLL);
              v10 = v20;
              v20[56] = a2;
            }
            v11 = *(_QWORD *)(a1 + 184);
            v12 = (volatile signed __int32 *)v16;
            *((_QWORD *)v16 + 243) = v11;
            inserted = PspInsertThread(
                         v12,
                         (PEPROCESS)v7,
                         0LL,
                         &v14,
                         0x1FFFFFu,
                         0LL,
                         (__int64)v10,
                         0LL,
                         &AccessState,
                         (PVOID *)&v17,
                         0LL);
            if ( inserted >= 0 )
            {
              _interlockedbittestandset(v12 + 434, 0x14u);
              inserted = 0;
              v12 = (volatile signed __int32 *)v16;
              v7 = (char *)Object;
              *v18 = v17;
            }
            ObfDereferenceObject((PVOID)v12);
          }
          ExReleaseRundownProtection(v9);
        }
        else
        {
          inserted = -1073741558;
        }
      }
      else
      {
        inserted = -1073741816;
      }
    }
    else
    {
      v7 = 0LL;
    }
  }
  else
  {
    v7 = (char *)Object;
    inserted = -1073741811;
  }
  if ( (v4 & 1) != 0 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x72437350u);
  return (unsigned int)inserted;
}
