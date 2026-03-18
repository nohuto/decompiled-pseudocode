/*
 * XREFs of CmpClearKeyAccessBits @ 0x14045205C
 * Callers:
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNumber @ 0x1404825F0 (CmpFindSubKeyByNumber.c)
 *     CmpLogClearAccessBitsEvent @ 0x14068B980 (CmpLogClearAccessBitsEvent.c)
 */

__int64 __fastcall CmpClearKeyAccessBits(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  _QWORD *PoolWithTag; // rsi
  __int64 v5; // rbp
  unsigned int v6; // ecx
  int SubKeyByNumber; // ebx
  int v9; // r12d
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r8
  unsigned int v14; // [rsp+70h] [rbp+18h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF
  int v16; // [rsp+7Ch] [rbp+24h]

  v16 = 0;
  v15 = -1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x317A6D43u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v5 = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL);
  *PoolWithTag = v6;
  if ( v6 == -1 )
  {
    SubKeyByNumber = 0;
  }
  else
  {
    v9 = *(_DWORD *)(BugCheckParameter2 + 88);
    v10 = 0;
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              LODWORD(PoolWithTag[v5]),
              &v15);
      v12 = v11;
      if ( !v11 )
        break;
      if ( *(_BYTE *)(v11 + 12) )
      {
        if ( !(unsigned __int8)HvpMarkCellDirty(BugCheckParameter2, LODWORD(PoolWithTag[v5])) )
        {
          SubKeyByNumber = -1073741670;
LABEL_20:
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v15);
          goto LABEL_4;
        }
        *(_BYTE *)(v12 + 12) = 0;
        ++v10;
      }
      v13 = HIDWORD(PoolWithTag[v5]);
      if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 20) || (_DWORD)v5 == 511 )
      {
        if ( !(_DWORD)v5 )
        {
          CmpLogClearAccessBitsEvent(a2, v10, (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 88) - v9) >> 3);
          SubKeyByNumber = 0;
          goto LABEL_20;
        }
        v5 = (unsigned int)(v5 - 1);
      }
      else
      {
        SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter2, v12, v13, &v14);
        if ( SubKeyByNumber < 0 )
          goto LABEL_20;
        ++HIDWORD(PoolWithTag[v5]);
        v5 = (unsigned int)(v5 + 1);
        PoolWithTag[v5] = v14;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v15);
    }
    SubKeyByNumber = -1073741670;
  }
LABEL_4:
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SubKeyByNumber;
}
