/*
 * XREFs of ?SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01433B0
 * Callers:
 *     ?SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0143220 (-SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C013FCEC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetReferenceArrayProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  signed int v10; // edi
  unsigned int v11; // ebp

  v6 = 0;
  *a6 = 0;
  v10 = a4 == 0LL ? 0xC000000D : 0;
  v11 = 0;
  if ( a4 )
  {
    do
    {
      if ( v11 >= a5 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v11] + 120LL))(
              a4[v11],
              10LL) )
        v10 = -1073741811;
      ++v11;
    }
    while ( v10 >= 0 );
  }
  if ( v10 >= 0 )
  {
    if ( a3 == 9 )
    {
      if ( *((_QWORD *)this + 11) || *((_DWORD *)this + 25) )
        v10 = -1073741811;
      if ( v10 >= 0 )
      {
        *((_DWORD *)this + 25) = a5;
        *((_QWORD *)this + 11) = a4;
        *a6 = 1;
        *((_DWORD *)this + 4) &= ~0x400u;
        if ( *((_DWORD *)this + 25) )
        {
          do
            DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 11) + 8LL * v6++));
          while ( v6 < *((_DWORD *)this + 25) );
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v10;
}
