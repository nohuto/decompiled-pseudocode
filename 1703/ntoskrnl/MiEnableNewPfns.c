/*
 * XREFs of MiEnableNewPfns @ 0x14020D3DC
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 */

void __fastcall MiEnableNewPfns(unsigned __int64 a1, unsigned __int64 a2, __int16 a3)
{
  int v3; // r8d
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r12
  __int16 v8; // r12
  __int64 v9; // rcx
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // r14
  __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  __int64 v14; // r13
  unsigned __int8 v15; // al
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // [rsp+20h] [rbp-58h]
  __int16 v18; // [rsp+80h] [rbp+8h]
  unsigned __int8 v20; // [rsp+90h] [rbp+18h]
  BOOL v21; // [rsp+98h] [rbp+20h]

  v3 = a3 & 0x100;
  v4 = a1;
  v5 = a2;
  v18 = 2 - (v3 != 0);
  v21 = v3 == 0;
  v6 = 48 * a1 - 0x58000000000LL;
  v7 = a2 - a1;
  v17 = a2 - a1;
  if ( a1 < a2 )
  {
    v8 = 2 - (v3 != 0);
    do
    {
      v9 = 0LL;
      v10 = (unsigned __int64 *)MiLargePageSizes;
      do
      {
        v11 = *v10;
        if ( ((*v10 - 1) & v4) == 0 && v5 - v4 >= v11 )
          break;
        v9 = (unsigned int)(v9 + 1);
        ++v10;
      }
      while ( (unsigned int)v9 <= 1 );
      if ( (unsigned int)v9 > 1 )
      {
        v16 = (unsigned __int8)MiLockPageInline(v6);
        MiInsertPageInFreeOrZeroedList(v4, v8);
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v16);
        v12 = 48LL;
        v11 = 1LL;
      }
      else
      {
        v12 = 48 * v11;
        v13 = v6 + 48 * v11 - 48;
        v14 = MiLargePageContainingFrames[v9] & 0xFFFFFFFFFLL;
        do
        {
          v15 = MiLockPageInline(v13);
          v20 = v15;
          *(_QWORD *)(v13 + 40) = v14 | *(_QWORD *)(v13 + 40) & 0xFFFFFFF000000000uLL;
          *(_BYTE *)(v13 + 34) = *(_BYTE *)(v13 + 34) & 0xF8 | 1;
          if ( v13 == v6 )
          {
            MiInsertLargePageInNodeListHelper(v4, v11, v21, 0);
            v15 = v20;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v15);
          v13 -= 48LL;
        }
        while ( v13 >= v6 );
        v5 = a2;
        v8 = v18;
      }
      v6 += v12;
      v4 += v11;
    }
    while ( v4 < v5 );
    v7 = v17;
  }
  MiReturnResidentAvailable(v7);
}
