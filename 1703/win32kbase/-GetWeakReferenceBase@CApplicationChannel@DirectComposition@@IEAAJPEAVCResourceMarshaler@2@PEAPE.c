/*
 * XREFs of ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C0140948
 * Callers:
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@_NPEA_N@Z @ 0x1C00163A0 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAV12@_N.c)
 *     ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0018430 (-SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C001F440 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C0143508 (-SetSourceModifier@CManipulationMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@W4So.c)
 *     ?SetInertiaCenterpoint@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@W4ScrollAxis@@PEAVCConditionalExpressionMarshaler@2@PEA_N@Z @ 0x1C0146774 (-SetInertiaCenterpoint@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChan.c)
 *     ?SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C0146BE4 (-SetRequestedPositionAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplica.c)
 *     ?SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicationChannel@2@PEAVCBaseExpressionMarshaler@2@PEA_N@Z @ 0x1C0146CA0 (-SetRequestedScaleAnimation@CInteractionTrackerMarshaler@DirectComposition@@AEAAJPEAVCApplicatio.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::GetWeakReferenceBase(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        struct DirectComposition::CWeakReferenceBase **a3)
{
  unsigned int v3; // edi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  _QWORD *v12; // rax
  struct DirectComposition::CResourceMarshaler *Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  v3 = 0;
  if ( (*((_DWORD *)a2 + 4) & 4) != 0 )
  {
    Buffer = a2;
    v14 = 0LL;
    v7 = 0LL;
    v8 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 280), &Buffer);
    if ( v8 )
      v7 = v8[1];
    v9 = *(_DWORD *)(v7 + 8);
    v10 = -1;
    if ( v9 + 1 >= v9 )
      v10 = v9 + 1;
    *(_DWORD *)(v7 + 8) = v10;
    if ( v9 + 1 < v9 || !v10 )
      return 3223191811LL;
  }
  else
  {
    v12 = Win32AllocPoolWithQuotaZInit(0x18uLL, 0x72774344u);
    v7 = (__int64)v12;
    if ( v12 )
    {
      v12[2] = a2;
      *((_DWORD *)v12 + 2) = 1;
    }
    else
    {
      v7 = 0LL;
    }
    v3 = v7 == 0 ? 0xC0000017 : 0;
    if ( v7 )
    {
      Buffer = a2;
      v14 = v7;
      if ( RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 280), &Buffer, 0x10u, 0LL) )
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
