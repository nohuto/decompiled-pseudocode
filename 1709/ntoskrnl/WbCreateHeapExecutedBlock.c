/*
 * XREFs of WbCreateHeapExecutedBlock @ 0x140503894
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1405021D0 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     WbAlloc @ 0x140501FF8 (WbAlloc.c)
 *     sub_140502354 @ 0x140502354 (sub_140502354.c)
 *     WbVerifyVirtualAddressSignature @ 0x140503C14 (WbVerifyVirtualAddressSignature.c)
 *     sub_14056585C @ 0x14056585C (sub_14056585C.c)
 *     sub_1405731F0 @ 0x1405731F0 (sub_1405731F0.c)
 *     WbAllocateUserMemory @ 0x140576058 (WbAllocateUserMemory.c)
 */

__int64 __fastcall WbCreateHeapExecutedBlock(__int64 a1, __int64 a2, void **a3)
{
  int v5; // ebx
  _DWORD *v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int16 v16; // ax
  int v17; // [rsp+54h] [rbp-74h]
  void *v18; // [rsp+58h] [rbp-70h] BYREF
  void *Src; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20; // [rsp+68h] [rbp-60h] BYREF
  void *v21; // [rsp+70h] [rbp-58h] BYREF
  __int64 v22; // [rsp+78h] [rbp-50h]

  v18 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  Src = 0LL;
  v22 = (unsigned int)dword_14038CC80;
  v5 = WbAlloc(0x58uLL, &v18);
  if ( v5 < 0 )
  {
LABEL_31:
    v6 = v18;
    goto LABEL_28;
  }
  v6 = v18;
  memset(v18, 0, 0x58uLL);
  v6[4] &= ~1u;
  *((_QWORD *)v6 + 10) = 1LL;
  v5 = sub_1405731F0((void *)(a2 + 8));
  if ( v5 >= 0 )
  {
    v5 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 312));
    if ( v5 >= 0 )
    {
      v5 = WbAllocateUserMemory(a1, *(unsigned int *)(a2 + 300), &v21, &v20);
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
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v5 = sub_14056585C(
                 0,
                 *(_QWORD *)(a2 + 256),
                 (int)Src + *(_DWORD *)(a2 + 272),
                 *(_DWORD *)(a2 + 268),
                 a2 + 80,
                 *(_DWORD *)(a2 + 264),
                 a2 + 88);
          if ( v5 >= 0 )
          {
            v5 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 256));
            v17 = v5;
            if ( v5 >= 0 )
            {
              v9 = *(_QWORD *)(a2 + 280);
              if ( !v9 )
                goto LABEL_22;
              v10 = *(unsigned int *)(a2 + 292);
              if ( (_DWORD)v10 && (v9 + v10 > 0x7FFFFFFF0000LL || v9 + v10 < v9) )
                MEMORY[0x7FFFFFFF0000] = 0;
              v5 = sub_14056585C(
                     0,
                     *(_QWORD *)(a2 + 280),
                     (int)Src + *(_DWORD *)(a2 + 296),
                     *(_DWORD *)(a2 + 292),
                     a2 + 80,
                     *(_DWORD *)(a2 + 288),
                     a2 + 88);
              if ( v5 >= 0 )
              {
                v5 = WbVerifyVirtualAddressSignature(*(PVOID *)(a2 + 280));
                v17 = v5;
                if ( v5 >= 0 )
                {
LABEL_22:
                  v11 = v21;
                  memmove(v21, Src, *(unsigned int *)(a2 + 300));
                  *((_QWORD *)v6 + 8) = *(_QWORD *)a2;
                  *((_QWORD *)v6 + 5) = v11;
                  *((_QWORD *)v6 + 3) = v20 + *(unsigned int *)(a2 + 272);
                  v12 = *(unsigned int *)(a2 + 296);
                  if ( (_DWORD)v12 )
                    *((_QWORD *)v6 + 4) = v20 + v12;
                  else
                    *((_QWORD *)v6 + 4) = 0LL;
                  v6[18] = *(_DWORD *)(a2 + 300);
                  *((_QWORD *)v6 + 6) = *(_QWORD *)(a2 + 256);
                  v13 = *(_QWORD *)(a2 + 256) - *((_QWORD *)v6 + 3);
                  *((_QWORD *)v6 + 7) = v13;
                  v14 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
                  if ( v14 && ((v16 = *(_WORD *)(v14 + 8), v16 == 332) || v16 == 452) )
                    **((_QWORD **)v6 + 5) = *((_QWORD *)v6 + 8);
                  else
                    **((_QWORD **)v6 + 5) = v13;
                  *(_QWORD *)(*((_QWORD *)v6 + 5) + 8LL) = v22;
                  v5 = v17;
                  if ( a3 )
                  {
                    *a3 = v18;
                    v6 = 0LL;
                    goto LABEL_28;
                  }
                  goto LABEL_31;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_28:
  sub_140502354(a1, (__int64)v6);
  if ( Src )
    ExFreePoolWithTag(Src, 0x42524157u);
  return (unsigned int)v5;
}
