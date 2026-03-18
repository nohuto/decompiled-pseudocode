/*
 * XREFs of ?GetDestLightsArray@CLightStack@@AEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCCompositionLight@@$02$0A@@@PEA_N@Z @ 0x18011D310
 * Callers:
 *     ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x18014A398 (-GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::GetDestLightsArray(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // rdi
  __int64 v9; // rbx
  unsigned int v11; // r8d
  unsigned int v12; // ebp
  __int64 v13; // rsi
  unsigned int v14; // r14d
  __int64 v15; // r9
  unsigned int v16; // r12d
  char v17; // r10
  __int64 v18; // rcx
  unsigned int i; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // eax
  signed int v23; // ebx
  signed int v24; // eax
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF
  __int64 v27; // [rsp+78h] [rbp+10h]
  unsigned int v28; // [rsp+88h] [rbp+20h]

  LOBYTE(v28) = a4;
  v27 = a2;
  v7 = a7;
  v9 = a2;
  if ( a7 )
    *a7 = 1;
  v11 = *((_DWORD *)a1 + 6);
  v12 = 0;
  v13 = a6;
  if ( v11 )
  {
    v14 = v28;
    while ( 1 )
    {
      v15 = *a1;
      v16 = v14;
      v17 = 1;
      if ( *(_DWORD *)(*a1 + 16LL * v12 + 8) != 1 )
        break;
LABEL_38:
      v11 = *((_DWORD *)a1 + 6);
      if ( ++v12 >= v11 )
        goto LABEL_39;
    }
    v18 = 0LL;
    if ( *(_DWORD *)(v13 + 24) )
    {
      while ( *(_QWORD *)(*(_QWORD *)v13 + 8 * v18) != *(_QWORD *)(v15 + 16LL * v12) )
      {
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= *(_DWORD *)(v13 + 24) )
          goto LABEL_11;
      }
      v17 = 0;
LABEL_11:
      v9 = v27;
    }
    for ( i = v12 + 1; i < v11; ++i )
    {
      if ( *(_DWORD *)(v15 + 16LL * i + 8) == 1 && *(_QWORD *)(v15 + 16LL * v12) == *(_QWORD *)(v15 + 16LL * i) )
      {
        v17 = 0;
        break;
      }
    }
    if ( !v17 )
    {
LABEL_37:
      v9 = v27;
      goto LABEL_38;
    }
    v20 = *(_QWORD *)(v15 + 16LL * v12);
    v26 = v20;
    if ( !a5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 26LL) )
      {
LABEL_35:
        if ( v7 )
          *v7 = 0;
        goto LABEL_37;
      }
      v20 = v26;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 200LL))(v20)
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v26 + 192LL))(v26, a3, v9) )
    {
      v21 = *(unsigned int *)(v13 + 24);
      v22 = v21 + 1;
      v14 = v21 + 1;
      if ( (int)v21 + 1 < (unsigned int)v21 )
        v14 = v16;
      v23 = v22 < (unsigned int)v21 ? 0x80070216 : 0;
      if ( v22 < (unsigned int)v21 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0xB5u);
      }
      else if ( v14 > *(_DWORD *)(v13 + 20) )
      {
        v24 = DynArrayImpl<0>::AddMultipleAndSet(v13, 8u, 1, &v26);
        v23 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v13 + 8 * v21) = v26;
        *(_DWORD *)(v13 + 24) = v14;
      }
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x11Bu);
        return (unsigned int)v23;
      }
      goto LABEL_37;
    }
    goto LABEL_35;
  }
LABEL_39:
  if ( *(_DWORD *)(v13 + 24) && v7 )
    *v7 = 1;
  return 0;
}
