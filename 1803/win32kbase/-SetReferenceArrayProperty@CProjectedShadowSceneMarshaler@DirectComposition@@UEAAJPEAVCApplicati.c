/*
 * XREFs of ?SetReferenceArrayProperty@CProjectedShadowSceneMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0151BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C000C6E0 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C0145F48 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetReferenceArrayProperty(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v8; // rcx
  int v11; // edi
  unsigned int v12; // esi
  struct DirectComposition::CResourceMarshaler *v13; // rcx
  struct DirectComposition::CResourceMarshaler *v14; // rcx
  struct DirectComposition::CResourceMarshaler **v15; // r8
  DirectComposition::CPrimitiveGroupMarshaler *v16; // rcx
  unsigned int *v17; // rsi

  v6 = 0;
  v8 = a5;
  v11 = 0;
  *a6 = 0;
  if ( (a3 & 0xFFFFFFFD) != 0 || a5 && !a4 )
    v11 = -1073741811;
  v12 = 0;
  if ( a3 )
  {
    if ( v11 < 0 )
      return (unsigned int)v11;
    do
    {
      if ( v12 >= v8 )
        break;
      v14 = a4[v12];
      if ( !v14
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v14 + 120LL))(
              v14,
              110LL) )
      {
        v11 = -1073741811;
      }
      v8 = a5;
      ++v12;
    }
    while ( v11 >= 0 );
  }
  else
  {
    if ( v11 < 0 )
      return (unsigned int)v11;
    do
    {
      if ( v12 >= v8 )
        break;
      v13 = a4[v12];
      if ( !v13
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v13 + 120LL))(
              v13,
              109LL) )
      {
        v11 = -1073741811;
      }
      v8 = a5;
      ++v12;
    }
    while ( v11 >= 0 );
  }
  if ( v11 >= 0 )
  {
    if ( a3 )
      v15 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 9);
    else
      v15 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 7);
    v16 = a3 != 0 ? (DirectComposition::CPrimitiveGroupMarshaler *)0x10 : 0LL;
    v17 = (unsigned int *)((char *)this + (_QWORD)v16 + 64);
    if ( v15 )
    {
      DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
        v16,
        a2,
        v15,
        (unsigned int *)((char *)this + (_QWORD)v16 + 64));
      *((_DWORD *)this + 4) |= a3 != 0 ? 512 : 128;
    }
    *(_QWORD *)((char *)this + (a3 != 0 ? 0x10 : 0) + 56) = a4;
    *v17 = a5;
    *(_DWORD *)((char *)this + (a3 != 0 ? 0x10 : 0) + 68) = 0;
    *a6 = 1;
    if ( *v17 )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(a4[v6++]);
      while ( v6 < *v17 );
    }
  }
  return (unsigned int)v11;
}
