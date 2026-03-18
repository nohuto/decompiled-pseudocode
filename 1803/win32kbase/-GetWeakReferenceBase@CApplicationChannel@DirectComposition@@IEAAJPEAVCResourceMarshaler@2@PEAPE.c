/*
 * XREFs of ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C01464D4
 * Callers:
 *     ?SetVisual@CVisualReferenceControllerMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCVisualMarshaler@2@PEA_N@Z @ 0x1C0007DA4 (-SetVisual@CVisualReferenceControllerMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2.c)
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0009970 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000A090 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C01499BC (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4So.c)
 *     ?SetInertiaCenterpoint@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@W4ScrollAxis@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C014E6B4 (-SetInertiaCenterpoint@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChan.c)
 *     ?SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C014EB40 (-SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplica.c)
 *     ?SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C014EBFC (-SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicatio.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetWeakReferenceBase(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        struct DirectComposition::CWeakReferenceBase **a3)
{
  unsigned int v3; // edi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  unsigned int v9; // r8d
  int v10; // edx
  int v11; // eax
  _QWORD *v13; // rax
  struct DirectComposition::CResourceMarshaler *Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]

  v3 = 0;
  if ( (*((_DWORD *)a2 + 4) & 4) != 0 )
  {
    Buffer = a2;
    v15 = 0LL;
    v7 = 0LL;
    v8 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 264), &Buffer);
    if ( v8 )
      v7 = v8[1];
    v9 = *(_DWORD *)(v7 + 8);
    v10 = -1;
    if ( v9 + 1 >= v9 )
      v10 = v9 + 1;
    v11 = 0;
    *(_DWORD *)(v7 + 8) = v10;
    if ( v9 + 1 >= v9 )
      v11 = v10;
    if ( !v11 )
      return 3223191811LL;
  }
  else
  {
    v13 = Win32AllocPoolWithQuotaZInit(0x18uLL, 0x72774344u);
    v7 = (__int64)v13;
    if ( v13 )
    {
      v13[2] = a2;
      *((_DWORD *)v13 + 2) = 1;
    }
    else
    {
      v7 = 0LL;
    }
    v3 = v7 == 0 ? 0xC0000017 : 0;
    if ( v7 )
    {
      Buffer = a2;
      v15 = v7;
      if ( RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 264), &Buffer, 0x10u, 0LL) )
      {
        v3 = 0;
        *((_DWORD *)a2 + 4) |= 4u;
      }
      else
      {
        v3 = -1073741801;
        Win32FreePool(v7);
        v7 = 0LL;
      }
    }
  }
  *a3 = (struct DirectComposition::CWeakReferenceBase *)v7;
  return v3;
}
