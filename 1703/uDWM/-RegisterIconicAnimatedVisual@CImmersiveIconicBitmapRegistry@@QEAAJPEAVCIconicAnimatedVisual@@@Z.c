/*
 * XREFs of ?RegisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x18007B984
 * Callers:
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x180092E80 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::RegisterIconicAnimatedVisual(
        CImmersiveIconicBitmapRegistry *this,
        struct CIconicAnimatedVisual *a2)
{
  unsigned int v2; // edx
  char *v3; // r10
  __int64 v4; // rcx
  unsigned int v5; // eax
  int v6; // ebx
  int v7; // eax
  unsigned int v9; // [rsp+40h] [rbp+8h]
  struct CIconicAnimatedVisual *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = v9;
  v3 = (char *)this + 48;
  v4 = *((unsigned int *)this + 18);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    v2 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 >= (unsigned int)v4 )
  {
    if ( v2 > *((_DWORD *)v3 + 5) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3, 8u, 1, &v10);
      v6 = v7;
      if ( v7 >= 0 )
      {
LABEL_11:
        _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
        return (unsigned int)v6;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v3 + 8 * v4) = v10;
      *((_DWORD *)v3 + 6) = v2;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xB5u);
  }
  if ( v6 >= 0 )
    goto LABEL_11;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x220u);
  return (unsigned int)v6;
}
