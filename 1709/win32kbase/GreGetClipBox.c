/*
 * XREFs of GreGetClipBox @ 0x1C0055B60
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0046E90 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0047070 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C0053114 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C0053E24 (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00548A0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     bCvtPts1 @ 0x1C007DFE8 (bCvtPts1.c)
 */

__int64 __fastcall GreGetClipBox(struct HOBJ__ *a1, int *a2, int a3)
{
  unsigned int v5; // edi
  DC *v6; // r10
  struct REGION *v7; // rax
  DC *v8; // r10
  struct REGION *v9; // rsi
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  _DWORD *v13; // rax
  __int64 v14; // rcx
  DC *v16; // rax
  int v17; // eax
  int v18; // ecx
  DC *v19[2]; // [rsp+28h] [rbp-29h] BYREF
  __int64 v20; // [rsp+38h] [rbp-19h] BYREF
  int v21; // [rsp+40h] [rbp-11h]
  int v22; // [rsp+44h] [rbp-Dh]
  _BYTE v23[32]; // [rsp+48h] [rbp-9h] BYREF
  __int64 v24; // [rsp+68h] [rbp+17h]
  __int64 v25; // [rsp+70h] [rbp+1Fh]

  v19[0] = 0LL;
  v19[1] = 0LL;
  v5 = 0;
  XDCOBJ::vLock((XDCOBJ *)v19, a1);
  if ( v19[0] )
  {
    v5 = 1;
    v24 = 0LL;
    v25 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, v19, 1);
    if ( (v23[24] & 1) != 0 )
    {
      if ( DC::prgnRao(v19[0]) )
        v7 = DC::prgnRao(v6);
      else
        v7 = DC::prgnVisSnap(v6);
      v9 = v7;
      *(_OWORD *)a2 = *(_OWORD *)((char *)v7 + 88);
      v10 = a2[2];
      if ( *a2 >= v10 || (v11 = a2[1], v12 = a2[3], v11 >= v12) )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
      }
      else
      {
        v13 = (_DWORD *)((char *)v8 + 1440);
        if ( (*((_DWORD *)v8 + 10) & 1) == 0 )
          v13 = (_DWORD *)((char *)v8 + 1432);
        *a2 -= *v13;
        a2[2] = v10 - *v13;
        a2[1] = v11 - v13[1];
        a2[3] = v12 - v13[1];
        if ( a3 )
        {
          v14 = *((_QWORD *)v8 + 10);
          v21 = *(_DWORD *)(v14 + 68);
          v22 = *(_DWORD *)(v14 + 312) & 1;
          EXFORMOBJ::vInit((EXFORMOBJ *)&v20, v19, 1026, 0x80000000);
          if ( v20 )
          {
            if ( (*(_BYTE *)(v20 + 32) & 0x43) != 0x43 )
              bCvtPts1(v20, a2, 2LL);
            if ( v22 )
            {
              ++*a2;
              ++a2[2];
            }
          }
          v8 = v19[0];
        }
        if ( (*(_DWORD *)(*((_QWORD *)v8 + 10) + 312LL) & 1) != 0 )
        {
          v17 = *a2;
          v18 = a2[2];
          if ( *a2 > v18 )
          {
            *a2 = v18;
            a2[2] = v17;
          }
        }
      }
      if ( *((_DWORD *)v9 + 21) != 1 )
        v5 = (*((_DWORD *)v9 + 20) > 0xA0u) + 2;
    }
    else
    {
      v16 = v19[0];
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
      if ( *((_QWORD *)v16 + 64) )
        v5 = (*((_DWORD *)v16 + 9) & 0x5000) == 4096;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
    if ( v19[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v19);
  }
  return v5;
}
