/*
 * XREFs of ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x18009EE28
 * Callers:
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x18009E9A0 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x18009EA50 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x18009EAF0 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x18009EBD0 (-End@CAnimationResource@@UEAAJNM@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimationResource::_AddPrimitive(CAnimationResource *this, const struct DwmAnimationPrimitive *a2)
{
  int v2; // ebp
  unsigned int v3; // ebx
  bool v6; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edx
  char *v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // esi
  _OWORD *v15; // rax
  int v16; // eax
  unsigned int v17; // [rsp+50h] [rbp+8h]

  v2 = *((_DWORD *)this + 16);
  v3 = 0;
  v6 = 0;
  if ( *((_BYTE *)this + 80)
    || v2 && *((_QWORD *)a2 + 1) < *(_QWORD *)(32LL * (unsigned int)(v2 - 1) + *((_QWORD *)this + 5) + 8)
    || *(_DWORD *)a2 == 3 && (!v2 || *((_QWORD *)a2 + 1) == *(_QWORD *)(*((_QWORD *)this + 5) + 8LL)) )
  {
    return (unsigned int)-2147024809;
  }
  if ( v2 )
    v6 = *(_QWORD *)(32LL * (unsigned int)(v2 - 1) + *((_QWORD *)this + 5) + 8) == *((_QWORD *)a2 + 1);
  switch ( *(_DWORD *)a2 )
  {
    case 1:
    case 2:
      if ( !_finite(*((float *)a2 + 4))
        || !_finite(*((float *)a2 + 5))
        || !_finite(*((float *)a2 + 6))
        || !_finite(*((float *)a2 + 7)) )
      {
        return (unsigned int)-2147024809;
      }
      break;
    case 3:
      if ( *((_QWORD *)a2 + 2) > *((_QWORD *)a2 + 1) - *(_QWORD *)(*((_QWORD *)this + 5) + 8LL) )
        return (unsigned int)-2147024809;
      break;
    case 4:
      if ( _finite(*((float *)a2 + 4)) )
      {
        *((_BYTE *)this + 80) = 1;
        break;
      }
      return (unsigned int)-2147024809;
    default:
      return (unsigned int)-2147467259;
  }
  if ( v6 )
  {
    v8 = *((_QWORD *)this + 5);
    v9 = 32LL * (unsigned int)(v2 - 1);
    *(_OWORD *)(v9 + v8) = *(_OWORD *)a2;
    *(_OWORD *)(v9 + v8 + 16) = *((_OWORD *)a2 + 1);
  }
  else
  {
    v10 = v17;
    v11 = (char *)this + 40;
    v12 = *((unsigned int *)this + 16);
    v13 = v12 + 1;
    if ( (int)v12 + 1 >= (unsigned int)v12 )
      v10 = v12 + 1;
    v14 = v13 < (unsigned int)v12 ? 0x80070216 : 0;
    if ( v13 >= (unsigned int)v12 )
    {
      if ( v10 > *((_DWORD *)v11 + 5) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v11, 0x20u, 1, a2);
        v14 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC0u);
      }
      else
      {
        v15 = (_OWORD *)(*(_QWORD *)v11 + 32 * v12);
        *v15 = *(_OWORD *)a2;
        v15[1] = *((_OWORD *)a2 + 1);
        *((_DWORD *)v11 + 6) = v10;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB5u);
    }
    return v14;
  }
  return v3;
}
