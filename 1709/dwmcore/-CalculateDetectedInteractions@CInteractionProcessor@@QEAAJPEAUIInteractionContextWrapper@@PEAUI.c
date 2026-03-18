/*
 * XREFs of ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x180199F6C
 * Callers:
 *     ?CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x180169230 (-CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractio.c)
 *     ?CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801A15C0 (-CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUIntera.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800921F0 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenInteractionConfigurationPrimitive@@I@Z @ 0x1800BBFB0 (-AddMultipleAndSet@-$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenIn.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x180198F14 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x180199E84 (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180199EA4 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
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
  signed int v12; // esi
  int v13; // eax
  int v14; // eax
  void *v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // ebx
  signed int v18; // eax
  unsigned int v19; // r8d
  int v20; // r10d
  __int64 v21; // rax
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  int v24; // ebx
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // edx
  unsigned int v29; // eax
  signed int v30; // eax
  __int64 v32; // [rsp+40h] [rbp-38h] BYREF
  int v33; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v34; // [rsp+4Ch] [rbp-2Ch] BYREF
  _DWORD *v35; // [rsp+50h] [rbp-28h]
  int v36; // [rsp+58h] [rbp-20h] BYREF
  int v37; // [rsp+5Ch] [rbp-1Ch]
  int v38; // [rsp+60h] [rbp-18h]

  *a4 = 0;
  *a6 = 0;
  v12 = 0;
  *a8 = 0;
  v35 = a8;
  v13 = *((_DWORD *)this + 149);
  v32 = a5;
  if ( v13 == 1 )
  {
    v14 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this,
            a2,
            a3,
            a4,
            a5,
            a6);
  }
  else if ( v13 == 2 )
  {
    v14 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this + 160,
            a2,
            a3,
            a4,
            a5,
            a6);
  }
  else
  {
    if ( v13 != 3 || !CInteractionProcessor::AllowPenGestureDetection(this) )
      goto LABEL_9;
    v14 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this + 320,
            a2,
            a3,
            a4,
            v32,
            a6);
  }
  v12 = v14;
  if ( v14 < 0 )
    return (unsigned int)v12;
LABEL_9:
  if ( (*((_BYTE *)this + 1064) & 3) == 0 )
    return (unsigned int)v12;
  v15 = operator new(0x68uLL);
  v16 = (__int64)v15;
  if ( v15 )
  {
    memset_0(v15, 0, 0x68uLL);
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 8) = 0LL;
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_DWORD *)(v16 + 32) = 0;
    *(_QWORD *)(v16 + 56) = 0LL;
    *(_QWORD *)(v16 + 40) = 0LL;
    *(_QWORD *)(v16 + 48) = 0LL;
    *(_DWORD *)(v16 + 64) = 0;
    *(_QWORD *)(v16 + 88) = 0LL;
    *(_QWORD *)(v16 + 72) = 0LL;
    *(_QWORD *)(v16 + 80) = 0LL;
    *(_DWORD *)(v16 + 96) = 0;
    v32 = v16;
  }
  else
  {
    v16 = 0LL;
    v32 = 0LL;
  }
  if ( !v16 )
    v12 = -2147024882;
  if ( v12 < 0 )
    goto LABEL_40;
  *(_DWORD *)v16 = *((_DWORD *)this + 122);
  DynArrayImpl<0>::AddMultipleAndSet(v32 + 8, 0xCu, *((_DWORD *)this + 130), *((_QWORD *)this + 62));
  DynArrayImpl<0>::AddMultipleAndSet(v32 + 40, 0xCu, *((_DWORD *)this + 138), *((_QWORD *)this + 66));
  DynArrayImpl<0>::AddMultipleAndSet(v32 + 72, 0xCu, *((_DWORD *)this + 146), *((_QWORD *)this + 70));
  anonymous_namespace_::GetTemporaryConfigWithMask((__int64)this + 1108, &v33, &v34);
  v17 = v34;
  if ( !v34 )
    goto LABEL_29;
  v16 = v32;
  if ( !*(_DWORD *)(v32 + 64) )
  {
    v36 = 1;
    v37 = -1;
    v38 = 0;
    v16 = v32;
    v12 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet(v32 + 40, &v36, 1u);
  }
  if ( v12 >= 0 )
  {
    if ( !*(_DWORD *)(v16 + 96) )
    {
      v36 = 1;
      v37 = -1;
      v38 = 0;
      v18 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet(v16 + 72, &v36, 1u);
      v16 = v32;
      v12 = v18;
    }
    if ( v12 >= 0 )
    {
      v19 = 0;
      if ( *(_DWORD *)(v16 + 64) )
      {
        v20 = v33 & v17;
        do
        {
          v21 = v19++;
          *(_DWORD *)(*(_QWORD *)(v16 + 40) + 12 * v21 + 8) = v20 | *(_DWORD *)(*(_QWORD *)(v16 + 40) + 12 * v21 + 8) & ~v17;
          v16 = v32;
        }
        while ( v19 < *(_DWORD *)(v32 + 64) );
      }
      v22 = 0;
      if ( *(_DWORD *)(v16 + 96) )
      {
        v23 = v17;
        v24 = v33 & v17;
        v25 = ~v23;
        do
        {
          v26 = v22++;
          *(_DWORD *)(*(_QWORD *)(v16 + 72) + 12 * v26 + 8) = v24 | *(_DWORD *)(*(_QWORD *)(v16 + 72) + 12 * v26 + 8) & v25;
          v16 = v32;
        }
        while ( v22 < *(_DWORD *)(v32 + 96) );
      }
LABEL_29:
      v27 = *(unsigned int *)(a7 + 24);
      v28 = v34;
      v29 = v27 + 1;
      if ( (int)v27 + 1 >= (unsigned int)v27 )
        v28 = v27 + 1;
      v12 = v29 < (unsigned int)v27 ? 0x80070216 : 0;
      if ( v29 < (unsigned int)v27 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xB5u);
      }
      else if ( v28 > *(_DWORD *)(a7 + 20) )
      {
        v30 = DynArrayImpl<0>::AddMultipleAndSet(a7, 8u, 1, &v32);
        v12 = v30;
        if ( v30 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v30, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)a7 + 8 * v27) = v32;
        *(_DWORD *)(a7 + 24) = v28;
      }
      if ( v12 >= 0 )
      {
        ++*v35;
        return (unsigned int)v12;
      }
      v16 = v32;
    }
  }
LABEL_40:
  if ( v16 )
    InteractionConfigurationGroup::`scalar deleting destructor'((void **)v16);
  return (unsigned int)v12;
}
