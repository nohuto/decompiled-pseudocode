/*
 * XREFs of ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x1800A75FC
 * Callers:
 *     ?AddBinding@CAnimationResource@@QEAAJIW4Enum@DwmResourceProperty@@@Z @ 0x1800A6E44 (-AddBinding@CAnimationResource@@QEAAJIW4Enum@DwmResourceProperty@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationResource::_EnsureResources(CAnimationResource *this)
{
  int v1; // ebx
  CBaseObject **v2; // rsi
  unsigned int v4; // eax
  __int64 v5; // r8

  v1 = 0;
  v2 = (CBaseObject **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) )
    return (unsigned int)v1;
  v1 = CResource::Create(0, *((_QWORD *)this + 1), (CBaseObject **)this + 2);
  if ( v1 < 0 )
  {
    v4 = 310;
    goto LABEL_15;
  }
  if ( *((_BYTE *)this + 81) )
  {
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 864LL))(
           *((_QWORD *)*v2 + 2),
           *((unsigned int *)*v2 + 6),
           *((_QWORD *)this + 9),
           0LL);
    if ( v1 < 0 )
    {
      v4 = 317;
      goto LABEL_15;
    }
LABEL_10:
    if ( *((_QWORD *)this + 4)
      && (v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 880LL))(
                 *((_QWORD *)*v2 + 2),
                 *((unsigned int *)*v2 + 6)),
          v1 < 0) )
    {
      v4 = 330;
    }
    else
    {
      v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 872LL))(
             *((_QWORD *)*v2 + 2),
             *((unsigned int *)*v2 + 6),
             *((_QWORD *)this + 5),
             *((unsigned int *)this + 16));
      if ( v1 >= 0 )
        return (unsigned int)v1;
      v4 = 337;
    }
    goto LABEL_15;
  }
  v5 = *((_QWORD *)this + 12);
  if ( !v5 )
    goto LABEL_10;
  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 888LL))(
         *((_QWORD *)*v2 + 2),
         *((unsigned int *)*v2 + 6),
         *(unsigned int *)(v5 + 24));
  if ( v1 >= 0 )
    goto LABEL_10;
  v4 = 323;
LABEL_15:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, v4);
  if ( *v2 )
  {
    CBaseObject::Release(*v2);
    *v2 = 0LL;
  }
  return (unsigned int)v1;
}
