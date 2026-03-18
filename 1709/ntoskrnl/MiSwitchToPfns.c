/*
 * XREFs of MiSwitchToPfns @ 0x14082A50C
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     MiPageToChannel @ 0x1400C7124 (MiPageToChannel.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiInitializeUnusablePfns @ 0x140137634 (MiInitializeUnusablePfns.c)
 *     MiRestrictRangeToNode @ 0x1401378C4 (MiRestrictRangeToNode.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     RtlCompareMemoryUlong @ 0x140189680 (RtlCompareMemoryUlong.c)
 *     MiCreateFreePfns @ 0x14082A878 (MiCreateFreePfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  char v7; // al
  __int64 *v8; // rdi
  __int64 *v9; // r14
  unsigned __int64 v10; // rsi
  __int64 v11; // r13
  int v13; // eax
  unsigned __int64 v14; // r12
  __int64 v15; // rcx
  _QWORD *v16; // r15
  unsigned __int128 v17; // rax
  unsigned __int64 v18; // rax
  char v19; // r9
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 *v23; // [rsp+50h] [rbp+8h]
  __int64 *v24; // [rsp+58h] [rbp+10h]

  v4 = MmPfnDatabase + 48 * qword_14038B740;
  if ( !qword_14038B740 && !*(_WORD *)(v4 + 32) )
  {
    v5 = (unsigned __int8)MiLockPageInline(MmPfnDatabase + 48 * qword_14038B740);
    *(_QWORD *)(v4 + 40) &= 0xFFFFFFF000000000uLL;
    v6 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(v4 + 8) = 0xFFFFF68000000000uLL;
    *(_WORD *)(v4 + 32) = 0;
    v7 = *(_BYTE *)(v4 + 34) & 0xFD;
    *(_QWORD *)(v4 + 24) = v6 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v4 + 34) = v7 | 5;
    *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0x3F | 0x40;
    *(_QWORD *)(v4 + 40) = ((unsigned __int64)(unsigned int)MiPageToNode(0LL, 0LL) << 58) | *(_QWORD *)(v4 + 40) & 0x3FFFFFFFFFFFFFFLL;
    *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(0LL) & 3) << 36) | 0x20000000000000LL;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v5);
  }
  v8 = (__int64 *)(a1 + 32);
  v9 = *(__int64 **)(a1 + 32);
  v24 = v8;
  v23 = v9;
  while ( v9 != v8 )
  {
    v10 = *((int *)v9 + 4);
    v11 = v9[4];
    if ( (v10 & 0x80000000) == 0LL )
    {
      if ( (v10 & 0x40000000) != 0
        || (unsigned int)v10 <= 0x18 && (v13 = 16777524, _bittest(&v13, v10))
        || (_DWORD)v10 == 29 && (MiFlags & 0x2000) == 0 )
      {
        MiCreateFreePfns(v9);
      }
      else
      {
        v14 = v9[3];
        if ( !v14 )
        {
          if ( !--v11 )
            goto LABEL_9;
          v14 = 1LL;
        }
        if ( (unsigned int)v10 > 0x22 || (v15 = 0x5C0800040LL, !_bittest64(&v15, v10)) )
        {
          if ( (_DWORD)v10 == 3 )
            goto LABEL_38;
          if ( (_DWORD)v10 != 22 )
          {
            v16 = (_QWORD *)(48 * v14 - 0x58000000000LL);
            if ( v11 )
            {
              do
              {
                v17 = RtlCompareMemoryUlong(v16, 48 * v11, 0) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
                a3 = *((_QWORD *)&v17 + 1) >> 5;
                if ( *((_QWORD *)&v17 + 1) >> 5 )
                {
                  v14 = (__int64)(v16 + 0xB000000000LL) / 48;
                  v18 = MiRestrictRangeToNode(v14, *((_QWORD *)&v17 + 1) >> 5);
                  v19 = 0x80;
                  v20 = v18;
                  if ( (_DWORD)v10 != 29 )
                    v19 = 64;
                  MiInitializeUnusablePfns(v16, v18, 0, v19);
                  v11 -= v20;
                  v21 = 48 * v20;
                }
                else
                {
                  if ( (_DWORD)v10 == 29 )
                  {
                    v22 = (_QWORD *)v16[1];
                    if ( v22 )
                    {
                      *v22 = 0LL;
                      if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL
                        && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
                      {
                        MiWritePteShadow();
                      }
                      v16[1] = 0LL;
                    }
                    MiInitializeUnusablePfns(v16, 1uLL, 0, 128);
                  }
                  --v11;
                  v21 = 48LL;
                }
                v16 = (_QWORD *)((char *)v16 + v21);
              }
              while ( v11 );
              v9 = v23;
              v8 = v24;
            }
          }
        }
        if ( (_DWORD)v10 == 3 )
        {
LABEL_38:
          if ( v14 <= BugCheckParameter3 && v14 + v11 > BugCheckParameter3 + 1 )
            v9[4] = (unsigned int)(BugCheckParameter3 - v14 + 1);
        }
      }
    }
    else
    {
      *((_DWORD *)v9 + 4) = v10 & 0x7FFFFFFF;
    }
LABEL_9:
    v9 = (__int64 *)*v9;
    v23 = v9;
  }
  return KeFlushTb(3LL, 2LL, a3);
}
