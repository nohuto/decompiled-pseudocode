/*
 * XREFs of ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18018CB48
 * Callers:
 *     ?CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801667F0 (-CalculateDetectedInteractions@CInteraction@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractio.c)
 *     ?CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801929E0 (-CalculateDetectedInteractions@CInteractionRoot@@UEAAJPEAUIInteractionContextWrapper@@PEAUIntera.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800205EC (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchInteractionConfigurationPrimitive@@I@Z @ 0x1800B35FC (-AddMultipleAndSet@-$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTou.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18018BAB4 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x18018CA00 (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _DWORD *a8)
{
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // rax
  _DWORD *v13; // rdi
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // r8d
  int v17; // r10d
  __int64 v18; // rax
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  int v21; // ebx
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // eax
  int v27; // eax
  _DWORD *v29; // [rsp+40h] [rbp-38h] BYREF
  int v30; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v31; // [rsp+4Ch] [rbp-2Ch] BYREF
  int v32; // [rsp+50h] [rbp-28h] BYREF
  int v33; // [rsp+54h] [rbp-24h]
  int v34; // [rsp+58h] [rbp-20h]

  *a4 = 0;
  *a6 = 0;
  v9 = 0;
  *a8 = 0;
  v10 = *(_DWORD *)(a1 + 404);
  if ( v10 == 1 )
  {
    v11 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            a1,
            (char *)a1,
            a2,
            a3,
            a4,
            a5,
            a6);
  }
  else
  {
    if ( v10 != 2 )
      goto LABEL_6;
    v11 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            a1,
            (char *)(a1 + 160),
            a2,
            a3,
            a4,
            a5,
            a6);
  }
  v9 = v11;
  if ( v11 < 0 )
    return (unsigned int)v9;
LABEL_6:
  if ( (*(_BYTE *)(a1 + 872) & 3) == 0 )
    return (unsigned int)v9;
  v12 = operator new(0x48uLL);
  v13 = v12;
  if ( v12 )
  {
    memset_0(v12, 0, 0x48uLL);
    *((_QWORD *)v13 + 1) = 0LL;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = 0LL;
    v13[8] = 0;
    *((_QWORD *)v13 + 5) = 0LL;
    *((_QWORD *)v13 + 6) = 0LL;
    *((_QWORD *)v13 + 7) = 0LL;
    v13[16] = 0;
    v29 = v13;
  }
  else
  {
    v13 = 0LL;
    v29 = 0LL;
  }
  if ( !v13 )
    v9 = -2147024882;
  if ( v9 < 0 )
    goto LABEL_37;
  *v13 = *(_DWORD *)(a1 + 328);
  v29[1] = *(_DWORD *)(a1 + 332);
  DynArrayImpl<0>::AddMultipleAndSet((__int64)(v29 + 2), 0xCu, *(_DWORD *)(a1 + 360), *(_QWORD *)(a1 + 336));
  DynArrayImpl<0>::AddMultipleAndSet((__int64)(v29 + 10), 0xCu, *(_DWORD *)(a1 + 392), *(_QWORD *)(a1 + 368));
  anonymous_namespace_::GetTemporaryConfigWithMask(a1 + 916, &v30, &v31);
  v14 = v31;
  if ( !v31 )
    goto LABEL_26;
  v13 = v29;
  if ( !v29[8] )
  {
    v33 = -1;
    v32 = 1;
    v34 = 0;
    v13 = v29;
    v9 = DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)(v29 + 2), &v32, 1u);
  }
  if ( v9 >= 0 )
  {
    if ( !v13[16] )
    {
      v33 = -1;
      v32 = 1;
      v34 = 0;
      v15 = DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)(v13 + 10), &v32, 1u);
      v13 = v29;
      v9 = v15;
    }
    if ( v9 >= 0 )
    {
      v16 = 0;
      if ( v13[8] )
      {
        v17 = v30 & v14;
        do
        {
          v18 = v16++;
          *(_DWORD *)(*((_QWORD *)v13 + 1) + 12 * v18 + 8) = v17 | *(_DWORD *)(*((_QWORD *)v13 + 1) + 12 * v18 + 8) & ~v14;
          v13 = v29;
        }
        while ( v16 < v29[8] );
      }
      v19 = 0;
      if ( v13[16] )
      {
        v20 = v14;
        v21 = v30 & v14;
        v22 = ~v20;
        do
        {
          v23 = v19++;
          *(_DWORD *)(*((_QWORD *)v13 + 5) + 12 * v23 + 8) = v21 | *(_DWORD *)(*((_QWORD *)v13 + 5) + 12 * v23 + 8) & v22;
          v13 = v29;
        }
        while ( v19 < v29[16] );
      }
LABEL_26:
      v24 = *(unsigned int *)(a7 + 24);
      v25 = v31;
      v26 = v24 + 1;
      if ( (int)v24 + 1 >= (unsigned int)v24 )
        v25 = v24 + 1;
      v9 = v26 < (unsigned int)v24 ? 0x80070216 : 0;
      if ( v26 < (unsigned int)v24 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB5u);
      }
      else if ( v25 > *(_DWORD *)(a7 + 20) )
      {
        v27 = DynArrayImpl<0>::AddMultipleAndSet(a7, 8u, 1, &v29);
        v9 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)a7 + 8 * v24) = v29;
        *(_DWORD *)(a7 + 24) = v25;
      }
      if ( v9 >= 0 )
      {
        ++*a8;
        return (unsigned int)v9;
      }
      v13 = v29;
    }
  }
LABEL_37:
  if ( v13 )
    InteractionConfigurationGroup::`scalar deleting destructor'((void **)v13);
  return (unsigned int)v9;
}
