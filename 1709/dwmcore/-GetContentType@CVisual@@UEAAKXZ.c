/*
 * XREFs of ?GetContentType@CVisual@@UEAAKXZ @ 0x18016FC40
 * Callers:
 *     ?GetContentType@CWindowNode@@UEAAKXZ @ 0x180178B40 (-GetContentType@CWindowNode@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetContentType(CVisual *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 30);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, 98LL) )
    {
      return 4;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
                *((_QWORD *)this + 30),
                35LL) )
    {
      return 2;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
                *((_QWORD *)this + 30),
                69LL) )
    {
      return 3;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
                *((_QWORD *)this + 30),
                107LL) )
    {
      return 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
                *((_QWORD *)this + 30),
                140LL) )
    {
      return 5;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
                *((_QWORD *)this + 30),
                121LL) )
    {
      return 6;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
                *((_QWORD *)this + 30),
                38LL) )
    {
      return 7;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
                *((_QWORD *)this + 30),
                75LL) )
    {
      return 8;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
                *((_QWORD *)this + 30),
                54LL) )
    {
      return 9;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 30) + 48LL))(
                *((_QWORD *)this + 30),
                95LL) )
    {
      return 10;
    }
  }
  return v2;
}
