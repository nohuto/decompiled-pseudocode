/*
 * XREFs of WbCreateHeapExecutedBlock @ 0x140539C10
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14050F76C (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ZwFlushInstructionCache @ 0x1401A90E0 (ZwFlushInstructionCache.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     WbAlloc @ 0x14050F678 (WbAlloc.c)
 *     sub_14050F8B4 @ 0x14050F8B4 (sub_14050F8B4.c)
 *     WbVerifyVirtualAddressSignature @ 0x140539FCC (WbVerifyVirtualAddressSignature.c)
 *     sub_14053A0A8 @ 0x14053A0A8 (sub_14053A0A8.c)
 *     WbAllocateUserMemory @ 0x14053A19C (WbAllocateUserMemory.c)
 *     sub_14053A6D0 @ 0x14053A6D0 (sub_14053A6D0.c)
 */

__int64 __fastcall WbCreateHeapExecutedBlock(__int64 a1, __int64 a2, void **a3)
{
  int v5; // ebx
  _DWORD *v6; // rbx
  __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  void *v12; // r14
  _QWORD *v13; // rbx
  _QWORD *v14; // r10
  _QWORD *v15; // rdx
  PVOID *v16; // r9
  __int64 v17; // rax
  PVOID *v18; // r14
  _QWORD *v19; // rbx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int16 v23; // ax
  void *v24; // [rsp+58h] [rbp-60h] BYREF
  void *Src; // [rsp+60h] [rbp-58h] BYREF
  __int64 v26; // [rsp+68h] [rbp-50h] BYREF
  void *v27; // [rsp+70h] [rbp-48h] BYREF
  __int64 v28; // [rsp+78h] [rbp-40h]

  v24 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  Src = 0LL;
  v28 = (unsigned int)dword_1403D0F40;
  v5 = WbAlloc(0x58uLL, &v24);
  if ( v5 >= 0 )
  {
    v6 = v24;
    memset(v24, 0, 0x58uLL);
    v6[4] &= ~1u;
    *((_QWORD *)v6 + 10) = 1LL;
    v5 = sub_14053A6D0((void *)(a2 + 8));
    if ( v5 >= 0 )
    {
      v5 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 312));
      if ( v5 >= 0 )
      {
        v5 = WbAllocateUserMemory(a1, *(unsigned int *)(a2 + 300), &v27, &v26);
        if ( v5 >= 0 )
        {
          v5 = WbAlloc(*(unsigned int *)(a2 + 300), &Src);
          if ( v5 >= 0 )
          {
            v7 = *(unsigned int *)(a2 + 268);
            if ( (_DWORD)v7 )
            {
              v8 = *(_QWORD *)(a2 + 256);
              if ( v8 + v7 > 0x7FFFFFFF0000LL || v8 + v7 < v8 )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
                LODWORD(v7) = *(_DWORD *)(a2 + 268);
              }
            }
            v5 = sub_14053A0A8(
                   0,
                   *(_QWORD *)(a2 + 256),
                   (int)Src + *(_DWORD *)(a2 + 272),
                   v7,
                   a2 + 80,
                   *(_DWORD *)(a2 + 264),
                   a2 + 88);
            if ( v5 >= 0 )
            {
              v5 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 256));
              if ( v5 >= 0 )
              {
                v9 = *(_QWORD *)(a2 + 280);
                if ( !v9 )
                  goto LABEL_22;
                v10 = *(unsigned int *)(a2 + 292);
                v11 = *(_QWORD *)(a2 + 280);
                if ( (_DWORD)v10 && (v9 + v10 > 0x7FFFFFFF0000LL || v9 + v10 < v9) )
                {
                  MEMORY[0x7FFFFFFF0000] = 0;
                  LODWORD(v10) = *(_DWORD *)(a2 + 292);
                  v11 = *(_QWORD *)(a2 + 280);
                }
                v5 = sub_14053A0A8(
                       0,
                       v11,
                       (int)Src + *(_DWORD *)(a2 + 296),
                       v10,
                       a2 + 80,
                       *(_DWORD *)(a2 + 288),
                       a2 + 88);
                if ( v5 >= 0 )
                {
                  v5 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 280));
                  if ( v5 >= 0 )
                  {
LABEL_22:
                    v12 = v27;
                    memmove(v27, Src, *(unsigned int *)(a2 + 300));
                    v13 = v24;
                    v14 = (char *)v24 + 64;
                    *((_QWORD *)v24 + 8) = *(_QWORD *)a2;
                    v15 = v13 + 5;
                    v13[5] = v12;
                    v16 = (PVOID *)(v13 + 3);
                    v13[3] = v26 + *(unsigned int *)(a2 + 272);
                    v17 = *(unsigned int *)(a2 + 296);
                    v18 = (PVOID *)(v13 + 4);
                    if ( (_DWORD)v17 )
                      v13[4] = v26 + v17;
                    else
                      v13[4] = 0LL;
                    v19 = v24;
                    *((_DWORD *)v24 + 18) = *(_DWORD *)(a2 + 300);
                    v19[6] = *(_QWORD *)(a2 + 256);
                    v20 = *(_QWORD *)(a2 + 256) - (_QWORD)*v16;
                    v19[7] = v20;
                    v21 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
                    if ( v21 && ((v23 = *(_WORD *)(v21 + 8), v23 == 332) || v23 == 452) )
                      *(_QWORD *)*v15 = *v14;
                    else
                      *(_QWORD *)*v15 = v20;
                    *(_QWORD *)(*v15 + 8LL) = v28;
                    v5 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v16, *(_DWORD *)(a2 + 268));
                    if ( v5 >= 0 )
                    {
                      if ( !*(_QWORD *)(a2 + 280)
                        || (v5 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v18, *(_DWORD *)(a2 + 292)),
                            v5 >= 0) )
                      {
                        if ( a3 )
                        {
                          *a3 = v24;
                          v24 = 0LL;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  sub_14050F8B4(a1, (__int64)v24);
  if ( Src )
    ExFreePoolWithTag(Src, 0x42524157u);
  return (unsigned int)v5;
}
