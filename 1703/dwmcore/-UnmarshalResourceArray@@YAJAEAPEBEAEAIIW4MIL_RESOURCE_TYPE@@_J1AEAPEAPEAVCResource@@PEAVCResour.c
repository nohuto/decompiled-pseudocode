/*
 * XREFs of ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800C06C8
 * Callers:
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x180004384 (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800AF078 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800C9C30 (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGRO.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x180128700 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x180128994 (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x180128A80 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x18012F380 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801746B4 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1801748B0 (-ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall UnmarshalResourceArray(
        unsigned int **a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        void **a7,
        __int64 a8,
        char a9)
{
  int v9; // ebx
  unsigned int v12; // edi
  SIZE_T v14; // r8
  LPVOID v15; // rax
  unsigned int *v16; // rsi
  unsigned int v17; // r12d
  _QWORD *v18; // rbx
  unsigned int v19; // edx
  __int64 Resource; // rax
  unsigned __int64 v21; // rax
  char *v22; // rcx
  unsigned __int64 v23; // rax
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-38h]
  unsigned int v26; // [rsp+78h] [rbp+20h]

  v26 = a4;
  v9 = 0;
  *a6 = 0;
  *a7 = 0LL;
  if ( a3 > *a2 || (a3 & 3) != 0 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x53u);
LABEL_20:
    if ( v9 >= 0 )
      return (unsigned int)v9;
    goto LABEL_29;
  }
  v12 = a3 >> 2;
  *a6 = a3 >> 2;
  if ( !(a3 >> 2) )
    return (unsigned int)v9;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v12 <= 8 )
  {
    v9 = -2147024809;
  }
  else
  {
    v14 = 8LL * v12;
    if ( !v14 )
      v14 = 1LL;
    v15 = HeapAlloc(WPF::g_processHeap, 0, v14);
    a4 = v26;
    *a7 = v15;
    if ( !v15 )
      v9 = -2147024882;
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x6Au);
    goto LABEL_20;
  }
  v16 = *a1;
  v17 = 0;
  v18 = *a7;
  while ( 1 )
  {
    v19 = *v16;
    Resource = 0LL;
    ++v16;
    if ( v19 )
    {
      Resource = CResourceTable::GetResource(a8, v19, a4);
      if ( !Resource )
      {
        v25 = 130;
        goto LABEL_26;
      }
    }
    else if ( !a9 )
    {
      v25 = 134;
LABEL_26:
      v24 = -2147024890;
      goto LABEL_28;
    }
    *v18 = Resource;
    ++v17;
    ++v18;
    if ( v17 >= v12 )
      break;
    a4 = v26;
  }
  if ( v16 < *a1 )
  {
    v24 = -2147024362;
    v25 = 154;
  }
  else
  {
    v21 = *a2;
    v22 = (char *)((char *)v16 - (char *)*a1);
    if ( v21 < (unsigned __int64)v22 )
    {
      v24 = -2147024362;
      v25 = 155;
    }
    else
    {
      v23 = v21 - (_QWORD)v22;
      if ( v23 <= 0xFFFFFFFF )
      {
        *a2 = v23;
        v9 = 0;
        *a1 = v16;
        goto LABEL_20;
      }
      *a2 = -1;
      v24 = -2147024362;
      v25 = 156;
    }
  }
LABEL_28:
  v9 = v24;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, v25);
LABEL_29:
  if ( *a7 )
  {
    WPF::ProcessHeapImpl::Free(*a7);
    *a7 = 0LL;
  }
  *a6 = 0;
  return (unsigned int)v9;
}
