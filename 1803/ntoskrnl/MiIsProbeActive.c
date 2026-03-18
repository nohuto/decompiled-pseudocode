/*
 * XREFs of MiIsProbeActive @ 0x1400C3E6C
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x1400C39A0 (MiReplaceRotateWithDemandZero.c)
 *     MmIsIoSpaceActive @ 0x1402567E0 (MmIsIoSpaceActive.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 */

__int64 __fastcall MiIsProbeActive(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  int v5; // esi
  KIRQL v8; // al
  _QWORD *i; // r8
  KIRQL v10; // r13
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // rax
  _WORD *v17; // rdx
  unsigned __int64 v18; // rcx
  _QWORD **v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r9
  __int64 v25; // r10
  _QWORD *v26; // r11
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rax

  v4 = 0;
  v5 = 0;
  v8 = ExAcquireSpinLockShared(&dword_1403CC340);
  i = (_QWORD *)qword_1403CC348;
  v10 = v8;
  if ( qword_1403CC348 )
  {
    if ( (a3 & 1) != 0 )
    {
      v22 = a1 + 8 * a2;
      if ( a1 >= v22 )
        goto LABEL_37;
      while ( 1 )
      {
        v23 = MI_READ_PTE_LOCK_FREE(a1);
        if ( (unsigned int)MiIsPfnInline((v23 >> 12) & 0xFFFFFFFFFLL) )
        {
          if ( (a3 & 2) != 0 && *(_WORD *)(48 * v24 - 0x57FFFFFFFE0LL) > 2u )
          {
LABEL_36:
            v5 = 1;
            goto LABEL_37;
          }
        }
        else if ( v25 == -1 || v25 != (v24 & 0xFFFFFFFFFFFFFE00uLL) )
        {
          if ( v26 && v26[5] == (v24 & 0xFFFFFFFFFFFFFE00uLL) )
          {
LABEL_51:
            if ( (*(_WORD *)(v26[6] + 2 * (v24 - v26[5])) & 0x3FFF) != 0 )
              goto LABEL_36;
          }
          else
          {
            v27 = (_QWORD *)qword_1403CC348;
            while ( v27 )
            {
              v28 = v27[5];
              if ( v24 < v28 )
              {
                v27 = (_QWORD *)*v27;
              }
              else
              {
                if ( v24 < v28 + 512 )
                {
                  v26 = v27;
                  goto LABEL_51;
                }
                v27 = (_QWORD *)v27[1];
              }
            }
          }
        }
        a1 += 8LL;
        if ( a1 >= v22 )
          goto LABEL_37;
      }
    }
    v12 = a1 + a2 - 1;
    do
    {
      v13 = i[5];
      if ( v12 < v13 )
      {
        i = (_QWORD *)*i;
      }
      else
      {
        if ( a1 <= v13 + 512 )
          break;
        i = (_QWORD *)i[1];
      }
    }
    while ( i );
    while ( i )
    {
      v14 = i[5];
      if ( v12 < v14 )
        break;
      v15 = i[6];
      v16 = a1 - v14;
      if ( a1 < v14 )
        v16 = 0LL;
      v17 = (_WORD *)(v15 + 2 * v16);
      v18 = a1 + a2 > v14 + 512 ? v15 + 1024 : v15 + 2 * (a1 + a2 - v14);
      while ( (unsigned __int64)v17 < v18 )
      {
        if ( (*v17 & 0x3FFF) != 0 )
        {
          v5 = 1;
          break;
        }
        ++v17;
      }
      if ( v5 == 1 )
        break;
      v19 = (_QWORD **)i[1];
      v20 = i;
      if ( v19 )
      {
        v21 = *v19;
        for ( i = (_QWORD *)i[1]; v21; v21 = (_QWORD *)*v21 )
          i = v21;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v20 )
            break;
          v20 = i;
        }
      }
    }
LABEL_37:
    v4 = v5;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CC340);
  __writecr8(v10);
  return v4;
}
