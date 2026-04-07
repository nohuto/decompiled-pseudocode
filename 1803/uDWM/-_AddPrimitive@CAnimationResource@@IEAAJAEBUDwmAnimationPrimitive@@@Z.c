/*
 * XREFs of ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x1800A7388
 * Callers:
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800A6F00 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x1800A6FB0 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800A7050 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x1800A7130 (-End@CAnimationResource@@UEAAJNM@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimationResource::_AddPrimitive(CAnimationResource *this, const struct DwmAnimationPrimitive *a2)
{
  int v2; // ebp
  unsigned int v3; // ebx
  bool v6; // r14
  char *v8; // r10
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // esi
  _OWORD *v14; // rax
  int v15; // eax

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
  v8 = (char *)this + 40;
  if ( v6 )
  {
    v9 = *(_QWORD *)v8;
    v10 = 32LL * (unsigned int)(v2 - 1);
    *(_OWORD *)(v10 + v9) = *(_OWORD *)a2;
    *(_OWORD *)(v10 + v9 + 16) = *((_OWORD *)a2 + 1);
  }
  else
  {
    v11 = *((unsigned int *)this + 16);
    v12 = v11 + 1;
    v13 = (int)v11 + 1 < (unsigned int)v11 ? 0x80070216 : 0;
    if ( (int)v11 + 1 >= (unsigned int)v11 )
    {
      if ( v12 > *((_DWORD *)v8 + 5) )
      {
        v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v8, 32, 1, a2);
        v13 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0xC0u);
      }
      else
      {
        v14 = (_OWORD *)(*(_QWORD *)v8 + 32 * v11);
        *v14 = *(_OWORD *)a2;
        v14[1] = *((_OWORD *)a2 + 1);
        *((_DWORD *)v8 + 6) = v12;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xB5u);
    }
    return v13;
  }
  return v3;
}
