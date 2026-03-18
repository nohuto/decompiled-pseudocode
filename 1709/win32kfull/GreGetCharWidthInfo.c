/*
 * XREFs of GreGetCharWidthInfo @ 0x1C0111118
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C01110C0 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 */

__int64 __fastcall GreGetCharWidthInfo(HDC a1, unsigned int *a2)
{
  unsigned int v3; // esi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _FD_XFORM *v7; // rbx
  FLOATL eXX; // eax
  float eYY; // xmm1_4
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+60h] [rbp+30h] BYREF
  struct _FD_XFORM *v15; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v15 = 0LL;
    v4 = RFONTOBJ::bInit(&v15, (struct XDCOBJ *)v13, 0, 2u);
    v7 = v15;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)&v15[33].eXX);
    if ( v7 && *(_QWORD *)(*(_QWORD *)&v7[5].eXX + 3096LL) )
    {
      eXX = v7[44].eXX;
      if ( (*(_DWORD *)(*(_QWORD *)(v13[0] + 80LL) + 352LL) & 0x802) == 0x802 )
      {
        *(FLOATL *)a2 = eXX;
        a2[1] = LODWORD(v7[44].eXY);
        a2[2] = LODWORD(v7[44].eYX);
      }
      else
      {
        eYY = v7[42].eYY;
        v14 = 0;
        bFToL((float)(16 * LODWORD(eXX)) * eYY, (int *)&v14, 0);
        v11 = v14;
        v14 = 0;
        *a2 = v11;
        bFToL((float)(16 * LODWORD(v7[44].eXY)) * eYY, (int *)&v14, 0);
        v12 = v14;
        v14 = 0;
        a2[1] = v12;
        bFToL((float)(16 * LODWORD(v7[44].eYX)) * eYY, (int *)&v14, 0);
        v6 = v14;
        a2[2] = v14;
      }
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15, v5, v6);
    if ( v13[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  }
  return v3;
}
