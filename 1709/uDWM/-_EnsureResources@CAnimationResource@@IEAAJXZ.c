/*
 * XREFs of ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x18009F0A8
 * Callers:
 *     ?AddBinding@CAnimationResource@@QEAAJIW4Enum@DwmResourceProperty@@@Z @ 0x18009E8E4 (-AddBinding@CAnimationResource@@QEAAJIW4Enum@DwmResourceProperty@@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationResource::_EnsureResources(CAnimationResource *this)
{
  unsigned int v1; // ebx
  CBaseObject **v2; // rsi
  int v4; // eax
  int v5; // eax
  __int64 v6; // r8
  int v7; // eax
  int v8; // eax
  int v9; // eax

  v1 = 0;
  v2 = (CBaseObject **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) )
    return v1;
  v4 = CResource::Create(0, *((_QWORD *)this + 1), (CBaseObject **)this + 2);
  v1 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x136u);
    goto LABEL_15;
  }
  if ( *((_BYTE *)this + 81) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 848LL))(
           *((_QWORD *)*v2 + 2),
           *((unsigned int *)*v2 + 6),
           *((_QWORD *)this + 9),
           0LL);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x13Du);
      goto LABEL_15;
    }
LABEL_10:
    if ( *((_QWORD *)this + 4)
      && (v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 864LL))(
                 *((_QWORD *)*v2 + 2),
                 *((unsigned int *)*v2 + 6)),
          v1 = v8,
          v8 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x14Au);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 856LL))(
             *((_QWORD *)*v2 + 2),
             *((unsigned int *)*v2 + 6),
             *((_QWORD *)this + 5),
             *((unsigned int *)this + 16));
      v1 = v9;
      if ( v9 >= 0 )
        return v1;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x151u);
    }
    goto LABEL_15;
  }
  v6 = *((_QWORD *)this + 12);
  if ( !v6 )
    goto LABEL_10;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 872LL))(
         *((_QWORD *)*v2 + 2),
         *((unsigned int *)*v2 + 6),
         *(unsigned int *)(v6 + 24));
  v1 = v7;
  if ( v7 >= 0 )
    goto LABEL_10;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x143u);
LABEL_15:
  if ( *v2 )
  {
    CBaseObject::Release(*v2);
    *v2 = 0LL;
  }
  return v1;
}
