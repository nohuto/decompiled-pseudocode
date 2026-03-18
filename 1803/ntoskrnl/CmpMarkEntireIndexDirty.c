/*
 * XREFs of CmpMarkEntireIndexDirty @ 0x14070012C
 * Callers:
 *     CmpLightWeightDuplicateParentLists @ 0x140704890 (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkEntireIndexDirty(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebx
  volatile signed __int64 *v4; // rbp
  _WORD *v5; // rdi
  __int64 v6; // rdx
  char v7; // bl
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // esi
  int v12; // [rsp+40h] [rbp+8h] BYREF
  __int16 v13; // [rsp+44h] [rbp+Ch]
  __int16 v14; // [rsp+46h] [rbp+Eh]

  v14 = 0;
  v2 = BugCheckParameter3;
  v12 = -1;
  v13 = 0;
  v4 = (volatile signed __int64 *)(BugCheckParameter2 + 80);
  v5 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  BugCheckParameter3,
                  &v12);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
  v7 = HvpMarkCellDirty(BugCheckParameter2, v2, 1);
  if ( v7 )
  {
    if ( *v5 == 26994 && (v10 = 0, v5[1]) )
    {
      while ( 1 )
      {
        v7 = HvpMarkCellDirty(BugCheckParameter2, *(unsigned int *)&v5[2 * v10 + 2], 1);
        if ( !v7 )
          break;
        if ( ++v10 >= (unsigned int)(unsigned __int16)v5[1] )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v7 = 1;
    }
  }
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80), v6, v8, v9);
  KeAbPostRelease(BugCheckParameter2 + 80);
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v12);
  return v7;
}
