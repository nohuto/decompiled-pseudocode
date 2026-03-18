/*
 * XREFs of CmpDoAccessCheckOnSubtree @ 0x1406933CC
 * Callers:
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14069D3CC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x1404825F0 (CmpFindSubKeyByNumber.c)
 *     CmpCheckKeyAccess @ 0x140692EC8 (CmpCheckKeyAccess.c)
 */

__int64 __fastcall CmpDoAccessCheckOnSubtree(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        ACCESS_MASK a4,
        unsigned int a5)
{
  KPROCESSOR_MODE v6; // si
  char v9; // bl
  char v10; // r12
  int SubKeyByNumber; // ebx
  unsigned int *TransientPoolWithTag; // rax
  void *v13; // r14
  __int64 v14; // rbp
  unsigned int *v15; // rdi
  __int64 v16; // rdx
  _DWORD *v17; // rax
  _DWORD *v18; // rsi
  unsigned int v19; // r8d
  unsigned int v20; // eax
  _DWORD v22[4]; // [rsp+30h] [rbp-38h] BYREF

  v22[0] = -1;
  v6 = a3;
  v22[1] = 0;
  v9 = a5 & 1;
  v10 = (a5 & 2) != 0;
  if ( (a5 & 0xFFFFFFFC) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    TransientPoolWithTag = (unsigned int *)CmpAllocateTransientPoolWithTag(a1, 0x2800uLL, 0x74634D43u);
    v13 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      TransientPoolWithTag[3] = 0;
      *TransientPoolWithTag = a2;
      v14 = 0LL;
      *((_BYTE *)TransientPoolWithTag + 16) = v9 ^ 1;
      v15 = TransientPoolWithTag;
      while ( 1 )
      {
        if ( !*((_BYTE *)v15 + 16) )
        {
          v16 = *v15;
          *((_BYTE *)v15 + 16) = 1;
          SubKeyByNumber = CmpCheckKeyAccess(a1, v16, v6, a4, v10);
          if ( SubKeyByNumber < 0 )
            break;
        }
        v17 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *v15, v22);
        v18 = v17;
        if ( !v17 )
        {
          SubKeyByNumber = -1073741670;
          break;
        }
        v19 = v15[3];
        if ( v19 >= v17[5] + v17[6] )
        {
          --v14;
          v15 -= 5;
        }
        else
        {
          SubKeyByNumber = CmpFindSubKeyByNumber(a1, v17, v19, &a5);
          if ( SubKeyByNumber < 0 )
            goto LABEL_19;
          v20 = a5;
          if ( a5 == -1 || (++v15[3], ++v14, v15 += 5, v14 == 512) )
          {
            SubKeyByNumber = -1073741670;
            goto LABEL_19;
          }
          v15[3] = 0;
          *v15 = v20;
          *((_BYTE *)v15 + 16) = 0;
        }
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v22);
        if ( v14 < 0 )
        {
          SubKeyByNumber = 0;
          v18 = 0LL;
LABEL_19:
          if ( v18 )
            (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v22);
          break;
        }
        v6 = a3;
      }
      CmpFreeTransientPoolWithTag(v13, 0x74634D43u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)SubKeyByNumber;
}
