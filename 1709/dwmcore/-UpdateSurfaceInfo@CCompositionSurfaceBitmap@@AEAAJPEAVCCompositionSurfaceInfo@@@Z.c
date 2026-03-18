/*
 * XREFs of ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180028534
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180028800 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x18015DCD0 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180028408 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800BBE58 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
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
  __int64 v12; // rdx
  char *v13; // r10
  __int64 v14; // r9
  __int64 i; // rcx
  int v16; // eax
  char *v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 88);
  v3 = 0;
  v4 = *((_QWORD *)this + 11);
  v5 = 0;
  if ( (struct CCompositionSurfaceInfo *)v4 != a2 )
  {
    if ( v4 )
    {
      v12 = *(unsigned int *)(v4 + 368);
      v13 = (char *)this + 72;
      v14 = *(_QWORD *)(v4 + 344);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v12; i = (unsigned int)(i + 1) )
      {
        if ( v13 == *(char **)(v14 + 8 * i) )
          break;
      }
      if ( (unsigned int)i < (unsigned int)v12 )
      {
        if ( (unsigned int)i < (int)v12 - 1 )
        {
          do
          {
            v12 = (unsigned int)(i + 1);
            *(_QWORD *)(v14 + 8 * i) = *(_QWORD *)(v14 + 8 * v12);
            i = v12;
          }
          while ( (unsigned int)v12 < *(_DWORD *)(v4 + 368) - 1 );
        }
        --*(_DWORD *)(v4 + 368);
      }
      ReleaseInterface<CCompositionSurfaceInfo>(v2, v12, v4, v14);
      v5 = 1;
    }
    if ( a2 )
    {
      v17 = (char *)this + 72;
      v8 = *((unsigned int *)a2 + 92);
      v9 = (_DWORD)this + 72;
      v10 = v8 + 1;
      if ( (int)v8 + 1 >= (unsigned int)v8 )
        v9 = v8 + 1;
      v3 = v10 < (unsigned int)v8 ? 0x80070216 : 0;
      if ( v10 < (unsigned int)v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)a2 + 91) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 344, 8LL, 1LL, &v17);
        v3 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)a2 + 43) + 8 * v8) = v17;
        *((_DWORD *)a2 + 92) = v9;
      }
      if ( (v3 & 0x80000000) == 0 )
      {
        *v2 = a2;
        CMILCOMBase::InternalAddRef(a2);
LABEL_11:
        CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 1);
        CResource::NotifyOnChanged(this, 0LL, 0LL);
        return v3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x493u);
    }
    if ( !v5 )
      return v3;
    goto LABEL_11;
  }
  return v3;
}
