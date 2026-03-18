/*
 * XREFs of ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801D274C
 * Callers:
 *     ?CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x180191B20 (-CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractio.c)
 *     ?CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801DA110 (-CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUIntera.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x18002928C (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenInteractionConfigurationPrimitive@@I@Z @ 0x1800C30D0 (-AddMultipleAndSet@-$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenIn.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmMousewheelInteractionConfigurationPrimitive@@I@Z @ 0x1800C62BC (-AddMultipleAndSet@-$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUD.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x1801D14D0 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x1801D2688 (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801D26AC (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions(
        CInteractionProcessor *this,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _DWORD *a8)
{
  int v12; // esi
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // rax
  _DWORD *v16; // rdi
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // r9d
  int v22; // eax
  int v23; // r11d
  __int64 v24; // rcx
  unsigned int v25; // r9d
  __int64 v26; // rcx
  unsigned int v27; // r9d
  __int64 v28; // rcx
  unsigned int v29; // r8d
  int v30; // r9d
  int v31; // ebx
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // r10
  unsigned int v35; // eax
  unsigned int v36; // edx
  int v37; // eax
  _DWORD *v39; // [rsp+40h] [rbp-41h] BYREF
  int v40; // [rsp+48h] [rbp-39h] BYREF
  int v41; // [rsp+4Ch] [rbp-35h] BYREF
  __int64 v42; // [rsp+50h] [rbp-31h]
  _DWORD *v43; // [rsp+58h] [rbp-29h]
  int v44; // [rsp+60h] [rbp-21h] BYREF
  int v45; // [rsp+64h] [rbp-1Dh]
  int v46; // [rsp+68h] [rbp-19h]

  *a4 = 0;
  v42 = a7;
  v12 = 0;
  *a6 = 0;
  v43 = a8;
  *a8 = 0;
  v13 = *((_DWORD *)this + 197);
  switch ( v13 )
  {
    case 2:
      v14 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
              this,
              (char *)this,
              a2,
              a3,
              a4,
              a5,
              a6);
      break;
    case 3:
      v14 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
              this,
              (char *)this + 160,
              a2,
              a3,
              a4,
              a5,
              a6);
      break;
    case 4:
      if ( !CInteractionProcessor::AllowPenGestureDetection(this) )
        goto LABEL_11;
      v14 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
              this,
              (char *)this + 320,
              a2,
              a3,
              a4,
              a5,
              a6);
      break;
    case 6:
      v14 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
              this,
              (char *)this + 480,
              a2,
              a3,
              a4,
              a5,
              a6);
      break;
    default:
      goto LABEL_11;
  }
  v12 = v14;
  if ( v14 < 0 )
    return (unsigned int)v12;
LABEL_11:
  if ( (*((_BYTE *)this + 1264) & 3) == 0 )
    return (unsigned int)v12;
  v15 = operator new(0x88uLL);
  v16 = v15;
  if ( v15 )
  {
    memset_0(v15, 0, 0x88uLL);
    *((_QWORD *)v16 + 3) = 0LL;
    *((_QWORD *)v16 + 1) = 0LL;
    *((_QWORD *)v16 + 2) = 0LL;
    v16[8] = 0;
    *((_QWORD *)v16 + 7) = 0LL;
    *((_QWORD *)v16 + 5) = 0LL;
    *((_QWORD *)v16 + 6) = 0LL;
    v16[16] = 0;
    *((_QWORD *)v16 + 11) = 0LL;
    *((_QWORD *)v16 + 9) = 0LL;
    *((_QWORD *)v16 + 10) = 0LL;
    v16[24] = 0;
    *((_QWORD *)v16 + 15) = 0LL;
    *((_QWORD *)v16 + 13) = 0LL;
    *((_QWORD *)v16 + 14) = 0LL;
    v16[32] = 0;
  }
  else
  {
    v16 = 0LL;
  }
  v39 = v16;
  if ( !v16 )
    v12 = -2147024882;
  if ( v12 < 0 )
    goto LABEL_50;
  *v16 = *((_DWORD *)this + 162);
  DynArrayImpl<0>::AddMultipleAndSet((__int64)(v39 + 2), 0xCu, *((_DWORD *)this + 170), *((_QWORD *)this + 82));
  DynArrayImpl<0>::AddMultipleAndSet((__int64)(v39 + 10), 0xCu, *((_DWORD *)this + 178), *((_QWORD *)this + 86));
  DynArrayImpl<0>::AddMultipleAndSet((__int64)(v39 + 18), 0xCu, *((_DWORD *)this + 186), *((_QWORD *)this + 90));
  DynArrayImpl<0>::AddMultipleAndSet((__int64)(v39 + 26), 0xCu, *((_DWORD *)this + 194), *((_QWORD *)this + 94));
  anonymous_namespace_::GetTemporaryConfigWithMask((__int64)this + 1308, &v41, &v40);
  v17 = v40;
  if ( !v40 )
    goto LABEL_41;
  v16 = v39;
  if ( !v39[24] )
  {
    v44 = 1;
    v45 = -1;
    v46 = 0;
    v16 = v39;
    v12 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)(v39 + 18), &v44, 1u);
  }
  if ( v12 >= 0 )
  {
    if ( !v16[32] )
    {
      v44 = 1;
      v45 = -1;
      v46 = 0;
      v18 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)(v16 + 26), &v44, 1u);
      v16 = v39;
      v12 = v18;
    }
    if ( v12 >= 0 )
    {
      if ( !v16[16] )
      {
        v44 = 1;
        v45 = -1;
        v46 = 0;
        v19 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)(v16 + 10), &v44, 1u);
        v16 = v39;
        v12 = v19;
      }
      if ( v12 >= 0 )
      {
        if ( !v16[8] )
        {
          v44 = 1;
          v45 = -1;
          v46 = 0;
          v20 = DynArray<DwmMousewheelInteractionConfigurationPrimitive,0>::AddMultipleAndSet(
                  (__int64)(v16 + 2),
                  &v44,
                  1u);
          v16 = v39;
          v12 = v20;
        }
        if ( v12 >= 0 )
        {
          v21 = 0;
          v22 = v41;
          if ( v16[24] )
          {
            v23 = v41 & v17;
            do
            {
              v24 = v21++;
              *(_DWORD *)(*((_QWORD *)v16 + 9) + 12 * v24 + 8) = v23 | ~v17 & *(_DWORD *)(*((_QWORD *)v16 + 9)
                                                                                        + 12 * v24
                                                                                        + 8);
              v16 = v39;
            }
            while ( v21 < v39[24] );
          }
          v25 = 0;
          if ( v16[32] )
          {
            do
            {
              v26 = v25++;
              *(_DWORD *)(*((_QWORD *)v16 + 13) + 12 * v26 + 8) = v22 & v17 | ~v17 & *(_DWORD *)(*((_QWORD *)v16 + 13)
                                                                                               + 12 * v26
                                                                                               + 8);
              v16 = v39;
            }
            while ( v25 < v39[32] );
          }
          v27 = 0;
          if ( v16[16] )
          {
            do
            {
              v28 = v27++;
              *(_DWORD *)(*((_QWORD *)v16 + 5) + 12 * v28 + 8) = v22 & v17 | ~v17 & *(_DWORD *)(*((_QWORD *)v16 + 5)
                                                                                              + 12 * v28
                                                                                              + 8);
              v16 = v39;
            }
            while ( v27 < v39[16] );
          }
          v29 = 0;
          if ( v16[8] )
          {
            v30 = v17;
            v31 = v22 & v17;
            v32 = ~v30;
            do
            {
              v33 = v29++;
              *(_DWORD *)(*((_QWORD *)v16 + 1) + 12 * v33 + 8) = v31 | *(_DWORD *)(*((_QWORD *)v16 + 1) + 12 * v33 + 8) & v32;
              v16 = v39;
            }
            while ( v29 < v39[8] );
          }
LABEL_41:
          v34 = v42;
          v35 = *(_DWORD *)(v42 + 24);
          v36 = v35 + 1;
          v12 = v35 + 1 < v35 ? 0x80070216 : 0;
          if ( v35 + 1 < v35 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB5u);
          }
          else if ( v36 > *(_DWORD *)(v42 + 20) )
          {
            v37 = DynArrayImpl<0>::AddMultipleAndSet(v42, 8u, 1, &v39);
            v12 = v37;
            if ( v37 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)v42 + 8LL * v35) = v39;
            *(_DWORD *)(v34 + 24) = v36;
          }
          if ( v12 >= 0 )
          {
            ++*v43;
            return (unsigned int)v12;
          }
          v16 = v39;
        }
      }
    }
  }
LABEL_50:
  if ( v16 )
    InteractionConfigurationGroup::`scalar deleting destructor'((InteractionConfigurationGroup *)v16);
  return (unsigned int)v12;
}
