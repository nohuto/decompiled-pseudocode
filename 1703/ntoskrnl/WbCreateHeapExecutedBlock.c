/*
 * XREFs of WbCreateHeapExecutedBlock @ 0x1405481A0
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14053B7A0 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WbAlloc @ 0x14053BF78 (WbAlloc.c)
 *     sub_1405484E0 @ 0x1405484E0 (sub_1405484E0.c)
 *     sub_140548560 @ 0x140548560 (sub_140548560.c)
 *     sub_1405485C4 @ 0x1405485C4 (sub_1405485C4.c)
 *     WbAllocateUserMemory @ 0x1405486B8 (WbAllocateUserMemory.c)
 *     sub_140548B04 @ 0x140548B04 (sub_140548B04.c)
 */

__int64 __fastcall WbCreateHeapExecutedBlock(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // edi
  _DWORD *v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  void *Src; // [rsp+58h] [rbp-70h] BYREF
  void *v16; // [rsp+60h] [rbp-68h] BYREF
  __int64 v17; // [rsp+68h] [rbp-60h] BYREF
  void *v18; // [rsp+70h] [rbp-58h] BYREF
  __int64 v19; // [rsp+78h] [rbp-50h]

  v16 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  Src = 0LL;
  v19 = (unsigned int)dword_140384F80;
  v5 = WbAlloc(0x58uLL, &v16);
  if ( v5 < 0 )
  {
    v6 = v16;
  }
  else
  {
    v6 = v16;
    memset(v16, 0, 0x58uLL);
    v6[4] &= ~1u;
    *((_QWORD *)v6 + 10) = 1LL;
    v5 = sub_140548B04((void *)(a2 + 8));
    if ( v5 >= 0 )
    {
      v5 = sub_1405484E0(*(PVOID *)(a2 + 312));
      if ( v5 >= 0 )
      {
        v5 = WbAllocateUserMemory(a1, *(unsigned int *)(a2 + 300), &v18, &v17);
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
            v5 = sub_1405485C4(
                   0,
                   *(_QWORD *)(a2 + 256),
                   (int)Src + *(_DWORD *)(a2 + 272),
                   *(_DWORD *)(a2 + 268),
                   a2 + 80,
                   *(_DWORD *)(a2 + 264),
                   a2 + 88);
            if ( v5 >= 0 )
            {
              v5 = sub_1405484E0(*(PVOID *)(a2 + 256));
              if ( v5 >= 0 )
              {
                v9 = *(_QWORD *)(a2 + 280);
                if ( !v9 )
                  goto LABEL_22;
                v10 = *(unsigned int *)(a2 + 292);
                if ( (_DWORD)v10 && (v9 + v10 > 0x7FFFFFFF0000LL || v9 + v10 < v9) )
                  MEMORY[0x7FFFFFFF0000] = 0;
                v5 = sub_1405485C4(
                       0,
                       *(_QWORD *)(a2 + 280),
                       (int)Src + *(_DWORD *)(a2 + 296),
                       *(_DWORD *)(a2 + 292),
                       a2 + 80,
                       *(_DWORD *)(a2 + 288),
                       a2 + 88);
                if ( v5 >= 0 )
                {
                  v5 = sub_1405484E0(*(PVOID *)(a2 + 280));
                  if ( v5 >= 0 )
                  {
LABEL_22:
                    v11 = v18;
                    memmove(v18, Src, *(unsigned int *)(a2 + 300));
                    *((_QWORD *)v6 + 8) = *(_QWORD *)a2;
                    *((_QWORD *)v6 + 5) = v11;
                    *((_QWORD *)v6 + 3) = v17 + *(unsigned int *)(a2 + 272);
                    v12 = *(unsigned int *)(a2 + 296);
                    if ( (_DWORD)v12 )
                      *((_QWORD *)v6 + 4) = v17 + v12;
                    else
                      *((_QWORD *)v6 + 4) = 0LL;
                    v6[18] = *(_DWORD *)(a2 + 300);
                    *((_QWORD *)v6 + 6) = *(_QWORD *)(a2 + 256);
                    v13 = *(_QWORD *)(a2 + 256) - *((_QWORD *)v6 + 3);
                    *((_QWORD *)v6 + 7) = v13;
                    *v11 = v13;
                    *(_QWORD *)(*((_QWORD *)v6 + 5) + 8LL) = v19;
                    if ( a3 )
                    {
                      *a3 = v6;
                      v6 = 0LL;
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
  sub_140548560(a1, v6);
  if ( Src )
    ExFreePoolWithTag(Src, 0x42524157u);
  return (unsigned int)v5;
}
