/*
 * XREFs of ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1800372E0
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180037E00 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x180164248 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180037200 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C45E8 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::UpdateSurfaceInfo(
        CCompositionSurfaceBitmap *this,
        struct CCompositionSurfaceInfo *a2)
{
  _QWORD *v2; // r14
  unsigned int v3; // ebx
  __int64 v4; // r8
  char v5; // bp
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int v12; // edx
  char *v13; // r10
  __int64 v14; // r9
  __int64 i; // rcx
  int v16; // eax
  __int64 v17; // rdx
  char *v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 464);
  v3 = 0;
  v4 = *((_QWORD *)this + 58);
  v5 = 0;
  if ( (struct CCompositionSurfaceInfo *)v4 != a2 )
  {
    if ( v4 )
    {
      v12 = *(_DWORD *)(v4 + 368);
      v13 = (char *)this + 72;
      v14 = *(_QWORD *)(v4 + 344);
      for ( i = 0LL; (unsigned int)i < v12; i = (unsigned int)(i + 1) )
      {
        if ( v13 == *(char **)(v14 + 8 * i) )
          break;
      }
      if ( (unsigned int)i < v12 )
      {
        if ( (unsigned int)i < v12 - 1 )
        {
          do
          {
            v17 = (unsigned int)(i + 1);
            *(_QWORD *)(v14 + 8 * i) = *(_QWORD *)(v14 + 8 * v17);
            i = v17;
          }
          while ( (unsigned int)v17 < *(_DWORD *)(v4 + 368) - 1 );
        }
        --*(_DWORD *)(v4 + 368);
      }
      ReleaseInterface<CCompositionSurfaceInfo>(v2);
      v5 = 1;
    }
    if ( a2 )
    {
      v18 = (char *)this + 72;
      v8 = *((unsigned int *)a2 + 92);
      v9 = (_DWORD)this + 72;
      v10 = v8 + 1;
      if ( (int)v8 + 1 >= (unsigned int)v8 )
        v9 = v8 + 1;
      v3 = v10 < (unsigned int)v8 ? 0x80070216 : 0;
      if ( v10 < (unsigned int)v8 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)a2 + 91) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 344, 8LL, 1LL, &v18);
        v3 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)a2 + 43) + 8 * v8) = v18;
        *((_DWORD *)a2 + 92) = v9;
      }
      if ( (v3 & 0x80000000) == 0 )
      {
        *v2 = a2;
        CBitmapOfDeviceBitmaps::AddRef(a2);
LABEL_11:
        CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 1);
        CResource::NotifyOnChanged(this, 0LL, 0LL);
        return v3;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x4A4u);
    }
    if ( !v5 )
      return v3;
    goto LABEL_11;
  }
  return v3;
}
