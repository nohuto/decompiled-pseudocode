/*
 * XREFs of GreGetGlyphIndicesW @ 0x1C00FA32C
 * Callers:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C00FA150 (NtGdiGetGlyphIndicesWInternal.c)
 *     GreGetCharacterPlacementW @ 0x1C0298268 (GreGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C008C0B0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
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
  unsigned __int64 v10; // r13
  int v11; // eax
  struct _FD_XFORM *v12; // rbx
  __int64 v13; // rcx
  unsigned int *v14; // rax
  unsigned int *v15; // r15
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v19; // rax
  unsigned int v20; // r8d
  __int16 v21; // cx
  unsigned int *v22; // [rsp+30h] [rbp-20h]
  DC *v23[3]; // [rsp+38h] [rbp-18h] BYREF
  __int16 v25; // [rsp+A0h] [rbp+50h]
  struct _FD_XFORM *v26; // [rsp+A8h] [rbp+58h] BYREF

  v7 = 0LL;
  v8 = a4;
  v23[1] = 0LL;
  v9 = -1;
  v10 = (unsigned __int64)&a4[a3];
  XDCOBJ::vLock(v23, a1);
  if ( v23[0] )
  {
    v26 = 0LL;
    v11 = RFONTOBJ::bInit(&v26, (struct XDCOBJ *)v23, 0, 2u);
    v12 = v26;
    if ( v11 )
      GreAcquireSemaphore(*(_QWORD *)&v26[33].eXX);
    if ( v12 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)&v12[7].eXX + 32LL);
      v25 = *(unsigned __int8 *)(v13 + 108);
      if ( a3 )
      {
        v14 = (unsigned int *)PALLOCMEM2(4 * a3, 2037147463LL, 1);
        v22 = v14;
        v15 = v14;
        if ( v14 )
        {
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v26, a2, a3, v14, a5, a6);
          v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v12[7].eXX + 16LL) + 4LL);
          if ( (v16 & 6) != 0 )
          {
            if ( (v16 & 2) != 0 && v25 )
            {
              v19 = (v10 - (unsigned __int64)v8 + 1) >> 1;
              if ( (unsigned __int64)v8 > v10 )
                v19 = 0LL;
              if ( v19 )
              {
                v20 = a5;
                do
                {
                  v21 = *(_WORD *)v15;
                  if ( *(_WORD *)v15 != 0xFFFF || v20 != 1 )
                    v21 += v25;
                  *v8 = v21;
                  ++v15;
                  ++v8;
                  ++v7;
                }
                while ( v7 < v19 );
              }
            }
            else
            {
              v17 = (v10 - (unsigned __int64)v8 + 1) >> 1;
              if ( (unsigned __int64)v8 > v10 )
                v17 = 0LL;
              if ( v17 )
              {
                do
                {
                  ++v7;
                  *v8++ = *(_WORD *)v15++;
                }
                while ( v7 < v17 );
              }
            }
            v9 = a3;
          }
          Win32FreePool(v22);
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
    XDCOBJ::RestoreAttributes((XDCOBJ *)v23);
    _InterlockedDecrement((volatile signed __int32 *)v23[0] + 3);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
  }
  return v9;
}
