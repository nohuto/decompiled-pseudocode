/*
 * XREFs of ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800BF2F0
 * Callers:
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18001977C (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800B337C (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800C82D0 (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGRO.c)
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801A975C (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801AA790 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1801AA988 (-ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x1801AB050 (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801AB13C (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1801ABB38 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CResource::UnmarshalResourceArray(
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
  signed int v9; // ebx
  unsigned int v12; // edi
  unsigned __int64 v13; // rbp
  SIZE_T v14; // r8
  __int64 *v15; // rax
  __int64 *v16; // r14
  unsigned int *v17; // rsi
  unsigned int v18; // ebx
  unsigned int v19; // edx
  __int64 Resource; // rax
  unsigned int *v21; // rcx
  unsigned __int64 v22; // rax
  int v23; // r9d
  unsigned __int64 v24; // rcx
  bool v25; // cf
  unsigned int v27; // [rsp+20h] [rbp-38h]
  unsigned int v28; // [rsp+78h] [rbp+20h]

  v28 = a4;
  v9 = 0;
  *a6 = 0;
  *a7 = 0LL;
  if ( a3 > *a2 || (a3 & 3) != 0 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x44u);
  }
  else
  {
    v12 = a3 >> 2;
    *a6 = a3 >> 2;
    if ( !(a3 >> 2) )
      return (unsigned int)v9;
    v13 = -1LL;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v12 <= 8 )
    {
      v9 = -2147024809;
      v16 = 0LL;
    }
    else
    {
      v14 = 8LL * v12;
      if ( !v14 )
        v14 = 1LL;
      v15 = (__int64 *)HeapAlloc(WPF::g_processHeap, 0, v14);
      a4 = v28;
      v16 = v15;
      *a7 = v15;
      if ( !v15 )
        v9 = -2147024882;
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x50u);
    }
    else
    {
      v17 = *a1;
      v18 = 0;
      while ( 1 )
      {
        v19 = *v17;
        Resource = 0LL;
        ++v17;
        if ( v19 )
        {
          Resource = CResourceTable::GetResource(a8, v19, a4);
          if ( !Resource )
          {
            v27 = 93;
LABEL_31:
            v23 = -2147024890;
LABEL_33:
            v9 = v23;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, v27);
            goto LABEL_34;
          }
        }
        else if ( !a9 )
        {
          v27 = 97;
          goto LABEL_31;
        }
        *v16 = Resource;
        ++v18;
        ++v16;
        if ( v18 >= v12 )
          break;
        a4 = v28;
      }
      v21 = *a1;
      if ( v17 < v21 )
        v22 = -1LL;
      else
        v22 = (char *)v17 - (char *)v21;
      v23 = -2147024362;
      v9 = v17 < v21 ? 0x80070216 : 0;
      if ( v17 < v21 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x73u);
      }
      else
      {
        v24 = *a2;
        v25 = v24 < v22;
        if ( v24 >= v22 )
        {
          v13 = (unsigned int)v24 - v22;
          v25 = v24 < v22;
        }
        v9 = v25 ? 0x80070216 : 0;
        if ( v24 >= v22 )
        {
          if ( v13 <= 0xFFFFFFFF )
          {
            *a2 = v13;
            v9 = 0;
            *a1 = v17;
            goto LABEL_24;
          }
          *a2 = -1;
          v27 = 117;
          goto LABEL_33;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x74u);
      }
    }
  }
LABEL_24:
  if ( v9 < 0 )
  {
LABEL_34:
    if ( *a7 )
    {
      operator delete(*a7);
      *a7 = 0LL;
    }
    *a6 = 0;
  }
  return (unsigned int)v9;
}
