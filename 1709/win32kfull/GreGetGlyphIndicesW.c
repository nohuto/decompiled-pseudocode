/*
 * XREFs of GreGetGlyphIndicesW @ 0x1C0107B3C
 * Callers:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C0107960 (NtGdiGetGlyphIndicesWInternal.c)
 *     GreGetCharacterPlacementW @ 0x1C0294920 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0031EA0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 */

__int64 __fastcall GreGetGlyphIndicesW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5,
        int a6)
{
  unsigned __int64 v7; // rdi
  _WORD *v8; // r14
  unsigned int v9; // esi
  unsigned __int64 v10; // r12
  int v11; // eax
  struct _FD_XFORM *v12; // rbx
  __int64 v13; // rcx
  __int16 v14; // r13
  unsigned int *v15; // rax
  unsigned int *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v24; // rax
  __int16 v25; // cx
  unsigned int *v26; // [rsp+30h] [rbp-58h]
  DC *v27[10]; // [rsp+38h] [rbp-50h] BYREF
  struct _FD_XFORM *v29; // [rsp+A8h] [rbp+20h] BYREF

  v7 = 0LL;
  v8 = a4;
  v27[1] = 0LL;
  v9 = -1;
  v10 = (unsigned __int64)&a4[a3];
  XDCOBJ::vLock(v27, a1);
  if ( v27[0] )
  {
    v29 = 0LL;
    v11 = RFONTOBJ::bInit(&v29, (struct XDCOBJ *)v27, 0, 2u);
    v12 = v29;
    if ( v11 )
      GreAcquireSemaphore(*(_QWORD *)&v29[33].eXX);
    if ( v12 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)&v12[7].eXX + 32LL);
      v14 = *(unsigned __int8 *)(v13 + 108);
      if ( a3 )
      {
        v15 = (unsigned int *)PALLOCMEM2(4 * a3, 2037147463LL, 1);
        v26 = v15;
        v16 = v15;
        if ( v15 )
        {
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v29, a2, a3, v15, a5, a6);
          v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v12[7].eXX + 16LL) + 4LL);
          if ( (v19 & 6) != 0 )
          {
            if ( (v19 & 2) != 0 && v14 )
            {
              v24 = (v10 - (unsigned __int64)v8 + 1) >> 1;
              if ( (unsigned __int64)v8 > v10 )
                v24 = 0LL;
              if ( v24 )
              {
                v17 = a5;
                do
                {
                  v25 = *(_WORD *)v16;
                  v18 = 0xFFFFLL;
                  if ( *(_WORD *)v16 != 0xFFFF || (_DWORD)v17 != 1 )
                    v25 += v14;
                  *v8 = v25;
                  ++v16;
                  ++v8;
                  ++v7;
                }
                while ( v7 < v24 );
              }
            }
            else
            {
              v20 = (v10 - (unsigned __int64)v8 + 1) >> 1;
              if ( (unsigned __int64)v8 > v10 )
                v20 = 0LL;
              if ( v20 )
              {
                do
                {
                  ++v7;
                  *v8++ = *(_WORD *)v16++;
                }
                while ( v7 < v20 );
              }
            }
            v9 = a3;
          }
          Win32FreePool(v26, v17, v18);
        }
      }
      else if ( *(_DWORD *)(v13 + 4) <= 8u )
      {
        v9 = 0;
      }
      else
      {
        v9 = *(_DWORD *)(v13 + 200);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v27);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v29, v21, v22);
  }
  return v9;
}
