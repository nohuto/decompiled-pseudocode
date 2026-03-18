/*
 * XREFs of ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C0052810
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00548A0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     GreDCSelectPen @ 0x1C007F750 (GreDCSelectPen.c)
 * Callees:
 *     ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C009EED0 (-bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 */

void __fastcall DC::vRealizeLineAttrs(DC *this, struct EXFORMOBJ *a2)
{
  __int64 v2; // rsi
  int v4; // r8d
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax

  v2 = *((_QWORD *)this + 19);
  if ( (*(_DWORD *)(v2 + 48) & 0x800) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)a2 + 32LL) & 0x43) == 0x43 && *(int *)(v2 + 160) <= 1
      || (v4 = *(_DWORD *)(v2 + 160)) == 0
      || DC::bOldPenNominal(this, a2, v4) )
    {
      *((_DWORD *)this + 49) = 1;
      if ( *(_QWORD *)(v2 + 176) )
      {
        *((_DWORD *)this + 51) = *(_DWORD *)(v2 + 184);
        *((_QWORD *)this + 26) = *(_QWORD *)(v2 + 176);
        *((_DWORD *)this + 46) = 8;
        goto LABEL_7;
      }
      *((_DWORD *)this + 46) = 0;
    }
    else
    {
      *((_DWORD *)this + 46) = 1;
      *((_DWORD *)this + 49) = *(_DWORD *)(v2 + 164);
    }
    *((_QWORD *)this + 26) = 0LL;
    *((_DWORD *)this + 51) = 0;
LABEL_7:
    *((_DWORD *)this + 54) = 0;
    goto LABEL_8;
  }
  v5 = *(_DWORD *)(v2 + 168);
  if ( (v5 & 0xF0000) != 0 )
  {
    *((_DWORD *)this + 46) = 1;
    v6 = *(_DWORD *)(v2 + 164);
  }
  else
  {
    v8 = 2;
    if ( (v5 & 0xF) != 8 )
      v8 = 0;
    *((_DWORD *)this + 46) = v8;
    v6 = *(_DWORD *)(v2 + 160);
  }
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 49) = v6;
  *((_DWORD *)this + 51) = *(_DWORD *)(v2 + 184);
  v7 = *(_QWORD *)(v2 + 176);
  *((_QWORD *)this + 26) = v7;
  if ( v7 )
    *((_DWORD *)this + 46) |= 8u;
LABEL_8:
  *((_DWORD *)this + 47) = *(unsigned __int8 *)(v2 + 188);
  *((_DWORD *)this + 48) = *(unsigned __int8 *)(v2 + 189);
}
