/*
 * XREFs of ?UnmarshalResourceArray@CResource@@KAJPEAPEBEPEAIIW4MIL_RESOURCE_TYPE@@_J1PEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800B5D70
 * Callers:
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x18006A540 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x1800B44B8 (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800C0220 (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGRO.c)
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801785EC (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18017A320 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x18017A51C (-ProcessAppend@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x18017ABE8 (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18017ACD4 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x18017B824 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CResource::UnmarshalResourceArray(
        unsigned int **a1,
        int *a2,
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
  SIZE_T v13; // r8
  LPVOID v14; // rax
  unsigned int *v15; // rsi
  unsigned int v16; // ebp
  _QWORD *v17; // rbx
  unsigned int v18; // edx
  __int64 Resource; // rax
  unsigned __int64 v20; // rcx
  char *v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // eax
  DWORD v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-38h]
  unsigned int v27; // [rsp+78h] [rbp+20h]

  v27 = a4;
  v9 = 0;
  *a6 = 0;
  *a7 = 0LL;
  if ( a3 > *a2 || (a3 & 3) != 0 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x44u);
  }
  else
  {
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
      v13 = 8LL * v12;
      if ( !v13 )
        v13 = 1LL;
      v14 = HeapAlloc(WPF::g_processHeap, 0, v13);
      a4 = v27;
      *a7 = v14;
      if ( !v14 )
        v9 = -2147024882;
    }
    if ( v9 >= 0 )
    {
      v15 = *a1;
      v16 = 0;
      v17 = *a7;
      while ( 1 )
      {
        v18 = *v15;
        Resource = 0LL;
        ++v15;
        if ( v18 )
        {
          Resource = CResourceTable::GetResource(a8, v18, a4);
          if ( !Resource )
          {
            v26 = 93;
LABEL_27:
            v25 = -2147024890;
            goto LABEL_29;
          }
        }
        else if ( !a9 )
        {
          v26 = 97;
          goto LABEL_27;
        }
        *v17 = Resource;
        ++v16;
        ++v17;
        if ( v16 >= v12 )
        {
          if ( v15 < *a1 )
          {
            v25 = -2147024362;
            v26 = 115;
          }
          else
          {
            v20 = (unsigned int)*a2;
            v21 = (char *)((char *)v15 - (char *)*a1);
            if ( v20 >= (unsigned __int64)v21 )
            {
              v22 = v20 - (_QWORD)v21;
              v23 = -1;
              if ( v22 <= 0xFFFFFFFF )
                v23 = v22;
              *a2 = v23;
              v9 = v22 > 0xFFFFFFFF ? 0x80070216 : 0;
              if ( v22 > 0xFFFFFFFF )
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x75u);
              else
                *a1 = v15;
              goto LABEL_21;
            }
            v25 = -2147024362;
            v26 = 116;
          }
LABEL_29:
          v9 = v25;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, v26);
          goto LABEL_30;
        }
        a4 = v27;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x50u);
  }
LABEL_21:
  if ( v9 < 0 )
  {
LABEL_30:
    if ( *a7 )
    {
      WPF::ProcessHeapImpl::Free(*a7);
      *a7 = 0LL;
    }
    *a6 = 0;
  }
  return (unsigned int)v9;
}
