/*
 * XREFs of ?SetReferenceArrayProperty@CGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00DB4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0002A68 (-ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C013FCEC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CGradientBrushMarshaler::SetReferenceArrayProperty(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v10; // edi
  unsigned int v11; // r12d

  v6 = 0;
  v10 = 0;
  *a6 = 0;
  if ( a5 && !a4 )
    v10 = -1073741811;
  v11 = 0;
  if ( v10 >= 0 )
  {
    do
    {
      if ( v11 >= a5 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v11] + 120LL))(
              a4[v11],
              17LL) )
        v10 = -1073741811;
      ++v11;
    }
    while ( v10 >= 0 );
    if ( v10 >= 0 )
    {
      if ( a3 == 1 )
      {
        DirectComposition::CGradientBrushMarshaler::ClearStops(this, a2);
        *((_DWORD *)this + 16) = a5;
        *((_QWORD *)this + 7) = a4;
        *((_DWORD *)this + 17) = 0;
        *a6 = 1;
        *((_DWORD *)this + 4) |= 0x80u;
        if ( *((_DWORD *)this + 16) )
        {
          do
            DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 7) + 8LL * v6++));
          while ( v6 < *((_DWORD *)this + 16) );
        }
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  return (unsigned int)v10;
}
