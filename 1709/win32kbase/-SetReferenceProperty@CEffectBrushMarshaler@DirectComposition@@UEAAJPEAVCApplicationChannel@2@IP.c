/*
 * XREFs of ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0080B90
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C013FCEC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CEffectBrushMarshaler::SetReferenceProperty(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // edi
  __int64 v10; // rdx
  int v11; // ebp
  __int64 v12; // rax
  struct DirectComposition::CResourceMarshaler **v13; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // kr00_8
  void *v17; // rax
  unsigned __int64 v18; // r14
  struct DirectComposition::CResourceMarshaler *v19; // rdx
  DirectComposition::CResourceMarshaler *v20; // rcx

  v5 = 0;
  *a5 = 0;
  if ( (a3 & 0xC0000000) != 0x80000000 )
  {
    if ( a3 )
    {
      if ( a3 != 1 )
        return (unsigned int)-1073741811;
      v10 = 100LL;
      v11 = 64;
      v12 = 48LL;
    }
    else
    {
      v10 = 22LL;
      v11 = 32;
      v12 = 40LL;
    }
    v13 = (struct DirectComposition::CResourceMarshaler **)((char *)this + v12);
    if ( (DirectComposition::CEffectBrushMarshaler *)((char *)this + v12)
      && (!a4
       || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
            a4,
            v10)) )
    {
      if ( *v13 != a4 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, *v13);
        *v13 = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) |= v11;
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
          124LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          16LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          8LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          93LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          81LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 120LL))(
          a4,
          138LL) )
  {
    return (unsigned int)-1073741811;
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v15 = *((_QWORD *)this + 5);
    if ( v15 )
    {
      v16 = *(unsigned int *)(v15 + 64);
      if ( is_mul_ok(v16, 8uLL) )
      {
        v17 = Win32AllocPoolWithQuotaZInit(8 * v16, 0x69664344u);
        *((_QWORD *)this + 7) = v17;
        if ( v17 )
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
  v18 = a3 & 0x3FFFFFFF;
  if ( v5 >= 0 )
  {
    if ( v18 >= *((unsigned int *)this + 16) )
      v5 = -1073741811;
    if ( v5 >= 0 )
    {
      v19 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 7) + 8 * v18);
      if ( v19 )
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v19);
      *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v18) = a4;
      v20 = *(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 7) + 8 * v18);
      if ( v20 )
        DirectComposition::CResourceMarshaler::AddRef(v20);
      *((_DWORD *)this + 17) = 0;
      goto LABEL_11;
    }
  }
  return (unsigned int)v5;
}
