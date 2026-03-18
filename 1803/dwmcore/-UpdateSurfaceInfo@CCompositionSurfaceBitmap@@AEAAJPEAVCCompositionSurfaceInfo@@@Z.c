/*
 * XREFs of ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180047494
 * Callers:
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180047610 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x180186C58 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18004735C (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C3EDC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::UpdateSurfaceInfo(
        CCompositionSurfaceBitmap *this,
        struct CCompositionSurfaceInfo *a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // r15
  __int64 v4; // r8
  unsigned int v7; // edi
  char v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned int v13; // edx
  char *v14; // r10
  __int64 v15; // r9
  __int64 i; // rcx
  int v17; // eax
  char *v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = (_QWORD *)((char *)this + 88);
  v4 = *((_QWORD *)this + 11);
  v7 = 0;
  v8 = 0;
  if ( (struct CCompositionSurfaceInfo *)v4 != a2 )
  {
    if ( v4 )
    {
      v13 = *(_DWORD *)(v4 + 384);
      v14 = (char *)this + 72;
      v15 = *(_QWORD *)(v4 + 360);
      for ( i = 0LL; (unsigned int)i < v13; i = (unsigned int)(i + 1) )
      {
        if ( v14 == *(char **)(v15 + 8 * i) )
          break;
      }
      if ( (unsigned int)i < v13 )
      {
        while ( (unsigned int)i < v13 - 1 )
        {
          *(_QWORD *)(v15 + 8 * i) = *(_QWORD *)(v15 + 8LL * (unsigned int)(i + 1));
          i = (unsigned int)(i + 1);
          v13 = *(_DWORD *)(v4 + 384);
        }
        *(_DWORD *)(v4 + 384) = v13 - 1;
      }
      ReleaseInterface<CCompositionSurfaceInfo>(v3);
      v8 = 1;
    }
    if ( a2 )
    {
      v18 = (char *)this + 72;
      v9 = *((_DWORD *)a2 + 96);
      v10 = v9 + 1;
      v7 = v9 + 1 < v9 ? 0x80070216 : 0;
      if ( v9 + 1 < v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
      }
      else if ( v10 > *((_DWORD *)a2 + 95) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 360, 8LL, 1LL, &v18);
        v7 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)a2 + 45) + 8LL * v9) = v18;
        *((_DWORD *)a2 + 96) = v10;
      }
      if ( (v7 & 0x80000000) == 0 )
      {
        v11 = *((_QWORD *)this + 6);
        if ( v11 )
          v2 = *(_QWORD *)(v11 + 40);
        *((_QWORD *)a2 + 44) = v2;
        *v3 = a2;
        CMILCOMBase::InternalAddRef(a2);
LABEL_11:
        CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 1);
        CResource::NotifyOnChanged(this, 0LL, 0LL);
        return v7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x483u);
    }
    if ( !v8 )
      return v7;
    goto LABEL_11;
  }
  return v7;
}
