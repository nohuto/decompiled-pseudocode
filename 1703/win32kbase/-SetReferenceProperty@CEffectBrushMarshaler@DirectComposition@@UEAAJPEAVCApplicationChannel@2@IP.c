/*
 * XREFs of ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0002670
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01407EC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CEffectBrushMarshaler::SetReferenceProperty(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // esi
  struct DirectComposition::CResourceMarshaler **v10; // r14
  __int64 v11; // rdx
  int v12; // ebp
  __int64 v14; // rax
  unsigned __int64 v15; // kr00_8
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  struct DirectComposition::CResourceMarshaler *v18; // rdx
  DirectComposition::CResourceMarshaler *v19; // rcx

  v5 = 0;
  *a5 = 0;
  if ( (a3 & 0xC0000000) != 0x80000000 )
  {
    if ( a3 )
    {
      if ( a3 != 1 )
        return (unsigned int)-1073741811;
      v11 = 119LL;
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 48);
      v12 = 64;
    }
    else
    {
      v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 40);
      v11 = 124LL;
      v12 = 32;
    }
    if ( v10
      && (!a4
       || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
            a4,
            v11)) )
    {
      if ( *v10 != a4 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, *v10);
        *v10 = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= v12;
LABEL_11:
        *a5 = 1;
        return (unsigned int)v5;
      }
      return (unsigned int)v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          84LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          82LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          83LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          88LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          87LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          89LL) )
  {
    return (unsigned int)-1073741811;
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v14 = *((_QWORD *)this + 5);
    if ( v14 )
    {
      v15 = *(unsigned int *)(v14 + 64);
      if ( is_mul_ok(v15, 8uLL) )
      {
        v16 = Win32AllocPoolWithQuotaZInit(8 * v15);
        *((_QWORD *)this + 7) = v16;
        if ( v16 )
          *((_DWORD *)this + 16) = *(_DWORD *)(*((_QWORD *)this + 5) + 64LL);
        else
          v5 = -1073741801;
      }
      else
      {
        v5 = -1073741675;
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  v17 = a3 & 0x3FFFFFFF;
  if ( v5 >= 0 )
  {
    if ( v17 >= *((unsigned int *)this + 16) )
      v5 = -1073741811;
    if ( v5 >= 0 )
    {
      v18 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 7) + 8 * v17);
      if ( v18 )
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v18);
      *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v17) = a4;
      v19 = *(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 7) + 8 * v17);
      if ( v19 )
        DirectComposition::CResourceMarshaler::AddRef(v19);
      *((_DWORD *)this + 17) = 0;
      goto LABEL_11;
    }
  }
  return (unsigned int)v5;
}
