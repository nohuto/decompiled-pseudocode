/*
 * XREFs of GreGetCharWidthInfo @ 0x1C0106EF8
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C0106EA0 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

__int64 __fastcall GreGetCharWidthInfo(HDC a1, FLOATL *a2)
{
  unsigned int v3; // edi
  int v4; // eax
  struct _FD_XFORM *v5; // rbx
  FLOATL eXX; // eax
  float eYY; // xmm1_4
  int v9; // eax
  int v10; // eax
  _QWORD v11[2]; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+60h] [rbp+30h] BYREF
  struct _FD_XFORM *v13; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v13 = 0LL;
    v4 = RFONTOBJ::bInit(&v13, (struct XDCOBJ *)v11, 0, 2u);
    v5 = v13;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)&v13[33].eXX);
    if ( v5 && *(_QWORD *)(*(_QWORD *)&v5[5].eXX + 3096LL) )
    {
      eXX = v5[44].eXX;
      if ( (*(_DWORD *)(*(_QWORD *)(v11[0] + 80LL) + 352LL) & 0x802) == 0x802 )
      {
        *a2 = eXX;
        a2[1] = v5[44].eXY;
        a2[2] = v5[44].eYX;
      }
      else
      {
        eYY = v5[42].eYY;
        v12 = 0;
        bFToL((float)(16 * LODWORD(eXX)) * eYY, &v12, 0);
        *(_DWORD *)a2 = v12;
        v9 = 16 * LODWORD(v5[44].eXY);
        v12 = 0;
        bFToL((float)v9 * eYY, &v12, 0);
        *((_DWORD *)a2 + 1) = v12;
        v10 = 16 * LODWORD(v5[44].eYX);
        v12 = 0;
        bFToL((float)v10 * eYY, &v12, 0);
        *((_DWORD *)a2 + 2) = v12;
      }
      v3 = 1;
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v11);
  return v3;
}
