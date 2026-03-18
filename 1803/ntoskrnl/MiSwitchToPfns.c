/*
 * XREFs of MiSwitchToPfns @ 0x140899CB8
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiPageToChannel @ 0x140122B2C (MiPageToChannel.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiInitializeUnusablePfns @ 0x14016F97C (MiInitializeUnusablePfns.c)
 *     MiRestrictRangeToNode @ 0x14016FC04 (MiRestrictRangeToNode.c)
 *     RtlCompareMemoryUlong @ 0x1401B32E0 (RtlCompareMemoryUlong.c)
 *     MiCreateFreePfns @ 0x140899EBC (MiCreateFreePfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1)
{
  ULONG_PTR v2; // rsi
  __int64 *v3; // r13
  __int64 *v4; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // r12
  int v7; // eax
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  _QWORD *v10; // rbp
  unsigned __int128 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v14; // rax
  char v15; // r9
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  char v19; // al
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // [rsp+60h] [rbp+8h]
  __int64 *v24; // [rsp+68h] [rbp+10h]

  v2 = MmPfnDatabase + 48 * qword_1403CFA00;
  if ( !qword_1403CFA00 && !*(_WORD *)(v2 + 32) )
  {
    v17 = (unsigned __int8)MiLockPageInline(MmPfnDatabase + 48 * qword_1403CFA00);
    *(_QWORD *)(v2 + 40) &= 0xFFFFFFF000000000uLL;
    v18 = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(v2 + 8) = 0xFFFFF68000000000uLL;
    *(_WORD *)(v2 + 32) = 0;
    v19 = *(_BYTE *)(v2 + 34) & 0xFD;
    *(_QWORD *)(v2 + 24) = v18 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v2 + 34) = v19 | 5;
    *(_BYTE *)(v2 + 34) = *(_BYTE *)(v2 + 34) & 0x3F | 0x40;
    *(_QWORD *)(v2 + 40) = ((unsigned __int64)(unsigned int)MiPageToNode(0LL, 0) << 58) | *(_QWORD *)(v2 + 40) & 0x3FFFFFFFFFFFFFFLL;
    *(_QWORD *)(v2 + 40) = *(_QWORD *)(v2 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(0LL) & 3) << 36) | 0x20000000000000LL;
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v17);
  }
  v3 = (__int64 *)(a1 + 32);
  v24 = v3;
  v4 = (__int64 *)*v3;
  v23 = (__int64 *)*v3;
  while ( v4 != v3 )
  {
    v5 = *((int *)v4 + 4);
    v6 = v4[4];
    if ( (v5 & 0x80000000) != 0LL )
    {
      *((_DWORD *)v4 + 4) = v5 & 0x7FFFFFFF;
      goto LABEL_21;
    }
    if ( (v5 & 0x40000000) != 0
      || (unsigned int)v5 <= 0x18 && (v7 = 16777524, _bittest(&v7, v5))
      || (_DWORD)v5 == 29 && (MiFlags & 0x2000) == 0 )
    {
      MiCreateFreePfns(v4);
    }
    else
    {
      v8 = v4[3];
      if ( !v8 )
      {
        if ( !--v6 )
          goto LABEL_21;
        v8 = 1LL;
      }
      if ( (unsigned int)v5 > 0x22 || (v9 = 0x5C0800040LL, !_bittest64(&v9, v5)) )
      {
        if ( (_DWORD)v5 == 3 )
          goto LABEL_38;
        if ( (_DWORD)v5 != 22 )
        {
          v10 = (_QWORD *)(48 * v8 - 0x58000000000LL);
          if ( v6 )
          {
            do
            {
              v11 = RtlCompareMemoryUlong(v10, 48 * v6, 0) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
              if ( *((_QWORD *)&v11 + 1) >> 5 )
              {
                v8 = (__int64)(v10 + 0xB000000000LL) / 48;
                v14 = MiRestrictRangeToNode(v8, *((_QWORD *)&v11 + 1) >> 5);
                v15 = 0x80;
                if ( (_DWORD)v5 != 29 )
                  v15 = 64;
                v16 = v14;
                MiInitializeUnusablePfns(v10, v14, 0, v15);
                v6 -= v16;
                v12 = 48 * v16;
              }
              else
              {
                if ( (_DWORD)v5 == 29 )
                {
                  v20 = (_QWORD *)v10[1];
                  if ( v20 )
                  {
                    *v20 = 0LL;
                    if ( MiPteInShadowRange((unsigned __int64)v20) )
                      MiWritePteShadow(v21, 0LL, v22);
                    v10[1] = 0LL;
                  }
                  MiInitializeUnusablePfns(v10, 1uLL, 0, 128);
                }
                --v6;
                v12 = 48LL;
              }
              v10 = (_QWORD *)((char *)v10 + v12);
            }
            while ( v6 );
            v4 = v23;
            v3 = v24;
          }
        }
      }
      if ( (_DWORD)v5 == 3 )
      {
LABEL_38:
        if ( v8 <= BugCheckParameter3 && v8 + v6 > BugCheckParameter3 + 1 )
          v4[4] = (unsigned int)(BugCheckParameter3 - v8 + 1);
      }
    }
LABEL_21:
    v4 = (__int64 *)*v4;
    v23 = v4;
  }
  return KeFlushTb(3u, 2u);
}
