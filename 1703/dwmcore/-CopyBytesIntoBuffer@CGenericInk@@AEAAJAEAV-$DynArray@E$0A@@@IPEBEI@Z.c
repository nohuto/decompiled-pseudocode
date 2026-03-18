/*
 * XREFs of ?CopyBytesIntoBuffer@CGenericInk@@AEAAJAEAV?$DynArray@E$0A@@@IPEBEI@Z @ 0x180170060
 * Callers:
 *     ?ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_PROPERTIESUPDATE@@PEBXI@Z @ 0x18012E2C4 (-ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_PROPERTIESU.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x18012E434 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CGenericInk::CopyBytesIntoBuffer(__int64 a1, __int64 a2, int a3, char *a4, unsigned int a5)
{
  unsigned int v6; // ebx
  int v7; // r8d
  unsigned int v10; // edi
  int v11; // eax
  char v12; // al
  __int64 v13; // rdx

  v6 = 0;
  v7 = a5 + a3 - *(_DWORD *)(a2 + 24);
  v10 = 0;
  if ( v7 > 0 )
  {
    v11 = DynArrayImpl<0>::Grow(a2, 1u, v7, 1, 0LL);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x183u);
      return v10;
    }
    *(_DWORD *)(a2 + 24) = a3 + a5;
  }
  if ( a5 )
  {
    do
    {
      v12 = *a4;
      v13 = v6 + a3;
      ++v6;
      ++a4;
      *(_BYTE *)(v13 + *(_QWORD *)a2) = v12;
    }
    while ( v6 < a5 );
  }
  return v10;
}
