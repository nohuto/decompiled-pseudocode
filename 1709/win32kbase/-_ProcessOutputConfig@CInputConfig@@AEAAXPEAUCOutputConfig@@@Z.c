/*
 * XREFs of ?_ProcessOutputConfig@CInputConfig@@AEAAXPEAUCOutputConfig@@@Z @ 0x1C0061130
 * Callers:
 *     ?_OnNewConfiguration@CInputConfig@@AEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C0061268 (-_OnNewConfiguration@CInputConfig@@AEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputConfig::_ProcessOutputConfig(CInputConfig *this, struct COutputConfig *a2)
{
  int v2; // r9d
  signed int *v3; // r8
  __int64 v4; // rsi
  signed int v5; // r10d
  signed int v6; // r11d
  signed int v7; // ebx
  signed int v8; // edi
  signed int *v9; // rcx
  signed int *v10; // rax
  __int128 v11; // [rsp+0h] [rbp-18h]

  v2 = *((_DWORD *)a2 + 3);
  v3 = 0LL;
  v11 = 0uLL;
  v4 = 0LL;
  if ( v2 )
  {
    v5 = (unsigned __int128)0LL >> 96;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = (signed int *)(*((_QWORD *)a2 + 2) + 80 * v4);
      if ( v8 >= *v9 )
        v8 = *v9;
      if ( v7 >= v9[1] )
        v7 = v9[1];
      if ( v6 <= v9[2] )
        v6 = v9[2];
      if ( v5 <= v9[3] )
        v5 = v9[3];
      v4 = (unsigned int)(v4 + 1);
      if ( (v9[4] & 1) == 0 )
        v9 = v3;
      v3 = v9;
    }
    while ( (_DWORD)v4 != v2 );
    *((_QWORD *)&v11 + 1) = __PAIR64__(v5, v6);
    *(_QWORD *)&v11 = __PAIR64__(v7, v8);
  }
  *((_DWORD *)a2 + 10) = 0;
  v10 = (signed int *)((char *)a2 + 24);
  *(_OWORD *)((char *)a2 + 24) = v11;
  if ( v3 )
    v10 = v3;
  *(_OWORD *)((char *)a2 + 104) = *(_OWORD *)v10;
  *(_OWORD *)((char *)a2 + 120) = *((_OWORD *)v10 + 1);
  *(_OWORD *)((char *)a2 + 136) = *((_OWORD *)v10 + 2);
  *(_OWORD *)((char *)a2 + 152) = *((_OWORD *)v10 + 3);
  *(_OWORD *)((char *)a2 + 168) = *((_OWORD *)v10 + 4);
}
