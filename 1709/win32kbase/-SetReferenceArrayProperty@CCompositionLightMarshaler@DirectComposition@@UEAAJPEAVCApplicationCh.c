/*
 * XREFs of ?SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0002B70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C0027B5C (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C013FCEC (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionLightMarshaler::SetReferenceArrayProperty(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v9; // edi
  unsigned int v10; // ebp
  struct DirectComposition::CResourceMarshaler **v11; // r8
  int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned int *v15; // r14
  DirectComposition::CCompositionLightMarshaler *v17; // [rsp+60h] [rbp+8h]

  v17 = this;
  v6 = 0;
  v9 = 0;
  *a6 = 0;
  if ( a3 > 1 || a5 && !a4 )
    v9 = -1073741811;
  v10 = 0;
  if ( v9 >= 0 )
  {
    do
    {
      if ( v10 >= a5 )
        break;
      this = a4[v10];
      if ( !this
        || !(*(unsigned __int8 (__fastcall **)(DirectComposition::CCompositionLightMarshaler *, __int64))(*(_QWORD *)this + 120LL))(
              this,
              134LL) )
      {
        v9 = -1073741811;
      }
      ++v10;
    }
    while ( v9 >= 0 );
    if ( v9 >= 0 )
    {
      if ( a3 )
      {
        v11 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)v17 + 7);
        v12 = 64;
        v13 = 64LL;
        v14 = 68LL;
      }
      else
      {
        v11 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)v17 + 5);
        v12 = 32;
        v13 = 48LL;
        v14 = 52LL;
      }
      v15 = (unsigned int *)((char *)v17 + v13);
      if ( v11 )
      {
        DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
          this,
          a2,
          v11,
          (unsigned int *)((char *)v17 + v13));
        *((_DWORD *)v17 + 4) |= v12;
      }
      *(_QWORD *)((char *)v17 + (a3 != 0 ? 0x10 : 0) + 40) = a4;
      *v15 = a5;
      *(_DWORD *)((char *)v17 + v14) = 0;
      *a6 = 1;
      if ( *v15 )
      {
        do
          DirectComposition::CResourceMarshaler::AddRef(a4[v6++]);
        while ( v6 < *v15 );
      }
    }
  }
  return (unsigned int)v9;
}
