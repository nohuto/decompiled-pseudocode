/*
 * XREFs of ?GetContentType@CVisual@@UEAAKXZ @ 0x18016F020
 * Callers:
 *     ?GetContentType@CWindowNode@@UEAAKXZ @ 0x1801A9A50 (-GetContentType@CWindowNode@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetContentType(CVisual *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 31);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 106LL) )
    {
      return 4;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
                *((_QWORD *)this + 31),
                37LL) )
    {
      return 2;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
                *((_QWORD *)this + 31),
                75LL) )
    {
      return 3;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
                *((_QWORD *)this + 31),
                119LL) )
    {
      return 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
                *((_QWORD *)this + 31),
                160LL) )
    {
      return 5;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
                *((_QWORD *)this + 31),
                134LL) )
    {
      return 6;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
                *((_QWORD *)this + 31),
                41LL) )
    {
      return 7;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
                *((_QWORD *)this + 31),
                81LL) )
    {
      return 8;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
                *((_QWORD *)this + 31),
                59LL) )
    {
      return 9;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 31) + 48LL))(
                *((_QWORD *)this + 31),
                103LL) )
    {
      return 10;
    }
  }
  return v2;
}
