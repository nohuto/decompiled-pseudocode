/*
 * XREFs of ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18019AF98
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180199450 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x1801996CC (--$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFla.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180199EA4 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 */

__int64 __fastcall CInteractionProcessor::ComputeHandledInteractionsFromLocal(
        __int64 a1,
        __int64 a2,
        const struct D2DVector3 *a3,
        struct D2DMatrix *a4)
{
  int v8; // ecx
  int v9; // ecx
  _OWORD *v10; // rax
  _BYTE v12[8]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+38h] [rbp-30h]

  v13 = 0;
  *(__m512 *)a4 = zmmword_18020FF90;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a2 + 4) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_DWORD *)(a2 + 12) = 0;
  v8 = *(_DWORD *)(a1 + 596) - 1;
  if ( !v8 )
  {
    v10 = (_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                      a1,
                      (__int64)v12,
                      (__int64 *)a1,
                      a3,
                      a4);
    goto LABEL_8;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = (_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                      a1,
                      (__int64)v12,
                      (__int64 *)(a1 + 160),
                      a3,
                      a4);
    goto LABEL_8;
  }
  if ( v9 == 1 && CInteractionProcessor::AllowPenGestureDetection((CInteractionProcessor *)a1) )
  {
    v10 = (_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                      a1,
                      (__int64)v12,
                      (__int64 *)(a1 + 320),
                      a3,
                      a4);
LABEL_8:
    *(_OWORD *)a2 = *v10;
  }
  return a2;
}
