/*
 * XREFs of MiSwitchToPfns @ 0x14080053C
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400B7220 (MiPageToChannel.c)
 *     MiInitializeUnusablePfns @ 0x14015451C (MiInitializeUnusablePfns.c)
 *     MiRestrictRangeToNode @ 0x1401547A8 (MiRestrictRangeToNode.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     RtlCompareMemoryUlong @ 0x140189B80 (RtlCompareMemoryUlong.c)
 *     MiInitializeLargePageNodeLists @ 0x1405A2158 (MiInitializeLargePageNodeLists.c)
 *     MiCreateFreePfns @ 0x1408008A0 (MiCreateFreePfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1)
{
  ULONG_PTR v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  char v5; // al
  __int64 *v6; // rdi
  __int64 *v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // r13
  int v11; // eax
  unsigned __int64 v12; // r12
  __int64 v13; // rcx
  _QWORD *v14; // r15
  unsigned __int128 v15; // rax
  unsigned __int64 v16; // rax
  char v17; // r9
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 *v21; // [rsp+50h] [rbp+8h]
  __int64 *v22; // [rsp+58h] [rbp+10h]

  v2 = MmPfnDatabase + 48 * qword_1403817C0;
  if ( !qword_1403817C0 && !*(_WORD *)(v2 + 32) )
  {
    v3 = (unsigned __int8)MiLockPageInline(MmPfnDatabase + 48 * qword_1403817C0);
    *(_QWORD *)(v2 + 40) &= 0xFFFFFFF000000000uLL;
    v4 = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(v2 + 8) = 0xFFFFF68000000000uLL;
    *(_WORD *)(v2 + 32) = 0;
    v5 = *(_BYTE *)(v2 + 34) & 0xFD;
    *(_QWORD *)(v2 + 24) = v4 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v2 + 34) = v5 | 5;
    *(_BYTE *)(v2 + 34) = *(_BYTE *)(v2 + 34) & 0x3F | 0x40;
    *(_QWORD *)(v2 + 40) = ((unsigned __int64)(unsigned int)MiPageToNode(0LL, 0LL) << 58) | *(_QWORD *)(v2 + 40) & 0x3FFFFFFFFFFFFFFLL;
    *(_QWORD *)(v2 + 40) = *(_QWORD *)(v2 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(0LL) & 3) << 36) | 0x20000000000000LL;
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v3);
  }
  MiInitializeLargePageNodeLists((__int64)&MiSystemPartition);
  v6 = (__int64 *)(a1 + 32);
  v7 = *(__int64 **)(a1 + 32);
  v22 = v6;
  v21 = v7;
  while ( v7 != v6 )
  {
    v8 = *((int *)v7 + 4);
    v9 = v7[4];
    if ( (v8 & 0x80000000) == 0LL )
    {
      if ( (v8 & 0x40000000) != 0
        || (unsigned int)v8 <= 0x18 && (v11 = 16777524, _bittest(&v11, v8))
        || (_DWORD)v8 == 29 && (MiFlags & 0x2000) == 0 )
      {
        MiCreateFreePfns(v7);
      }
      else
      {
        v12 = v7[3];
        if ( !v12 )
        {
          if ( !--v9 )
            goto LABEL_9;
          v12 = 1LL;
        }
        if ( (unsigned int)v8 > 0x20 || (v13 = 0x1C0800040LL, !_bittest64(&v13, v8)) )
        {
          if ( (_DWORD)v8 == 3 )
            goto LABEL_37;
          if ( (_DWORD)v8 != 22 )
          {
            v14 = (_QWORD *)(48 * v12 - 0x58000000000LL);
            if ( v9 )
            {
              do
              {
                v15 = RtlCompareMemoryUlong(v14, 48 * v9, 0) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
                if ( *((_QWORD *)&v15 + 1) >> 5 )
                {
                  v12 = (__int64)(v14 + 0xB000000000LL) / 48;
                  v16 = MiRestrictRangeToNode(v12, *((_QWORD *)&v15 + 1) >> 5);
                  v17 = 0x80;
                  v18 = v16;
                  if ( (_DWORD)v8 != 29 )
                    v17 = 64;
                  MiInitializeUnusablePfns(v14, v16, 0, v17);
                  v9 -= v18;
                  v19 = 48 * v18;
                }
                else
                {
                  if ( (_DWORD)v8 == 29 )
                  {
                    v20 = (_QWORD *)v14[1];
                    if ( v20 )
                    {
                      *v20 = 0LL;
                      if ( MiPteInShadowRange((unsigned __int64)v20) )
                        MiWritePteShadow();
                      v14[1] = 0LL;
                    }
                    MiInitializeUnusablePfns(v14, 1uLL, 0, 128);
                  }
                  --v9;
                  v19 = 48LL;
                }
                v14 = (_QWORD *)((char *)v14 + v19);
              }
              while ( v9 );
              v7 = v21;
              v6 = v22;
            }
          }
        }
        if ( (_DWORD)v8 == 3 )
        {
LABEL_37:
          if ( v12 <= BugCheckParameter3 && v12 + v9 > BugCheckParameter3 + 1 )
            v7[4] = (unsigned int)(BugCheckParameter3 - v12 + 1);
        }
      }
    }
    else
    {
      *((_DWORD *)v7 + 4) = v8 & 0x7FFFFFFF;
    }
LABEL_9:
    v7 = (__int64 *)*v7;
    v21 = v7;
  }
  return KeFlushTb(3u, 2u);
}
