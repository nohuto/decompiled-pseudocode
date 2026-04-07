/*
 * XREFs of ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x18000E538
 * Callers:
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x18000E6F0 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x18000E770 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x1800A07E0 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800A0880 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimationResource::_AddPrimitive(CAnimationResource *this, const struct DwmAnimationPrimitive *a2)
{
  int v2; // ebp
  unsigned int v3; // ebx
  bool v6; // r14
  unsigned int v7; // edx
  char *v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // eax
  unsigned int v11; // esi
  _OWORD *v12; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
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
    v15 = *((_QWORD *)this + 5);
    v16 = 32LL * (unsigned int)(v2 - 1);
    *(_OWORD *)(v16 + v15) = *(_OWORD *)a2;
    *(_OWORD *)(v16 + v15 + 16) = *((_OWORD *)a2 + 1);
  }
  else
  {
    v7 = v17;
    v8 = (char *)this + 40;
    v9 = *((_DWORD *)this + 16);
    v10 = v9 + 1;
    if ( v9 + 1 >= v9 )
      v7 = v9 + 1;
    v11 = v10 < v9 ? 0x80070216 : 0;
    if ( v10 < v9 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)v8 + 5) )
    {
      v14 = DynArrayImpl<0>::AddMultipleAndSet(v8, 32LL, 1LL, a2);
      v11 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
    }
    else
    {
      v12 = (_OWORD *)(*(_QWORD *)v8 + 32LL * v9);
      *v12 = *(_OWORD *)a2;
      v12[1] = *((_OWORD *)a2 + 1);
      *((_DWORD *)v8 + 6) = v7;
    }
    return v11;
  }
  return v3;
}
