/*
 * XREFs of ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C002D0F0
 * Callers:
 *     ?vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0003E80 (-vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0015C30 (-vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00E1CE0 (-vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0128010 (-vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C029BBF0 (-vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C029C0E0 (-vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C029C3F0 (-vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AE580 (-vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AE7A0 (-vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AEB60 (-vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AED90 (-vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AF120 (-vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AF3B0 (-vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AF740 (-vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XCLIPOBJ::vFindScan(XCLIPOBJ *this, struct _RECTL *a2, LONG a3)
{
  _DWORD *v3; // r9
  LONG v5; // ebx
  LONG v6; // edx
  LONG v7; // ecx
  LONG v8; // eax
  LONG v9; // edx
  LONG v10; // ecx

  v3 = (_DWORD *)*((_QWORD *)this + 10);
  if ( a3 < v3[1] )
  {
    do
    {
      v3 = (_DWORD *)((char *)v3 - (unsigned int)(4 * *(v3 - 1) + 16));
      *((_QWORD *)this + 10) = v3;
      v8 = v3[1];
    }
    while ( a3 < v8 );
    v9 = *((_DWORD *)this + 2);
    v10 = *((_DWORD *)this + 4);
    if ( v8 > v9 )
      v9 = v3[1];
    if ( v3[2] < v10 )
      v10 = v3[2];
    a2->left = a2->right;
    a2->bottom = v10;
    if ( v9 >= v10 )
      v9 = 0x80000000;
    a2->top = v9;
    if ( v9 == 0x80000000 )
      a2->bottom = 0x80000000;
  }
  else if ( a3 >= v3[2] )
  {
    do
    {
      v3 = (_DWORD *)((char *)v3 + (unsigned int)(4 * *v3 + 16));
      *((_QWORD *)this + 10) = v3;
      v5 = v3[2];
    }
    while ( a3 >= v5 );
    v6 = *((_DWORD *)this + 2);
    v7 = *((_DWORD *)this + 4);
    if ( v3[1] > v6 )
      v6 = v3[1];
    a2->left = a2->right;
    if ( v5 < v7 )
      v7 = v5;
    if ( v6 >= v7 )
      v7 = 0x7FFFFFFF;
    a2->bottom = v7;
    if ( v7 == 0x7FFFFFFF )
      v6 = 0x7FFFFFFF;
    a2->top = v6;
  }
}
